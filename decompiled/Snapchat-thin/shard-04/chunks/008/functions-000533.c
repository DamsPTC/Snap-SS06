/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038e3468; end: 1038e349f;  */

void FUN_1038e3468(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ee20();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038e34a0; end: 1038e34bf;  */

void FUN_1038e34a0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001038e27c4(param_1,*(undefined8 *)(unaff_x20 + 0x10),&SUB_100fa1670);
  return;
}



/* Entry: 1038e34c0; end: 1038e35d3;  */

void FUN_1038e34c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038e35d4; end: 1038e35f3;  */

void FUN_1038e35d4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1038e35f4; end: 1038e3613; -[SCMemoriesQuickCutSourceItem description] */

void FUN_1038e35f4(void)

{
  FUN_1038e38e0();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038e3614; end: 1038e365b; -[SCMemoriesQuickCutSourceItem init] */

void FUN_1038e3614(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MemoriesQuickCutScopeAPI/MemoriesQuickCutSourceItemWrapper.swift",0x40,2,0x3f
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e365c);
  (*pcVar1)();
}



/* Entry: 1038e365c; end: 1038e365f; -[SCMemoriesQuickCutSourceItem copyWithZone:] */

void FUN_1038e365c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1038e3660; end: 1038e3697; +[SCMemoriesQuickCutSourceItem memories:] */

void FUN_1038e3660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1038e3964();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e3698; end: 1038e36a3; +[SCMemoriesQuickCutSourceItem snap:] */

void FUN_1038e3698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x1038e39f0)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e36a4; end: 1038e36af; +[SCMemoriesQuickCutSourceItem entry:] */

void FUN_1038e36a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*(code *)0x1038e3a80)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e36b0; end: 1038e36ef;  */

void FUN_1038e36b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e36f0; end: 1038e37df; +[SCMemoriesQuickCutSourceItem phAsset:] */

void FUN_1038e36f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001038e3b10();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038e37e0; end: 1038e3853; -[SCMemoriesQuickCutSourceItem matchMemories:snap:entry:phAsset:] */

void FUN_1038e37e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x0001038e3728(FUN_1038e3d68,auStack_40,0x1038e3d78,auStack_60,0x1038e3d7c,auStack_80,
                      0x1038e3d80,auStack_a0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1038e3854; end: 1038e3887;  */

void FUN_1038e3854(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038e3888; end: 1038e38df; -[SCMemoriesQuickCutSourceItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038e38a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e38a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e3888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112facc68));
  return;
}



/* Entry: 1038e38e0; end: 1038e3963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e38e0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_112facc60);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(long *)(param_1 + _DAT_112facc68) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e390c);
        (*pcVar2)();
      }
    }
    else if (*(long *)(param_1 + _DAT_112facc70) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e393c);
      (*pcVar2)();
    }
  }
  else if (bVar1 == 2) {
    if (*(long *)(param_1 + _DAT_112facc78) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e3928);
      (*pcVar2)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112facc80) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e3954);
    (*pcVar2)();
  }
  return;
}



/* Entry: 1038e3964; end: 1038e3b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e3964(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1038e3ba0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112facc60) = 0;
  *(long *)(lVar3 + _DAT_112facc68) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112facc70) = 0;
  *(undefined8 *)(lVar3 + _DAT_112facc78) = 0;
  *(undefined8 *)(lVar3 + _DAT_112facc80) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038e3ba0; end: 1038e3bbf;  */

void FUN_1038e3ba0(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe1d0);
  return;
}



/* Entry: 1038e3bc0; end: 1038e3d27;  */

int FUN_1038e3bc0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038e3c3c;
        goto LAB_1038e3c20;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038e3c20:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1038e3c3c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038e3d28; end: 1038e3d67;  */

void FUN_1038e3d28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faccb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1f874;
  func_0x000107c61520(&UNK_10dc1f874,&UNK_1106a8038);
  puRam0000000112faccb0 = puVar1;
  return;
}



/* Entry: 1038e3d68; end: 1038e3d83;  */

void FUN_1038e3d68(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001038e3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1038e3d84; end: 1038e3dd3;  */

void FUN_1038e3d84(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112faccb8 != 0) {
    return;
  }
  puVar1 = &UNK_1106a80e8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112faccb8 = param_1;
  return;
}



