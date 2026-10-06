/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a0c340; end: 100a0c36b;  */

void FUN_100a0c340(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a0c36c; end: 100a0c497; -[SCDocObjectFideliusFriendMetadataCoordinator _fetchAndObserveFideliusFriendMetadata] */

void FUN_100a0c36c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x000107c61144(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_100a0c498(uVar1);
    func_0x000107c61180();
    func_0x000107c3cbe0(param_1);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4f7c0(uVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c4da54();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  return;
}



/* Entry: 100a0c498; end: 100a0c56f;  */

void FUN_100a0c498(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126c04c0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  func_0x000107c61180();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_48);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100a0c570; end: 100a0c57b; +[SCFideliusFriendMetadata table] */

undefined * FUN_100a0c570(void)

{
  return &UNK_10f6e79d0;
}



/* Entry: 100a0c57c; end: 100a0c607;  */

void FUN_100a0c57c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0c608; end: 100a0c823; -[SCSystemJobSchedulerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0c608(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11275be64;
    func_0x000107c61148(lVar8);
  }
  lVar1 = lVar8;
  func_0x000107c4a820(lVar8);
  func_0x000107c61180();
  func_0x000107c5a74c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
  func_0x000107c3c290(param_1);
  func_0x000107c61144(auStack_58,param_1);
  puVar3 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126b6bc0;
  puVar6 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126cebd0;
  func_0x000107c5a878(PTR_PTR_1126cebd0);
  func_0x000107c61180();
  func_0x000107c4a828(puVar5);
  func_0x000107c61180();
  func_0x000107c5e8c4(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae970;
  func_0x000107c4c0f8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c5e070(puVar3);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100a0c824; end: 100a0c877; -[_TtC32SystemJobSchedulerPluginServices32SystemJobSchedulerPluginServices jobProviders] */

void FUN_100a0c824(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100a0c878();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_100a0ddc4(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100a0c878; end: 100a0ca0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100a0c878(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  long alStack_80 [2];
  long *plStack_70;
  long lStack_68;
  
  lVar8 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    auStack_a0[0] = *(undefined1 *)(lVar8 + 0x11305e800);
    FUN_10008a7c8(alStack_80,auStack_a0);
    lVar2 = alStack_80[0];
    if (alStack_80[0] != 0) {
      FUN_100083b20(alStack_80);
      lVar3 = alStack_80[0];
      if (alStack_80[0] == 0) {
        func_0x000107c61574(lVar2);
      }
      else {
        lStack_68 = 0;
        plStack_90 = &lStack_68;
        plStack_70 = &lStack_68;
        FUN_100a0dd30(FUN_100a0ddbc,alStack_80,&UNK_1040ac5ac,auStack_a0);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar2);
        lVar2 = lStack_68;
        if (lStack_68 != 0) {
          puVar5 = puVar6;
          func_0x000107c61550();
          if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
             (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar6 >> 0x3e == 0) {
              puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar6) {
                puVar4 = puVar6;
              }
              func_0x000107c60480(puVar4);
            }
            puVar5 = (undefined *)0x0;
            FUN_100a0e098(0,puVar4 + 1,1,puVar6);
          }
          uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar7 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
            FUN_100a0e098(puVar6,uVar1 + 1,1,puVar5);
            uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
          *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar2;
        }
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 6);
  return puVar6;
}



/* Entry: 100a0ca0c; end: 100a0cb2b;  */

void FUN_100a0ca0c(undefined8 *param_1,byte *param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte *param_8,
                  byte *param_9,byte *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,byte *param_14,undefined8 param_15,undefined8 param_16)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      FUN_100a0cb74(param_3,param_4,param_5,param_6,param_7);
      pcVar2 = "SCHostPrewarmManagerPluginProvider";
      uVar3 = 0x22;
      param_9 = param_3;
    }
    else if (bVar1 == 1) {
      FUN_100a0e394();
      pcVar2 = "RetryJobProcessorPluginProvider";
      uVar3 = 0x1f;
      param_9 = param_8;
    }
    else {
      FUN_100a0e4fc();
      pcVar2 = "BlizzardBackgroundUploadJobPluginProvider";
      uVar3 = 0x29;
      param_9 = param_2;
    }
  }
  else if (bVar1 == 3) {
    FUN_100a0e63c();
    pcVar2 = "ConfigManagerBackgroundSyncJobPluginProvider";
    uVar3 = 0x2c;
  }
  else if (bVar1 == 4) {
    FUN_100a0e894(param_10,param_11,param_3,param_12,param_13);
    pcVar2 = "AppInstallUpdateConversionValueJobPluginProvider";
    uVar3 = 0x30;
    param_9 = param_10;
  }
  else {
    FUN_100a0eb30(param_14,param_12,param_15,param_16);
    pcVar2 = "AppInstallAttributionJobPluginProvider";
    uVar3 = 0x26;
    param_9 = param_14;
  }
  FUN_100082720(pcVar2,uVar3,2);
  *param_1 = param_9;
  return;
}



/* Entry: 100a0cb2c; end: 100a0cb73;  */

void FUN_100a0cb2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100a0ca0c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 100a0cb74; end: 100a0cefb;  */

void FUN_100a0cb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1103c71c0;
  func_0x000107c613fc(&UNK_1103c71c0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(0x100a0cc30,puVar1);
  return;
}



/* Entry: 100a0cefc; end: 100a0cf1f;  */

void FUN_100a0cefc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0cf20; end: 100a0cf27;  */

void FUN_100a0cf20(undefined8 *param_1)

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



/* Entry: 100a0cf28; end: 100a0cf7b;  */

void FUN_100a0cf28(undefined8 *param_1)

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



/* Entry: 100a0cf7c; end: 100a0cf83;  */

void FUN_100a0cf7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10009867c();
  func_0x000107c613fc();
  FUN_100a0cff8(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a0cf84; end: 100a0cff7;  */

void FUN_100a0cf84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10009867c();
  func_0x000107c613fc();
  FUN_100a0cff8(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100a0cff8; end: 100a0d153;  */

void FUN_100a0cff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7258;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85670);
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



/* Entry: 100a0d154; end: 100a0d403; +[SCFideliusFriendMetadata immutableObjectParse:bufferSize:] */

void FUN_100a0d154(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  
  uVar4 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar4);
  puVar5 = PTR_PTR_1126c04c0;
  func_0x000107c610f4();
  lVar9 = (long)*piVar1;
  uVar8 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar8 < 5) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar12 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar12);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar9 = (long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - lVar9);
    }
    if ((6 < uVar8) && (uVar12 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar9)), uVar12 != 0)) {
      uVar16 = (ulong)*(uint *)((long)piVar1 + uVar12);
      puVar2 = (uint *)((long)((long)piVar1 + uVar12) + uVar16);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
      func_0x000107c61180();
      if (*puVar2 != 0) {
        lVar9 = (long)param_3 + uVar16 + uVar12 + (ulong)uVar4 + 10;
        do {
          uVar12 = (ulong)*(uint *)(lVar9 + -6);
          puVar14 = PTR_PTR_1126c03f8;
          func_0x000107c610f4(PTR_PTR_1126c03f8);
          lVar10 = (long)*(int *)(lVar9 + uVar12 + -6);
          lVar3 = lVar9 + (uVar12 - lVar10);
          uVar8 = *(ushort *)(lVar3 + -6);
          if (uVar8 < 5) {
            puVar15 = (undefined *)0x0;
LAB_100a0d304:
            uVar7 = 0;
          }
          else {
            uVar16 = (ulong)*(ushort *)(lVar3 + -2);
            if (uVar16 == 0) {
              puVar15 = (undefined *)0x0;
            }
            else {
              lVar3 = lVar9 + uVar12 + uVar16;
              puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar3 + (ulong)*(uint *)(lVar3 + -6) + -2);
              func_0x000107c61180();
              lVar10 = (long)*(int *)(lVar9 + uVar12 + -6);
              uVar8 = *(ushort *)(lVar9 + (uVar12 - lVar10) + -6);
            }
            if ((uVar8 < 7) || (uVar16 = (ulong)*(ushort *)(lVar9 + (uVar12 - lVar10)), uVar16 == 0)
               ) goto LAB_100a0d304;
            uVar7 = *(undefined8 *)(lVar9 + uVar12 + uVar16 + -6);
          }
          func_0x000107c47cd0(puVar14,param_2,puVar15,uVar7);
          func_0x000107c61170(puVar15);
          func_0x000107c3d798(puVar6,param_2,puVar14);
          func_0x000107c61170(puVar14);
          puVar11 = (uint *)(lVar9 + -2);
          lVar9 = lVar9 + 4;
        } while (puVar11 != puVar2 + (ulong)*puVar2 + 1);
      }
      puVar14 = puVar6;
      func_0x000107c40794(puVar6);
      func_0x000107c61170(puVar6);
      goto LAB_100a0d36c;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_100a0d36c:
  func_0x000107c491f8(puVar5,param_2,puVar13,puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100a0d404; end: 100a0d6d7; -[SCNativeWarmupManagerServiceProvider provide] */

void FUN_100a0d404(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126b73b8;
  func_0x000107c610f4(PTR_PTR_1126b73b8);
  func_0x000107c4957c();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100a0d6d8; end: 100a0d75f; -[SCFideliusDeviceInfo initWithOutBeta:version:] */

undefined1 *
FUN_100a0d6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112702d50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a0d760; end: 100a0d81b; -[SCFideliusFriendMetadata initWithUserId:devices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100a0d760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702d48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112787370);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112787370) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112787374);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112787374) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a0d81c; end: 100a0d8bf; -[SCNativeWarmupManagerServices initWithWarmupManager:periodicWarmupFactory:] */

