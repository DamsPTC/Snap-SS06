/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a6d9d4; end: 103a6da33; -[_TtC30MemoriesSaveLoggingServicesAPI27MemoriesSaveLoggingServices init] */

void FUN_103a6d9d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSaveLoggingServicesAPI.MemoriesSaveLoggingServices",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6da00);
  (*pcVar1)();
}



/* Entry: 103a6da34; end: 103a6da6b; -[_TtC30MemoriesSaveLoggingServicesAPI27MemoriesSaveLoggingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a6da50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a6da54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6da34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9bd0));
  return;
}



/* Entry: 103a6da6c; end: 103a6da7f;  */

bool FUN_103a6da6c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a6da80; end: 103a6db2b;  */

void FUN_103a6da80(void)

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



/* Entry: 103a6db2c; end: 103a6db2f;  */

void FUN_103a6db2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43040;
  func_0x000107c61520(&UNK_10dc43040,&UNK_1106c36d0);
  puRam0000000112fd9c08 = puVar1;
  return;
}



/* Entry: 103a6db30; end: 103a6db6f;  */

void FUN_103a6db30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43040;
  func_0x000107c61520(&UNK_10dc43040,&UNK_1106c36d0);
  puRam0000000112fd9c08 = puVar1;
  return;
}



/* Entry: 103a6db70; end: 103a6dcd3;  */

int FUN_103a6db70(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a6dbec;
        goto LAB_103a6dbd0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a6dbd0:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_103a6dbec:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a6dcd4; end: 103a6dce3; -[MemoriesPrivateEntriesPurgeServices privateEntriesPurger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6dcd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fd9c10));
  return;
}



/* Entry: 103a6dce4; end: 103a6dd7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6dce4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9c10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6dd7c; end: 103a6dddb; -[MemoriesPrivateEntriesPurgeServices init] */

void FUN_103a6dd7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesPrivateEntriesPurgeServices.MemoriesPrivateEntriesPurgeServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6dda8);
  (*pcVar1)();
}



/* Entry: 103a6dddc; end: 103a6ddff; -[MemoriesPrivateEntriesPurgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6dddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fd9c10));
  return;
}



/* Entry: 103a6de00; end: 103a6deab;  */

void FUN_103a6de00(void)

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



/* Entry: 103a6deac; end: 103a6deaf;  */

void FUN_103a6deac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43170;
  func_0x000107c61520(&UNK_10dc43170,&UNK_1106c3898);
  puRam0000000112fd9c40 = puVar1;
  return;
}



/* Entry: 103a6deb0; end: 103a6deef;  */

void FUN_103a6deb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43170;
  func_0x000107c61520(&UNK_10dc43170,&UNK_1106c3898);
  puRam0000000112fd9c40 = puVar1;
  return;
}



/* Entry: 103a6def0; end: 103a6e063;  */

void FUN_103a6def0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a6e064; end: 103a6e0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e064(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9c48) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6e0fc; end: 103a6e15b; -[_TtC32MemoriesCoreDataFetchingServices32MemoriesCoreDataFetchingServices init] */

void FUN_103a6e0fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesCoreDataFetchingServices.MemoriesCoreDataFetchingServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6e128);
  (*pcVar1)();
}



/* Entry: 103a6e15c; end: 103a6e16b; -[_TtC32MemoriesCoreDataFetchingServices32MemoriesCoreDataFetchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9c48));
  return;
}



/* Entry: 103a6e16c; end: 103a6e1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e16c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9c78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6e1b8; end: 103a6e1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e1b8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fd9c78) = param_1;
  func_0x0001002c1cbc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6e1f4; end: 103a6e24f; -[_TtC23MemoriesGetSnapServices23MemoriesGetSnapServices init] */

void FUN_103a6e1f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesGetSnapServices.MemoriesGetSnapServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6e220);
  (*pcVar1)();
}



/* Entry: 103a6e250; end: 103a6e273; -[_TtC23MemoriesGetSnapServices23MemoriesGetSnapServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9c78));
  return;
}



/* Entry: 103a6e274; end: 103a6e31f;  */

void FUN_103a6e274(void)

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



/* Entry: 103a6e320; end: 103a6e323;  */

