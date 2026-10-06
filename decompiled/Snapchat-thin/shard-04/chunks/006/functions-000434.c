/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103735c14; end: 103735eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103735c14(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c613fc();
  uVar1 = *(ulong *)(param_3 + _DAT_113080730);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c4a598();
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_2 + _DAT_112ff4aa8);
      func_0x0001000285a8(0x112e284a0,&UNK_10da107d0);
      uVar6 = *(undefined8 *)(param_4 + _DAT_11307e6a8);
      func_0x000107c6157c(uVar5);
      func_0x000107c61174();
      uVar3 = uVar6;
      func_0x0001000bda74();
      func_0x000107c61170(uVar6);
      lVar4 = 0;
      func_0x000103735fc0();
      func_0x000107c61534();
      *(undefined8 *)(lVar4 + 0x10) = uVar3;
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      FUN_103735ef0();
      func_0x000107c61574(uVar5);
      func_0x000107c61574(uVar3);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(uVar1);
      goto LAB_103735d30;
    }
    func_0x000107c615e8(uVar1);
  }
  func_0x000107c61170(param_3);
LAB_103735d30:
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 103735eb4; end: 103735ecf;  */

void FUN_103735eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103735ed0; end: 103735eef;  */

void FUN_103735ed0(void)

{
  func_0x000107c61168(&PTR_PTR_112f8ec28);
  return;
}



/* Entry: 103735ef0; end: 103735f93;  */

void FUN_103735ef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    FUN_103736064();
    func_0x0001000d224c(&uStack_40);
    uVar1 = uStack_40;
    func_0x000107c4f7c0(uStack_40);
    func_0x000107c61180();
    func_0x000107c615e8(uStack_40);
    func_0x000107c5c2c0(lStack_38,param_2,0,param_1,uVar1,0);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 103735f94; end: 103735fdf;  */

void FUN_103735f94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103735fe0; end: 103736063;  */