undefined1 *
FUN_100a0d81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702be8;
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



/* Entry: 100a0d8c0; end: 100a0d8eb;  */

void FUN_100a0d8c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0d8ec; end: 100a0d95f; -[SCDocObjectFideliusFriendMetadataCoordinator _updateFideliusFriendMetadataMapWithFetchedResult:] */

/* WARNING: Possible PIC construction at 0x000100a0d920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a0d948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a0d924) */
/* WARNING: Removing unreachable block (ram,0x000100a0d94c) */

void FUN_100a0d8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a0d960; end: 100a0d967;  */

void FUN_100a0d960(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 100a0d968; end: 100a0d977; -[SCFideliusFriendMetadata userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a0d968(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112787370);
}



/* Entry: 100a0d978; end: 100a0daef; -[SCHostPrewarmManagerJobProcessor initWithCOF:warmupManager:systemJobScheduler:systemNetworkServices:asyncQueue:] */

undefined1 *
FUN_100a0d978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e7700;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_5);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x51) = 0;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a0daf0; end: 100a0db17;  */

void FUN_100a0daf0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100a0db18; end: 100a0dc3f; -[SCHostPrewarmManagerJobProcessor triggerPrewarmOnCofUpdates] */

void FUN_100a0db18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4dab4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da88();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c435e4();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100a0dc40; end: 100a0dc53;  */