void FUN_103a6e320(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43290;
  func_0x000107c61520(&UNK_10dc43290,&UNK_1106c3a08);
  puRam0000000112fd9ca8 = puVar1;
  return;
}



/* Entry: 103a6e324; end: 103a6e363;  */

void FUN_103a6e324(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43290;
  func_0x000107c61520(&UNK_10dc43290,&UNK_1106c3a08);
  puRam0000000112fd9ca8 = puVar1;
  return;
}



/* Entry: 103a6e364; end: 103a6e4eb;  */

void FUN_103a6e364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a6e4ec; end: 103a6e597;  */

void FUN_103a6e4ec(void)

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



/* Entry: 103a6e598; end: 103a6e59b;  */

void FUN_103a6e598(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc433d0;
  func_0x000107c61520(&UNK_10dc433d0,&UNK_1106c3ba0);
  puRam0000000112fd9cb0 = puVar1;
  return;
}



/* Entry: 103a6e59c; end: 103a6e5db;  */

void FUN_103a6e59c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc433d0;
  func_0x000107c61520(&UNK_10dc433d0,&UNK_1106c3ba0);
  puRam0000000112fd9cb0 = puVar1;
  return;
}



/* Entry: 103a6e5dc; end: 103a6e74f;  */

void FUN_103a6e5dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a6e750; end: 103a6e7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e750(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9cb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6e7e8; end: 103a6e847; -[_TtC32MemoriesSnapMediaHelpingServices32MemoriesSnapMediaHelpingServices init] */

void FUN_103a6e7e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapMediaHelpingServices.MemoriesSnapMediaHelpingServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6e814);
  (*pcVar1)();
}



/* Entry: 103a6e848; end: 103a6e857; -[_TtC32MemoriesSnapMediaHelpingServices32MemoriesSnapMediaHelpingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9cb8));
  return;
}



/* Entry: 103a6e858; end: 103a6e8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e858(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9ce8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6e8a4; end: 103a6e8d7;  */

void FUN_103a6e8a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a6e8d8; end: 103a6e8e7; -[MemoriesValdiDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e8d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9ce8));
  return;
}



/* Entry: 103a6e8e8; end: 103a6e94b; -[MemoriesValdiDataServices getMemTwoDataService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6e8e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001000d224c(&uStack_38);
  FUN_103edf0bc();
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a6e94c; end: 103a6e963;  */

void FUN_103a6e94c(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000103a6e960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x18))();
  return;
}



/* Entry: 103a6e964; end: 103a6e9d3;  */

undefined8 FUN_103a6e964(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 1;
  (**(code **)(param_2 + 0x20))(1,param_1);
  uVar2 = 0x112fd9d18;
  func_0x0001000285a8(0x112fd9d18,&UNK_10dc43510);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_103a6e9d4,0,uVar2);
  func_0x000107c61574(uVar1);
  return uVar3;
}



/* Entry: 103a6e9d4; end: 103a6ea43;  */

void FUN_103a6e9d4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  lVar1 = *param_2;
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0xff;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar4 = *(undefined1 *)(lVar1 + 0x30);
    func_0x000101dcbee8(uVar2,uVar3,uVar4);
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 103a6ea44; end: 103a6ea57;  */

bool FUN_103a6ea44(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a6ea58; end: 103a6eb03;  */

void FUN_103a6ea58(void)

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



/* Entry: 103a6eb04; end: 103a6eb07;  */

void FUN_103a6eb04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43590;
  func_0x000107c61520(&UNK_10dc43590,&UNK_1106c3d90);
  puRam0000000112fd9d20 = puVar1;
  return;
}



/* Entry: 103a6eb08; end: 103a6eb47;  */

void FUN_103a6eb08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43590;
  func_0x000107c61520(&UNK_10dc43590,&UNK_1106c3d90);
  puRam0000000112fd9d20 = puVar1;
  return;
}



/* Entry: 103a6eb48; end: 103a6ecbb;  */

void FUN_103a6eb48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a6ecbc; end: 103a6ed53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ecbc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9d28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6ed54; end: 103a6edb3; -[_TtC50MemoriesOpportunisticRetranscodeRepositoryServices50MemoriesOpportunisticRetranscodeRepositoryServices init] */