undefined * FUN_103735fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7240;
  func_0x000107c610f8(PTR_PTR_1126b7240);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ae740;
  func_0x000107c610f8(PTR_PTR_1126ae740);
  func_0x000107c453e4();
  func_0x000107c3d810();
  func_0x000107c3d810(puVar2,param_2,6);
  func_0x000107c527c4(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c52bc8(puVar1,param_2,0);
  func_0x000107c5277c(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 103736064; end: 1037361db;  */

/* WARNING: Removing unreachable block (ram,0x0001037361d8) */
/* WARNING: Removing unreachable block (ram,0x0001037361d4) */

undefined * FUN_103736064(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f162460);
  func_0x000107c5597c(puVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126b7230;
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  func_0x000107c57ed0();
  func_0x000107c57ec0(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c55968(puVar2);
  func_0x000107c55978(puVar2);
  puVar4 = puVar2;
  func_0x000107c55960(puVar2);
  FUN_103735fe0();
  func_0x000107c55958(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c54734(puVar2);
  puVar4 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  if (SUB168(SEXT816(0xe10) * SEXT816(0x18),8) == 0) {
    func_0x000107c57d34();
    func_0x000107c57c1c(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c55974(puVar2);
    func_0x000107c61170(puVar4);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037361d4);
  (*pcVar1)();
}



/* Entry: 1037361dc; end: 103736d97;  */

/* WARNING: Possible PIC construction at 0x0001037361f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037361f4) */

void FUN_1037361dc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103736d98; end: 103736db7; -[_TtC64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices scheduler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103736d98(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f8ed28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103736db8; end: 103736e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103736db8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8ed28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103736e04; end: 103736e5b; -[_TtC64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices initWithScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103736e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112f8ed28) = param_3;
  lVar2 = param_1;
  func_0x0001002bbe0c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103736e5c; end: 103736eb7; -[_TtC64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices init] */

void FUN_103736e5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices.SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices"
                      ,0x81,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103736e88);
  (*pcVar1)();
}



/* Entry: 103736eb8; end: 103736ec7; -[_TtC64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices64SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103736eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f8ed28));
  return;
}



/* Entry: 103736ec8; end: 103736fa3;  */

void FUN_103736ec8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103736fc0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103736fa4; end: 103736fe3;  */

void FUN_103736fa4(ulong *param_1,ulong *param_2)

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



/* Entry: 103736fe4; end: 103737023;  */

void FUN_103736fe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ed58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc06660;
  func_0x000107c61520(&UNK_10dc06660,&UNK_11068b7e0);
  puRam0000000112f8ed58 = puVar1;
  return;
}



/* Entry: 103737024; end: 103737027;  */

void FUN_103737024(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ed60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc06700;
  func_0x000107c61520(&UNK_10dc06700,&UNK_11068b800);
  puRam0000000112f8ed60 = puVar1;
  return;
}



/* Entry: 103737028; end: 103737067;  */

void FUN_103737028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ed60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc06700;
  func_0x000107c61520(&UNK_10dc06700,&UNK_11068b800);
  puRam0000000112f8ed60 = puVar1;
  return;
}



/* Entry: 103737068; end: 10373706b;  */

void FUN_103737068(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ed68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc067a0;
  func_0x000107c61520(&UNK_10dc067a0,&UNK_11068b820);
  puRam0000000112f8ed68 = puVar1;
  return;
}



/* Entry: 10373706c; end: 1037370ab;  */

void FUN_10373706c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ed68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc067a0;
  func_0x000107c61520(&UNK_10dc067a0,&UNK_11068b820);
  puRam0000000112f8ed68 = puVar1;
  return;
}



/* Entry: 1037370ac; end: 10373712b;  */

undefined1  [16] FUN_1037370ac(void)

{
  return ZEXT816(0x11068b7e0);
}



/* Entry: 10373712c; end: 103737203;  */

void FUN_10373712c(void)

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



/* Entry: 103737204; end: 103737223;  */

void FUN_103737204(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103737224; end: 103737263;  */

void FUN_103737224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8ed70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc068c0;
  func_0x000107c61520(&UNK_10dc068c0,&UNK_11068b898);
  puRam0000000112f8ed70 = puVar1;
  return;
}



/* Entry: 103737264; end: 103737273;  */

undefined1  [16] FUN_103737264(void)

{
  return ZEXT816(0x11068b898);
}



/* Entry: 103737274; end: 103737283; -[SCMemoriesCameraRollIndexItem asset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8ed78));
  return;
}



/* Entry: 103737284; end: 103737297; -[SCMemoriesCameraRollIndexItem selfies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8ed80));
  return;
}



/* Entry: 103737298; end: 103737373; -[SCMemoriesCameraRollIndexItem initWithAsset:selfies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f8ed78) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f8ed80) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103737374; end: 103737377; -[SCMemoriesCameraRollIndexItem copyWithZone:] */

void FUN_103737374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103737378; end: 103737393; -[SCMemoriesCameraRollIndexItem description] */

void FUN_103737378(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103737394; end: 10373740f; -[SCMemoriesCameraRollIndexItem init] */

void FUN_103737394(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices/SCMemoriesCameraRollIndexItemWrapper.swift"
                      ,0x6b,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037373dc);
  (*pcVar1)();
}



/* Entry: 103737410; end: 103737447; -[SCMemoriesCameraRollIndexItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010373742c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103737430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8ed78));
  return;
}



/* Entry: 103737448; end: 103737467;  */

void FUN_103737448(void)

{
  func_0x000107c61168(&PTR_PTR_1128e7fe8);
  return;
}



/* Entry: 103737468; end: 10373746b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737468(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8ed78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8ed80) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10373746c; end: 103737517;  */

void FUN_10373746c(void)

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



/* Entry: 103737518; end: 10373754f;  */

void FUN_103737518(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103737550; end: 10373759b; -[SCMemoriesCameraRollIndexResult description] */

void FUN_103737550(undefined8 param_1)

{
  undefined1 auStack_78 [88];
  
  func_0x000107c61174();
  FUN_103737914(auStack_78);
  func_0x000107c61170(param_1);
  func_0x0001037378e0(auStack_78);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10373759c; end: 1037375e3; -[SCMemoriesCameraRollIndexResult init] */

void FUN_10373759c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices/SCMemoriesCameraRollIndexResultWrapper.swift"
                      ,0x6d,2,0x34,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037375e4);
  (*pcVar1)();
}



/* Entry: 1037375e4; end: 1037375e7; -[SCMemoriesCameraRollIndexResult copyWithZone:] */

void FUN_1037375e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1037375e8; end: 103737667; +[SCMemoriesCameraRollIndexResult metadataWithIndexResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037375e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f8edb0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f8edb8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112f8edc0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f8edc8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103737668; end: 1037376eb; +[SCMemoriesCameraRollIndexResult tinyClipWithIndexResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f8edb0) = 1;
  *(undefined8 *)(lVar2 + _DAT_112f8edb8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f8edc0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112f8edc8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037376ec; end: 1037377ff; +[SCMemoriesCameraRollIndexResult visualTagWithIndexResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037376ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f8edb0) = 2;
  *(undefined8 *)(lVar2 + _DAT_112f8edb8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f8edc0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f8edc8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103737800; end: 103737863; -[SCMemoriesCameraRollIndexResult matchMetadata:tinyClip:visualTag:] */

void FUN_103737800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000103737770(FUN_103737c78,auStack_40,0x103737c88,auStack_60,0x103737c8c,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103737864; end: 103737897;  */

void FUN_103737864(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103737898; end: 103737913; -[SCMemoriesCameraRollIndexResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037378b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037378b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8edb8));
  return;
}



/* Entry: 103737914; end: 103737aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737914(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_2 + _DAT_112f8edb0) == '\0') {
    lVar6 = *(long *)(param_2 + _DAT_112f8edb8);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103737aac);
      (*pcVar5)();
    }
    func_0x000107c61174();
    FUN_103738294(&uStack_b8);
    func_0x000107c61170(lVar6);
    uStack_90 = uStack_90 & 1;
    uStack_80 = uStack_80 & 1;
    uStack_70 = uStack_70 & 1;
    unaff_x24 = uStack_88;
    unaff_x25 = uStack_78;
    unaff_x26 = uStack_68;
  }
  else if (*(char *)(param_2 + _DAT_112f8edb0) == '\x01') {
    lVar6 = *(long *)(param_2 + _DAT_112f8edc0);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103737aa8);
      (*pcVar5)();
    }
    uVar1 = *(undefined8 *)(lVar6 + _DAT_112f8ee70);
    uVar3 = ((undefined8 *)(lVar6 + _DAT_112f8ee70))[1];
    uVar2 = *(undefined8 *)(lVar6 + _DAT_112f8ee78);
    uVar4 = ((undefined8 *)(lVar6 + _DAT_112f8ee78))[1];
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar2,uVar4);
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_70 = 0x4000000000000000;
    uStack_b0 = uVar3;
    uStack_a8 = uVar2;
    uStack_b8 = uVar1;
    uStack_a0 = uVar4;
  }
  else {
    lVar6 = *(long *)(param_2 + _DAT_112f8edc8);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103737ab0);
      (*pcVar5)();
    }
    uVar1 = *(undefined8 *)(lVar6 + _DAT_112f8eea8);
    uVar3 = ((undefined8 *)(lVar6 + _DAT_112f8eea8))[1];
    uVar2 = *(undefined8 *)(lVar6 + _DAT_112f8eeb0);
    uVar4 = ((undefined8 *)(lVar6 + _DAT_112f8eeb0))[1];
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar2,uVar4);
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_70 = 0x8000000000000000;
    uStack_b0 = uVar3;
    uStack_a8 = uVar2;
    uStack_b8 = uVar1;
    uStack_a0 = uVar4;
  }
  *param_1 = uStack_b8;
  param_1[1] = uStack_b0;
  param_1[2] = uStack_a8;
  param_1[4] = uStack_98;
  param_1[3] = uStack_a0;
  param_1[5] = uStack_90;
  param_1[6] = unaff_x24;
  param_1[7] = uStack_80;
  param_1[8] = unaff_x25;
  param_1[9] = uStack_70;
  param_1[10] = unaff_x26;
  return;
}



/* Entry: 103737ab0; end: 103737acf;  */

void FUN_103737ab0(void)

{
  func_0x000107c61168(&PTR_PTR_1128e80b8);
  return;
}



/* Entry: 103737ad0; end: 103737c37;  */

int FUN_103737ad0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103737b4c;
        goto LAB_103737b30;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103737b30:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103737b4c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103737c38; end: 103737c77;  */

void FUN_103737c38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f8edf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc069f8;
  func_0x000107c61520(&UNK_10dc069f8,&UNK_11068b980);
  puRam0000000112f8edf8 = puVar1;
  return;
}



/* Entry: 103737c78; end: 103737c8f;  */

void FUN_103737c78(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103737c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103737c90; end: 103737cbf;  */

void FUN_103737c90(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103738020(param_1);
  return;
}



/* Entry: 103737cc0; end: 103737d0b; -[SCMemoriesCameraRollMetadataIndexResult identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737cc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8ee00);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f8ee00))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103737d0c; end: 103737d1b; -[SCMemoriesCameraRollMetadataIndexResult isFavorited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103737d0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f8ee08);
}



/* Entry: 103737d1c; end: 103737d2b; -[SCMemoriesCameraRollMetadataIndexResult isScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103737d1c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f8ee10);
}



/* Entry: 103737d2c; end: 103737d3b; -[SCMemoriesCameraRollMetadataIndexResult mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103737d2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f8ee18);
}



/* Entry: 103737d3c; end: 103737d4b; -[SCMemoriesCameraRollMetadataIndexResult mediaSubtypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103737d3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f8ee20);
}



/* Entry: 103737d4c; end: 103737d5b; -[SCMemoriesCameraRollMetadataIndexResult isFrontFacingCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103737d4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f8ee28);
}



/* Entry: 103737d5c; end: 103737d6b; -[SCMemoriesCameraRollMetadataIndexResult latitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8ee30));
  return;
}



/* Entry: 103737d6c; end: 103737d7b; -[SCMemoriesCameraRollMetadataIndexResult longitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f8ee38));
  return;
}



/* Entry: 103737d7c; end: 103737d8b; -[SCMemoriesCameraRollMetadataIndexResult creationDateSince1970InSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103737d7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f8ee40);
}



/* Entry: 103737d8c; end: 103737f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103737d8c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8ee00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f8ee08) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112f8ee10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee18) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee20) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112f8ee28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee30) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee38) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee40) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103737f74; end: 10373801f; -[SCMemoriesCameraRollMetadataIndexResult initWithIdentifier:isFavorited:isScreenshot:mediaType:mediaSubtypes:isFrontFacingCamera:latitude:longitude:creationDateSince1970InSeconds:] */

void FUN_103737f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000103737e80(param_3,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                      param_11);
  return;
}



/* Entry: 103738020; end: 10373817b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738020(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_a8 [88];
  
  func_0x000107c614f0();
  uVar3 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8ee00);
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f8ee08) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(unaff_x20 + _DAT_112f8ee10) = *(undefined1 *)((long)param_1 + 0x11);
  uVar3 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee18) = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee20) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f8ee28) = *(undefined1 *)(param_1 + 5);
  if (*(char *)(param_1 + 7) == '\x01') {
    FUN_1037383bc(param_1,auStack_a8);
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[6];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    FUN_1037383bc(param_1,auStack_a8);
    func_0x000107c466c0(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_112f8ee30) = puVar2;
  if (*(char *)(param_1 + 9) == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1[8];
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(uVar3);
  }
  *(undefined **)(unaff_x20 + _DAT_112f8ee38) = puVar2;
  func_0x0001037383f8(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112f8ee40) = param_1[10];
  func_0x000107c61154(&stack0xffffffffffffff48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10373817c; end: 10373817f; -[SCMemoriesCameraRollMetadataIndexResult copyWithZone:] */

void FUN_10373817c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103738180; end: 1037381cb; -[SCMemoriesCameraRollMetadataIndexResult description] */

void FUN_103738180(undefined8 param_1)

{
  undefined1 auStack_78 [88];
  
  func_0x000107c61174();
  FUN_103738294(auStack_78);
  func_0x000107c61170(param_1);
  func_0x0001037383f8(auStack_78);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037381cc; end: 103738247; -[SCMemoriesCameraRollMetadataIndexResult init] */

void FUN_1037381cc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices/SCMemoriesCameraRollMetadataIndexResultWrapper.swift"
                      ,0x75,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103738214);
  (*pcVar1)();
}



/* Entry: 103738248; end: 103738293; -[SCMemoriesCameraRollMetadataIndexResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103738278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010373827c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738248(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f8ee00 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f8ee30));
  return;
}



/* Entry: 103738294; end: 1037383bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738294(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112f8ee00);
  uVar3 = ((undefined8 *)(param_3 + _DAT_112f8ee00))[1];
  uVar4 = *(undefined1 *)(param_3 + _DAT_112f8ee08);
  uVar5 = *(undefined1 *)(param_3 + _DAT_112f8ee10);
  uVar9 = *(undefined8 *)(param_3 + _DAT_112f8ee18);
  uVar10 = *(undefined8 *)(param_3 + _DAT_112f8ee20);
  uVar6 = *(undefined1 *)(param_3 + _DAT_112f8ee28);
  lVar8 = *(long *)(param_3 + _DAT_112f8ee30);
  if (lVar8 == 0) {
    func_0x000107c61434(uVar3);
    uVar11 = 0;
  }
  else {
    func_0x000107c61434(uVar3);
    func_0x000107c4223c(lVar8);
    uVar11 = param_2;
  }
  bVar1 = *(long *)(param_3 + _DAT_112f8ee38) == 0;
  if (bVar1) {
    param_2 = 0;
  }
  else {
    func_0x000107c4223c();
  }
  uVar7 = *(undefined8 *)(param_3 + _DAT_112f8ee40);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11) = uVar5;
  param_1[3] = uVar9;
  param_1[4] = uVar10;
  *(undefined1 *)(param_1 + 5) = uVar6;
  param_1[6] = uVar11;
  *(bool *)(param_1 + 7) = lVar8 == 0;
  param_1[8] = param_2;
  *(bool *)(param_1 + 9) = bVar1;
  param_1[10] = uVar7;
  return;
}



/* Entry: 1037383bc; end: 10373842b;  */

undefined8 FUN_1037383bc(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1037367a8)(param_2,param_1);
  return param_2;
}



/* Entry: 10373842c; end: 10373844b;  */

void FUN_10373842c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8190);
  return;
}



