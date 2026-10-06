/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101172680; end: 1011726cb;  */

void FUN_101172680(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  FUN_101172584();
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 1011726cc; end: 1011726ef;  */

void FUN_1011726cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011726f0; end: 1011726fb;  */

void FUN_1011726f0(void)

{
  return;
}



/* Entry: 1011726fc; end: 10117271b;  */

void FUN_1011726fc(void)

{
  func_0x000107c61168(&PTR_PTR_112d61160);
  return;
}



/* Entry: 10117271c; end: 101172763; -[SCMemoriesAlbumFetchCacheManagingServicesEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117271c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d611c0;
  func_0x000107c61428(param_1 + _DAT_112d611c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101172764; end: 1011727bb; -[SCMemoriesAlbumFetchCacheManagingServicesEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101172764(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d611c0;
  func_0x000107c61428(param_1 + _DAT_112d611c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011727bc; end: 1011728c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011727bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = 0;
    FUN_1011726fc();
    func_0x000107c613fc();
    func_0x0001000285a8(0x112d61118,&UNK_10d927380);
    func_0x000107c613fc();
    pcVar4 = FUN_101172680;
    func_0x0001000bdd8c(FUN_101172680,0);
    uVar5 = 0;
    func_0x0001039ad900(0);
    func_0x000107c610f8();
    func_0x0001039ad7e4(pcVar4,uVar5);
    *(code **)(lVar3 + 0x10) = pcVar4;
    lVar1 = _DAT_112e139f8;
    func_0x000107c61428(lVar2 + _DAT_112e139f8,auStack_58,1,0);
    func_0x000107c61604(lVar2 + lVar1,pcVar4);
    func_0x000107c61170(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d611c8);
    *(long *)(unaff_x20 + _DAT_112d611c8) = lVar3;
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 1011728c4; end: 1011728eb; -[SCMemoriesAlbumFetchCacheManagingServicesEntryPoint begin] */

void FUN_1011728c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011727bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011728ec; end: 10117292f; -[SCMemoriesAlbumFetchCacheManagingServicesEntryPoint end] */

void FUN_1011728ec(undefined8 param_1)

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



/* Entry: 101172930; end: 101172a4f;  */

void FUN_101172930(long param_1,long param_2,long param_3)

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
                        "MemoriesAlbumFetchCacheManagingServiceProviderImpl/SCMemoriesAlbumFetchCacheManagingServicesEntryPoint.swift"
                        ,0x6c,2,0x24,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101172a50);
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



/* Entry: 101172a50; end: 101172afb; -[SCMemoriesAlbumFetchCacheManagingServicesEntryPoint setValue:forIvarName:] */

void FUN_101172a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101172930(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101172afc; end: 101172b5b; -[SCMemoriesAlbumFetchCacheManagingServicesEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101172afc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d611c0,0);
  *(undefined8 *)(param_1 + _DAT_112d611c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101172b5c; end: 101172b8f;  */

void FUN_101172b5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101172b90; end: 101172bc7; -[SCMemoriesAlbumFetchCacheManagingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101172b90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d611c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d611c8));
  return;
}



/* Entry: 101172bc8; end: 101172c2b;  */

void FUN_101172bc8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2428);
  return;
}



/* Entry: 101172c2c; end: 101172c8b; -[_TtC40MemoriesClusteringCameraRollObserverImpl36MemoriesClusteringCameraRollObserver init] */

void FUN_101172c2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesClusteringCameraRollObserverImpl.MemoriesClusteringCameraRollObserver"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101172c58);
  (*pcVar1)();
}



/* Entry: 101172c8c; end: 101172d67; -[_TtC40MemoriesClusteringCameraRollObserverImpl36MemoriesClusteringCameraRollObserver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101172d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101172d0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101172c8c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d61298);
  func_0x0001000834e4(param_1 + _DAT_112d612a0);
  func_0x0001000834e4(param_1 + _DAT_112d612a8);
  func_0x0001000834e4(param_1 + _DAT_112d612b0);
  func_0x0001000834e4(param_1 + _DAT_112d612b8);
  func_0x0001000834e4(param_1 + _DAT_112d612c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d612c8));
  return;
}



/* Entry: 101172d68; end: 101172d6f;  */

void FUN_101172d68(void)

{
  if (lRam0000000112d61318 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e624da4);
  return;
}



/* Entry: 101172d70; end: 101172da7;  */

