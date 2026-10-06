/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b75f6e8; end: 10b75f797; -[SCScanSourceInformation encodeWithFasterCoder:] */

void FUN_10b75f6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf930e0(param_3,param_2,uVar1);
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xd));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 10));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xc));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x20));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x28));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 0xb));
  func_0x00010bf930e0(param_3,param_2,*(undefined4 *)(param_1 + 0x10));
  func_0x00010bf92d80(param_3,param_2,*(undefined1 *)(param_1 + 9));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b75f798; end: 10b75f85b; -[SCScanSourceInformation decodeWithFasterDecoder:] */

void FUN_10b75f798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67120();
  *(long *)(param_1 + 0x18) = (long)(int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xd) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 10) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 8) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xc) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  *(long *)(param_1 + 0x20) = (long)(int)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  *(long *)(param_1 + 0x28) = (long)(int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  *(char *)(param_1 + 0xb) = (char)uVar1;
  uVar1 = param_3;
  func_0x00010bf67120();
  *(long *)(param_1 + 0x10) = (long)(int)uVar1;
  uVar1 = param_3;
  func_0x00010bf66cc0();
  _objc_release(param_3);
  *(char *)(param_1 + 9) = (char)uVar1;
  return;
}



/* Entry: 10b75f85c; end: 10b75f937; -[SCScanSourceInformation setBool:forUInt64Key:] */

void FUN_10b75f85c(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0x7030c3e201653b) {
    if (param_4 == 0x39e47a50554797) {
      lVar1 = 10;
    }
    else if (param_4 == 0x6364a0469c42f4) {
      lVar1 = 9;
    }
    else {
      if (param_4 != 0x6fb9a0832f466e) {
        return;
      }
      lVar1 = 0xc;
    }
  }
  else if (param_4 == 0x7030c3e201653b) {
    lVar1 = 8;
  }
  else if (param_4 == 0x9278238f74a381) {
    lVar1 = 0xb;
  }
  else {
    if (param_4 != 0xdd4cacde2eecda) {
      return;
    }
    lVar1 = 0xd;
  }
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b75f938; end: 10b75f9d7; -[SCScanSourceInformation setSInt32:forUInt64Key:] */

void FUN_10b75f938(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_4 < 0x69e642e6180d5d) {
    if (param_4 == 0x39a2bfd654585) {
      lVar1 = 0x18;
    }
    else {
      if (param_4 != 0x56d7f22db50ad1) {
        return;
      }
      lVar1 = 0x20;
    }
  }
  else if (param_4 == 0x69e642e6180d5d) {
    lVar1 = 0x10;
  }
  else {
    if (param_4 != 0x8cf3cf65112ca4) {
      return;
    }
    lVar1 = 0x28;
  }
  *(long *)(param_1 + lVar1) = (long)param_3;
  return;
}



/* Entry: 10b75f9d8; end: 10b75f9eb; +[SCScanSourceInformation fasterCodingVersion] */

undefined8 FUN_10b75f9d8(void)

{
  return 0x42ccaea261c9ba10;
}



/* Entry: 10b75f9ec; end: 10b75f9f7; +[SCScanSourceInformation fasterCodingKeys] */

undefined8 FUN_10b75f9ec(void)

{
  return 0x1133d30e0;
}



/* Entry: 10b75f9f8; end: 10b75fb0f; -[SCScanSourceInformation isEqual:] */