/* Entry: 10373844c; end: 1037384fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10373844c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8ee70);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8ee78);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61434(param_2);
  func_0x00010006c00c(param_3,param_4);
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c6142c(param_2);
  func_0x00010006c090(param_3,param_4);
  return puVar2;
}



/* Entry: 1037384fc; end: 103738547; -[SCMemoriesCameraRollTinyClipIndexResult identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037384fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8ee70);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f8ee70))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103738548; end: 1037385a3; -[SCMemoriesCameraRollTinyClipIndexResult tinyClipCaptionsData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738548(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8ee78);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f8ee78))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1037385a4; end: 10373861f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037385a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8ee70);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8ee78);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103738620; end: 1037386d3; -[SCMemoriesCameraRollTinyClipIndexResult initWithIdentifier:tinyClipCaptionsData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_4;
  uVar4 = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c5ee30();
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8ee70);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8ee78);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037386d4; end: 1037386d7; -[SCMemoriesCameraRollTinyClipIndexResult copyWithZone:] */

void FUN_1037386d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1037386d8; end: 10373874b; -[SCMemoriesCameraRollTinyClipIndexResult description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037386d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f8ee70 + 8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8ee78);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f8ee78))[1];
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar2);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10373874c; end: 1037387c7; -[SCMemoriesCameraRollTinyClipIndexResult init] */

