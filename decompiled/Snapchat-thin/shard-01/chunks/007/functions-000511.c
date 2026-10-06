/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10147d678; end: 10147d9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147d678(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
  (**(code **)(lVar1 + 0x18))(uVar6,lVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar6 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010ef84190);
  uVar2 = uVar7;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar6);
  if ((int)uVar2 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar9 = *(long *)(unaff_x22 + 0x10);
    func_0x000100083b20(unaff_x22 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = 0;
    func_0x00010147dac4();
    *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
    *(undefined ***)(unaff_x22 + 0x30) = &PTR_DAT_1103c3f90;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
    lVar3 = 0;
    func_0x00010147d5dc();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x50) = 0xd000000000000034;
    *(undefined8 *)(lVar3 + 0x58) = 0x800000010ef84230;
    *(undefined1 *)(lVar3 + 0x60) = 0;
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c61174(uVar10);
    func_0x000107c453e4();
    *(undefined **)(lVar3 + 0x68) = puVar4;
    *(undefined8 *)(lVar3 + 0x10) = 0x40f5180000000000;
    *(undefined8 *)(lVar3 + 0x18) = 0x10147d29c;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    FUN_10147db08(unaff_x22 + 0x10,lVar3 + 0x28);
    func_0x000107c61170(uVar10);
    uVar2 = *(undefined8 *)(lVar9 + _DAT_113091b70);
    func_0x000107c615f0(uVar2);
    func_0x000107c6157c(uVar6);
    FUN_10147d324(uVar2,0x10147db2c,uVar6);
    func_0x000107c61574(uVar6);
    func_0x000107c615e8(uVar2);
    lVar1 = lRam0000000112da1c08;
    lRam0000000112da1c08 = lVar3;
    func_0x000107c61170(lVar9);
    func_0x000107c61574(lVar1);
  }
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar8 = *(ulong *)(unaff_x22 + 0x10);
  uVar5 = uVar8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  if (uVar5 != 0) {
    func_0x000107c615f0(uVar5);
    uVar6 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010ef841c0);
    uVar8 = uVar5;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar5);
    if ((uVar8 & 1) != 0) {
      func_0x000107c615f0(uVar5);
      uVar6 = 0xd000000000000030;
      func_0x000107c5fadc(0xd000000000000030,0x800000010ef841f0);
      uVar8 = uVar5;
      func_0x000107c4980c();
      func_0x000107c61170(uVar6);
      func_0x000107c615e8(uVar5);
      func_0x000100083b20(unaff_x22 + 0x10);
      lVar9 = *(long *)(unaff_x22 + 0x10);
      lVar3 = 0;
      func_0x00010147aecc();
      func_0x000107c613fc();
      *(undefined1 *)(lVar3 + 0x28) = 0;
      puVar4 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar3 + 0x30) = puVar4;
      *(ulong *)(lVar3 + 0x10) =
           -(uVar8 >> 0x1f & 1) & 0xfff0000000000000 | (uVar8 & 0xffffffff) << 0x14;
      *(undefined8 *)(lVar3 + 0x18) = 0x10147acdc;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      uVar6 = *(undefined8 *)(lVar9 + _DAT_113091b70);
      func_0x000107c615f0(uVar6);
      FUN_10147ace0();
      func_0x000107c615e8(uVar6);
      lVar1 = lRam0000000112da1bf8;
      lRam0000000112da1bf8 = lVar3;
      func_0x000107c615e8(uVar5);
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(lVar9);
      func_0x000107c61574(lVar1);
      goto LAB_10147d9dc;
    }
    func_0x000107c615e8(uVar5);
  }
  func_0x000107c615e8(uVar7);
LAB_10147d9dc:
                    /* WARNING: Could not recover jumptable at 0x00010147d9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10147d9fc; end: 10147da87;  */

void FUN_10147d9fc(void)

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
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10147da88;
  plVar7[0xc] = lVar3;
  plVar7[0xd] = lVar6;
  plVar7[10] = lVar2;
  plVar7[0xb] = lVar5;
  plVar7[8] = lVar1;
  plVar7[9] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10147d678,0,0);
  return;
}



/* Entry: 10147da88; end: 10147db07;  */