void FUN_101172d70(undefined8 param_1)

{
  if (lRam0000000112d61318 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e624da4);
  return;
}



/* Entry: 101172da8; end: 101172e43;  */

void FUN_101172da8(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_78 = &UNK_10d9274f8;
  puStack_70 = &UNK_10d9274f8;
  puStack_68 = &UNK_10d9274f8;
  puStack_60 = &UNK_10d9274f8;
  puStack_58 = &UNK_10d9274f8;
  puStack_50 = &UNK_10d9274f8;
  puVar1 = PTR___sBoWV_11034d678 + 0x40;
  puStack_38 = &UNK_10d927510;
  lVar2 = 0x13f;
  puStack_48 = puVar1;
  puStack_40 = puVar1;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    func_0x000107c61630(param_1,0x100,0xb,&puStack_78,param_1 + 0x50);
  }
  return;
}



/* Entry: 101172e44; end: 101172f73;  */

long FUN_101172e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long unaff_x20;
  
  func_0x000107c61170(param_16);
  func_0x000107c613fc();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  return unaff_x20;
}



/* Entry: 101172f74; end: 101172f97;  */

void FUN_101172f74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101172f98; end: 101172fa3;  */

void FUN_101172f98(void)

{
  return;
}



/* Entry: 101172fa4; end: 101172fc3;  */

void FUN_101172fa4(void)

{
  func_0x000107c61168(&PTR_PTR_112d61368);
  return;
}



/* Entry: 101172fc4; end: 1011730cb;  */