void FUN_10373874c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices/SCMemoriesCameraRollTinyClipIndexResultWrapper.swift"
                      ,0x75,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103738794);
  (*pcVar1)();
}



/* Entry: 1037387c8; end: 103738807; -[SCMemoriesCameraRollTinyClipIndexResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037387c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f8ee70 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_112f8ee78);
  uVar1 = ((ulong *)(param_1 + _DAT_112f8ee78))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103738808; end: 103738827;  */

void FUN_103738808(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8298);
  return;
}



/* Entry: 103738828; end: 1037388d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103738828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8eea8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8eeb0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61434(param_2);
  func_0x00010006c00c(param_3,param_4);
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c6142c(param_2);
  func_0x00010006c090(param_3,param_4);
  return puVar2;
}



/* Entry: 1037388d8; end: 103738923; -[SCMemoriesCameraRollVisualTagIndexResult identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037388d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f8eea8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f8eea8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103738924; end: 10373897f; -[SCMemoriesCameraRollVisualTagIndexResult visualTagsData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738924(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8eeb0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f8eeb0))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103738980; end: 1037389fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8eea8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8eeb0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037389fc; end: 103738aaf; -[SCMemoriesCameraRollVisualTagIndexResult initWithIdentifier:visualTagsData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037389fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_4;
  uVar4 = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c5ee30();
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8eea8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8eeb0);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103738ab0; end: 103738ab3; -[SCMemoriesCameraRollVisualTagIndexResult copyWithZone:] */