void FUN_10147da88(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010147dac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10147db08; end: 10147db67;  */

undefined8 * FUN_10147db08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10147db68; end: 10147dbd3;  */

undefined * FUN_10147db68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c400ac(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  puVar2 = PTR_PTR_1126a7150;
  func_0x000107c610f8(PTR_PTR_1126a7150);
  func_0x000107c45f80();
  func_0x000107c615e8(uVar1);
  return puVar2;
}



/* Entry: 10147dbd4; end: 10147dbdb;  */

void FUN_10147dbd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10147dbdc; end: 10147dc2b;  */

void FUN_10147dbdc(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7158;
  func_0x000107c610f8();
  func_0x000107c45fa8();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10147dc2c; end: 10147dc3b;  */

undefined1  [16] FUN_10147dc2c(void)

{
  return ZEXT816(0x1103c43c8);
}



/* Entry: 10147dc3c; end: 10147dcd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147dc3c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_60;
  FUN_10147dff8();
  lVar2 = param_2;
  func_0x000107c610f8();
  lVar3 = lVar2;
  func_0x00010147e018();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112da1c60) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c();
  plVar5 = &lStack_50;
  func_0x000107c61154(plVar5,puVar1);
  *(long **)(lVar2 + _DAT_112da1c30) = plVar5;
  lStack_60 = lVar2;
  lStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 10147dcd8; end: 10147dce7; -[_TtC27CppAppStartExperimentReaderP33_BF8AD0E596057DF272DE316F417672B839CppAppStartExperimentReaderProviderImpl getAppStartExperimentReader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147dcd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112da1c30));
  return;
}



/* Entry: 10147dce8; end: 10147dcf7; -[_TtC27CppAppStartExperimentReaderP33_BF8AD0E596057DF272DE316F417672B839CppAppStartExperimentReaderProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147dce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da1c30));
  return;
}



/* Entry: 10147dcf8; end: 10147dd8b; -[_TtC27CppAppStartExperimentReader34CppAppStartExperimentReaderAdapter getBooleanValue:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10147dcf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3ebd4(uStack_38,param_2,param_3,param_4,0);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10147dd8c; end: 10147de1f; -[_TtC27CppAppStartExperimentReader34CppAppStartExperimentReaderAdapter getIntegerValue:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10147dd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4980c(uStack_38,param_2,param_3,param_4,0);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10147de20; end: 10147deb3; -[_TtC27CppAppStartExperimentReader34CppAppStartExperimentReaderAdapter getLongValue:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10147de20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4c0d0(uStack_38,param_2,param_3,param_4,0);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10147deb4; end: 10147df4f; -[_TtC27CppAppStartExperimentReader34CppAppStartExperimentReaderAdapter getFloatValue:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10147deb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000100083b20(&uStack_48);
  func_0x000107c436e4(param_1,uStack_48,param_3,param_4,0);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10147df50; end: 10147df53;  */

void FUN_10147df50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10147df54; end: 10147df87;  */

void FUN_10147df54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10147df88; end: 10147df97; -[_TtC27CppAppStartExperimentReader34CppAppStartExperimentReaderAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147df88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da1c60));
  return;
}



/* Entry: 10147df98; end: 10147dfe7;  */

void FUN_10147df98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x000100092604(0);
  func_0x000107c610f8();
  func_0x00010147e0b8(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10147dfe8; end: 10147dff7;  */

undefined1  [16] FUN_10147dfe8(void)

{
  return ZEXT816(0x1103c4468);
}



/* Entry: 10147dff8; end: 10147e037;  */

void FUN_10147dff8(void)

{
  func_0x000107c61168(&PTR_PTR_1127d96d8);
  return;
}



/* Entry: 10147e038; end: 10147e04b;  */

undefined1  [16] FUN_10147e038(void)

{
  return ZEXT816(0x1103c4488);
}



/* Entry: 10147e04c; end: 10147e06b; -[CppAppStartExperimentReaderProviderServices appStartExperimentReaderProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147e04c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112da1c90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147e06c; end: 10147e103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147e06c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da1c90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10147e104; end: 10147e15b; -[CppAppStartExperimentReaderProviderServices initWithAppStartExperimentReaderProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147e104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112da1c90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10147e15c; end: 10147e1bb; -[CppAppStartExperimentReaderProviderServices init] */

void FUN_10147e15c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CppAppStartExperimentReaderServices.CppAppStartExperimentReaderProviderServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10147e188);
  (*pcVar1)();
}



/* Entry: 10147e1bc; end: 10147e1cb; -[CppAppStartExperimentReaderProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147e1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112da1c90));
  return;
}



/* Entry: 10147e1cc; end: 10147e2a7;  */