void FUN_100a0dc40(long param_1,long param_2)

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



/* Entry: 100a0dc54; end: 100a0dceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0dc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11307e6d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11307e6e0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e6e8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11307e6f0) = 0;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61154(auStack_40,puVar2);
  return;
}



/* Entry: 100a0dcec; end: 100a0dd2f;  */

void FUN_100a0dcec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0dd30; end: 100a0ddbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0dd30(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11307e6d8) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_11307e6f0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0ddb4);
      (*pcVar1)();
    }
    (*param_3)();
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_11307e6e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0ddb8);
      (*pcVar1)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_11307e6e8))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0ddbc);
      (*pcVar1)();
    }
    (*param_1)(*(long *)(unaff_x20 + _DAT_11307e6e0),*(undefined8 *)(unaff_x20 + _DAT_11307e6e8));
  }
  return;
}



/* Entry: 100a0ddbc; end: 100a0ddc3;  */

void FUN_100a0ddbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  FUN_100a0ddc4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  FUN_100a0dfc8(param_1,param_2,param_3,0);
  uVar2 = *puVar1;
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100a0ddc4; end: 100a0dde3;  */

void FUN_100a0ddc4(void)

{
  func_0x000107c61168(&PTR_PTR_1129be4b0);
  return;
}



/* Entry: 100a0dde4; end: 100a0de63;  */

void FUN_100a0dde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_100a0ddc4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  FUN_100a0dfc8(param_1,param_2,param_3,0);
  uVar1 = *param_4;
  *param_4 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a0de64; end: 100a0de8f;  */