void FUN_103a6ed54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesOpportunisticRetranscodeRepositoryServices.MemoriesOpportunisticRetranscodeRepositoryServices"
                      ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6ed80);
  (*pcVar1)();
}



/* Entry: 103a6edb4; end: 103a6edc3; -[_TtC50MemoriesOpportunisticRetranscodeRepositoryServices50MemoriesOpportunisticRetranscodeRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6edb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9d28));
  return;
}



/* Entry: 103a6edc4; end: 103a6ee1f;  */

int FUN_103a6edc4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103a6ee20; end: 103a6ee4b;  */

undefined8 FUN_103a6ee20(void)

{
  return 1;
}



/* Entry: 103a6ee4c; end: 103a6eef7;  */

void FUN_103a6ee4c(void)

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



/* Entry: 103a6eef8; end: 103a6ef43;  */

undefined1  [16] FUN_103a6eef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0x53636f4470616e73;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000011;
  }
  uVar1 = 0xed0000644970616e;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x800000010f191670;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 103a6ef44; end: 103a6f02f;  */

void FUN_103a6ef44(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef0e6e990)) {
    uVar1 = 0xd000000000000011;
    func_0x000107c605b8(0xd000000000000011,0x800000010f191670,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x53636f4470616e73;
      if ((param_2 == 0x53636f4470616e73) && (param_3 == -0x12ffff9bb68f9e92)) {
        func_0x000107c6142c(0xed0000644970616e);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x53636f4470616e73,0xed0000644970616e,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_103a6efb0;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_103a6efb0:
  *param_1 = uVar2;
  return;
}



/* Entry: 103a6f030; end: 103a6f047;  */

undefined1  [16] FUN_103a6f030(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103a6f048; end: 103a6f097;  */

void FUN_103a6f048(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103a6f7f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103a6f098; end: 103a6f0b7;  */

undefined8 FUN_103a6f098(void)

{
  return 1;
}



/* Entry: 103a6f0b8; end: 103a6f107;  */

void FUN_103a6f0b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103a6f878();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103a6f108; end: 103a6f11b;  */

undefined8 FUN_103a6f108(void)

{
  return 1;
}



/* Entry: 103a6f11c; end: 103a6f197;  */

void FUN_103a6f11c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x305f && param_3 == -0x1e00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x5f;
    func_0x000107c605b8(0x305f,0xe200000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 103a6f198; end: 103a6f1a3;  */

undefined1  [16] FUN_103a6f198(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103a6f1a4; end: 103a6f1f3;  */

void FUN_103a6f1a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103a6f838();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103a6f1f4; end: 103a6f1ff;  */

long FUN_103a6f1f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[2] == '\x01') {
    return 0;
  }
  if ((lVar1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,param_1[1],*param_2,param_2[1],0);
  return lVar1;
}



/* Entry: 103a6f200; end: 103a6f447;  */

void FUN_103a6f200(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112fd9d58;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112fd9d58,&UNK_10dc436d0);
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = (long)&lStack_90 - extraout_x8;
  lVar4 = 0x112fd9d60;
  func_0x0001000285a8(0x112fd9d60,&UNK_10dc436d8);
  lStack_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = lVar9 - extraout_x8_00;
  lVar5 = 0x112fd9d68;
  func_0x0001000285a8(0x112fd9d68,&UNK_10dc436e0);
  lStack_80 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = lVar7 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_103a6f7f8();
  puVar6 = &UNK_1106c41b0;
  func_0x000107c606ec(lVar8,&UNK_1106c41b0,&UNK_1106c41b0,param_1,uVar1,uVar2);
  if (param_4 == '\x01') {
    uStack_51 = 1;
    func_0x000103a6f838();
    func_0x000107c6051c(lVar9,&UNK_1106c42d0,&uStack_51,lVar5,&UNK_1106c42d0,puVar6);
    func_0x000107c6053c(uStack_78,uStack_70);
    (**(code **)(lStack_88 + 8))(lVar9,lVar3);
    (**(code **)(lStack_80 + 8))(lVar8,lVar5);
  }
  else {
    uStack_52 = 0;
    func_0x000103a6f878();
    func_0x000107c6051c(lVar7,&UNK_1106c4240,&uStack_52,lVar5,&UNK_1106c4240,puVar6);
    func_0x000107c6053c(uStack_78,uStack_70);
    (**(code **)(lStack_90 + 8))(lVar7,lVar4);
    (**(code **)(lStack_80 + 8))(lVar8,lVar5);
  }
  return;
}



/* Entry: 103a6f448; end: 103a6f473;  */

void FUN_103a6f448(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_103a6f8b8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 103a6f474; end: 103a6f48f;  */

void FUN_103a6f474(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103a6f200(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Entry: 103a6f490; end: 103a6f497;  */

undefined8 FUN_103a6f490(void)

{
  return 1;
}



/* Entry: 103a6f498; end: 103a6f513;  */

void FUN_103a6f498(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a6f514; end: 103a6f52f;  */

undefined1  [16] FUN_103a6f514(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000007265;
  auVar1._0_8_ = 0x696669746e656469;
  return auVar1;
}



/* Entry: 103a6f530; end: 103a6f5bb;  */

void FUN_103a6f530(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x69;
  if (param_2 == 0x696669746e656469 && param_3 == -0x15ffffffffff8d9b) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x696669746e656469,0xea00000000007265,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 103a6f5bc; end: 103a6f5c7;  */

undefined1  [16] FUN_103a6f5bc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103a6f5c8; end: 103a6f617;  */

void FUN_103a6f5c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103a6fcf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103a6f618; end: 103a6f643;  */

undefined8 FUN_103a6f618(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[2] == '\x01') {
    return 0;
  }
  if (((uVar1 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(uVar1,param_1[1],*param_2,param_2[1],0), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 103a6f644; end: 103a6f753;  */

void FUN_103a6f644(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar3 = 0x112fd9d88;
  func_0x0001000285a8(0x112fd9d88,&UNK_10dc436e8);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000103a6fcf8();
  func_0x000107c606ec(auStack_80 + -extraout_x8,&UNK_1106c4120,&UNK_1106c4120,param_1,uVar1,uVar2);
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x000103a6fd38();
  func_0x000107c60554(&uStack_78);
  (**(code **)(lVar4 + 8))(auStack_80 + -extraout_x8,lVar3);
  return;
}



/* Entry: 103a6f754; end: 103a6f77f;  */

void FUN_103a6f754(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_103a6fd78();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Entry: 103a6f780; end: 103a6f79b;  */

void FUN_103a6f780(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103a6f644(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Entry: 103a6f79c; end: 103a6f7f7;  */

long FUN_103a6f79c(long param_1,long param_2,char param_3,long param_4,long param_5,char param_6)

{
  if (param_3 == '\x01') {
    if (param_6 != '\x01') {
      return 0;
    }
  }
  else if (param_6 == '\x01') {
    return 0;
  }
  if ((param_1 == param_4) && (param_2 == param_5)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_1,param_2,param_4,param_5,0);
  return param_1;
}



/* Entry: 103a6f7f8; end: 103a6f8b7;  */

void FUN_103a6f7f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43d48;
  func_0x000107c61520(&UNK_10dc43d48,&UNK_1106c41b0);
  puRam0000000112fd9d70 = puVar1;
  return;
}



/* Entry: 103a6f8b8; end: 103a6fc7b;  */

/* WARNING: Removing unreachable block (ram,0x000103a6fb6c) */
/* WARNING: Removing unreachable block (ram,0x000103a6fbb4) */

undefined8 * FUN_103a6f8b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  char cStack_52;
  char cStack_51;
  
  lVar6 = 0x112fd9e18;
  func_0x0001000285a8(0x112fd9e18,&UNK_10dc43da0);
  lStack_88 = *(long *)(lVar6 + -8);
  lStack_78 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = 0x112fd9e20;
  lStack_80 = (long)&puStack_90 - extraout_x8;
  func_0x0001000285a8(0x112fd9e20,&UNK_10dc43da8);
  puVar12 = *(undefined8 **)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(puVar12[8] + 0xf & 0xfffffffffffffff0);
  lVar11 = ((long)&puStack_90 - extraout_x8) - extraout_x8_00;
  lVar7 = 0x112fd9e28;
  func_0x0001000285a8(0x112fd9e28,&UNK_10dc43db0);
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar11 - extraout_x8_01;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar9 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_103a6f7f8();
  func_0x000107c606e0(lVar10,&UNK_1106c41b0,&UNK_1106c41b0,lVar9,uVar1,uVar2);
  lVar5 = lStack_78;
  lVar9 = lStack_80;
  if (unaff_x21 == 0) {
    lVar8 = lVar7;
    puStack_90 = puVar12;
    func_0x000107c60514();
    if ((*(long *)(lVar8 + 0x10) != 0) &&
       (cVar3 = *(char *)(lVar8 + 0x20), *(long *)(lVar8 + 0x10) == 1 && cVar3 != '\x02')) {
      if (cVar3 == '\x01') {
        lVar6 = lVar8;
        cStack_51 = cVar3;
        func_0x000103a6f838();
        puVar12 = (undefined8 *)&UNK_1106c42d0;
        func_0x000107c604cc(lVar9,&UNK_1106c42d0,&cStack_51,lVar7,&UNK_1106c42d0,lVar6);
        func_0x000107c604f4();
        (**(code **)(lStack_88 + 8))(lVar9,lVar5);
        (**(code **)(lVar13 + 8))(lVar10,lVar7);
        func_0x000107c615e8(lVar8);
      }
      else {
        lVar9 = lVar8;
        cStack_52 = cVar3;
        func_0x000103a6f878();
        puVar12 = (undefined8 *)&UNK_1106c4240;
        func_0x000107c604cc(lVar11,&UNK_1106c4240,&cStack_52,lVar7,&UNK_1106c4240,lVar9);
        func_0x000107c604f4();
        (*(code *)puStack_90[1])(lVar11,lVar6);
        (**(code **)(lVar13 + 8))(lVar10,lVar7);
        func_0x000107c615e8(lVar8);
      }
      func_0x0001000834e4(param_1);
      return puVar12;
    }
    lVar9 = 0;
    func_0x000107c60344();
    puVar12 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
    func_0x000107c613f8();
    lVar6 = 0x112da1fc8;
    func_0x0001000285a8(0x112da1fc8,&UNK_10dae6550);
    iVar4 = *(int *)(lVar6 + 0x30);
    *puVar12 = &UNK_1106c4010;
    func_0x000107c604d0(lVar7);
    func_0x000107c6033c((long)puVar12 + (long)iVar4);
    (**(code **)(*(long *)(lVar9 + -8) + 0x68))
              (puVar12,*(undefined4 *)
                        PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_11034e580,
               lVar9);
    func_0x000107c61654();
    (**(code **)(lVar13 + 8))(lVar10,lVar7);
    func_0x000107c615e8(lVar8);
  }
  func_0x0001000834e4(param_1);
  return puVar12;
}



/* Entry: 103a6fc7c; end: 103a6fd77;  */

undefined8
FUN_103a6fc7c(ulong param_1,long param_2,char param_3,ulong param_4,long param_5,char param_6)

{
  if (param_3 == '\x01') {
    if (param_6 != '\x01') {
      return 0;
    }
  }
  else if (param_6 == '\x01') {
    return 0;
  }
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (func_0x000107c605b8(param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return 0;
  }
  return 1;
}



/* Entry: 103a6fd78; end: 103a6fea7;  */

long FUN_103a6fd78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [8];
  long alStack_68 [3];
  
  lVar3 = 0x112fd9e08;
  func_0x0001000285a8(0x112fd9e08,&UNK_10dc43d98);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  lVar5 = lVar4;
  func_0x000103a6fcf8();
  func_0x000107c606e0(auStack_70 + -extraout_x8,&UNK_1106c4120,&UNK_1106c4120,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    func_0x000103a7066c();
    func_0x000107c60508(alStack_68);
    (**(code **)(lVar6 + 8))(auStack_70 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    alStack_68[0] = lVar4;
  }
  return alStack_68[0];
}



/* Entry: 103a6fea8; end: 103a6feab;  */

void FUN_103a6fea8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc436f0;
  func_0x000107c61520(&UNK_10dc436f0,&UNK_1106c3f80);
  puRam0000000112fd9da0 = puVar1;
  return;
}



/* Entry: 103a6feac; end: 103a6feeb;  */

void FUN_103a6feac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc436f0;
  func_0x000107c61520(&UNK_10dc436f0,&UNK_1106c3f80);
  puRam0000000112fd9da0 = puVar1;
  return;
}



/* Entry: 103a6feec; end: 103a6ff2f;  */

undefined8 FUN_103a6feec(void)

{
  return 0;
}



/* Entry: 103a6ff30; end: 103a6ffcb;  */

undefined8 * FUN_103a6ff30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101dcbee8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103a6ffcc; end: 103a7000f;  */

undefined8 * FUN_103a6ffcc(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000101ddafcc(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103a70010; end: 103a7033f;  */

int FUN_103a70010(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a70340; end: 103a7037f;  */

void FUN_103a70340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9da8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43a08;
  func_0x000107c61520(&UNK_10dc43a08,&UNK_1106c42d0);
  puRam0000000112fd9da8 = puVar1;
  return;
}



/* Entry: 103a70380; end: 103a70383;  */

void FUN_103a70380(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43ac0;
  func_0x000107c61520(&UNK_10dc43ac0,&UNK_1106c4240);
  puRam0000000112fd9db0 = puVar1;
  return;
}



/* Entry: 103a70384; end: 103a703c3;  */

void FUN_103a70384(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43ac0;
  func_0x000107c61520(&UNK_10dc43ac0,&UNK_1106c4240);
  puRam0000000112fd9db0 = puVar1;
  return;
}



/* Entry: 103a703c4; end: 103a703c7;  */

void FUN_103a703c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43b78;
  func_0x000107c61520(&UNK_10dc43b78,&UNK_1106c41b0);
  puRam0000000112fd9db8 = puVar1;
  return;
}



/* Entry: 103a703c8; end: 103a70407;  */

void FUN_103a703c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43b78;
  func_0x000107c61520(&UNK_10dc43b78,&UNK_1106c41b0);
  puRam0000000112fd9db8 = puVar1;
  return;
}



/* Entry: 103a70408; end: 103a7040b;  */

void FUN_103a70408(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43c30;
  func_0x000107c61520(&UNK_10dc43c30,&UNK_1106c4120);
  puRam0000000112fd9dc0 = puVar1;
  return;
}



/* Entry: 103a7040c; end: 103a7044b;  */

void FUN_103a7040c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43c30;
  func_0x000107c61520(&UNK_10dc43c30,&UNK_1106c4120);
  puRam0000000112fd9dc0 = puVar1;
  return;
}



/* Entry: 103a7044c; end: 103a7044f;  */

void FUN_103a7044c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43bc8;
  func_0x000107c61520(&UNK_10dc43bc8,&UNK_1106c4120);
  puRam0000000112fd9dc8 = puVar1;
  return;
}



/* Entry: 103a70450; end: 103a7048f;  */

void FUN_103a70450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43bc8;
  func_0x000107c61520(&UNK_10dc43bc8,&UNK_1106c4120);
  puRam0000000112fd9dc8 = puVar1;
  return;
}



/* Entry: 103a70490; end: 103a70493;  */

void FUN_103a70490(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43ba0;
  func_0x000107c61520(&UNK_10dc43ba0,&UNK_1106c4120);
  puRam0000000112fd9dd0 = puVar1;
  return;
}



/* Entry: 103a70494; end: 103a704d3;  */

void FUN_103a70494(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43ba0;
  func_0x000107c61520(&UNK_10dc43ba0,&UNK_1106c4120);
  puRam0000000112fd9dd0 = puVar1;
  return;
}



/* Entry: 103a704d4; end: 103a704d7;  */

void FUN_103a704d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43a58;
  func_0x000107c61520(&UNK_10dc43a58,&UNK_1106c4240);
  puRam0000000112fd9dd8 = puVar1;
  return;
}



/* Entry: 103a704d8; end: 103a70517;  */

void FUN_103a704d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43a58;
  func_0x000107c61520(&UNK_10dc43a58,&UNK_1106c4240);
  puRam0000000112fd9dd8 = puVar1;
  return;
}



/* Entry: 103a70518; end: 103a7051b;  */

void FUN_103a70518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc43a30;
  func_0x000107c61520(&UNK_10dc43a30,&UNK_1106c4240);
  puRam0000000112fd9de0 = puVar1;
  return;
}