/* Entry: 1038e3dd4; end: 1038e3de3; -[QuickCutLoggingServices logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e3dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112faccc8));
  return;
}



/* Entry: 1038e3de4; end: 1038e3f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038e3de4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112faccc0) = param_1;
  func_0x000107c6157c(param_1);
  uVar1 = 0x112faccd0;
  func_0x0001000285a8(0x112faccd0,&UNK_10dc1f980);
  pcVar2 = FUN_1038e3f74;
  func_0x0001000cb480(FUN_1038e3f74,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  *(code **)(unaff_x20 + _DAT_112faccc8) = pcVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 1038e3f74; end: 1038e3f7f;  */

void FUN_1038e3f74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1038e3f80; end: 1038e3fdf; -[QuickCutLoggingServices init] */

void FUN_1038e3f80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutLoggingServicesAPI.QuickCutLoggingServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e3fac);
  (*pcVar1)();
}



/* Entry: 1038e3fe0; end: 1038e4017; -[QuickCutLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e3fe0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112faccc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112faccc8));
  return;
}



/* Entry: 1038e4018; end: 1038e4037;  */

void FUN_1038e4018(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe2b0);
  return;
}



/* Entry: 1038e4038; end: 1038e4047; -[QuickCutSelectionConfigLoggingServices logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e4038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112facd08));
  return;
}



/* Entry: 1038e4048; end: 1038e41d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038e4048(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112facd00) = param_1;
  func_0x000107c6157c(param_1);
  uVar1 = 0x112facd10;
  func_0x0001000285a8(0x112facd10,&UNK_10dc1f9d0);
  pcVar2 = FUN_1038e41d8;
  func_0x0001000cb480(FUN_1038e41d8,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  *(code **)(unaff_x20 + _DAT_112facd08) = pcVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 1038e41d8; end: 1038e41e3;  */

void FUN_1038e41d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1038e41e4; end: 1038e4243; -[QuickCutSelectionConfigLoggingServices init] */

void FUN_1038e41e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutLoggingServicesAPI.QuickCutSelectionConfigLoggingServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e4210);
  (*pcVar1)();
}



/* Entry: 1038e4244; end: 1038e427b; -[QuickCutSelectionConfigLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e4244(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112facd00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112facd08));
  return;
}



/* Entry: 1038e427c; end: 1038e429b;  */

void FUN_1038e427c(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe378);
  return;
}



/* Entry: 1038e429c; end: 1038e42af;  */

bool FUN_1038e429c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038e42b0; end: 1038e44cf;  */

void FUN_1038e42b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xeb000000006c6c6f;
  uVar4 = 0x725f6172656d6163;
  if (cVar3 != '\x01') {
    uVar1 = 0xeb0000000072635f;
    uVar4 = 0x646e615f70616e73;
  }
  uVar2 = 0xea00000000007972;
  uVar5 = 0x746e655f70616e73;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038e44d0; end: 1038e4543;  */

void FUN_1038e44d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0xeb000000006c6c6f;
  uVar3 = 0x725f6172656d6163;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xeb0000000072635f;
    uVar3 = 0x646e615f70616e73;
  }
  uVar2 = 0xea00000000007972;
  uVar4 = 0x746e655f70616e73;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1038e4544; end: 1038e45a7;  */

ulong FUN_1038e4544(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1038e45a8; end: 1038e45ab;  */

void FUN_1038e45a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112facd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1fa10;
  func_0x000107c61520(&UNK_10dc1fa10,&UNK_1106a8178);
  puRam0000000112facd40 = puVar1;
  return;
}



/* Entry: 1038e45ac; end: 1038e45eb;  */

void FUN_1038e45ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112facd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1fa10;
  func_0x000107c61520(&UNK_10dc1fa10,&UNK_1106a8178);
  puRam0000000112facd40 = puVar1;
  return;
}



/* Entry: 1038e45ec; end: 1038e4767;  */

int FUN_1038e45ec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038e4668;
        goto LAB_1038e464c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038e464c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1038e4668:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038e4768; end: 1038e47a7;  */

void FUN_1038e4768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112face10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1fad8;
  func_0x000107c61520(&UNK_10dc1fad8,&UNK_1106a8260);
  puRam0000000112face10 = puVar1;
  return;
}