void FUN_101172fc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011730cc; end: 101173143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011730cc(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d615e0);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c5d344(uStack_28);
  func_0x000107c615e8();
  func_0x000101173248();
  func_0x000107c61154(&stack0xffffffffffffffc8,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101173144; end: 1011731bf; -[_TtC40MemoriesClusteringCameraRollObserverImpl13PHFetcherImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173144(long param_1)

{
  undefined8 uVar1;
  long alStack_38 [2];
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d615e0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c5d344(uStack_28);
  func_0x000107c615e8();
  func_0x000101173248();
  alStack_38[0] = param_1;
  func_0x000107c61154(alStack_38,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011731c0; end: 10117321b; -[_TtC40MemoriesClusteringCameraRollObserverImpl13PHFetcherImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011731c0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d615e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d615e8));
  func_0x000101173484(*(undefined8 *)(param_1 + _DAT_112d615f0),
                      ((undefined8 *)(param_1 + _DAT_112d615f0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d615f8));
  return;
}



/* Entry: 10117321c; end: 101173267; -[_TtC40MemoriesClusteringCameraRollObserverImpl13PHFetcherImpl init] */

void FUN_10117321c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesClusteringCameraRollObserverImpl.PHFetcherImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101173248);
  (*pcVar1)();
}



/* Entry: 101173268; end: 101173397;  */

/* WARNING: Possible PIC construction at 0x000101173330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101173344) */
/* WARNING: Removing unreachable block (ram,0x000101173334) */
/* WARNING: Removing unreachable block (ram,0x000101173378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173268(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_60 [16];
  
  lVar4 = _DAT_112d615f8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d615f8);
  if (lVar2 == 0) {
    return;
  }
  FUN_1011733e8(0);
  func_0x000107c61174();
  lVar1 = lVar2;
  func_0x000107c60128();
  if (lVar1 != 0) {
    func_0x000100087bd4(FUN_10117342c,auStack_60,PTR___sytN_11034f1b0 + 8);
    pcVar3 = *(code **)(unaff_x20 + _DAT_112d615f0);
    lVar2 = lVar1;
    if (pcVar3 != (code *)0x0) {
      lVar4 = *(long *)(unaff_x20 + lVar4);
      FUN_101173474(pcVar3,((undefined8 *)(unaff_x20 + _DAT_112d615f0))[1]);
      lVar2 = lVar4;
      func_0x000107c61174(lVar4);
      (*pcVar3)(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101173398; end: 1011733e7; -[_TtC40MemoriesClusteringCameraRollObserverImpl13PHFetcherImpl photoLibraryDidChange:] */

/* WARNING: Possible PIC construction at 0x0001011733d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011733d4) */

void FUN_101173398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101173268(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011733e8; end: 10117342b;  */

void FUN_1011733e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5dfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5dfc0 = puVar1;
  return;
}



/* Entry: 10117342c; end: 101173473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117342c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c43284();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112d615f8);
  *(undefined8 *)(lVar1 + _DAT_112d615f8) = uVar2;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101173474; end: 101173493;  */

void FUN_101173474(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 101173494; end: 101173597;  */

void FUN_101173494(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101173598; end: 1011735a3; -[SCMemoriesClusteringCameraRollObserverEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173598(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61840;
  func_0x000107c61428(param_1 + _DAT_112d61840,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011735a4; end: 1011735af; -[SCMemoriesClusteringCameraRollObserverEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61840;
  func_0x000107c61428(param_1 + _DAT_112d61840,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011735b0; end: 1011735bb; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61848;
  func_0x000107c61428(param_1 + _DAT_112d61848,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011735bc; end: 1011735c7; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61848;
  func_0x000107c61428(param_1 + _DAT_112d61848,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011735c8; end: 1011735d3; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesUserDefaultsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61850;
  func_0x000107c61428(param_1 + _DAT_112d61850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011735d4; end: 1011735df; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesUserDefaultsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61850;
  func_0x000107c61428(param_1 + _DAT_112d61850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011735e0; end: 1011735eb; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesComposerClusteringServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61858;
  func_0x000107c61428(param_1 + _DAT_112d61858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011735ec; end: 1011735f7; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesComposerClusteringServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61858;
  func_0x000107c61428(param_1 + _DAT_112d61858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011735f8; end: 101173603; -[SCMemoriesClusteringCameraRollObserverEntryPoint mediaVideoImportServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011735f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61860;
  func_0x000107c61428(param_1 + _DAT_112d61860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101173604; end: 10117360f; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMediaVideoImportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61860;
  func_0x000107c61428(param_1 + _DAT_112d61860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101173610; end: 10117361b; -[SCMemoriesClusteringCameraRollObserverEntryPoint temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173610(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61868;
  func_0x000107c61428(param_1 + _DAT_112d61868,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117361c; end: 101173627; -[SCMemoriesClusteringCameraRollObserverEntryPoint setTemporaryFileWriterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117361c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61868;
  func_0x000107c61428(param_1 + _DAT_112d61868,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101173628; end: 101173633; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesMashupSnapDocFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173628(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61870;
  func_0x000107c61428(param_1 + _DAT_112d61870,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101173634; end: 10117363f; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesMashupSnapDocFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173634(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61870;
  func_0x000107c61428(param_1 + _DAT_112d61870,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101173640; end: 10117364b; -[SCMemoriesClusteringCameraRollObserverEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173640(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61878;
  func_0x000107c61428(param_1 + _DAT_112d61878,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117364c; end: 101173657; -[SCMemoriesClusteringCameraRollObserverEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117364c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61878;
  func_0x000107c61428(param_1 + _DAT_112d61878,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101173658; end: 101173663; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesSaveServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173658(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61880;
  func_0x000107c61428(param_1 + _DAT_112d61880,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101173664; end: 10117366f; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesSaveServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173664(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61880;
  func_0x000107c61428(param_1 + _DAT_112d61880,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101173670; end: 10117367b; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesDataObjectStorageService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173670(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61888;
  func_0x000107c61428(param_1 + _DAT_112d61888,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117367c; end: 101173687; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesDataObjectStorageService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117367c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61888;
  func_0x000107c61428(param_1 + _DAT_112d61888,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101173688; end: 101173693; -[SCMemoriesClusteringCameraRollObserverEntryPoint memPlatBackupServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173688(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61890;
  func_0x000107c61428(param_1 + _DAT_112d61890,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101173694; end: 10117369f; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemPlatBackupServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173694(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61890;
  func_0x000107c61428(param_1 + _DAT_112d61890,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011736a0; end: 1011736ab; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesMergedDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61898;
  func_0x000107c61428(param_1 + _DAT_112d61898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011736ac; end: 1011736b7; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesMergedDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61898;
  func_0x000107c61428(param_1 + _DAT_112d61898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011736b8; end: 1011736c3; -[SCMemoriesClusteringCameraRollObserverEntryPoint snapDocManagerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d618a0;
  func_0x000107c61428(param_1 + _DAT_112d618a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011736c4; end: 1011736cf; -[SCMemoriesClusteringCameraRollObserverEntryPoint setSnapDocManagerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d618a0;
  func_0x000107c61428(param_1 + _DAT_112d618a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011736d0; end: 1011736db; -[SCMemoriesClusteringCameraRollObserverEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d618a8;
  func_0x000107c61428(param_1 + _DAT_112d618a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011736dc; end: 1011736e7; -[SCMemoriesClusteringCameraRollObserverEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d618a8;
  func_0x000107c61428(param_1 + _DAT_112d618a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011736e8; end: 1011736f3; -[SCMemoriesClusteringCameraRollObserverEntryPoint memoriesSnapDocSerializationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d618b0;
  func_0x000107c61428(param_1 + _DAT_112d618b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011736f4; end: 1011736ff; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMemoriesSnapDocSerializationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011736f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d618b0;
  func_0x000107c61428(param_1 + _DAT_112d618b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101173700; end: 10117370b; -[SCMemoriesClusteringCameraRollObserverEntryPoint musicSyncServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173700(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d618b8;
  func_0x000107c61428(param_1 + _DAT_112d618b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10117370c; end: 10117374f;  */

void FUN_10117370c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101173750; end: 10117375b; -[SCMemoriesClusteringCameraRollObserverEntryPoint setMusicSyncServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101173750(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d618b8;
  func_0x000107c61428(param_1 + _DAT_112d618b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117375c; end: 1011737af;  */

void FUN_10117375c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011737b0; end: 101173da7;  */

/* WARNING: Possible PIC construction at 0x000101173954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011739a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011739b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011739c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101173a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101173a64) */
/* WARNING: Removing unreachable block (ram,0x000101173a84) */
/* WARNING: Removing unreachable block (ram,0x000101173ab4) */
/* WARNING: Removing unreachable block (ram,0x000101173aa4) */
/* WARNING: Removing unreachable block (ram,0x000101173ae4) */
/* WARNING: Removing unreachable block (ram,0x000101173ad4) */
/* WARNING: Removing unreachable block (ram,0x000101173ac4) */
/* WARNING: Removing unreachable block (ram,0x000101173b14) */
/* WARNING: Removing unreachable block (ram,0x000101173b04) */
/* WARNING: Removing unreachable block (ram,0x000101173af4) */
/* WARNING: Removing unreachable block (ram,0x000101173b54) */
/* WARNING: Removing unreachable block (ram,0x000101173b44) */
/* WARNING: Removing unreachable block (ram,0x000101173b34) */
/* WARNING: Removing unreachable block (ram,0x000101173ba4) */
/* WARNING: Removing unreachable block (ram,0x000101173b94) */
/* WARNING: Removing unreachable block (ram,0x000101173b84) */
/* WARNING: Removing unreachable block (ram,0x000101173b74) */
/* WARNING: Removing unreachable block (ram,0x000101173bf4) */
/* WARNING: Removing unreachable block (ram,0x000101173be4) */
/* WARNING: Removing unreachable block (ram,0x000101173bd4) */
/* WARNING: Removing unreachable block (ram,0x000101173bc4) */
/* WARNING: Removing unreachable block (ram,0x000101173bb4) */
/* WARNING: Removing unreachable block (ram,0x000101173c44) */
/* WARNING: Removing unreachable block (ram,0x000101173c34) */
/* WARNING: Removing unreachable block (ram,0x000101173c24) */
/* WARNING: Removing unreachable block (ram,0x000101173c14) */
/* WARNING: Removing unreachable block (ram,0x000101173c04) */
/* WARNING: Removing unreachable block (ram,0x000101173ca4) */
/* WARNING: Removing unreachable block (ram,0x000101173c94) */
/* WARNING: Removing unreachable block (ram,0x000101173c84) */
/* WARNING: Removing unreachable block (ram,0x000101173c74) */
/* WARNING: Removing unreachable block (ram,0x000101173c64) */
/* WARNING: Removing unreachable block (ram,0x000101173d14) */
/* WARNING: Removing unreachable block (ram,0x000101173d04) */
/* WARNING: Removing unreachable block (ram,0x000101173cf4) */
/* WARNING: Removing unreachable block (ram,0x000101173ce4) */
/* WARNING: Removing unreachable block (ram,0x000101173cd4) */
/* WARNING: Removing unreachable block (ram,0x000101173cc4) */
/* WARNING: Removing unreachable block (ram,0x000101173d84) */
/* WARNING: Removing unreachable block (ram,0x000101173d74) */
/* WARNING: Removing unreachable block (ram,0x000101173d64) */
/* WARNING: Removing unreachable block (ram,0x000101173d54) */
/* WARNING: Removing unreachable block (ram,0x000101173d44) */
/* WARNING: Removing unreachable block (ram,0x000101173d34) */
/* WARNING: Removing unreachable block (ram,0x000101173d24) */
/* WARNING: Removing unreachable block (ram,0x0001011739c8) */
/* WARNING: Removing unreachable block (ram,0x0001011739d0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001011739b8) */
/* WARNING: Removing unreachable block (ram,0x0001011739a8) */
/* WARNING: Removing unreachable block (ram,0x000101173998) */
/* WARNING: Removing unreachable block (ram,0x000101173988) */
/* WARNING: Removing unreachable block (ram,0x000101173978) */
/* WARNING: Removing unreachable block (ram,0x000101173968) */
/* WARNING: Removing unreachable block (ram,0x000101173958) */
/* WARNING: Removing unreachable block (ram,0x000101173a54) */

void FUN_1011737b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4cb8c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4cce4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4cb64();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c4ca78();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c5c804();
          func_0x000107c61180();
          if (lVar3 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar3 = unaff_x20;
            func_0x000107c4cbc8();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c5b1bc();
              func_0x000107c61180();
              if (lVar3 != 0) {
                lVar3 = unaff_x20;
                func_0x000107c4cc68();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar3 = unaff_x20;
                  func_0x000107c4cb70();
                  func_0x000107c61180();
                  if (lVar3 == 0) {
                    func_0x000107c61170(lVar1);
                    lVar1 = lVar2;
                  }
                  else {
                    lVar3 = unaff_x20;
                    func_0x000107c4cab8();
                    func_0x000107c61180();
                    if (lVar3 != 0) {
                      lVar3 = unaff_x20;
                      func_0x000107c4cbe0();
                      func_0x000107c61180();
                      if (lVar3 != 0) {
                        lVar3 = unaff_x20;
                        func_0x000107c5b1d8();
                        func_0x000107c61180();
                        if (lVar3 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar2;
                        }
                        else {
                          lVar3 = unaff_x20;
                          func_0x000107c42eb0();
                          func_0x000107c61180();
                          if (lVar3 == 0) {
                            func_0x000107c61170(lVar1);
                            lVar1 = lVar2;
                          }
                          else {
                            func_0x000107c4cc9c();
                            func_0x000107c61180();
                            if (unaff_x20 != 0) {
                              func_0x000107c4d298();
                              func_0x000107c61180();
                              lVar1 = unaff_x20;
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
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101173da8; end: 101173dcf; -[SCMemoriesClusteringCameraRollObserverEntryPoint begin] */

void FUN_101173da8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011737b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101173dd0; end: 101173e13; -[SCMemoriesClusteringCameraRollObserverEntryPoint end] */

void FUN_101173dd0(undefined8 param_1)

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



/* Entry: 101173e14; end: 101174567;  */

void FUN_101173e14(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56550();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d7190)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef28e70,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c565f0();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10d7170)) ||
           (func_0x000107c605b8(0xd000000000000022,0x800000010ef28e90,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5652c();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d7140)) ||
             (func_0x000107c605b8(0xd000000000000018,0x800000010ef28ec0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c564a8();
          }
          else {
            uVar2 = 0xd00000000000001b;
            if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10df490)) ||
               (func_0x000107c605b8(0xd00000000000001b,0x800000010ef20b70,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59c58();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef10e2180)) ||
                 (func_0x000107c605b8(0xd000000000000024,0x800000010ef1de80,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c56570();
              }
              else {
                if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e2010)) {
                  uVar2 = 0xd000000000000015;
                  func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10d7120)) ||
                       (func_0x000107c605b8(0xd000000000000014,0x800000010ef28ee0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c565bc();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e21b0)) ||
                         (func_0x000107c605b8(0xd000000000000020,0x800000010ef1de50,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c56538();
                      }
                      else {
                        if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10d7100)) {
                          uVar2 = 0xd000000000000015;
                          func_0x000107c605b8(0xd000000000000015,0x800000010ef28f00,param_2,param_3,
                                              0);
                          if ((uVar2 & 1) == 0) {
                            if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10e2080)
                               ) {
                              uVar2 = 0;
                              func_0x000107c605b8(0xd000000000000020,0x800000010ef1df80,param_2,
                                                  param_3,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = 0;
                                if (((param_2 == -0x2fffffffffffffea) &&
                                    (param_3 == -0x7ffffffef10e21d0)) ||
                                   (func_0x000107c605b8(0xd000000000000016,0x800000010ef1de30,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c59368();
                                }
                                else {
                                  uVar2 = 0xd000000000000017;
                                  if (((param_2 == -0x2fffffffffffffe9) &&
                                      (param_3 == -0x7ffffffef10ef230)) ||
                                     (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,
                                                          param_2,param_3,0), (uVar2 & 1) != 0)) {
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c5491c();
                                  }
                                  else {
                                    if ((param_2 != -0x2fffffffffffffdc) ||
                                       (param_3 != -0x7ffffffef10d70e0)) {
                                      uVar2 = 0;
                                      func_0x000107c605b8(0xd000000000000024,0x800000010ef28f20,
                                                          param_2,param_3,0);
                                      if ((uVar2 & 1) == 0) {
                                        uVar2 = 0xd000000000000011;
                                        if (((param_2 != -0x2fffffffffffffef) ||
                                            (param_3 != -0x7ffffffef10dbb60)) &&
                                           (func_0x000107c605b8(0xd000000000000011,
                                                                0x800000010ef244a0,param_2,param_3,0
                                                               ), (uVar2 & 1) == 0)) {
                                          func_0x000107c602fc(0x15);
                                          func_0x000107c6142c(0xe000000000000000);
                                          func_0x000107c5fb78(param_2,param_3);
                                          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013
                                                              ,0x800000010ef0fc20,
                                                                                                                            
                                                  "MemoriesClusteringCameraRollObserverImpl/SCMemoriesClusteringCameraRollObserverEntryPoint.swift"
                                                  ,0x5f,2,0x73,0);
                    /* WARNING: Does not return */
                                          pcVar1 = (code *)SoftwareBreakpoint(1,0x101174568);
                                          (*pcVar1)();
                                        }
                                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c56884();
                                        goto LAB_101173ea4;
                                      }
                                    }
                                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c565e0();
                                  }
                                }
                                goto LAB_101173ea4;
                              }
                            }
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c56578();
                            goto LAB_101173ea4;
                          }
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c564d0();
                      }
                    }
                    goto LAB_101173ea4;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5935c();
              }
            }
          }
        }
      }
    }
  }
LAB_101173ea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101174568; end: 101174613; -[SCMemoriesClusteringCameraRollObserverEntryPoint setValue:forIvarName:] */

void FUN_101174568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101173e14(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101174614; end: 10117461b; +[SCMemoriesClusteringCameraRollObserverEntryPoint context] */

undefined8 FUN_101174614(void)

{
  return 4;
}



/* Entry: 10117461c; end: 1011747a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117461c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d61840,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61848,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61850,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61858,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61860,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61868,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61870,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61878,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61880,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61888,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61890,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61898,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d618a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d618a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d618b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d618b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d618c0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011747a8; end: 1011747c7; -[SCMemoriesClusteringCameraRollObserverEntryPoint init] */

void FUN_1011747a8(void)

{
  FUN_10117461c();
  return;
}



/* Entry: 1011747c8; end: 1011747fb;  */

void FUN_1011747c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011747fc; end: 101174923; -[SCMemoriesClusteringCameraRollObserverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011747fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d61840);
  func_0x000107c61610(param_1 + _DAT_112d61848);
  func_0x000107c61610(param_1 + _DAT_112d61850);
  func_0x000107c61610(param_1 + _DAT_112d61858);
  func_0x000107c61610(param_1 + _DAT_112d61860);
  func_0x000107c61610(param_1 + _DAT_112d61868);
  func_0x000107c61610(param_1 + _DAT_112d61870);
  func_0x000107c61610(param_1 + _DAT_112d61878);
  func_0x000107c61610(param_1 + _DAT_112d61880);
  func_0x000107c61610(param_1 + _DAT_112d61888);
  func_0x000107c61610(param_1 + _DAT_112d61890);
  func_0x000107c61610(param_1 + _DAT_112d61898);
  func_0x000107c61610(param_1 + _DAT_112d618a0);
  func_0x000107c61610(param_1 + _DAT_112d618a8);
  func_0x000107c61610(param_1 + _DAT_112d618b0);
  func_0x000107c61610(param_1 + _DAT_112d618b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d618c0));
  return;
}



/* Entry: 101174924; end: 101174943;  */

void FUN_101174924(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2708);
  return;
}



/* Entry: 101174944; end: 1011749a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174944(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d618f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d618f8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011749a8; end: 101174a07; -[_TtC41MemoriesSnapDocRenderStepDependencyPlugin45MemoriesSnapDocRenderStepDependencyPluginImpl init] */

void FUN_1011749a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapDocRenderStepDependencyPlugin.MemoriesSnapDocRenderStepDependencyPluginImpl"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011749d4);
  (*pcVar1)();
}



/* Entry: 101174a08; end: 101174a3f; -[_TtC41MemoriesSnapDocRenderStepDependencyPlugin45MemoriesSnapDocRenderStepDependencyPluginImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101174a24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101174a28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d618f0));
  return;
}



/* Entry: 101174a40; end: 101174a5f; -[_TtC41MemoriesSnapDocRenderStepDependencyPlugin45MemoriesSnapDocRenderStepDependencyPluginImpl memoriesSaveManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112d618f0) + _DAT_112ff5608));
  return;
}



/* Entry: 101174a60; end: 101174aa7; -[_TtC41MemoriesSnapDocRenderStepDependencyPlugin45MemoriesSnapDocRenderStepDependencyPluginImpl mergedDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174a60(long param_1)

{
  func_0x000107c4cd6c(*(undefined8 *)(param_1 + _DAT_112d618f8));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101174aa8; end: 101174be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d61928) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d61930) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d61938) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101174be4; end: 101174c43; -[_TtC41MemoriesSnapDocRenderStepDependencyPlugin51MemoriesSnapDocRenderStepDependencyPluginEntryPoint init] */

void FUN_101174be4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapDocRenderStepDependencyPlugin.MemoriesSnapDocRenderStepDependencyPluginEntryPoint"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101174c10);
  (*pcVar1)();
}



/* Entry: 101174c44; end: 101174cab; -[_TtC41MemoriesSnapDocRenderStepDependencyPlugin51MemoriesSnapDocRenderStepDependencyPluginEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101174c60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101174c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d61928));
  return;
}



/* Entry: 101174cac; end: 101174cb3;  */

undefined8 FUN_101174cac(void)

{
  return 0;
}



/* Entry: 101174cb4; end: 101174cd3;  */

void FUN_101174cb4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2908);
  return;
}



/* Entry: 101174cd4; end: 101174cdf; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174cd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61968;
  func_0x000107c61428(param_1 + _DAT_112d61968,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101174ce0; end: 101174ceb; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61968;
  func_0x000107c61428(param_1 + _DAT_112d61968,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101174cec; end: 101174cf7; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint memoriesSaveServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174cec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61970;
  func_0x000107c61428(param_1 + _DAT_112d61970,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101174cf8; end: 101174d03; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint setMemoriesSaveServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61970;
  func_0x000107c61428(param_1 + _DAT_112d61970,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101174d04; end: 101174d0f; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint memoriesMergedDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174d04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61978;
  func_0x000107c61428(param_1 + _DAT_112d61978,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101174d10; end: 101174d53;  */

void FUN_101174d10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101174d54; end: 101174d5f; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint setMemoriesMergedDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61978;
  func_0x000107c61428(param_1 + _DAT_112d61978,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101174d60; end: 101174db3;  */

void FUN_101174d60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101174db4; end: 101174eff;  */

/* WARNING: Possible PIC construction at 0x000101174e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101174ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101174ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101174ea8) */
/* WARNING: Removing unreachable block (ram,0x000101174e98) */
/* WARNING: Removing unreachable block (ram,0x000101174ee4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101174db4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4cc68();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4cbe0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101174cb4();
      lVar5 = lVar4;
      func_0x000107c610f8();
      *(long *)(lVar5 + _DAT_112d61928) = lVar2;
      *(long *)(lVar5 + _DAT_112d61930) = lVar3;
      *(long *)(lVar5 + _DAT_112d61938) = unaff_x20;
      puVar1 = PTR_s_init_1125d9248;
      lStack_50 = lVar5;
      lStack_48 = lVar4;
      func_0x000107c61174(lVar2);
      func_0x000107c61174(lVar3);
      func_0x000107c61174(unaff_x20);
      func_0x000107c61154(&lStack_50,puVar1);
      func_0x000101174b1c();
      lVar2 = unaff_x20;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101174f00; end: 101174f27; -[SCMemoriesSnapDocRenderStepDependencyPluginEntryPoint begin] */

void FUN_101174f00(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101174db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