void FUN_100a0de64(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c5d00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a0de90; end: 100a0df37; -[SCHostPrewarmManagerJobProcessor triggerPrewarmOperation] */

void FUN_100a0de90(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x100a0df94;
  puStack_38 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_30,auStack_28);
  FUN_100a0df38(uVar1,&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 100a0df38; end: 100a0dfc7;  */

/* WARNING: Possible PIC construction at 0x000100a0df80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a0df84) */

void FUN_100a0df38(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  uVar3 = param_1;
  func_0x000107c61174();
  iVar2 = (int)uVar3;
  func_0x000107c612b0();
  iVar1 = 0x19;
  if (iVar2 != 0x21) {
    iVar1 = iVar2;
  }
  FUN_1009058dc(param_1,iVar1,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100a0dfc8; end: 100a0e04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0dfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11307e5a8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307e5b0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11307e5b8) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a0e04c; end: 100a0e097; -[SCJobPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0e04c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_11307e6e0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_11307e6e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307e6f0));
  return;
}



/* Entry: 100a0e098; end: 100a0e1bf;  */

ulong FUN_100a0e098(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0e1c0);
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
  FUN_100a0e21c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0e1bc);
      (*pcVar1)();
    }
    FUN_100a0e29c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100a0e1c0; end: 100a0e21b;  */

void FUN_100a0e1c0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_100a0ddc4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto FUN_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11305e8e8;
  plVar5 = (long *)&UNK_10dcd3070;
FUN_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100a0e21c; end: 100a0e29b;  */

undefined * FUN_100a0e21c(undefined *param_1,undefined *param_2)

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
    FUN_100a0e1c0();
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



/* Entry: 100a0e29c; end: 100a0e393;  */

long FUN_100a0e29c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a0e390);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a0e394);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100a0ddc4(0);
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
      FUN_100a0ddc4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a0e38c);
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



/* Entry: 100a0e394; end: 100a0e3df;  */

void FUN_100a0e394(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a0e3e0,param_1);
  return;
}



/* Entry: 100a0e3e0; end: 100a0e4e7;  */

void FUN_100a0e3e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_50 = &UNK_101485210;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1103c5408;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  FUN_1000a0a8c(0);
  puVar3 = PTR_PTR_1130cf460;
  func_0x000107c5faec(PTR_PTR_1130cf460);
  puVar4 = puVar1;
  FUN_100a0dc54(puVar1,puVar3,param_3);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(param_3);
  *param_1 = puVar4;
  return;
}



/* Entry: 100a0e4e8; end: 100a0e4fb;  */

void FUN_100a0e4e8(long param_1,long param_2)

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



/* Entry: 100a0e4fc; end: 100a0e53b;  */

void FUN_100a0e4fc(void)

{
  FUN_1000285a8(0x112d9f398,&UNK_10d93fb00);
  FUN_1000823a8(FUN_100a0e53c,0);
  return;
}



/* Entry: 100a0e53c; end: 100a0e627;  */

void FUN_100a0e53c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_40 = &UNK_1014523e8;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101443eec;
  puStack_48 = &UNK_1103bbf38;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  FUN_1000a0a8c(0);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e6e0b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e6e0b8);
  puVar3 = puVar1;
  FUN_100a0dc54(puVar1,ppuVar2,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 100a0e628; end: 100a0e63b;  */

void FUN_100a0e628(long param_1,long param_2)

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



/* Entry: 100a0e63c; end: 100a0e6bb;  */

void FUN_100a0e63c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1103c42d8;
  func_0x000107c613fc(&UNK_1103c42d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a0e6bc,puVar1);
  return;
}



/* Entry: 100a0e6bc; end: 100a0e853;  */