/* Entry: 1038e47a8; end: 1038e4923;  */

void FUN_1038e47a8(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x5f796c68746e6f6d;
  if (cVar2 != '\x01') {
    uVar1 = 0x7972656c6c6167;
  }
  uVar3 = 0xed00007061636572;
  if (cVar2 != '\x01') {
    uVar3 = 0xe700000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038e4924; end: 1038e499b;  */

void FUN_1038e4924(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1038e499c; end: 1038e4b63;  */

void FUN_1038e499c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x5f796c68746e6f6d;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x7972656c6c6167;
  }
  uVar2 = 0xed00007061636572;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1038e4b64; end: 1038e4ba3;  */

void FUN_1038e4b64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112face70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1fba8;
  func_0x000107c61520(&UNK_10dc1fba8,&UNK_1106a8348);
  puRam0000000112face70 = puVar1;
  return;
}



/* Entry: 1038e4ba4; end: 1038e4d2b;  */

void FUN_1038e4ba4(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x655f6c61756e616d;
  if (cVar2 != '\x01') {
    uVar3 = 0xd000000000000010;
  }
  uVar1 = 0xee00676e69746964;
  if (cVar2 != '\x01') {
    uVar1 = 0x800000010ef1e250;
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038e4d2c; end: 1038e4da3;  */

void FUN_1038e4d2c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1038e4da4; end: 1038e4f57;  */

void FUN_1038e4da4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0x655f6c61756e616d;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000010;
  }
  uVar1 = 0xee00676e69746964;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x800000010ef1e250;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1038e4f58; end: 1038e4fcb;  */

/* WARNING: Possible PIC construction at 0x0001038e4f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e4f70) */

void FUN_1038e4f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038e4fcc; end: 1038e5047;  */

undefined8 * FUN_1038e4fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 1038e5048; end: 1038e509b;  */

undefined8 * FUN_1038e5048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 1038e509c; end: 1038e51bf;  */

int FUN_1038e509c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038e51c0; end: 1038e51fb;  */

/* WARNING: Possible PIC construction at 0x0001038e51e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e51ec) */

void FUN_1038e51c0(long param_1)

{
  if (*(long *)(param_1 + 8) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1038e51fc; end: 1038e539f;  */

void FUN_1038e51fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[1];
  if (lVar1 == 1) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar2 = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = lVar1;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    func_0x000107c61434(lVar1);
    func_0x000107c61434(uVar2);
  }
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return;
}



/* Entry: 1038e53a0; end: 1038e547f;  */

long FUN_1038e53a0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 1038e5480; end: 1038e557b;  */

int FUN_1038e5480(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 1038e557c; end: 1038e55bb;  */

void FUN_1038e557c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faced0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1fcc8;
  func_0x000107c61520(&UNK_10dc1fcc8,&UNK_1106a85b8);
  puRam0000000112faced0 = puVar1;
  return;
}



/* Entry: 1038e55bc; end: 1038e572b;  */

void FUN_1038e55bc(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x725f6172656d6163;
  if (cVar2 != '\x01') {
    uVar1 = 0x736569726f6d656d;
  }
  uVar3 = 0xeb000000006c6c6f;
  if (cVar2 != '\x01') {
    uVar3 = 0xe800000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038e572c; end: 1038e57a3;  */

void FUN_1038e572c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1038e57a4; end: 1038e594f;  */

void FUN_1038e57a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x725f6172656d6163;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x736569726f6d656d;
  }
  uVar2 = 0xeb000000006c6c6f;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1038e5950; end: 1038e5987;  */

void FUN_1038e5950(undefined8 param_1)

{
  if (lRam0000000112facf30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e78b69c);
  return;
}



/* Entry: 1038e5988; end: 1038e5a4b;  */

long * FUN_1038e5988(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    iVar5 = *(int *)(param_3 + 0x14);
    lVar6 = 0;
    func_0x000107c5eea4();
    pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
    func_0x000107c61434(lVar7);
    (*pcVar9)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
    iVar5 = *(int *)(param_3 + 0x1c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1038e5a4c; end: 1038e5aa7;  */

/* WARNING: Possible PIC construction at 0x0001038e5a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e5a6c) */

void FUN_1038e5a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1038e5aa8; end: 1038e5b3f;  */

undefined8 * FUN_1038e5aa8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  iVar3 = *(int *)(param_3 + 0x14);
  lVar4 = 0;
  func_0x000107c5eea4();
  pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  func_0x000107c61434(uVar2);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1038e5b40; end: 1038e5ce3;  */

undefined8 * FUN_1038e5b40(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  iVar2 = *(int *)(param_3 + 0x14);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *param_2;
  uVar4 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 1038e5ce4; end: 1038e5cfb;  */

void FUN_1038e5ce4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1038e5cfc; end: 1038e5d87;  */

void FUN_1038e5cfc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10dc1fda8;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10dc1fdc0;
    func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 1038e5d88; end: 1038e5dc3; -[_TtC23SCMemoriesSnapFeedUtils21MemoriesSnapFeedUtils init] */

void FUN_1038e5d88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1038e6a88();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038e5dc4; end: 1038e5dd7;  */

bool FUN_1038e5dc4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038e5dd8; end: 1038e5e83;  */

void FUN_1038e5dd8(void)

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



/* Entry: 1038e5e84; end: 1038e5eab;  */

void FUN_1038e5e84(ulong *param_1,ulong *param_2)

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



/* Entry: 1038e5eac; end: 1038e5edb;  */

void FUN_1038e5eac(void)

{
  FUN_1038e6a88();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038e5edc; end: 1038e62df;  */

void FUN_1038e5edc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x21;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = param_3[1];
  if (0 < lVar16) {
    lVar8 = 0;
    do {
      lVar17 = lVar8 + 1;
      if (lVar17 < lVar16) {
        lVar9 = *param_3;
        lVar3 = *(long *)(lVar9 + lVar17 * 0x18 + 0x10);
        lVar15 = lVar8 * 0x18;
        func_0x000107c3fec0();
        plVar12 = (long *)(lVar9 + lVar15 + 0x40);
        lVar9 = lVar8 + 2;
        do {
          lVar10 = lVar9;
          lVar17 = lVar16;
          if (lVar16 == lVar10) break;
          lVar4 = *plVar12;
          func_0x000107c3fec0();
          plVar12 = plVar12 + 3;
          lVar9 = lVar10 + 1;
          lVar17 = lVar10;
        } while ((lVar3 == -1) != (lVar4 != -1));
        if (lVar3 == -1) {
          if (lVar17 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62bc);
            (*pcVar1)();
          }
          if (lVar8 < lVar17) {
            lVar3 = *param_3;
            lVar10 = lVar17 * 0x18;
            lVar9 = lVar17;
            lVar16 = lVar8;
            do {
              lVar9 = lVar9 + -1;
              if (lVar16 != lVar9) {
                if (lVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62d4);
                  (*pcVar1)();
                }
                puVar13 = (undefined8 *)(lVar3 + lVar15);
                lVar4 = lVar3 + lVar10;
                uVar11 = *puVar13;
                uVar20 = puVar13[2];
                uVar19 = puVar13[1];
                uVar22 = *(undefined8 *)(lVar4 + -0x10);
                uVar21 = *(undefined8 *)(lVar4 + -0x18);
                puVar13[2] = *(undefined8 *)(lVar4 + -8);
                puVar13[1] = uVar22;
                *puVar13 = uVar21;
                *(undefined8 *)(lVar4 + -0x18) = uVar11;
                *(undefined8 *)(lVar4 + -8) = uVar20;
                *(undefined8 *)(lVar4 + -0x10) = uVar19;
              }
              lVar16 = lVar16 + 1;
              lVar10 = lVar10 + -0x18;
              lVar15 = lVar15 + 0x18;
            } while (lVar16 < lVar9);
          }
        }
      }
      lVar16 = param_3[1];
      lVar15 = lVar17;
      if (lVar17 < lVar16) {
        if (SBORROW8(lVar17,lVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62b0);
          (*pcVar1)();
        }
        if (lVar17 - lVar8 < param_4) {
          if (SCARRY8(lVar8,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62b4);
            (*pcVar1)();
          }
          lVar9 = lVar8 + param_4;
          if (lVar16 <= lVar8 + param_4) {
            lVar9 = lVar16;
          }
          if (lVar9 < lVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62b8);
            (*pcVar1)();
          }
          if (lVar17 != lVar9) {
            lVar16 = *param_3;
            puVar13 = (undefined8 *)(lVar16 + lVar17 * 0x18 + -0x18);
            lVar3 = lVar8 - lVar17;
            do {
              lVar10 = *(long *)(lVar16 + lVar17 * 0x18 + 0x10);
              lVar15 = lVar3;
              puVar14 = puVar13;
              do {
                func_0x000107c3fec0();
                if (lVar10 != -1) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62c0);
                  (*pcVar1)();
                }
                lVar10 = puVar14[5];
                uVar20 = puVar14[5];
                uVar19 = puVar14[4];
                uVar11 = puVar14[3];
                puVar14[4] = puVar14[1];
                puVar14[3] = *puVar14;
                puVar14[5] = puVar14[2];
                *puVar14 = uVar11;
                puVar14[2] = uVar20;
                puVar14[1] = uVar19;
                puVar14 = puVar14 + -3;
                bVar2 = lVar15 != -1;
                lVar15 = lVar15 + 1;
              } while (bVar2);
              lVar17 = lVar17 + 1;
              puVar13 = puVar13 + 3;
              lVar3 = lVar3 + -1;
              lVar15 = lVar9;
            } while (lVar17 != lVar9);
          }
        }
      }
      puVar7 = puStack_58;
      if (lVar15 < lVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62a4);
        (*pcVar1)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar18 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar18) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar18 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar18 + 1;
      *(long *)(puVar7 + uVar18 * 0x10 + 0x20) = lVar8;
      *(long *)(puVar7 + uVar18 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62d8);
        (*pcVar1)();
      }
      FUN_1038e63b4(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1038e6274;
      lVar16 = param_3[1];
      lVar8 = lVar15;
    } while (lVar15 < lVar16);
  }
  puVar7 = puStack_58;
  lVar16 = *param_1;
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62e0);
    (*pcVar1)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar18 = *(ulong *)(puVar7 + 0x10);
  while (puStack_58 = puVar7, 1 < uVar18) {
    lVar8 = *param_3;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62dc);
      (*pcVar1)();
    }
    lVar15 = uVar18 - 1;
    lVar9 = *(long *)(puVar7 + uVar18 * 0x10);
    lVar17 = *(long *)(puVar7 + lVar15 * 0x10 + 0x28);
    FUN_1038e6624(lVar8 + lVar9 * 0x18,lVar8 + *(long *)(puVar7 + lVar15 * 0x10 + 0x20) * 0x18,
                  lVar8 + lVar17 * 0x18,lVar16);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62a8);
      (*pcVar1)();
    }
    puVar5 = puVar7;
    func_0x000107c61558();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e62ac);
      (*pcVar1)();
    }
    *(long *)(puVar7 + uVar18 * 0x10) = lVar9;
    *(long *)((long)(puVar7 + uVar18 * 0x10) + 8) = lVar17;
    puStack_58 = puVar7;
    func_0x0001000a97cc(lVar15);
    puVar7 = puStack_58;
    uVar18 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1038e6274:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 1038e62e0; end: 1038e63b3;  */