void FUN_10147e1cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_10147e2b8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10147e2dc;
  puStack_58 = &UNK_1103c45b8;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  func_0x00010009800c(0);
  func_0x000107c610f8();
  func_0x0001048545cc(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10147e2a8; end: 10147e2b7;  */

undefined1  [16] FUN_10147e2a8(void)

{
  return ZEXT816(0x1103c45a8);
}



/* Entry: 10147e2b8; end: 10147e2db;  */

undefined8 FUN_10147e2b8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 10147e2dc; end: 10147e313;  */

void FUN_10147e2dc(long param_1)

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



/* Entry: 10147e314; end: 10147e353;  */

void FUN_10147e314(long param_1,long param_2)

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



/* Entry: 10147e354; end: 10147e3ff;  */

void FUN_10147e354(void)

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



/* Entry: 10147e400; end: 10147e507;  */

undefined1  [16] FUN_10147e400(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar4 = *unaff_x20;
  if (bVar4 < 3) {
    uVar7 = 0x6f4c747361467369;
    uVar2 = 0xeb000000006e6967;
    if (bVar4 != 1) {
      uVar7 = 0xd000000000000012;
      uVar2 = 0x800000010ef843d0;
    }
    uVar3 = 0x800000010ef843b0;
    uVar6 = 0xd000000000000010;
    if (bVar4 != 0) {
      uVar3 = uVar2;
      uVar6 = uVar7;
    }
    auVar9._8_8_ = uVar3;
    auVar9._0_8_ = uVar6;
    return auVar9;
  }
  uVar1 = 0xee00737473655467;
  uVar7 = 0x6e696e6e75527369;
  if (bVar4 != 5) {
    uVar1 = 0x800000010ef84430;
    uVar7 = 0xd000000000000015;
  }
  pcVar5 = "isRunningPerfTests";
  uVar2 = 0xd000000000000012;
  if (bVar4 != 3) {
    pcVar5 = "animationsDisabled";
    uVar2 = 0xd00000000000001c;
  }
  if (bVar4 < 5) {
    uVar1 = (ulong)pcVar5 | 0x8000000000000000;
    uVar7 = uVar2;
  }
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 10147e508; end: 10147e52b;  */

void FUN_10147e508(undefined1 *param_1,undefined1 param_2)

{
  FUN_10147e94c();
  *param_1 = param_2;
  return;
}



/* Entry: 10147e52c; end: 10147e543;  */

undefined1  [16] FUN_10147e52c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10147e544; end: 10147e593;  */

void FUN_10147e544(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10147ebb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10147e594; end: 10147e75f;  */

void FUN_10147e594(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [9];
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112da1cd0;
  func_0x0001000285a8(0x112da1cd0,&UNK_10d945740);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_10147ebb8();
  func_0x000107c606ec(puVar4,&UNK_1103c4820,&UNK_1103c4820,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60540((uint)param_2 & 1,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60540(param_2 >> 8 & 1,&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c60540(param_2 >> 0x10 & 1,&uStack_53,lVar3);
    uStack_54 = 3;
    func_0x000107c60540(param_2 >> 0x18 & 1,&uStack_54,lVar3);
    uStack_55 = 4;
    func_0x000107c60540(param_2 >> 0x20 & 1,&uStack_55,lVar3);
    uStack_56 = 5;
    func_0x000107c60540(param_2 >> 0x28 & 1,&uStack_56,lVar3);
    uStack_57 = 6;
    func_0x000107c60540(param_2 >> 0x30 & 1,&uStack_57,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 10147e760; end: 10147e7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10147e760(byte *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x21;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  FUN_10147ebf8();
  if (unaff_x21 == 0) {
    *param_1 = (byte)uVar1 & 1;
    auVar4._4_4_ = uVar2;
    auVar4._0_4_ = uVar1;
    auVar4._12_4_ = uVar2;
    auVar4._8_4_ = uVar1;
    auVar5 = NEON_ushl(auVar4,_UNK_10d945720,8);
    auVar4 = NEON_ushl(auVar4,_UNK_10d945730,8);
    uVar3 = CONCAT26(auVar5._8_2_,CONCAT24(auVar5._0_2_,CONCAT22(auVar4._8_2_,auVar4._0_2_))) &
            0x1000100010001;
    *(uint *)(param_1 + 1) =
         CONCAT13((char)(uVar3 >> 0x30),
                  CONCAT12((char)(uVar3 >> 0x20),CONCAT11((char)(uVar3 >> 0x10),(char)uVar3)));
    param_1[5] = (byte)((uint)uVar2 >> 8) & 1;
    param_1[6] = (byte)((uint)uVar2 >> 0x10) & 1;
  }
  return;
}



/* Entry: 10147e7d0; end: 10147e85f;  */

void FUN_10147e7d0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *unaff_x20;
  
  uVar1 = 0x1000000000000;
  if (unaff_x20[6] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x10000000000;
  if (unaff_x20[5] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100000000;
  if (unaff_x20[4] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x1000000;
  if (unaff_x20[3] == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x10000;
  if (unaff_x20[2] == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x100;
  if (unaff_x20[1] == 0) {
    uVar6 = 0;
  }
  FUN_10147e594(param_1,uVar6 | *unaff_x20 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1);
  return;
}



/* Entry: 10147e860; end: 10147e94b;  */

bool FUN_10147e860(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = 0x1000000000000;
  if (param_1[6] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x10000000000;
  if (param_1[5] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100000000;
  if (param_1[4] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x1000000;
  if (param_1[3] == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x10000;
  if (param_1[2] == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x100;
  if (param_1[1] == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x1000000000000;
  if (param_2[6] == 0) {
    uVar7 = 0;
  }
  uVar8 = 0x10000000000;
  if (param_2[5] == 0) {
    uVar8 = 0;
  }
  uVar9 = 0x100000000;
  if (param_2[4] == 0) {
    uVar9 = 0;
  }
  uVar10 = 0x1000000;
  if (param_2[3] == 0) {
    uVar10 = 0;
  }
  uVar11 = 0x10000;
  if (param_2[2] == 0) {
    uVar11 = 0;
  }
  uVar12 = 0x100;
  if (param_2[1] == 0) {
    uVar12 = 0;
  }
  return (((uVar6 | *param_1 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1) ^
          (uVar12 | *param_2 | uVar11 | uVar10 | uVar9 | uVar8 | uVar7)) & 0x1010101010101) == 0;
}



/* Entry: 10147e94c; end: 10147eb9f;  */

undefined4 FUN_10147e94c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == -0x2ffffffffffffff0 && param_2 == -0x7ffffffef107bc50) ||
     (func_0x000107c605b8(0xd000000000000010,0x800000010ef843b0,param_1,param_2,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x6f4c747361467369;
    if (((param_1 == 0x6f4c747361467369) && (param_2 == -0x14ffffffff919699)) ||
       (func_0x000107c605b8(0x6f4c747361467369,0xeb000000006e6967,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef107bc30)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef843d0,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef107bc10)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000012,0x800000010ef843f0,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_1 == -0x2fffffffffffffe4) && (param_2 == -0x7ffffffef107bbf0)) ||
                 (func_0x000107c605b8(0xd00000000000001c,0x800000010ef84410,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 4;
              }
              uVar2 = 0x6e696e6e75527369;
              if (((param_1 != 0x6e696e6e75527369) || (param_2 != -0x11ff8c8b8c9aab99)) &&
                 (func_0x000107c605b8(0x6e696e6e75527369,0xee00737473655467,param_1,param_2,0),
                 (uVar2 & 1) == 0)) {
                uVar2 = 0xd000000000000015;
                if ((param_1 == -0x2fffffffffffffeb) && (param_2 == -0x7ffffffef107bbd0)) {
                  func_0x000107c6142c(0x800000010ef84430);
                  return 6;
                }
                func_0x000107c605b8(0xd000000000000015,0x800000010ef84430,param_1,param_2,0);
                func_0x000107c6142c(param_2);
                if ((uVar2 & 1) != 0) {
                  return 6;
                }
                return 7;
              }
              func_0x000107c6142c(param_2);
              return 5;
            }
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 10147eba0; end: 10147ebb7;  */

bool FUN_10147eba0(ulong param_1,ulong param_2)

{
  return ((param_1 ^ param_2) & 0x1010101010101) == 0;
}



/* Entry: 10147ebb8; end: 10147ebf7;  */

void FUN_10147ebb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9458bc;
  func_0x000107c61520(&UNK_10d9458bc,&UNK_1103c4820);
  puRam0000000112da1cd8 = puVar1;
  return;
}



/* Entry: 10147ebf8; end: 10147ee57;  */

/* WARNING: Removing unreachable block (ram,0x00010147ed60) */

void FUN_10147ebf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112da1cf8;
  func_0x0001000285a8(0x112da1cf8,&UNK_10d945910);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_10147ebb8();
  func_0x000107c606e0((long)&uStack_70 - extraout_x8,&UNK_1103c4820,&UNK_1103c4820,lVar4,uVar1,uVar2
                     );
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x000107c604f8(&uStack_51,lVar3);
    uStack_52 = 1;
    func_0x000107c604f8(&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c604f8(&uStack_53,lVar3);
    uStack_54 = 3;
    puVar5 = &uStack_54;
    func_0x000107c604f8(puVar5,lVar3);
    uStack_64 = SUB84(puVar5,0);
    uStack_55 = 4;
    puVar5 = &uStack_55;
    func_0x000107c604f8(puVar5,lVar3);
    uStack_68 = SUB84(puVar5,0);
    uStack_56 = 5;
    puVar5 = &uStack_56;
    func_0x000107c604f8(puVar5,lVar3);
    uStack_6c = SUB84(puVar5,0);
    uStack_57 = 6;
    puVar5 = &uStack_57;
    func_0x000107c604f8(puVar5,lVar3);
    uStack_70 = (uint)puVar5;
    (**(code **)(lVar6 + 8))((long)&uStack_70 - extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return;
}



/* Entry: 10147ee58; end: 10147f07f;  */

void FUN_10147ee58(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 3) = *(undefined4 *)((long)param_2 + 3);
  *param_1 = uVar1;
  return;
}



/* Entry: 10147f080; end: 10147f0bf;  */

void FUN_10147f080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945894;
  func_0x000107c61520(&UNK_10d945894,&UNK_1103c4820);
  puRam0000000112da1ce0 = puVar1;
  return;
}



/* Entry: 10147f0c0; end: 10147f0c3;  */

void FUN_10147f0c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d94582c;
  func_0x000107c61520(&UNK_10d94582c,&UNK_1103c4820);
  puRam0000000112da1ce8 = puVar1;
  return;
}



/* Entry: 10147f0c4; end: 10147f103;  */

void FUN_10147f0c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d94582c;
  func_0x000107c61520(&UNK_10d94582c,&UNK_1103c4820);
  puRam0000000112da1ce8 = puVar1;
  return;
}



/* Entry: 10147f104; end: 10147f107;  */

void FUN_10147f104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945804;
  func_0x000107c61520(&UNK_10d945804,&UNK_1103c4820);
  puRam0000000112da1cf0 = puVar1;
  return;
}



/* Entry: 10147f108; end: 10147f147;  */

void FUN_10147f108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945804;
  func_0x000107c61520(&UNK_10d945804,&UNK_1103c4820);
  puRam0000000112da1cf0 = puVar1;
  return;
}



/* Entry: 10147f148; end: 10147f177; +[_TtC19CremaBackdoorShared5Paths clientLogs] */

void FUN_10147f148(void)

{
  func_0x000107c5fadc(0x2d746e65696c632f,0xec00000073676f6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f178; end: 10147f197; +[_TtC19CremaBackdoorShared5Paths cofPath] */

void FUN_10147f178(void)

{
  func_0x000107c5fadc(0x666f632f,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f198; end: 10147f1c3; +[_TtC19CremaBackdoorShared5Paths complianceFlagsPath] */

void FUN_10147f198(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef84450);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f1c4; end: 10147f1f7; +[_TtC19CremaBackdoorShared5Paths lightningModeReports] */

void FUN_10147f1c4(void)

{
  func_0x000107c5fadc(0x696e746867696c2f,0xef65646f6d2d676e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f1f8; end: 10147f21b; +[_TtC19CremaBackdoorShared5Paths crashReportId] */

void FUN_10147f1f8(void)

{
  func_0x000107c5fadc(0x68736172632f,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f21c; end: 10147f247; +[_TtC19CremaBackdoorShared5Paths openUrlPath] */

void FUN_10147f21c(void)

{
  func_0x000107c5fadc(0x72752d6e65706f2f,0xe90000000000006c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f248; end: 10147f27b; +[_TtC19CremaBackdoorShared5Paths snapDocSends] */

void FUN_10147f248(void)

{
  func_0x000107c5fadc(0x636f6470616e732f,0xee0073646e65732d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f27c; end: 10147f2a7; +[_TtC19CremaBackdoorShared5Paths snapRenderParity] */

void FUN_10147f27c(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef84470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f2a8; end: 10147f2d3; +[_TtC19CremaBackdoorShared5Paths renderParityRun] */

void FUN_10147f2a8(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef84490);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f2d4; end: 10147f31f; +[_TtC19CremaBackdoorShared5Paths appEnvironment] */

void FUN_10147f2d4(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef844b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f320; end: 10147f337; -[_TtC19CremaBackdoorShared5Paths init] */

void FUN_10147f320(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x10147f300)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10147f338; end: 10147f33b; -[_TtC19CremaBackdoorShared5Paths .cxx_destruct] */

void FUN_10147f338(void)

{
  return;
}



/* Entry: 10147f33c; end: 10147f363; +[_TtC19CremaBackdoorShared7Headers cremaV2RequestKey] */

void FUN_10147f33c(void)

{
  func_0x000107c5fadc(0x32762d616d657263,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f364; end: 10147f38b; +[_TtC19CremaBackdoorShared7Headers cremaV2RequestEnabled] */

void FUN_10147f364(void)

{
  func_0x000107c5fadc(0x64656c62616e65,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10147f38c; end: 10147f397; -[_TtC19CremaBackdoorShared7Headers init] */

void FUN_10147f38c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*(code *)0x10147f410)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10147f398; end: 10147f3d3;  */

void FUN_10147f398(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  (*param_3)();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10147f3d4; end: 10147f3df;  */

void FUN_10147f3d4(void)

{
  (*(code *)0x10147f410)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10147f3e0; end: 10147f42f;  */

void FUN_10147f3e0(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10147f430; end: 10147f45b; -[_TtC19CremaBackdoorShared7Headers .cxx_destruct] */

void FUN_10147f430(void)

{
  return;
}



/* Entry: 10147f45c; end: 10147f48b;  */

void FUN_10147f45c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10147f48c; end: 10147f5ab;  */

undefined1  [16] FUN_10147f48c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 4) {
    uVar1 = 0x79646f62;
    if (param_1 != 2) {
      uVar1 = 0x6574656d61726170;
    }
    uVar4 = 0xe400000000000000;
    if (param_1 != 2) {
      uVar4 = 0xea00000000007372;
    }
    uVar2 = 0x6c7275;
    if (param_1 != 0) {
      uVar2 = 0x746e696f70646e65;
    }
    uVar3 = 0xe300000000000000;
    if (param_1 != 0) {
      uVar3 = 0xe800000000000000;
    }
    if (param_1 < 2) {
      uVar4 = uVar3;
      uVar1 = uVar2;
    }
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = uVar1;
    return auVar6;
  }
  uVar1 = 0x73747865746e6f63;
  if (param_1 != 7) {
    uVar1 = 0x43746e6572727563;
  }
  uVar4 = 0xe800000000000000;
  if (param_1 != 7) {
    uVar4 = 0xef73747865746e6f;
  }
  uVar2 = 0x68746170;
  if (param_1 != 6) {
    uVar2 = uVar1;
  }
  uVar1 = 0xe400000000000000;
  if (param_1 != 6) {
    uVar1 = uVar4;
  }
  uVar4 = 0x800000010ef84550;
  uVar3 = 0xd000000000000011;
  if (param_1 != 4) {
    uVar4 = 0xe800000000000000;
    uVar3 = 0x6e6f697461636f6c;
  }
  if (param_1 < 6) {
    uVar1 = uVar4;
    uVar2 = uVar3;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10147f5ac; end: 10147f5cf;  */

void FUN_10147f5ac(undefined1 *param_1,undefined1 param_2)

{
  FUN_101480670();
  *param_1 = param_2;
  return;
}



/* Entry: 10147f5d0; end: 10147f5e7;  */

undefined1  [16] FUN_10147f5d0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10147f5e8; end: 10147f637;  */

void FUN_10147f5e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101480bb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10147f638; end: 10147f66f;  */

undefined1  [16] FUN_10147f638(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  pcVar2 = "response_dictionary";
  uVar1 = 0xd000000000000011;
  if (*unaff_x20 == '\x01') {
    uVar1 = 0xd000000000000012;
    pcVar2 = "requestDictionary";
  }
  auVar3._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10147f670; end: 10147f74f;  */

void FUN_10147f670(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef107baf0)) {
    uVar1 = 0xd000000000000011;
    func_0x000107c605b8(0xd000000000000011,0x800000010ef84510,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if ((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef107bad0)) {
        func_0x000107c6142c(0x800000010ef84530);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0xd000000000000012,0x800000010ef84530,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_10147f6dc;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_10147f6dc:
  *param_1 = uVar2;
  return;
}



/* Entry: 10147f750; end: 10147f767;  */

undefined1  [16] FUN_10147f750(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10147f768; end: 10147f7b7;  */

void FUN_10147f768(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101480a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10147f7b8; end: 10147fa33;  */

/* WARNING: Removing unreachable block (ram,0x00010147f9d4) */
/* WARNING: Removing unreachable block (ram,0x00010147f934) */

void FUN_10147f7b8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  long alStack_c0 [6];
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_51;
  
  lVar3 = 0;
  alStack_c0[2] = param_1;
  FUN_10147f430();
  alStack_c0[3] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar7 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112da1d68;
  alStack_c0[4] = lVar7;
  func_0x0001000285a8(0x112da1d68,&UNK_10d945958);
  lVar8 = *(long *)(lVar3 + -8);
  alStack_c0[5] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar4 = 0;
  func_0x00010147f448();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  func_0x0001000a8868(param_2,uVar5);
  FUN_101480a74();
  func_0x000107c606e0(lVar7,&UNK_1103c4a78,&UNK_1103c4a78,lVar3,uVar5,uVar2);
  if (unaff_x21 == 0) {
    uStack_90 = 0;
    uVar5 = 0x112da1d78;
    alStack_c0[1] = lVar4;
    func_0x000101480c38(0x112da1d78,0x10147f434,&UNK_10d9459c8);
    lVar4 = alStack_c0[5];
    lVar3 = alStack_c0[4];
    func_0x000107c60508(alStack_c0[4],alStack_c0[3],&uStack_90,alStack_c0[5],alStack_c0[3],uVar5);
    FUN_101480ab4(lVar3,lVar6,0x10147f434);
    uStack_51 = 1;
    FUN_101480af8();
    func_0x000107c604e8(&uStack_90,&UNK_1103c4948,&uStack_51,lVar4,&UNK_1103c4948,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar4);
    lVar3 = alStack_c0[2];
    puVar1 = (undefined8 *)(lVar6 + *(int *)(alStack_c0[1] + 0x14));
    uVar5 = CONCAT71(uStack_8f,uStack_90);
    puVar1[1] = uStack_88;
    *puVar1 = uVar5;
    puVar1[3] = uStack_78;
    puVar1[2] = uStack_80;
    puVar1[4] = uStack_70;
    func_0x000101480b38(lVar6,lVar3,0x10147f448);
    func_0x0001000834e4(param_2);
    func_0x000101480b7c(lVar6,0x10147f448);
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 10147fa34; end: 10147fa47;  */

void FUN_10147fa34(void)

{
  FUN_10147f7b8();
  return;
}



/* Entry: 10147fa48; end: 10147fa4b;  */

void FUN_10147fa48(void)

{
  return;
}



/* Entry: 10147fa4c; end: 10148011f;  */

/* WARNING: Removing unreachable block (ram,0x00010147ffd4) */
/* WARNING: Removing unreachable block (ram,0x00010147fec8) */
/* WARNING: Removing unreachable block (ram,0x00010147fdfc) */
/* WARNING: Removing unreachable block (ram,0x00010147fcd8) */
/* WARNING: Removing unreachable block (ram,0x00010147fc70) */
/* WARNING: Removing unreachable block (ram,0x00010147fce8) */
/* WARNING: Removing unreachable block (ram,0x00010147fd0c) */
/* WARNING: Removing unreachable block (ram,0x00010147fd7c) */
/* WARNING: Removing unreachable block (ram,0x00010147fe74) */
/* WARNING: Removing unreachable block (ram,0x00010147ff60) */
/* WARNING: Removing unreachable block (ram,0x00010147fff4) */
/* WARNING: Removing unreachable block (ram,0x00010147fff8) */
/* WARNING: Removing unreachable block (ram,0x000101480078) */
/* WARNING: Removing unreachable block (ram,0x000101480040) */
/* WARNING: Removing unreachable block (ram,0x000101480044) */
/* WARNING: Removing unreachable block (ram,0x000101480088) */
/* WARNING: Removing unreachable block (ram,0x00010148008c) */
/* WARNING: Removing unreachable block (ram,0x000101480058) */
/* WARNING: Removing unreachable block (ram,0x00010148005c) */
/* WARNING: Removing unreachable block (ram,0x000101480074) */
/* WARNING: Removing unreachable block (ram,0x0001014800b0) */
/* WARNING: Removing unreachable block (ram,0x0001014800b4) */
/* WARNING: Removing unreachable block (ram,0x00010147fc04) */

void FUN_10147fa4c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_b0 [5];
  long lStack_88;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x112d36580;
  alStack_b0[4] = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar13 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar13 - extraout_x12;
  lVar3 = 0x112da1d88;
  lStack_88 = lVar11;
  func_0x0001000285a8(0x112da1d88,&UNK_10d945960);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_00;
  lVar4 = 0;
  FUN_10147f430();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  func_0x0001000a8868(param_2,uVar7);
  FUN_101480bb8();
  func_0x000107c606e0(lVar11,&UNK_1103c49e8,&UNK_1103c49e8,lVar5,uVar7,uVar9);
  if (unaff_x21 == 0) {
    uVar6 = 0;
    alStack_b0[3] = lVar13;
    func_0x000107c5ede0(0);
    uStack_70 = 0;
    uVar7 = 0x112da1d98;
    func_0x000101480c38(0x112da1d98,PTR___s10Foundation3URLVMa_110350988,
                        PTR___s10Foundation3URLVSeAAMc_1103509b0);
    lVar5 = lStack_88;
    func_0x000107c604e8(lStack_88,uVar6,&uStack_70,lVar3,uVar6,uVar7);
    func_0x0001001021cc(lVar5,lVar14);
    uStack_70 = 1;
    puVar8 = &uStack_70;
    lVar5 = lVar3;
    func_0x000107c604d4();
    puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar4 + 0x14));
    *puVar1 = puVar8;
    puVar1[1] = lVar5;
    uStack_51 = 2;
    lStack_88 = uVar7;
    func_0x0001006e2f9c();
    func_0x000107c604e8(&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar3,
                        PTR___s10Foundation4DataVN_110350ae0,puVar8);
    puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar4 + 0x18));
    puVar1[1] = uStack_68;
    *puVar1 = CONCAT71(uStack_6f,uStack_70);
    uVar7 = 0x112da1d60;
    func_0x0001000285a8(0x112da1d60,&UNK_10d945950);
    uStack_51 = 3;
    uVar9 = uVar7;
    func_0x000101480c78();
    func_0x000107c604e8(&uStack_70,uVar7,&uStack_51,lVar3,uVar7,uVar9);
    puVar10 = (undefined *)CONCAT71(uStack_6f,uStack_70);
    alStack_b0[2] = lVar3;
    if (puVar10 == (undefined *)0x0) {
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101480964();
    }
    *(undefined **)(lVar14 + *(int *)(lVar4 + 0x1c)) = puVar10;
    uStack_51 = 4;
    func_0x000107c604e8(&uStack_70,uVar7,&uStack_51,alStack_b0[2],uVar7,uVar9);
    puVar10 = (undefined *)CONCAT71(uStack_6f,uStack_70);
    if (puVar10 == (undefined *)0x0) {
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101480964();
    }
    lVar5 = alStack_b0[3];
    lVar3 = alStack_b0[2];
    *(undefined **)(lVar14 + *(int *)(lVar4 + 0x20)) = puVar10;
    uStack_70 = 5;
    func_0x000107c604e8(alStack_b0[3],uVar6,&uStack_70,alStack_b0[2],uVar6,lStack_88);
    func_0x0001001021cc(lVar5,lVar14 + *(int *)(lVar4 + 0x24));
    uStack_70 = 6;
    puVar8 = &uStack_70;
    lVar5 = lVar3;
    func_0x000107c604d4();
    puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar4 + 0x28));
    *puVar1 = puVar8;
    puVar1[1] = lVar5;
    uVar7 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uStack_51 = 7;
    uVar9 = 0x112d5ad70;
    FUN_101480d04(0x112d5ad70,PTR___sSSSesWP_11034daa8,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c604e8(&uStack_70,uVar7,&uStack_51,lVar3,uVar7,uVar9);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)CONCAT71(uStack_6f,uStack_70) != (undefined *)0x0) {
      puVar10 = (undefined *)CONCAT71(uStack_6f,uStack_70);
    }
    *(undefined **)(lVar14 + *(int *)(lVar4 + 0x2c)) = puVar10;
    uStack_51 = 8;
    func_0x000107c604e8(&uStack_70,uVar7,&uStack_51,lVar3,uVar7,uVar9);
    if ((undefined *)CONCAT71(uStack_6f,uStack_70) != (undefined *)0x0) {
      puVar2 = (undefined *)CONCAT71(uStack_6f,uStack_70);
    }
    (**(code **)(lVar12 + 8))(lVar11,lVar3);
    *(undefined **)(lVar14 + *(int *)(lVar4 + 0x30)) = puVar2;
    FUN_101480b38(lVar14,alStack_b0[4],0x10147f434);
    func_0x0001000834e4(param_2);
    func_0x000101480b7c(lVar14,0x10147f434);
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101480120; end: 101480453;  */

void FUN_101480120(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_61;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar4 = 0x112da1db8;
  func_0x0001000285a8(0x112da1db8,&UNK_10d945970);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar6);
  FUN_101480bb8();
  func_0x000107c606ec(auStack_80 + -extraout_x8,&UNK_1103c49e8,&UNK_1103c49e8,param_1,uVar6,uVar5);
  uStack_51 = 0;
  uVar5 = 0;
  func_0x000107c5ede0(0);
  uVar6 = 0x112da1dc0;
  func_0x000101480c38(0x112da1dc0,PTR___s10Foundation3URLVMa_110350988,
                      PTR___s10Foundation3URLVSEAAMc_110350998);
  func_0x000107c60530();
  if (unaff_x21 == 0) {
    lVar7 = 0;
    FUN_10147f430();
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar7 + 0x14));
    uVar8 = *puVar1;
    uStack_52 = 1;
    func_0x000107c60520(uVar8,puVar1[1],&uStack_52,lVar4);
    iVar3 = *(int *)(lVar7 + 0x18);
    uStack_53 = 2;
    FUN_101480d6c();
    func_0x000107c60530(unaff_x20 + iVar3,&uStack_53,lVar4,PTR___s10Foundation4DataVN_110350ae0,
                        uVar8);
    lStack_70 = (long)*(int *)(lVar7 + 0x1c);
    uStack_54 = 3;
    uVar8 = 0x112da1d60;
    func_0x0001000285a8(0x112da1d60,&UNK_10d945950);
    uVar9 = uVar8;
    FUN_101480dac();
    lVar2 = unaff_x20 + lStack_70;
    uStack_78 = uVar9;
    lStack_70 = uVar8;
    func_0x000107c60554(lVar2,&uStack_54,lVar4,uVar8);
    uStack_55 = 4;
    func_0x000107c60554(unaff_x20 + *(int *)(lVar7 + 0x20),&uStack_55,lVar4,lStack_70,uStack_78);
    uStack_56 = 5;
    func_0x000107c60530(unaff_x20 + *(int *)(lVar7 + 0x24),&uStack_56,lVar4,uVar5,uVar6);
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar7 + 0x28));
    uStack_57 = 6;
    func_0x000107c60520(*puVar1,puVar1[1],&uStack_57,lVar4);
    iVar3 = *(int *)(lVar7 + 0x2c);
    uStack_58 = 7;
    uVar6 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar5 = 0x112d5ad80;
    FUN_101480d04(0x112d5ad80,PTR___sSSSEsWP_11034da88,PTR___sSayxGSEsSERzlMc_11034dce0);
    func_0x000107c60554(unaff_x20 + iVar3,&uStack_58,lVar4,uVar6,uVar5);
    uStack_61 = 8;
    func_0x000107c60554(unaff_x20 + *(int *)(lVar7 + 0x30),&uStack_61,lVar4,uVar6,uVar5);
  }
  (**(code **)(lVar10 + 8))(auStack_80 + -extraout_x8,lVar4);
  return;
}



/* Entry: 101480454; end: 10148047b;  */

void FUN_101480454(void)

{
  FUN_10147fa4c();
  return;
}



/* Entry: 10148047c; end: 1014804ff;  */

void FUN_10148047c(void)

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



/* Entry: 101480500; end: 10148059b;  */

undefined1  [16] FUN_101480500(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar6 = *unaff_x20;
  uVar5 = 0x676e69727473;
  if (bVar6 != 4) {
    uVar5 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0xe600000000000000;
  if (bVar6 != 4) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x6e6f736a;
  if (bVar6 != 3) {
    uVar2 = uVar5;
  }
  uVar5 = 0xe400000000000000;
  if (bVar6 != 3) {
    uVar5 = uVar1;
  }
  uVar1 = 0x726f727265;
  if (bVar6 != 1) {
    uVar1 = 0x61746164;
  }
  uVar3 = 0xe500000000000000;
  if (bVar6 != 1) {
    uVar3 = 0xe400000000000000;
  }
  uVar4 = 0x65646f63;
  if (bVar6 != 0) {
    uVar4 = uVar1;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6 != 0) {
    uVar1 = uVar3;
  }
  if (bVar6 < 3) {
    uVar5 = uVar1;
    uVar2 = uVar4;
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 10148059c; end: 1014805bf;  */

void FUN_10148059c(undefined1 *param_1,undefined1 param_2)

{
  FUN_101480ea0();
  *param_1 = param_2;
  return;
}



/* Entry: 1014805c0; end: 1014805d7;  */

undefined1  [16] FUN_1014805c0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1014805d8; end: 101480627;  */

void FUN_1014805d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101483740();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101480628; end: 10148066b;  */

void FUN_101480628(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101481090(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    param_1[4] = uStack_28;
  }
  return;
}



/* Entry: 10148066c; end: 10148066f;  */

void FUN_10148066c(void)

{
  return;
}



/* Entry: 101480670; end: 101480963;  */

undefined4 FUN_101480670(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x6c7275 || param_2 != -0x1d00000000000000) {
    uVar1 = 0x6c7275;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x746e696f70646e65;
      if (((param_1 == 0x746e696f70646e65) && (param_2 == -0x1800000000000000)) ||
         (func_0x000107c605b8(0x746e696f70646e65,0xe800000000000000,param_1,param_2,0),
         (uVar1 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        return 1;
      }
      if ((param_1 != 0x79646f62) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0;
        func_0x000107c605b8(0x79646f62,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0;
          if (((param_1 == 0x6574656d61726170) && (param_2 == -0x15ffffffffff8c8e)) ||
             (func_0x000107c605b8(0x6574656d61726170,0xea00000000007372,param_1,param_2,0),
             (uVar1 & 1) != 0)) {
            func_0x000107c6142c(param_2);
            return 3;
          }
          if ((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffef107bab0)) {
            uVar1 = 0xd000000000000011;
            func_0x000107c605b8(0xd000000000000011,0x800000010ef84550,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0;
              if (((param_1 == 0x6e6f697461636f6c) && (param_2 == -0x1800000000000000)) ||
                 (func_0x000107c605b8(0x6e6f697461636f6c,0xe800000000000000,param_1,param_2,0),
                 (uVar1 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 5;
              }
              if ((param_1 != 0x68746170) || (param_2 != -0x1c00000000000000)) {
                uVar1 = 0;
                func_0x000107c605b8(0x68746170,0xe400000000000000,param_1,param_2,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = 0x73747865746e6f63;
                  if (((param_1 != 0x73747865746e6f63) || (param_2 != -0x1800000000000000)) &&
                     (func_0x000107c605b8(0x73747865746e6f63,0xe800000000000000,param_1,param_2,0),
                     (uVar1 & 1) == 0)) {
                    uVar1 = 0x43746e6572727563;
                    if ((param_1 == 0x43746e6572727563) && (param_2 == -0x108c8b879a8b9191)) {
                      func_0x000107c6142c(0xef73747865746e6f);
                      return 8;
                    }
                    func_0x000107c605b8(0x43746e6572727563,0xef73747865746e6f,param_1,param_2,0);
                    func_0x000107c6142c(param_2);
                    if ((uVar1 & 1) != 0) {
                      return 8;
                    }
                    return 9;
                  }
                  func_0x000107c6142c(param_2);
                  return 7;
                }
              }
              func_0x000107c6142c(param_2);
              return 6;
            }
          }
          func_0x000107c6142c(param_2);
          return 4;
        }
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 101480964; end: 101480a73;  */

undefined * FUN_101480964(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112da1f60,&UNK_10d945d08);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-3];
      uVar5 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar5);
      uVar9 = uVar3;
      uVar10 = uVar5;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101480a70);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101480a74);
        (*pcVar7)();
      }
      puVar12 = puVar12 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 101480a74; end: 101480ab3;  */

void FUN_101480a74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945cac;
  func_0x000107c61520(&UNK_10d945cac,&UNK_1103c4a78);
  puRam0000000112da1d70 = puVar1;
  return;
}



/* Entry: 101480ab4; end: 101480af7;  */

undefined8 FUN_101480ab4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101480af8; end: 101480b37;  */

void FUN_101480af8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945a18;
  func_0x000107c61520(&UNK_10d945a18,&UNK_1103c4948);
  puRam0000000112da1d80 = puVar1;
  return;
}



/* Entry: 101480b38; end: 101480bb7;  */

undefined8 FUN_101480b38(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101480bb8; end: 101480bf7;  */

void FUN_101480bb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da1d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d945c5c;
  func_0x000107c61520(&UNK_10d945c5c,&UNK_1103c49e8);
  puRam0000000112da1d90 = puVar1;
  return;
}



/* Entry: 101480bf8; end: 101480d03;  */

undefined8 FUN_101480bf8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