void FUN_100a0e6bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100083b20(&puStack_70);
  puVar2 = puStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puStack_70);
  if (puVar2 != (undefined *)0x0) {
    uVar6 = 0x800000010ef84270;
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010ef84270);
    puVar7 = puVar2;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar3);
    if ((int)puVar7 != 0) {
      puVar4 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puStack_50 = &UNK_10147db68;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101443eec;
      puStack_58 = &UNK_1103c4310;
      uStack_48 = uVar1;
      func_0x000107c60bc4(&puStack_70);
      uVar3 = uStack_48;
      func_0x000107c6157c(uVar1);
      func_0x000107c61574(uVar3);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      FUN_1000a0a8c(0);
      ppuVar5 = &PTR____CFConstantStringClassReference_110dd1958;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd1958);
      puVar7 = puVar4;
      FUN_100a0dc54(puVar4,ppuVar5,uVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(puVar2);
      func_0x000107c6142c(uVar6);
      goto LAB_100a0e838;
    }
    func_0x000107c615e8(puVar2);
  }
  puVar7 = (undefined *)0x0;
LAB_100a0e838:
  *param_1 = puVar7;
  return;
}



/* Entry: 100a0e854; end: 100a0e867;  */

void FUN_100a0e854(long param_1,long param_2)

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



/* Entry: 100a0e868; end: 100a0e893;  */

void FUN_100a0e868(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0e894; end: 100a0e95b;  */

void FUN_100a0e894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1103b9818;
  func_0x000107c613fc(&UNK_1103b9818,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_100a0e95c,puVar1);
  return;
}



/* Entry: 100a0e95c; end: 100a0eac7;  */

void FUN_100a0e95c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar8 = &UNK_1103b9860;
  uVar10 = 0x40;
  func_0x000107c613fc(&UNK_1103b9860,0x40,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar4;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  *(undefined8 *)(puVar8 + 0x28) = uVar5;
  *(undefined8 *)(puVar8 + 0x30) = uVar3;
  *(undefined8 *)(puVar8 + 0x38) = uVar6;
  puStack_70 = &UNK_1014443c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1103b9878;
  puStack_68 = puVar8;
  func_0x000107c60bc4(&puStack_90);
  puVar8 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  FUN_1000a0a8c(0);
  ppuVar9 = &PTR____CFConstantStringClassReference_110e78698;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e78698);
  puVar8 = puVar7;
  FUN_100a0dc54(puVar7,ppuVar9,uVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c6142c(uVar10);
  *param_1 = puVar8;
  return;
}



/* Entry: 100a0eac8; end: 100a0eae3;  */

void FUN_100a0eac8(void)

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



/* Entry: 100a0eae4; end: 100a0eb2f;  */

void FUN_100a0eae4(void)

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



/* Entry: 100a0eb30; end: 100a0ebd3;  */

void FUN_100a0eb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1103b9700;
  func_0x000107c613fc(&UNK_1103b9700,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100a0ebd4,puVar1);
  return;
}



/* Entry: 100a0ebd4; end: 100a0ebdf;  */

void FUN_100a0ebd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100083b20(&puStack_90);
  iVar4 = (int)puStack_90;
  func_0x000107c49d90();
  func_0x000107c61170();
  if ((iVar4 == 0) || (func_0x000106bf18e8(), (int)puStack_90 == 0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar12 + 0x68))
              (lVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar5);
    puVar6 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar7 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef80790);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar7);
    (**(code **)(lVar12 + 8))(lVar11,lVar5);
    puVar8 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar10 = &UNK_1103b9748;
    uVar7 = 0x30;
    func_0x000107c613fc(&UNK_1103b9748,0x30,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar2;
    *(undefined **)(puVar10 + 0x18) = puVar6;
    *(undefined8 *)(puVar10 + 0x20) = uVar1;
    *(undefined8 *)(puVar10 + 0x28) = uVar3;
    puStack_70 = &UNK_101443df0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101443eec;
    puStack_78 = &UNK_1103b9760;
    ppuVar9 = &puStack_90;
    puStack_68 = puVar10;
    func_0x000107c60bc4(ppuVar9);
    puVar10 = puStack_68;
    func_0x000107c6157c(uVar2);
    func_0x000107c61174(puVar6);
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(puVar10);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    FUN_1000a0a8c(0);
    ppuVar9 = &PTR____CFConstantStringClassReference_110e78758;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e78758);
    puVar10 = puVar8;
    FUN_100a0dc54(puVar8,ppuVar9,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
  }
  *param_1 = puVar10;
  return;
}



/* Entry: 100a0ebe0; end: 100a0ee37;  */