void FUN_1038e62e0(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (undefined8 *)(lVar5 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    do {
      lVar4 = *(long *)(lVar5 + param_3 * 0x18 + 0x10);
      lVar7 = param_1;
      puVar8 = puVar6;
      do {
        func_0x000107c3fec0();
        if (lVar4 != -1) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e63b4);
          (*pcVar2)();
        }
        lVar4 = puVar8[5];
        uVar10 = puVar8[5];
        uVar9 = puVar8[4];
        uVar1 = puVar8[3];
        puVar8[4] = puVar8[1];
        puVar8[3] = *puVar8;
        puVar8[5] = puVar8[2];
        *puVar8 = uVar1;
        puVar8[2] = uVar10;
        puVar8[1] = uVar9;
        puVar8 = puVar8 + -3;
        bVar3 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 3;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1038e63b4; end: 1038e6623;  */

undefined8 FUN_1038e63b4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1038e648c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e660c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1038e64f0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65fc);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e6604);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65e4);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65e8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65f0);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65f8);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1038e648c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65ec);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65f4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e6600);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e6608);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1038e64f0;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e6610);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65d8);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e6624);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1038e6624(lVar9 + lVar12 * 0x18,lVar9 + *plVar1 * 0x18,lVar9 + lVar7 * 0x18,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65dc);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038e65e0);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1038e6624; end: 1038e687b;  */