void FUN_103738ab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103738ab4; end: 103738b27; -[SCMemoriesCameraRollVisualTagIndexResult description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738ab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f8eea8 + 8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8eeb0);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f8eeb0))[1];
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar2);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103738b28; end: 103738ba3; -[SCMemoriesCameraRollVisualTagIndexResult init] */

void FUN_103738b28(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServices/SCMemoriesCameraRollVisualTagIndexResultWrapper.swift"
                      ,0x76,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103738b70);
  (*pcVar1)();
}



/* Entry: 103738ba4; end: 103738be3; -[SCMemoriesCameraRollVisualTagIndexResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738ba4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f8eea8 + 8));
  uVar2 = *(ulong *)(param_1 + _DAT_112f8eeb0);
  uVar1 = ((ulong *)(param_1 + _DAT_112f8eeb0))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103738be4; end: 103738c03;  */

void FUN_103738be4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e8368);
  return;
}



/* Entry: 103738c04; end: 103738c83;  */

void FUN_103738c04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_11068baa0;
  func_0x000107c613fc(&UNK_11068baa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103738da4,puVar1);
  return;
}



/* Entry: 103738c84; end: 103738da3;  */

void FUN_103738c84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11068bae8;
  func_0x000107c613fc(&UNK_11068bae8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_103738eac;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068bb00;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd00000000000001a,0x800000010f162780);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 103738da4; end: 103738dbb;  */

void FUN_103738da4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11068bae8;
  func_0x000107c613fc(&UNK_11068bae8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_103738eac;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_11068bb00;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd00000000000001a,0x800000010f162780);
  func_0x000107c61170(puVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 103738dbc; end: 103738e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11307e1c0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  lVar3 = 0;
  FUN_10373945c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f8eee0) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112f8eee8) = uVar2;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103738e80; end: 103738eab;  */

void FUN_103738e80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103738eac; end: 103738ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738eac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11307e1c0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  lVar3 = 0;
  FUN_10373945c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f8eee0) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112f8eee8) = uVar2;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103738ed0; end: 103738f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103738ed0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f8eee0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f8eee8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103738f34; end: 103738f3b;  */

undefined8 FUN_103738f34(void)

{
  return 1;
}



/* Entry: 103738f3c; end: 103738fdb;  */

void FUN_103738f3c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103738fdc; end: 103738feb;  */

void FUN_103738fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}