void FUN_100a0ebe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100083b20(&puStack_90);
  iVar1 = (int)puStack_90;
  func_0x000107c49d90();
  func_0x000107c61170();
  if ((iVar1 == 0) || (func_0x000106bf18e8(), (int)puStack_90 == 0)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar9 + 0x68))
              (lVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar4 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef80790);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar4);
    (**(code **)(lVar9 + 8))(lVar8,lVar2);
    puVar5 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar7 = &UNK_1103b9748;
    uVar4 = 0x30;
    func_0x000107c613fc(&UNK_1103b9748,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    *(undefined8 *)(puVar7 + 0x20) = param_4;
    *(undefined8 *)(puVar7 + 0x28) = param_5;
    puStack_70 = &UNK_101443df0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101443eec;
    puStack_78 = &UNK_1103b9760;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar6);
    puVar7 = puStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61174(puVar3);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar7);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    FUN_1000a0a8c(0);
    ppuVar6 = &PTR____CFConstantStringClassReference_110e78758;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e78758);
    puVar7 = puVar5;
    FUN_100a0dc54(puVar5,ppuVar6,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 100a0ee38; end: 100a0eeaf;  */

void FUN_100a0ee38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0eeb0; end: 100a0f1f7; -[SCSystemJobSchedulerEntryPoint _registerSystemProviders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0eeb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar11 = param_3;
  func_0x000107c61174();
  iVar1 = (int)uVar11;
  FUN_100288f58();
  if (iVar1 == 0) {
    puVar13 = PTR_PTR_1126ae520;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar4 = puVar13;
    func_0x000107c3dfc0();
    func_0x000107c61170(puVar13);
joined_r0x000100a0ef58:
    if (puVar4 == (undefined *)0x2) {
      uVar5 = param_1 + _DAT_11275be3c;
      func_0x000107c61148();
      uVar6 = uVar5;
      func_0x000107c4a824();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      puVar13 = PTR_PTR_1126d2020;
      func_0x000107c61158(PTR_PTR_1126d2020);
      uVar6 = uVar7;
      func_0x000107c6115c(uVar7,puVar13);
      uVar5 = uVar7;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
      }
      func_0x000107c61174(uVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c59b58(uVar5);
      func_0x000107c61170(uVar5);
      goto LAB_100a0f1a0;
    }
  }
  else {
    if (param_1 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = param_1 + _DAT_11275be68;
      func_0x000107c61148();
    }
    lVar2 = lVar12;
    func_0x000107c5bcac();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4f2bc();
    if ((int)lVar3 == 0) {
      if (param_1 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = (undefined *)(param_1 + _DAT_11275be40);
        func_0x000107c61148();
      }
      puVar8 = puVar13;
      func_0x000107c3dfc4();
      func_0x000107c61180();
      puVar4 = puVar8;
      func_0x000107c3dfc0();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar12);
      goto joined_r0x000100a0ef58;
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar12);
  }
  func_0x000107c61144(auStack_58,param_1);
  puVar8 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b6bc0;
  puVar13 = PTR_PTR_1126ae960;
  puVar9 = PTR_PTR_1126cebd0;
  func_0x000107c4fcb0(PTR_PTR_1126cebd0);
  func_0x000107c61180();
  func_0x000107c4a828(puVar4);
  func_0x000107c61180();
  func_0x000107c5e8c4(puVar13);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae970;
  func_0x000107c44e60(PTR_PTR_1126ae970);
  func_0x000107c61180();
  uVar11 = 0x15;
  FUN_1000819a8(0x15,0);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c61174(param_3);
  func_0x000107c5e094(puVar8);
  func_0x000107c611b0();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
LAB_100a0f1a0:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a0f1f8; end: 100a0f1ff; +[SCAttributedJobSchedulerSubtask registerSystemJobProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0f1f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be78) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a0f200; end: 100a0f207; +[SCAttributedJobSchedulerSubtask setupBackgroundWakeup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a0f200(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be78) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a0f208; end: 100a0f28b;  */

void FUN_100a0f208(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0f28c; end: 100a0f2b3;  */

undefined ** FUN_100a0f28c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0f2b4; end: 100a0f2f3;  */

void FUN_100a0f2b4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a0f298();
  FUN_100082720("SCSystemNetworkTraceServiceProviderWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a0f2f4; end: 100a0f2fb;  */

void FUN_100a0f2f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014ac878);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0f2fc; end: 100a0f37f;  */

void FUN_100a0f2fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014ac878,param_2,&UNK_1014ac87c,param_2,&UNK_1014ac8a4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0f380; end: 100a0f393;  */

undefined ** FUN_100a0f380(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0f394; end: 100a0f43b;  */

void FUN_100a0f394(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103b77b0;
  func_0x000107c613fc(&UNK_1103b77b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_100a0f43c;
  FUN_1000823a8(FUN_100a0f43c,puVar1);
  FUN_100082720("SCSystemScopedServicesScopeInitializationPluginProvider",0x37,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100a0f43c; end: 100a0f443;  */

void FUN_100a0f43c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103b6fa8;
  func_0x000107c613fc(&UNK_1103b6fa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1014342e4;
  FUN_10058fa64(&UNK_1014342e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100a0f444; end: 100a0f507;  */

void FUN_100a0f444(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103b6fa8;
  func_0x000107c613fc(&UNK_1103b6fa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1014342e4;
  FUN_10058fa64(&UNK_1014342e4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100a0f508; end: 100a0f52b;  */

void FUN_100a0f508(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0f52c; end: 100a0f563;  */

void FUN_100a0f52c(long *param_1)

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



/* Entry: 100a0f564; end: 100a0f56b;  */

void FUN_100a0f564(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0f56c; end: 100a0f597;  */

void FUN_100a0f56c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0f598; end: 100a0f5bf;  */

undefined ** FUN_100a0f598(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0f5c0; end: 100a0f5ff;  */

void FUN_100a0f5c0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a0f5a4();
  FUN_100082720("SCTemporaryFileWriterServiceProviderWrapperScopeInitializationPluginProvider",0x4c,
                2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a0f600; end: 100a0f683;  */

void FUN_100a0f600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014ac040);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0f684; end: 100a0f6ab;  */

undefined ** FUN_100a0f684(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0f6ac; end: 100a0f6eb;  */

void FUN_100a0f6ac(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a0f690();
  FUN_100082720("SCTopLevelFeatureScopeConfigLoaderServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x59,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a0f6ec; end: 100a0f6f3;  */

void FUN_100a0f6ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b9c78);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0f6f4; end: 100a0f777;  */

void FUN_100a0f6f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b9c78,param_2,&UNK_1014b9c7c,param_2,&UNK_1014b9ca4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0f778; end: 100a0f783;  */

undefined ** FUN_100a0f778(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0f784; end: 100a0f80f;  */

void FUN_100a0f784(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a0f810,param_1);
  return;
}



/* Entry: 100a0f810; end: 100a0f817;  */

void FUN_100a0f810(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bccc4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0f818; end: 100a0f89b;  */

void FUN_100a0f818(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bccc4,param_2,FUN_100a0f89c,param_2,&UNK_1014bccc8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0f89c; end: 100a0f8c3;  */

void FUN_100a0f89c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a0f8c4; end: 100a0f8d3;  */

void FUN_100a0f8c4(long *param_1)

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
  long unaff_x20;
  undefined8 uVar10;
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
  FUN_10009e764();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a7410;
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
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(*(undefined8 *)(lVar1 + 0x10));
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 100a0f8d4; end: 100a0fc8f;  */

void FUN_100a0f8d4(long *param_1,long param_2)

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
  FUN_10009e764();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a7410;
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
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 100a0fc90; end: 100a0fc93; -[SCTweakFunctionalitySetupEntryPoint begin] */

void FUN_100a0fc90(void)

{
  return;
}



/* Entry: 100a0fc94; end: 100a0fcdf;  */

void FUN_100a0fc94(void)

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



/* Entry: 100a0fce0; end: 100a0fceb;  */

undefined ** FUN_100a0fce0(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0fcec; end: 100a0fd77;  */

void FUN_100a0fcec(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a0fd78,param_1);
  return;
}



/* Entry: 100a0fd78; end: 100a0fd7f;  */

void FUN_100a0fd78(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bd0ec);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0fd80; end: 100a0fe03;  */

void FUN_100a0fd80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bd0ec,param_2,FUN_100a0fe04,param_2,&UNK_1014bd0f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0fe04; end: 100a0fe2b;  */

void FUN_100a0fe04(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}