undefined8
FUN_1038e6624(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = ((long)param_2 - (long)param_1) / 0x18;
  lVar1 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar3 < lVar1) {
    if ((param_4 < param_1) || ((param_1 + lVar3 * 3 <= param_4 || (param_4 != param_1)))) {
      func_0x000107c610b8(param_4,param_1,lVar3 * 0x18);
    }
    puVar7 = param_4 + lVar3 * 3;
    puVar4 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        lVar3 = param_2[2];
        func_0x000107c3fec0();
        if (lVar3 == -1) {
          puVar5 = param_2 + 3;
          puVar2 = param_4;
          puVar6 = param_2;
        }
        else {
          puVar5 = param_2;
          puVar2 = param_4 + 3;
          puVar6 = param_4;
        }
        param_4 = puVar2;
        param_2 = puVar5;
        if (puVar4 != puVar6) {
          uVar9 = puVar6[1];
          uVar8 = *puVar6;
          puVar4[2] = puVar6[2];
          puVar4[1] = uVar9;
          *puVar4 = uVar8;
        }
        puVar4 = puVar4 + 3;
      } while (param_4 < puVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar1 * 3 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar1 * 0x18);
    }
    puVar6 = param_4 + lVar1 * 3;
    puVar4 = param_2;
    puVar7 = puVar6;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
      do {
        while( true ) {
          puVar5 = param_3 + -3;
          lVar3 = puVar6[-1];
          func_0x000107c3fec0();
          if (lVar3 != -1) break;
          puVar4 = param_2 + -3;
          if (param_3 != param_2) {
            uVar9 = param_2[-2];
            uVar8 = *puVar4;
            param_3[-1] = param_2[-1];
            param_3[-2] = uVar9;
            *puVar5 = uVar8;
          }
          puVar7 = puVar6;
          if ((puVar4 <= param_1) || (param_3 = puVar5, param_2 = puVar4, puVar6 <= param_4))
          goto LAB_1038e6818;
        }
        puVar7 = puVar6 + -3;
        if (param_3 != puVar6) {
          uVar9 = puVar6[-2];
          uVar8 = *puVar7;
          param_3[-1] = puVar6[-1];
          param_3[-2] = uVar9;
          *puVar5 = uVar8;
        }
        puVar4 = param_2;
        puVar6 = puVar7;
        param_3 = puVar5;
      } while (param_4 < puVar7);
    }
  }