bool FUN_10b75f9f8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  FUN_10bc85c34(param_1,param_3,0x1137f9bb0,0x1137f9bb0,10,0);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    if ((((((*(long *)(param_3 + 0x10) == *(long *)(param_1 + 0x10)) &&
           (*(long *)(param_3 + 0x18) == *(long *)(param_1 + 0x18))) &&
          (*(long *)(param_3 + 0x20) == *(long *)(param_1 + 0x20))) &&
         ((*(char *)(param_3 + 8) == *(char *)(param_1 + 8) &&
          (*(char *)(param_3 + 9) == *(char *)(param_1 + 9))))) &&
        ((*(char *)(param_3 + 10) == *(char *)(param_1 + 10) &&
         ((*(char *)(param_3 + 0xb) == *(char *)(param_1 + 0xb) &&
          (*(char *)(param_3 + 0xc) == *(char *)(param_1 + 0xc))))))) &&
       (*(char *)(param_3 + 0xd) == *(char *)(param_1 + 0xd))) {
      bVar1 = *(long *)(param_3 + 0x28) == *(long *)(param_1 + 0x28);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b75fb10; end: 10b75fbdb; -[SCScanSourceInformation hash] */

ulong FUN_10b75fb10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong auStack_68 [10];
  long lStack_18;
  ulong uVar7;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  auStack_68[2] = *(undefined8 *)(param_1 + 0x20);
  auStack_68[1] = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar5 >> 0x18),
                                          (uint6)(byte)((uint)uVar5 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar5) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar5 >> 8),(short)uVar6);
  uVar7 = CONCAT44((int)(uVar6 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar6 = CONCAT26((short)(uVar7 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar7)) &
          0xff01ff01ffffffff;
  uVar4 = (ushort)(uVar6 >> 0x30);
  auStack_68[4] = uVar6 >> 0x10 & 0xff;
  auStack_68[3] = (ulong)uVar1 & 0xff;
  auStack_68[6] = (ulong)uVar4;
  auStack_68[5] = (ulong)CONCAT24(uVar4,(uint)(ushort)(uVar6 >> 0x20)) & 0xffffffff;
  auStack_68[7] = (ulong)*(byte *)(param_1 + 0xc);
  auStack_68[8] = (ulong)*(byte *)(param_1 + 0xd);
  auStack_68[9] = *(undefined8 *)(param_1 + 0x28);
  lVar3 = 8;
  do {
    uVar2 = *(ulong *)((long)auStack_68 + lVar3) | uVar2 << 0x20;
    uVar2 = ~uVar2 + uVar2 * 0x40000;
    uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
    uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uVar2;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + 0x10);
}



/* Entry: 10b75fbdc; end: 10b75fbe3; -[SCScanSourceInformation scanSource] */

undefined8 FUN_10b75fbdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b75fbe4; end: 10b75fbeb; -[SCScanSourceInformation deeplinkSource] */

undefined8 FUN_10b75fbe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b75fbec; end: 10b75fbf3; -[SCScanSourceInformation page] */

undefined8 FUN_10b75fbec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b75fbf4; end: 10b75fbfb; -[SCScanSourceInformation openFromPreview] */

undefined1 FUN_10b75fbf4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b75fbfc; end: 10b75fc03; -[SCScanSourceInformation skipRecordInScanHistory] */

undefined1 FUN_10b75fbfc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b75fc04; end: 10b75fc0b; -[SCScanSourceInformation openFromCameraRoll] */

undefined1 FUN_10b75fc04(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b75fc0c; end: 10b75fc13; -[SCScanSourceInformation relaunchFromInformationIcon] */

undefined1 FUN_10b75fc0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b75fc14; end: 10b75fc1b; -[SCScanSourceInformation openFromScanHistory] */

undefined1 FUN_10b75fc14(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b75fc1c; end: 10b75fc23; -[SCScanSourceInformation isLensPreview] */

undefined1 FUN_10b75fc1c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10b75fc24; end: 10b75fc2b; -[SCScanSourceInformation publicProfileScanUserAction] */

undefined8 FUN_10b75fc24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b75fc2c; end: 10b75fcf3; +[SCScanSourceInformationBuilder withScanSourceInformation:] */

void FUN_10b75fc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e0728;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c14f4a0();
  *(undefined8 *)(puVar1 + 8) = uVar2;
  uVar2 = param_3;
  func_0x00010bf68880();
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = param_3;
  func_0x00010c0f0be0();
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  uVar2 = param_3;
  func_0x00010c0e9240();
  puVar1[0x20] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c23e3a0();
  puVar1[0x21] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c0e9220();
  puVar1[0x22] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c1283c0();
  puVar1[0x23] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c0e9260();
  puVar1[0x24] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c076760();
  puVar1[0x25] = (char)uVar2;
  uVar2 = param_3;
  func_0x00010c11a780();
  _objc_release(param_3);
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b75fcf4; end: 10b75fd53; -[SCScanSourceInformationBuilder build] */

void FUN_10b75fcf4(void)

{
  _objc_alloc(PTR_PTR_1126e0730);
  func_0x00010c041960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75fd54; end: 10b75fd5b; -[SCScanSourceInformationBuilder setScanSource:] */

void FUN_10b75fd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b75fd5c; end: 10b75fd63; -[SCScanSourceInformationBuilder setDeeplinkSource:] */

void FUN_10b75fd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b75fd64; end: 10b75fd6b; -[SCScanSourceInformationBuilder setPage:] */

void FUN_10b75fd64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b75fd6c; end: 10b75fd73; -[SCScanSourceInformationBuilder setOpenFromPreview:] */

void FUN_10b75fd6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b75fd74; end: 10b75fd7b; -[SCScanSourceInformationBuilder setSkipRecordInScanHistory:] */

void FUN_10b75fd74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10b75fd7c; end: 10b75fd83; -[SCScanSourceInformationBuilder setOpenFromCameraRoll:] */

void FUN_10b75fd7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x22) = param_3;
  return;
}



/* Entry: 10b75fd84; end: 10b75fd8b; -[SCScanSourceInformationBuilder setRelaunchFromInformationIcon:] */

void FUN_10b75fd84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}



/* Entry: 10b75fd8c; end: 10b75fd93; -[SCScanSourceInformationBuilder setOpenFromScanHistory:] */

void FUN_10b75fd8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 10b75fd94; end: 10b75fd9b; -[SCScanSourceInformationBuilder setIsLensPreview:] */

void FUN_10b75fd94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 10b75fd9c; end: 10b75fda3; -[SCScanSourceInformationBuilder setPublicProfileScanUserAction:] */

void FUN_10b75fd9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b75fda4; end: 10b75fde7; -[SCDeepLinkVCInfo feature] */

void FUN_10b75fda4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b75fde8; end: 10b75fe4b; -[SCDeepLinkVCInfo isFeature:] */

undefined8 FUN_10b75fde8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfa1820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b75fe4c; end: 10b75fe53; -[SCDeepLinkVCInfo url] */

undefined8 FUN_10b75fe4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b75fe54; end: 10b75fe83; -[SCDeepLinkVCInfo setUrl:] */

void FUN_10b75fe54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b75fe84; end: 10b75fe8b; -[SCDeepLinkVCInfo additionalInfo] */

undefined8 FUN_10b75fe84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b75fe8c; end: 10b75febb; -[SCDeepLinkVCInfo setAdditionalInfo:] */

void FUN_10b75fe8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b75febc; end: 10b75fed3; -[SCDeepLinkVCInfo sourceVC] */

void FUN_10b75febc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75fed4; end: 10b75fedf; -[SCDeepLinkVCInfo setSourceVC:] */

void FUN_10b75fed4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10b75fee0; end: 10b75ff17; -[SCDeepLinkVCInfo .cxx_destruct] */

void FUN_10b75fee0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b75ff18; end: 10b75ff43; +[SCGrapheneDeepLinkMetric deepLinkOpened] */

void FUN_10b75ff18(void)

{
  _objc_alloc(PTR_PTR_1126ce8d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75ff44; end: 10b75ff6f; +[SCGrapheneDeepLinkMetric dlLegacyProcessorCount] */

void FUN_10b75ff44(void)

{
  _objc_alloc(PTR_PTR_1126ce8d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75ff70; end: 10b75ff9b; +[SCGrapheneDeepLinkMetric deepLinkUrlCount] */

void FUN_10b75ff70(void)

{
  _objc_alloc(PTR_PTR_1126ce8d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75ff9c; end: 10b75ffc7; +[SCGrapheneDeepLinkMetric internalDeepLinkValidity] */

void FUN_10b75ff9c(void)

{
  _objc_alloc(PTR_PTR_1126ce8d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75ffc8; end: 10b75fff3; +[SCGrapheneDeepLinkMetric aaoInfoAddGate] */

void FUN_10b75ffc8(void)

{
  _objc_alloc(PTR_PTR_1126ce8d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75fff4; end: 10b760093; -[SCGrapheneDeepLinkMetric description] */

void FUN_10b75fff4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e35d58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e35d58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_11270a958;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10b760094; end: 10b7601ff; -[SCGrapheneRegistry deepLinkGraphene] */

void FUN_10b760094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b76011c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f9bc0 != -1) {
    func_0x000107c27d9c(0x1137f9bc0,&puStack_48);
  }
  uVar1 = uRam00000001137f9bb8;
  _objc_retain(uRam00000001137f9bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b760200; end: 10b76022f; -[SCGrapheneMetricBase copy] */

void FUN_10b760200(void)

{
  _objc_opt_class();
  _objc_alloc();
                    /* WARNING: Could not recover jumptable at 0x00010c01b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b760230; end: 10b76024f; -[SOJUAdAdFlagData initWithAdFlagged:adFlaggedReason:adFlaggedNote:] */

void FUN_10b760230(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b760250; end: 10b7602e7; +[SOJUAdAdFlagData registerMessageFields:] */

void FUN_10b760250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_adFlagged_11259a430;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,0,0,0,0,0);
  FUN_10b7602e8();
  func_0x00010bf06b60();
  FUN_10b7602e8();
  func_0x00010bf06b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7602e8; end: 10b7602ff;  */

void FUN_10b7602e8(void)

{
  return;
}



/* Entry: 10b760300; end: 10b76053f;  */

undefined8 FUN_10b760300(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ede218;
  func_0x00010b760760();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffffbfebd5dd;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ede238;
    func_0x00010b760760();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff8ffd4b7f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ede258;
      func_0x00010b760760();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff82e639fc;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ede278;
        func_0x00010b760760();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x7ee43e79;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ede298;
          func_0x00010b760760();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffff83785da4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ede2b8;
            func_0x00010b760760();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x10cb53a5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ede2d8;
              func_0x00010b760760();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x6f6205ee;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ede2f8;
                func_0x00010b760760();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x5f2797bc;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ede318;
                  func_0x00010b760760();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x1cae2516;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ede338;
                    func_0x00010b760760();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x743051d0;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ede358;
                      func_0x00010b760760();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xffffffffd184bc56;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ede378;
                        func_0x00010b760760();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xffffffff866d2037;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ede398;
                          func_0x00010b760760();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xffffffffb4098f97;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ede3b8;
                            func_0x00010b760760();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x613e828f;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ede3d8;
                              func_0x00010b760760();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x3364b4f9;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ede3f8;
                                func_0x00010b760760();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x5cb7706d;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ede418;
                                  func_0x00010b760760();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xfffffffff2cabca7;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ede458;
                                    func_0x00010b760760();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xffffffffed82252d;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ede478;
                                      func_0x00010b760760();
                                      uVar2 = 0x6b8cd2ce;
                                      if (ppuVar1 != (undefined **)0x0) {
                                        uVar2 = 0;
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
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b760540; end: 10b760767;  */

undefined ** FUN_10b760540(long param_1)

{
  if (param_1 == -0x7d19c604) {
    return &PTR____CFConstantStringClassReference_110ede258;
  }
  if (param_1 == -0x7c87a25c) {
    return &PTR____CFConstantStringClassReference_110ede298;
  }
  if (param_1 == -0x7992dfc9) {
    return &PTR____CFConstantStringClassReference_110ede378;
  }
  if (param_1 == 0x7ee43e79) {
    return &PTR____CFConstantStringClassReference_110ede278;
  }
  if (param_1 == -0x4bf67069) {
    return &PTR____CFConstantStringClassReference_110ede398;
  }
  if (param_1 == -0x40142a23) {
    return &PTR____CFConstantStringClassReference_110ede218;
  }
  if (param_1 == -0x2e7b43aa) {
    return &PTR____CFConstantStringClassReference_110ede358;
  }
  if (param_1 == -0x127ddad3) {
    return &PTR____CFConstantStringClassReference_110ede458;
  }
  if (param_1 == -0xd354359) {
    return &PTR____CFConstantStringClassReference_110ede418;
  }
  if (param_1 == 0x10cb53a5) {
    return &PTR____CFConstantStringClassReference_110ede2b8;
  }
  if (param_1 == 0x1cae2516) {
    return &PTR____CFConstantStringClassReference_110ede318;
  }
  if (param_1 == 0x3364b4f9) {
    return &PTR____CFConstantStringClassReference_110ede3d8;
  }
  if (param_1 == 0x5cb7706d) {
    return &PTR____CFConstantStringClassReference_110ede3f8;
  }
  if (param_1 == 0x5f2797bc) {
    return &PTR____CFConstantStringClassReference_110ede2f8;
  }
  if (param_1 == 0x613e828f) {
    return &PTR____CFConstantStringClassReference_110ede3b8;
  }
  if (param_1 != 0x6b8cd2ce) {
    if (param_1 == 0x6f6205ee) {
      return &PTR____CFConstantStringClassReference_110ede2d8;
    }
    if (param_1 != 0x743051d0) {
      if (param_1 == -0x7002b481) {
        return &PTR____CFConstantStringClassReference_110ede238;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110ede338;
  }
  return &PTR____CFConstantStringClassReference_110ede478;
}



/* Entry: 10b760768; end: 10b760773; +[SOJUAdAdFlagDataBuilder messageClass] */

void FUN_10b760768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0738);
  return;
}



/* Entry: 10b760774; end: 10b760777; +[SOJUAdAdFlagDataBuilder withJUAdAdFlagData:] */

void FUN_10b760774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b760778; end: 10b760797; -[SOJUAdAdPreferences initWithIsAudienceMatchOptOut:isExternalActivityMatchOptOut:isThirdPartyAdNetworkOptOut:] */

void FUN_10b760778(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b760798; end: 10b760807; +[SOJUAdAdPreferences registerMessageFields:] */

void FUN_10b760798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_isAudienceMatchOptOut_112534220;
  _objc_retain(param_3);
  FUN_10b760808(param_3,param_2,puVar1);
  FUN_10b760808(param_3,param_2,PTR_s_isExternalActivityMatchOptOut_112534240);
  FUN_10b760808(param_3,param_2,PTR_s_isThirdPartyAdNetworkOptOut_112534260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760808; end: 10b76081f;  */

void FUN_10b760808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,0,0,0);
  return;
}



/* Entry: 10b760820; end: 10b76083f; -[SOJUAdAdProductConfig initWithType:params:targetingParams:] */

void FUN_10b760820(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b760840; end: 10b760913; +[SOJUAdAdProductConfig registerMessageFields:] */

void FUN_10b760840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,6,0,FUN_10b760924,FUN_10b7609f8,0);
  FUN_10b760914(param_3,param_2,PTR_s_params_11261a858,0,0);
  func_0x00010c19a460(param_3,param_2,0x3e2345a5bc012c);
  FUN_10b760914(param_3,param_2,PTR_s_targetingParams_112678350,0,1);
  func_0x00010c19a460(param_3,param_2,0x13cd10a69a2250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760914; end: 10b760923;  */

void FUN_10b760914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b760924; end: 10b7609f7;  */

undefined8 FUN_10b760924(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4c958;
  func_0x00010b760a90();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x3ae60df2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db3b58;
    func_0x00010b760a90();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x104877e9;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e07338;
      func_0x00010b760a90();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x32b0ec;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f15c98;
        func_0x00010b760a90();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffb23a86ff;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7c6f8;
          func_0x00010b760a90();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x66174bb8;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7c718;
            func_0x00010b760a90();
            uVar2 = 0x2beba1a3;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b7609f8; end: 10b760a97;  */

undefined ** FUN_10b7609f8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x104877e9) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db3b58;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e4c958;
  if (param_1 != 0x3ae60df2) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c718;
  if (param_1 != 0x2beba1a3) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7c6f8;
  if (param_1 != 0x66174bb8) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e07338;
  if (param_1 != 0x32b0ec) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f15c98;
  if (param_1 != -0x4dc57901) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b760a98; end: 10b760a9b; -[SOJUAdAdProductsConfig initWithAdProducts:] */

void FUN_10b760a98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b760a9c; end: 10b760b13; +[SOJUAdAdProductsConfig registerMessageFields:] */

void FUN_10b760a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0740;
  puVar1 = PTR_s_adProducts_112544558;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760b14; end: 10b760b17; -[SOJUAdAdToCallImpressionTrack initWithCommonSnapAdImpression:] */

void FUN_10b760b14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b760b18; end: 10b760b8b; +[SOJUAdAdToCallImpressionTrack registerMessageFields:] */

void FUN_10b760b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0748;
  puVar1 = PTR_s_commonSnapAdImpression_1125ae478;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760b8c; end: 10b760bab; -[SOJUAdAdToLensImpressionTrack initWithCommonSnapAdImpression:adToLensCarouselImpressions:] */

void FUN_10b760b8c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b760bac; end: 10b760c2b; +[SOJUAdAdToLensImpressionTrack registerMessageFields:] */

void FUN_10b760bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0748;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b760c2c();
  _objc_opt_class(PTR_PTR_1126e0750);
  FUN_10b760c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760c2c; end: 10b760c47;  */

void FUN_10b760c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b760c48; end: 10b760c4b; -[SOJUAdAdToMessageImpressionTrack initWithCommonSnapAdImpression:] */

void FUN_10b760c48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b760c4c; end: 10b760cbf; +[SOJUAdAdToMessageImpressionTrack registerMessageFields:] */

void FUN_10b760c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0748;
  puVar1 = PTR_s_commonSnapAdImpression_1125ae478;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760cc0; end: 10b760cdf; -[SOJUAdAdToPlaceImpressionTrack initWithCommonSnapAdImpression:placeProfileId:] */

void FUN_10b760cc0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b760ce0; end: 10b760d7b; +[SOJUAdAdToPlaceImpressionTrack registerMessageFields:] */

void FUN_10b760ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0748;
  puVar1 = PTR_s_commonSnapAdImpression_1125ae478;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_placeProfileId_112544580,0,1,6,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760d7c; end: 10b760d9b; -[SOJUAdApp initWithAppName:appVersionNumeric:] */

void FUN_10b760d7c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b760d9c; end: 10b760e0f; +[SOJUAdApp registerMessageFields:] */

void FUN_10b760d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_appName_11259f090;
  _objc_retain(param_3);
  FUN_10b760e10(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b760e10(param_3,param_2,PTR_s_appVersionNumeric_112544590,0,1,4,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760e10; end: 10b760e1b;  */

void FUN_10b760e10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b760e1c; end: 10b760e5f; -[SOJUAdAppInstallImpressionTrack initWithTopsnapTimeViewedSeconds:topsnapMediaDurationSeconds:swiped:renderedTimestampInMilliSeconds:deltaBetweenReceiveAndRenderMillis:swipeCount:creativeId:topsnapAudioPlaybackVolume:longformAudioPlaybackVolume:topsnapTimeViewedBeforeInteractionSeconds:topsnapVolumes:topsnapMaxContinuousTimeViewedSeconds:topsnapAudibleTimeViewedSeconds:topsnapMediaType:] */

void FUN_10b760e1c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b760e60; end: 10b760fb7; +[SOJUAdAppInstallImpressionTrack registerMessageFields:] */

void FUN_10b760e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b760ff8();
  func_0x00010b760fec();
  func_0x00010b760fb8();
  func_0x00010b760fec(param_3,param_2,PTR_s_swiped_112676f30,0,0,0);
  func_0x00010b760fd8();
  func_0x00010b760fec();
  func_0x00010b760fd8();
  func_0x00010b760fec();
  func_0x00010b760fd8();
  func_0x00010b760fec();
  func_0x00010b760fd8();
  func_0x00010b760fec();
  func_0x00010b760fb8();
  func_0x00010b760fb8();
  func_0x00010b760fb8();
  _objc_opt_class(PTR_PTR_1126e0758);
  func_0x00010b760ff8();
  func_0x00010bf06b60();
  func_0x00010b760fb8();
  func_0x00010b760fb8();
  func_0x00010bf06b60(param_3,param_2,PTR_s_topsnapMediaType_1125445e8,0,1,6,0,FUN_10b76549c,
                      FUN_10b765508,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b760fb8; end: 10b76100f;  */

void FUN_10b760fb8(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b761010; end: 10b76104b; -[SOJUAdClientRankingFeatures initWithAppVersion:deviceOs:totalUniqueSnapsViewed:numOfTapBacks:playList:playbackAudio:postRoll:snapIndexPosition:timeViewedArray:totalUniqueSnaps:isLastSnapVideo:totalUniqueAdsViewed:] */

void FUN_10b761010(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76104c; end: 10b76119b; +[SOJUAdClientRankingFeatures registerMessageFields:] */

void FUN_10b76104c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_appVersion_11259f360;
  _objc_retain(param_3);
  func_0x00010b7611d0(param_3,param_2,puVar1,0,1,6);
  func_0x00010b7611dc();
  func_0x00010b7611ec();
  func_0x00010b76119c();
  func_0x00010b76119c();
  func_0x00010b7611bc();
  func_0x00010b7611d0();
  func_0x00010b7611dc();
  func_0x00010b7611ec();
  func_0x00010b7611bc();
  func_0x00010b7611d0();
  func_0x00010b76119c();
  func_0x00010b7611dc();
  func_0x00010b7611d0();
  func_0x00010c19a460(param_3,param_2,0x6f2f0e8f0dcee4);
  func_0x00010b76119c();
  func_0x00010b7611bc();
  func_0x00010b7611d0();
  func_0x00010b76119c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76119c; end: 10b7611f7;  */

void FUN_10b76119c(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b7611f8; end: 10b761277;  */

undefined8 FUN_10b7611f8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c738;
  func_0x00010b7612c8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x11bed;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7c758;
    func_0x00010b7612c8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xfffffffff773c24f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7c778;
      func_0x00010b7612c8();
      uVar2 = 0xffffffffcf3f340b;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b761278; end: 10b7612cf;  */

undefined ** FUN_10b761278(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x88c3db1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7c758;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c738;
  if (param_1 != 0x11bed) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7c778;
  if (param_1 != -0x30c0cbf5) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b7612d0; end: 10b761383;  */

undefined8 FUN_10b7612d0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc318;
  func_0x00010b7613fc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x9df;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbc338;
    func_0x00010b7613fc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x1314f;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7c798;
      func_0x00010b7613fc();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xffffffff99f82b6e;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7c7b8;
        func_0x00010b7613fc();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x4f8a3f9a;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7c7d8;
          func_0x00010b7613fc();
          uVar2 = 0x3e4e2947;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b761384; end: 10b761403;  */

undefined ** FUN_10b761384(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x1314f) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbc338;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7c7d8;
  if (param_1 != 0x3e4e2947) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7c7b8;
  if (param_1 != 0x4f8a3f9a) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbc318;
  if (param_1 != 0x9df) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7c798;
  if (param_1 != -0x6607d492) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b761404; end: 10b761427; -[SOJUAdClientRankingModelOutput initWithModelId:score:inferenceLatency:loadingLatency:error:] */

void FUN_10b761404(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b761428; end: 10b7614db; +[SOJUAdClientRankingModelOutput registerMessageFields:] */

void FUN_10b761428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_modelId_1126119e0;
  _objc_retain(param_3);
  FUN_10b7614dc(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  func_0x00010b7614e8();
  FUN_10b7614dc();
  func_0x00010b7614e8();
  FUN_10b7614dc();
  func_0x00010b7614e8();
  FUN_10b7614dc();
  func_0x00010b7614e8();
  FUN_10b7614dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7614dc; end: 10b7614f7;  */

void FUN_10b7614dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7614f8; end: 10b76151b; -[SOJUAdCognacMetadata initWithOrgId:gameId:buildId:slotId:developerFacingRequestId:] */

void FUN_10b7614f8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76151c; end: 10b76159f; +[SOJUAdCognacMetadata registerMessageFields:] */

void FUN_10b76151c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b7615b8();
  func_0x00010b7615a0();
  func_0x00010b7615b8();
  func_0x00010b7615a0();
  func_0x00010b7615b8();
  func_0x00010b7615a0();
  func_0x00010b7615b8();
  func_0x00010b7615a0();
  func_0x00010b7615b8();
  func_0x00010b7615a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7615a0; end: 10b7615c3;  */

void FUN_10b7615a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b7615c4; end: 10b7615e3; -[SOJUAdCollectionImpressionTrack initWithTopsnapImpression:collectionItemsTrack:] */

void FUN_10b7615c4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7615e4; end: 10b761663; +[SOJUAdCollectionImpressionTrack registerMessageFields:] */

void FUN_10b7615e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0748;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b761664();
  _objc_opt_class(PTR_PTR_1126e0760);
  FUN_10b761664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b761664; end: 10b76167f;  */

void FUN_10b761664(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b761680; end: 10b7616a3; -[SOJUAdCollectionItemImpressionTrack initWithProductId:positionIndex:attachmentType:remoteWebpage:deepLink:] */

void FUN_10b761680(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7616a4; end: 10b76178b; +[SOJUAdCollectionItemImpressionTrack registerMessageFields:] */

void FUN_10b7616a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b76178c();
  func_0x00010b7617a4();
  func_0x00010b7617a4(param_3,param_2,PTR_s_positionIndex_11261eaf0,0,1,1,0);
  func_0x00010bf06b60(param_3,param_2,PTR_s_attachmentType_1125a0f28,0,1,6,0,FUN_10b765a18,
                      FUN_10b765c90,0);
  _objc_opt_class(PTR_PTR_1126e0768);
  FUN_10b76178c();
  func_0x00010b7617a4();
  _objc_opt_class(PTR_PTR_1126e0770);
  FUN_10b76178c();
  func_0x00010b7617a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76178c; end: 10b7617ab;  */

void FUN_10b76178c(void)

{
  return;
}



/* Entry: 10b7617ac; end: 10b7617ef; -[SOJUAdCommonSnapAdImpressionTrack initWithTopsnapTimeViewedSeconds:topsnapMediaDurationSeconds:longformTimeViewedSeconds:swiped:deltaBetweenReceiveAndRenderMillis:swipeCount:creativeId:topsnapAudioPlaybackVolume:topsnapTimeViewedBeforeInteractionSeconds:topsnapVolumes:topsnapMaxContinuousTimeViewedSeconds:topsnapAudibleTimeViewedSeconds:topsnapMediaType:] */

void FUN_10b7617ac(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7617f0; end: 10b761933; +[SOJUAdCommonSnapAdImpressionTrack registerMessageFields:] */

void FUN_10b7617f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b761974();
  func_0x00010b761968();
  func_0x00010b761934();
  func_0x00010b761934();
  func_0x00010b761968(param_3,param_2,PTR_s_swiped_112676f30,0,0,0);
  func_0x00010b761954();
  func_0x00010b761968();
  func_0x00010b761954();
  func_0x00010b761968();
  func_0x00010b761954();
  func_0x00010b761968();
  func_0x00010b761934();
  func_0x00010b761934();
  _objc_opt_class(PTR_PTR_1126e0758);
  func_0x00010b761974();
  func_0x00010bf06b60();
  func_0x00010b761934();
  func_0x00010b761934();
  func_0x00010bf06b60(param_3,param_2,PTR_s_topsnapMediaType_1125445e8,0,1,6,0,FUN_10b76549c,
                      FUN_10b765508,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