LAB_1038e6818:
  lVar3 = ((long)puVar7 - (long)param_4) / 0x18;
  if ((puVar4 != param_4) || (param_4 + lVar3 * 3 <= puVar4)) {
    func_0x000107c610b8(puVar4,param_4,lVar3 * 0x18);
  }
  return 1;
}



/* Entry: 1038e687c; end: 1038e6907;  */

undefined * FUN_1038e687c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x112facfa8;
    func_0x0001000285a8(0x112facfa8,&UNK_10dc1fee0);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x18) * 2;
  }
  return puVar1;
}



/* Entry: 1038e6908; end: 1038e6a87;  */

long FUN_1038e6908(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  puVar9 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar11 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e6a88);
      (*pcVar3)();
    }
    lVar5 = 0;
    lVar12 = 0;
    uVar10 = 0x3f - uVar7 >> 6;
    lVar13 = lVar5;
    while( true ) {
      while (uVar11 == 0) {
        bVar4 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e6a84);
          (*pcVar3)();
        }
        if ((long)uVar10 <= lVar13) {
          uVar11 = 0;
          if ((long)uVar10 <= lVar5 + 1) {
            uVar10 = lVar5 + 1;
          }
          lVar13 = uVar10 - 1;
          param_3 = lVar12;
          goto LAB_1038e6a38;
        }
        uVar11 = puVar9[lVar13];
      }
      lVar12 = lVar12 + 1;
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar13 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar6 * 0x10);
      uVar2 = puVar1[1];
      uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 8);
      uVar11 = uVar11 - 1 & uVar11;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar8;
      if (lVar12 == param_3) break;
      param_2 = param_2 + 3;
      func_0x000107c61434();
      func_0x000107c61174(uVar8);
      lVar5 = lVar13;
    }
    func_0x000107c61434();
    func_0x000107c61174(uVar8);
  }
LAB_1038e6a38:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uVar7;
  param_1[3] = lVar13;
  param_1[4] = uVar11;
  return param_3;
}



/* Entry: 1038e6a88; end: 1038e6aa7;  */

void FUN_1038e6a88(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe440);
  return;
}



/* Entry: 1038e6aa8; end: 1038e6aab;  */

void FUN_1038e6aa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112facf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1fde0;
  func_0x000107c61520(&UNK_10dc1fde0,&UNK_1106a86c0);
  puRam0000000112facf70 = puVar1;
  return;
}



/* Entry: 1038e6aac; end: 1038e6aeb;  */

void FUN_1038e6aac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112facf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1fde0;
  func_0x000107c61520(&UNK_10dc1fde0,&UNK_1106a86c0);
  puRam0000000112facf70 = puVar1;
  return;
}



/* Entry: 1038e6aec; end: 1038e6afb;  */

undefined1  [16] FUN_1038e6aec(void)

{
  return ZEXT816(0x1106a86c0);
}



/* Entry: 1038e6afc; end: 1038e6b07; -[_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel titleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6afc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112facfb0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112facfb0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038e6b08; end: 1038e6b13; -[_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel subtitleText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6b08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112facfb8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112facfb8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038e6b14; end: 1038e6b1f; -[_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel buttonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6b14(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112facfc0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112facfc0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038e6b20; end: 1038e6b67;  */

void FUN_1038e6b20(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038e6b68; end: 1038e6c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facfb0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facfb8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facfc0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038e6c04; end: 1038e6c23;  */

void FUN_1038e6c04(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe4f0);
  return;
}



/* Entry: 1038e6c24; end: 1038e6ccf; -[_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel initWith:subtitleText:buttonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6c24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000107c5faec();
  uVar2 = param_2;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112facfb0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112facfb8);
  *puVar1 = param_4;
  puVar1[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112facfc0);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  FUN_1038e6c04();
  lStack_50 = param_1;
  uStack_48 = param_5;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038e6cd0; end: 1038e6d2b; -[_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel init] */

void FUN_1038e6cd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommerceSwiftViews.SCCommerceSimpleErrorViewModel",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038e6cfc);
  (*pcVar1)();
}



/* Entry: 1038e6d2c; end: 1038e6d7f; -[_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038e6d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e6d50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112facfb0 + 8))
  ;
  return;
}



/* Entry: 1038e6d80; end: 1038e6e2f; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton didTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6d80(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112facff0);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1106a87d0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1038e6e30; end: 1038e6eeb; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton setDidTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6e30(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1106a87b8;
    func_0x000107c613fc(&UNK_1106a87b8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_1038e7d3c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112facff0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1038e6eec; end: 1038e6efb; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton showBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038e6eec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fad020);
}



/* Entry: 1038e6efc; end: 1038e6f2f; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton setShowBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6efc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112fad020) = param_3;
  func_0x000107c61174();
  FUN_1038e6f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038e6f30; end: 1038e706f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e6f30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112facff8;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fad018);
  func_0x000107c61428(unaff_x20 + _DAT_112facff8,auStack_58,0,0);
  auStack_70[0] = *(undefined8 *)(unaff_x20 + lVar1);
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar3);
  func_0x000107c59c6c(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c550d8(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fad010);
  func_0x000107c61428(unaff_x20 + _DAT_112fad000,auStack_70,0,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e10(uVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1038e7070; end: 1038e70b3; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton badgeCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038e7070(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112facff8;
  func_0x000107c61428(param_1 + _DAT_112facff8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1038e70b4; end: 1038e711b; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton setBadgeCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e70b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112facff8;
  func_0x000107c61428(param_1 + _DAT_112facff8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_1);
  FUN_1038e6f30();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1038e711c; end: 1038e715f; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton isWhiteStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038e711c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fad000;
  func_0x000107c61428(param_1 + _DAT_112fad000,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}


