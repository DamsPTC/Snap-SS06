/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000ca85c; end: 1000ca88b;  */

void FUN_1000ca85c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1000ca88c; end: 1000cab8f;  */

void FUN_1000ca88c(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  long lVar10;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_80 [32];
  long lStack_58;
  
  lStack_e8 = *(long *)(param_5 + -8);
  lVar5 = param_6;
  lStack_e0 = param_5;
  uStack_d8 = param_8;
  pcStack_a8 = param_1;
  uStack_a0 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar9 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_98 = lVar9;
  func_0x000107c614b8(0,*(undefined8 *)(lVar5 + 8));
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lStack_c8 = lVar9;
  lStack_b8 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_d0 = lVar9;
  func_0x000107c614b8(0,param_6,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lStack_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar9 - extraout_x8_02;
  lVar5 = param_3;
  func_0x000107c5fe84(param_3,param_6);
  lVar1 = lStack_b8;
  if (lVar5 == 0) {
    func_0x000107c5fc6c();
  }
  else {
    lVar6 = lStack_b8;
    lStack_f0 = lVar4;
    func_0x000107c60390();
    uVar7 = 0;
    lStack_58 = lVar6;
    func_0x000107c60394(0,lVar1);
    uStack_b0 = uVar7;
    func_0x000107c60374(lVar5);
    lStack_90 = lVar9;
    func_0x000107c5fe7c(lVar9,param_3);
    lVar4 = lStack_c8;
    lVar1 = lStack_d0;
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000cab90);
      (*pcVar2)();
    }
    do {
      pcVar2 = (code *)auStack_80;
      func_0x000107c5fed0(pcVar2,lStack_90,param_3,param_6);
      (**(code **)(lVar10 + 0x10))(lVar4);
      (*pcVar2)(auStack_80,0);
      (*pcStack_a8)(lVar1,lVar4,lStack_98);
      if (unaff_x21 != 0) {
        (**(code **)(lVar10 + 8))(lVar4,lVar3);
        (**(code **)(lStack_c0 + 8))(lStack_90,lStack_f0);
        func_0x000107c61574(lStack_58);
        (**(code **)(lStack_e8 + 0x20))(uStack_d8,lStack_98,lStack_e0);
        return;
      }
      (**(code **)(lVar10 + 8))(lVar4,lVar3);
      func_0x000107c60388(lVar1,uStack_b0);
      func_0x000107c5fe98(lStack_90,param_3,param_6);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(lStack_c0 + 8))(lStack_90,lStack_f0);
    uVar7 = uStack_b0;
    puVar8 = PTR___ss15ContiguousArrayVyxGSTsMc_11034e6b8;
    func_0x000107c61520(PTR___ss15ContiguousArrayVyxGSTsMc_11034e6b8,uStack_b0);
    func_0x000107c5fc90(&lStack_58,lStack_b8,uVar7,puVar8);
  }
  return;
}



/* Entry: 1000cab90; end: 1000cab97;  */

void FUN_1000cab90(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  FUN_1000cad14();
  uVar3 = 0;
  FUN_1000caff4(0);
  pcVar4 = FUN_1000d2450;
  FUN_1000cb480(FUN_1000d2450,0,uVar3);
  func_0x000107c61574(lVar2);
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef86230);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  FUN_1000d06f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(pcVar4);
  func_0x0001000d17e8(puVar5,pcVar4);
  uVar3 = 0;
  FUN_1000d1934(0);
  func_0x000107c610f8();
  FUN_1000d1e9c(puVar5,pcVar4,uVar3);
  *param_1 = puVar5;
  return;
}



/* Entry: 1000cab98; end: 1000cad13;  */

void FUN_1000cab98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  FUN_1000cad14();
  uVar3 = 0;
  FUN_1000caff4(0);
  pcVar4 = FUN_1000d2450;
  FUN_1000cb480(FUN_1000d2450,0,uVar3);
  func_0x000107c61574(lVar2);
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef86230);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  FUN_1000d06f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(pcVar4);
  func_0x0001000d17e8(puVar5,pcVar4);
  uVar3 = 0;
  FUN_1000d1934(0);
  func_0x000107c610f8();
  FUN_1000d1e9c(puVar5,pcVar4,uVar3);
  *param_1 = puVar5;
  return;
}



/* Entry: 1000cad14; end: 1000cad5b;  */

void FUN_1000cad14(void)

{
  long *unaff_x20;
  
  FUN_1000bcf80(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c6157c();
  FUN_1000cafa8(FUN_1000d2370);
  return;
}



/* Entry: 1000cad5c; end: 1000cadcb;  */

void FUN_1000cad5c(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long **pplVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  long *plStack_38;
  
  plStack_38 = *(long **)(unaff_x20 + 0x20);
  lVar3 = *plStack_38;
  pcVar4 = *(code **)(*(long *)*param_2 + 0x58);
  puVar1 = &DAT_10dd3b9e8;
  func_0x000107c61520(&DAT_10dd3b9e8,lVar3);
  pplVar2 = &plStack_38;
  (*pcVar4)(pplVar2,lVar3,puVar1);
  *param_1 = (long)pplVar2;
  param_1[1] = lVar3;
  return;
}



/* Entry: 1000cadcc; end: 1000cadd7;  */

void FUN_1000cadcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8209a4);
  return;
}



/* Entry: 1000cadd8; end: 1000caeaf;  */

undefined1  [16] FUN_1000cadd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_1000cadcc(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_1000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  func_0x000107c6157c(lVar2);
  func_0x0001000d0af4(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_10dd3b6b0;
  uStack_48 = param_2;
  func_0x000107c61520(&DAT_10dd3b6b0,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  func_0x000107c61574(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 1000caeb0; end: 1000caeb3;  */

void FUN_1000caeb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000caeb4; end: 1000caf3b;  */

void FUN_1000caeb4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 1000caf3c; end: 1000caf43; -[SCSystemConfigurationImpl cameraZoomFactorsConfiguration] */

undefined8 FUN_1000caf3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1000caf44; end: 1000caf4b; -[SCSystemConfigurationImpl videoStabilizationByDefault] */

undefined8 FUN_1000caf44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1000caf4c; end: 1000cafa7;  */

void FUN_1000caf4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7158;
  func_0x000107c610f4(PTR_PTR_1126b7158);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c456e8(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1000cafa8; end: 1000caff3;  */

undefined8 FUN_1000cafa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1000bdd8c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1000caff4; end: 1000cb013;  */

void FUN_1000caff4(void)

{
  func_0x000107c61168(&PTR_PTR_112da9540);
  return;
}



/* Entry: 1000cb014; end: 1000cb087; -[SCCameraVideoStabilizationByDefaultConfigurationImpl initWithAppStartExperimentReader:] */

undefined1 * FUN_1000cb014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7698;
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



/* Entry: 1000cb088; end: 1000cb09f; -[SCCameraVideoStabilizationByDefaultConfigurationImpl enableVideoStabilizationByDefault] */

void FUN_1000cb088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd1158,0,0);
  return;
}



/* Entry: 1000cb0a0; end: 1000cb23b; +[SCZstdLocalizedStringLookup _decompressData:error:] */

undefined * FUN_1000cb0a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  ulong auStack_80 [2];
  int iStack_6c;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar5 = auStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar3 = param_3;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar4 = param_3;
  func_0x000107c4adac(param_3);
  FUN_1000cb2a4(auStack_80,uVar3,uVar4,0);
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  uVar4 = 0;
  if (iStack_6c != 1) {
    uVar4 = auStack_80[0];
  }
  if ((puVar5 == (ulong *)0x0) && (uVar4 != 0xfffffffffffffffe)) {
    puVar9 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x000107c41304();
    func_0x000107c61180();
    puVar7 = puVar9;
    func_0x000107c61178();
    func_0x000107c4d2d0();
    uVar3 = param_3;
    func_0x000107c61178(param_3);
    func_0x000107c3eea8();
    uVar6 = param_3;
    func_0x000107c4adac(param_3);
    FUN_1000cbfa4(puVar7,uVar4,uVar3,uVar6);
    iVar8 = (int)puVar7;
    func_0x000107c55bc4(puVar9);
    uVar3 = uVar4;
  }
  else {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110dd1358;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    iVar8 = 0x10dd1338;
    func_0x000107c42a58();
    func_0x000107c61180();
    func_0x000107c61104();
    *param_4 = puVar9;
    func_0x000107c61170(puVar7);
    puVar9 = (undefined *)0x0;
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  func_0x000107c60e78();
  uVar4 = 5;
  if (iVar8 != 0) {
    uVar4 = 1;
  }
  if (uVar3 < uVar4) {
    return (undefined *)0xffffffffffffffb8;
  }
  bVar2 = *(byte *)(param_3 + uVar4 + -1);
  lVar1 = *(long *)(&UNK_10e0112c0 + ((ulong)bVar2 & 3) * 8) + uVar4 +
          *(long *)(&UNK_10e0112e0 + (ulong)(bVar2 >> 6) * 8);
  if ((bVar2 & 0x20) == 0) {
    lVar1 = lVar1 + 1;
  }
  return (undefined *)(lVar1 + (ulong)((uint)(bVar2 < 0x40) & (bVar2 & 0x20) >> 5));
}



/* Entry: 1000cb23c; end: 1000cb2a3;  */

long FUN_1000cb23c(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar2 = 5;
  if (param_3 != 0) {
    uVar2 = 1;
  }
  if (param_2 < uVar2) {
    return -0x48;
  }
  bVar3 = *(byte *)(param_1 + uVar2 + -1);
  lVar1 = *(long *)(&UNK_10e0112c0 + ((ulong)bVar3 & 3) * 8) + uVar2 +
          *(long *)(&UNK_10e0112e0 + (ulong)(bVar3 >> 6) * 8);
  if ((bVar3 & 0x20) == 0) {
    lVar1 = lVar1 + 1;
  }
  return lVar1 + (ulong)((uint)(bVar3 < 0x40) & (bVar3 & 0x20) >> 5);
}



/* Entry: 1000cb2a4; end: 1000cb47f;  */

uint * FUN_1000cb2a4(ulong *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = (uint *)0x5;
  if ((int)param_4 != 0) {
    puVar6 = (uint *)0x1;
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar7 = puVar6;
  if (puVar6 <= param_3) {
    if (param_2 == (uint *)0x0) {
      puVar7 = (uint *)0xffffffffffffffff;
    }
    else if (((int)param_4 == 1) || (*param_2 == 0xfd2fb528)) {
      puVar7 = param_2;
      FUN_1000cb23c(param_2,param_3,param_4);
      if (puVar7 <= param_3) {
        *(int *)(param_1 + 3) = (int)puVar7;
        bVar2 = ((byte *)((long)param_2 + (long)puVar6))[-1];
        if ((bVar2 >> 3 & 1) == 0) {
          if ((bVar2 >> 5 & 1) == 0) {
            bVar1 = *(byte *)((long)param_2 + (long)puVar6);
            if (0xaf < (ulong)bVar1) {
              return (uint *)0xfffffffffffffff0;
            }
            puVar6 = (uint *)((long)puVar6 + 1);
            uVar4 = 1L << (ulong)(bVar1 >> 3) + 10;
            uVar4 = uVar4 + (uVar4 >> 3) * ((ulong)bVar1 & 7);
          }
          else {
            uVar4 = 0;
          }
          uVar3 = bVar2 & 3;
          bVar1 = bVar2 >> 6;
          if (uVar3 == 1 || (bVar2 & 3) == 0) {
            if ((bVar2 & 3) != 0) {
              uVar3 = (uint)*(byte *)((long)param_2 + (long)puVar6);
              puVar6 = (uint *)((long)puVar6 + 1);
            }
          }
          else if (uVar3 == 2) {
            uVar3 = (uint)*(ushort *)((long)param_2 + (long)puVar6);
            puVar6 = (uint *)((long)puVar6 + 2);
          }
          else {
            uVar3 = *(uint *)((long)param_2 + (long)puVar6);
            puVar6 = puVar6 + 1;
          }
          if (bVar1 < 2) {
            if (bVar1 == 0) {
              if ((bVar2 >> 5 & 1) == 0) {
                uVar5 = 0xffffffffffffffff;
              }
              else {
                uVar5 = (ulong)*(byte *)((long)param_2 + (long)puVar6);
              }
            }
            else {
              uVar5 = (ulong)*(ushort *)((long)param_2 + (long)puVar6) + 0x100;
            }
          }
          else if (bVar1 == 2) {
            uVar5 = (ulong)*(uint *)((long)param_2 + (long)puVar6);
          }
          else {
            uVar5 = *(ulong *)((long)param_2 + (long)puVar6);
          }
          puVar7 = (uint *)0x0;
          if ((bVar2 & 0x20) != 0) {
            uVar4 = uVar5;
          }
          *param_1 = uVar5;
          param_1[1] = uVar4;
          if (0x1ffff < uVar4) {
            uVar4 = 0x20000;
          }
          *(int *)(param_1 + 2) = (int)uVar4;
          *(undefined4 *)((long)param_1 + 0x14) = 0;
          *(uint *)((long)param_1 + 0x1c) = uVar3;
          *(uint *)(param_1 + 4) = bVar2 >> 2 & 1;
        }
        else {
          puVar7 = (uint *)0xfffffffffffffff2;
        }
      }
    }
    else if (*param_2 >> 4 == 0x184d2a5) {
      if (param_3 < (uint *)0x8) {
        puVar7 = (uint *)0x8;
      }
      else {
        puVar7 = (uint *)0x0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *param_1 = (ulong)param_2[1];
        *(undefined4 *)((long)param_1 + 0x14) = 1;
      }
    }
    else {
      puVar7 = (uint *)0xfffffffffffffff6;
    }
  }
  return puVar7;
}



/* Entry: 1000cb480; end: 1000cb51f;  */

undefined8 FUN_1000cb480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  uVar1 = 0;
  FUN_1000bcf80(0,param_3);
  puVar2 = &UNK_1107a6d90;
  func_0x000107c613fc(&UNK_1107a6d90,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = unaff_x20;
  func_0x000107c613fc(uVar1,0x18,7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c();
  FUN_1000bdd8c(FUN_1000d22a8,puVar2);
  return uVar1;
}



/* Entry: 1000cb520; end: 1000cb527; -[SCCaptureDeviceAuthorizationCheckerImpl isVideoCaptureAuthorizationG2SExperimentEnabled] */

undefined1 FUN_1000cb520(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1000cb528; end: 1000cb553;  */

void FUN_1000cb528(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000cb554; end: 1000cb577;  */

void FUN_1000cb554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2328,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 1000cb578; end: 1000cb5d7;  */

void FUN_1000cb578(void)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x0001000cb560();
  FUN_1000cb690();
  FUN_1000cb6a8();
  *puStack_30 = &PTR_DAT_11087c210;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_11087caa0;
  func_0x0001000cb6f8();
  func_0x0001000cb710();
  func_0x0001000cb720(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_1000cb5d8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1000cb578(&uStack_51);
  return;
}



/* Entry: 1000cb5d8; end: 1000cb5f3;  */

void FUN_1000cb5d8(void)

{
  undefined1 uStack_11;
  
  FUN_1000cb578(&uStack_11);
  return;
}



/* Entry: 1000cb5f4; end: 1000cb68f;  */

undefined8 FUN_1000cb5f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1000cb5d8(&uStack_50);
  uStack_38 = uStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1000cb748(param_1,&uStack_30,param_3,&uStack_40);
  FUN_1000e315c(&uStack_40);
  func_0x0001000e3180(&uStack_50);
  func_0x0001000e31a4(&uStack_30);
  return param_1;
}



/* Entry: 1000cb690; end: 1000cb6a7;  */

void FUN_1000cb690(void)

{
  return;
}



/* Entry: 1000cb6a8; end: 1000cb6c7;  */

void FUN_1000cb6a8(void)

{
  func_0x0001000cb69c();
  FUN_1000cb6c8();
  FUN_1000cb6e4();
  return;
}



/* Entry: 1000cb6c8; end: 1000cb6e3;  */

void FUN_1000cb6c8(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1000cb6e4; end: 1000cb747;  */

void FUN_1000cb6e4(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 1000cb748; end: 1000cbd8f;  */

undefined8 *
FUN_1000cb748(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char *pcVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [3];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_160;
  undefined8 uStack_158;
  int iStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_70;
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_200;
  puVar8 = param_1 + 3;
  *param_1 = &PTR_DAT_11087c140;
  uVar11 = *param_2;
  puVar7 = param_1 + 1;
  param_1[2] = param_2[1];
  *puVar7 = uVar11;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = puVar8;
  func_0x000107c60c94(puVar8,param_3);
  FUN_1000cbde0(param_1 + 6);
  func_0x0001000cbe6c();
  puVar2[1] = 0;
  puVar2[2] = 0;
  func_0x0001000cbe74();
  puVar2[3] = 0;
  param_1[8] = puVar2 + 3;
  param_1[9] = puVar2;
  uVar11 = *param_4;
  puVar9 = param_1 + 10;
  param_1[0xb] = param_4[1];
  *puVar9 = uVar11;
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x32aaaba7;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0x32aaaba7;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  func_0x000107c61284(param_1 + 0xd,0);
  FUN_1000cbe88(auStack_68,puVar8,&UNK_10dd978c8);
  func_0x000107c60c94(&uStack_b8,auStack_68);
  uStack_a0 = 0;
  uStack_98 = 0;
  puVar2 = (undefined8 *)0x40;
  func_0x000107c60e20();
  uVar11 = uStack_a8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_11087c2b0;
  puVar2[4] = uStack_b0;
  puVar2[3] = uStack_b8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[5] = uVar11;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_158 = param_1[0x27];
  uStack_160 = param_1[0x26];
  param_1[0x26] = puVar2 + 3;
  param_1[0x27] = puVar2;
  FUN_1000d04cc(&uStack_160);
  FUN_1000d04cc(&uStack_178);
  func_0x0001000d0514(&uStack_b8);
  FUN_1000cbe88(&uStack_b8,puVar8,&UNK_10dd978f8);
  FUN_100066230(param_1 + 0x2a,&uStack_b8);
  func_0x000107c60ca0(&uStack_b8);
  iVar1 = (int)param_1 + 0x1a8;
  func_0x000107c60d88();
  func_0x0001000d0540();
  (*extraout_x8)();
  if (iVar1 != 0) {
    uStack_160 = uStack_160 & 0xffffffff00000000;
    FUN_1000defe4(&uStack_b8);
    func_0x0001000e2f30(&uStack_b8);
    plVar3 = (long *)*puVar9;
    if ((bStack_70 & 1) == 0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1 + 0x2a);
      uVar11 = *puVar7;
      FUN_10002b838(auStack_d0,"InvalidStagedFile");
      uVar5 = uStack_160 & 0xffffffff;
      func_0x0001053387c0(uVar5);
      FUN_10002b838(auStack_e8,uVar5);
      puVar10 = auStack_d0;
      puVar12 = auStack_e8;
      func_0x00010533bd48(uVar11,auStack_d0,auStack_e8);
LAB_1000cb9c8:
      func_0x000107c60ca0(puVar12);
    }
    else {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 0x2a,auStack_68);
      uVar11 = *puVar7;
      if ((int)plVar3 == 0) {
        FUN_10002b838(auStack_118,"StagedPromotionRenameFailed");
        FUN_10002b838(auStack_130,"stagedPromotionRename");
        puVar10 = auStack_118;
        puVar12 = auStack_130;
        func_0x00010533bd48(uVar11,auStack_118,auStack_130);
        goto LAB_1000cb9c8;
      }
      FUN_10002b838(auStack_100,"init");
      puVar10 = auStack_100;
      func_0x000105338350(uVar11,auStack_100,1);
    }
    func_0x000107c60ca0(puVar10);
  }
  puVar2 = param_1 + 0x35;
  func_0x000107c60d8c();
  func_0x0001000d0540();
  (*extraout_x8_00)();
  if (((ulong)puVar2 & 1) == 0) {
    iStack_140 = 0;
    func_0x000107c60d38();
    puVar4 = &uStack_b8;
    puStack_138 = puVar2;
    FUN_1000da6e0(puVar4,puVar8,0);
    func_0x000107c60d7c();
    func_0x000107c60ca0(&uStack_b8);
    if (((ulong)puVar4 & 1) != 0) goto LAB_1000cbbe8;
    FUN_10002b838();
    if (iStack_140 != 0) {
      if (iStack_140 == 1) {
        pcVar6 = "directoryCreation_operation_not_permitted";
      }
      else if (iStack_140 == 2) {
        pcVar6 = "directoryCreation_path_not_found";
      }
      else {
        if (iStack_140 != 0xd) {
          func_0x000107c60ddc(&uStack_178);
          FUN_1004c3cd0(&uStack_160,"directoryCreation_",&uStack_178);
          FUN_100066230(&uStack_b8,&uStack_160);
          func_0x000107c60ca0(&uStack_160);
          func_0x00010533bd14();
          goto LAB_1000cbba8;
        }
        pcVar6 = "directoryCreation_access_denied";
      }
      func_0x000107c60c64(&uStack_b8,pcVar6);
    }
LAB_1000cbba8:
    uVar11 = *puVar7;
    func_0x00010533bcb4();
    FUN_10002b838(auStack_190);
    func_0x000107c60c94(auStack_1a8,&uStack_b8);
    func_0x00010533bd48(uVar11,auStack_190,auStack_1a8);
    func_0x000107c60ca0(auStack_1a8);
    func_0x00010533bdb4();
    puVar4 = &uStack_b8;
  }
  else {
    func_0x0001000d0540();
    iVar1 = (int)puVar2;
    (*extraout_x8_01)();
    if (iVar1 == 0) goto LAB_1000cbbe8;
    (**(code **)(*(long *)*puVar9 + 0x30))(&uStack_b8,(long *)*puVar9,auStack_68);
    FUN_1000dee38(param_1[0x26] + 0x18,&uStack_b8);
    func_0x0001000d04f0(&uStack_b8);
    uStack_160 = uStack_160 & 0xffffffff00000000;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    FUN_1000dee68();
    FUN_1000e2fa0(param_1 + 0x28,&uStack_b8);
    func_0x0001000e2fc4(&uStack_b8);
    FUN_1000e2fe8();
    if (param_1[0x28] == 0) {
      uVar5 = uStack_160 & 0xffffffff;
      if ((int)uStack_160 == 6) goto LAB_1000cbbe8;
      uVar11 = *puVar7;
      func_0x0001053387c0();
      FUN_10002b838(auStack_1d0,uVar5);
      func_0x00010533bdbc();
      func_0x00010533bd48(uVar11,auStack_1d0,auStack_1e8);
      func_0x00010533bcd0();
      puVar4 = auStack_1d0;
    }
    else {
      uVar11 = *puVar7;
      func_0x000107c60ddc(auStack_200,**(undefined4 **)(param_1[0x28] + 0x28));
      FUN_1000e3000(uVar11,auStack_200,1);
    }
  }
  func_0x000107c60ca0(puVar4);
LAB_1000cbbe8:
  func_0x0001000e3154();
  return param_1;
}



/* Entry: 1000cbd90; end: 1000cbddf;  */

void FUN_1000cbd90(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000cb560();
  FUN_1000cb690();
  FUN_1000cbdfc();
  FUN_1000cbe48(uStack_30);
  *(undefined8 *)(extraout_x8 + 0x10) = 0;
  *(undefined8 *)(extraout_x8 + 0x18) = 0;
  *(undefined8 *)(extraout_x8 + 0x20) = 0;
  *(undefined8 *)(extraout_x8 + 0x28) = 0;
  func_0x0001000cb6f8();
  func_0x0001000cbe5c();
  func_0x0001000cb720(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_1000cbde0;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1000cbd90(&uStack_51);
  return;
}



/* Entry: 1000cbde0; end: 1000cbdfb;  */

void FUN_1000cbde0(void)

{
  undefined1 uStack_11;
  
  FUN_1000cbd90(&uStack_11);
  return;
}



/* Entry: 1000cbdfc; end: 1000cbe1b;  */

void FUN_1000cbdfc(void)

{
  func_0x0001000cb69c();
  FUN_1000cbe1c();
  FUN_1000cb6e4();
  return;
}



/* Entry: 1000cbe1c; end: 1000cbe47;  */

void FUN_1000cbe1c(undefined8 param_1,ulong param_2)

{
  undefined8 *extraout_x8;
  
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *extraout_x8 = &PTR_DAT_11087c620;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 1000cbe48; end: 1000cbe87;  */

void FUN_1000cbe48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11087c620;
  param_1[1] = 0;
  return;
}



/* Entry: 1000cbe88; end: 1000cbed7;  */

void FUN_1000cbe88(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uStack_11;
  
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  uVar2 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  FUN_1000d0424(&uStack_11,puVar3,uVar1,puVar4,uVar2);
  return;
}



/* Entry: 1000cbed8; end: 1000cbfa3;  */

long FUN_1000cbed8(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = (code *)*param_1;
  if ((pcVar1 == (code *)0x0) == (param_1[1] == 0)) {
    if (pcVar1 == (code *)0x0) {
      lVar2 = 0x27210;
      func_0x000107c610a0();
    }
    else {
      lVar2 = param_1[2];
      (*pcVar1)(lVar2,0x27210);
    }
    if (lVar2 != 0) {
      uVar4 = param_1[1];
      uVar3 = *param_1;
      *(undefined8 *)(lVar2 + 0x7130) = param_1[2];
      *(undefined8 *)(lVar2 + 0x7128) = uVar4;
      *(undefined8 *)(lVar2 + 0x7120) = uVar3;
      *(undefined4 *)(lVar2 + 0x7110) = 0;
      *(undefined8 *)(lVar2 + 29000) = 0;
      *(undefined8 *)(lVar2 + 0x7190) = 0x8000001;
      *(undefined8 *)(lVar2 + 0x7060) = 0;
      *(undefined8 *)(lVar2 + 0x71a0) = 0;
      *(undefined8 *)(lVar2 + 0x71c0) = 0;
      *(undefined4 *)(lVar2 + 0x71c8) = 0;
      *(undefined4 *)(lVar2 + 0x71d4) = 0;
      *(undefined4 *)(lVar2 + 0x7150) = 0;
      *(undefined8 *)(lVar2 + 0x7160) = 0;
      *(undefined8 *)(lVar2 + 0x7158) = 0;
      *(undefined8 *)(lVar2 + 0x7174) = 0;
      *(undefined8 *)(lVar2 + 0x717c) = 0;
      *(undefined8 *)(lVar2 + 0x716c) = 0;
      *(undefined4 *)(lVar2 + 0x7184) = 0;
    }
    return lVar2;
  }
  return 0;
}



/* Entry: 1000cbfa4; end: 1000cc02f;  */

undefined *
FUN_1000cbfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_10e010ee0;
  FUN_1000cbed8();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0xffffffffffffffc0;
  }
  else {
    puVar2 = puVar1;
    FUN_1000cc030();
    puVar3 = puVar1;
    FUN_1000cc0fc(puVar1,param_1,param_2,param_3,param_4,0,0,puVar2);
    FUN_1000db554(puVar1);
  }
  return puVar3;
}



/* Entry: 1000cc030; end: 1000cc08b;  */

undefined8 FUN_1000cc030(long param_1)

{
  if (*(int *)(param_1 + 0x7170) != -1) {
    if (*(int *)(param_1 + 0x7170) != 1) {
      FUN_1000cc08c(*(undefined8 *)(param_1 + 0x7158));
      *(undefined4 *)(param_1 + 0x7170) = 0;
      *(undefined8 *)(param_1 + 0x7160) = 0;
      *(undefined8 *)(param_1 + 0x7158) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x7170) = 0;
  }
  return *(undefined8 *)(param_1 + 0x7160);
}



/* Entry: 1000cc08c; end: 1000cc0fb;  */

undefined8 FUN_1000cc08c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  pcVar2 = (code *)param_1[0xd0a];
  lVar1 = param_1[0xd0b];
  if (*param_1 == 0) {
    if (pcVar2 != (code *)0x0) goto LAB_1000cc0c8;
  }
  else {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(lVar1);
LAB_1000cc0c8:
      (*pcVar2)(lVar1,param_1);
      return 0;
    }
    func_0x000107c60fd0(*param_1);
  }
  func_0x000107c60fd0(param_1);
  return 0;
}



/* Entry: 1000cc0fc; end: 1000cc62f;  */

uint * FUN_1000cc0fc(uint *param_1,long param_2,long param_3,uint *param_4,uint *param_5,
                    int *param_6,ulong param_7,long param_8)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  byte bVar13;
  uint *puVar14;
  uint *puVar15;
  long lStack_80;
  
  if (param_8 != 0) {
    param_6 = *(int **)(param_8 + 8);
    param_7 = *(ulong *)(param_8 + 0x10);
  }
  uVar6 = param_1[0x1c44];
  puVar5 = (uint *)0x5;
  if (uVar6 != 0) {
    puVar5 = (uint *)0x1;
  }
  lVar12 = param_2;
  if (puVar5 <= param_5) {
    bVar13 = 0;
    puVar1 = param_1 + 8;
    lStack_80 = param_3;
    do {
      while (*param_4 >> 4 == 0x184d2a5) {
        if (param_5 < (uint *)0x8) {
          return (uint *)0xffffffffffffffb8;
        }
        if (0xfffffff7 < param_4[1]) {
          return (uint *)0xfffffffffffffff2;
        }
        puVar14 = (uint *)((ulong)param_4[1] + 8);
        puVar15 = (uint *)0xffffffffffffffb8;
        if (puVar14 <= param_5) {
          puVar15 = puVar14;
        }
        if ((uint *)0xffffffffffffff88 < puVar15) {
          return puVar15;
        }
        param_4 = (uint *)((long)param_4 + (long)puVar15);
        param_5 = (uint *)((long)param_5 - (long)puVar15);
        if (param_5 < puVar5) goto LAB_1000cc164;
      }
      if (param_8 == 0) {
        lVar8 = 5;
        if (uVar6 != 0) {
          lVar8 = 1;
        }
        *(long *)(param_1 + 0x1c1a) = lVar8;
        param_1[0x1c26] = 0;
        param_1[0x1c27] = 0;
        param_1[0x1c14] = 0;
        param_1[0x1c15] = 0;
        param_1[0x1c12] = 0;
        param_1[0x1c13] = 0;
        param_1[0x1c18] = 0;
        param_1[0x1c19] = 0;
        param_1[0x1c16] = 0;
        param_1[0x1c17] = 0;
        param_1[0xa0e] = 0xc00000c;
        param_1[0x1c2a] = 0;
        param_1[0x1c2b] = 0;
        param_1[0x1c29] = 0;
        param_1[0x1c5a] = 0;
        param_1[0x1a0f] = 1;
        param_1[0x1a10] = 4;
        param_1[0x1a11] = 8;
        *(uint **)param_1 = puVar1;
        *(uint **)(param_1 + 2) = param_1 + 0x60c;
        *(uint **)(param_1 + 4) = param_1 + 0x40a;
        *(uint **)(param_1 + 6) = param_1 + 0xa0e;
        lVar8 = 0;
        if (param_7 != 0 && param_6 != (int *)0x0) {
          if ((param_7 < 8) || (*param_6 != -0x13cf5bc9)) {
            lVar8 = 0;
            lVar10 = 0;
            piVar7 = param_6;
          }
          else {
            param_1[0x1c5a] = param_6[1];
            puVar5 = puVar1;
            func_0x000107c2ae74(puVar1,param_6,param_7);
            if ((uint *)0xffffffffffffff88 < puVar5) {
              return (uint *)0xffffffffffffffe2;
            }
            param_1[0x1c2a] = 1;
            param_1[0x1c2b] = 1;
            lVar10 = *(long *)(param_1 + 0x1c12);
            lVar8 = *(long *)(param_1 + 0x1c14);
            piVar7 = (int *)((long)param_6 + (long)puVar5);
          }
          *(long *)(param_1 + 0x1c18) = lVar10;
          *(long *)(param_1 + 0x1c16) = (long)piVar7 + (lVar8 - lVar10);
          *(int **)(param_1 + 0x1c14) = piVar7;
          *(ulong *)(param_1 + 0x1c12) = (long)param_6 + param_7;
          lVar8 = (long)param_6 + param_7;
        }
      }
      else {
        func_0x000107c2ae78(param_1,param_8);
        lVar8 = *(long *)(param_1 + 0x1c12);
      }
      if (lVar8 != lVar12) {
        *(long *)(param_1 + 0x1c18) = lVar8;
        *(long *)(param_1 + 0x1c16) = lVar12 + (*(long *)(param_1 + 0x1c14) - lVar8);
        *(long *)(param_1 + 0x1c14) = lVar12;
        *(long *)(param_1 + 0x1c12) = lVar12;
      }
      puVar5 = (uint *)0x9;
      if (param_1[0x1c44] != 0) {
        puVar5 = (uint *)0x5;
      }
      if (param_5 < puVar5) {
LAB_1000cc5e0:
        puVar14 = (uint *)0xffffffffffffffb8;
LAB_1000cc5e4:
        if ((bool)(bVar13 & puVar14 == (uint *)0xfffffffffffffff6)) {
          return (uint *)0xffffffffffffffb8;
        }
        return puVar14;
      }
      uVar3 = 5;
      if (param_1[0x1c44] != 0) {
        uVar3 = 1;
      }
      puVar5 = param_4;
      FUN_1000cb23c(param_4,uVar3);
      puVar14 = puVar5;
      if ((uint *)0xffffffffffffff88 < puVar5) goto LAB_1000cc5e4;
      if (param_5 < (uint *)((long)puVar5 + 3U)) goto LAB_1000cc5e0;
      puVar14 = param_1;
      FUN_1000cc630(param_1,param_4,puVar5);
      if ((uint *)0xffffffffffffff88 < puVar14) goto LAB_1000cc5e4;
      lVar8 = lVar12 + lStack_80;
      puVar15 = (uint *)((long)param_4 + (long)puVar5);
      param_5 = (uint *)((long)param_5 - (long)puVar5);
      lVar10 = lVar12;
      do {
        puVar5 = (uint *)((long)param_5 - 3);
        if (param_5 < (uint *)0x3) goto LAB_1000cc5e0;
        uVar6 = *puVar15;
        puVar14 = (uint *)(ulong)(uint3)((uint3)*puVar15 >> 3);
        puVar11 = (uint *)((ulong)(ushort)((ushort)uVar6 >> 1) & 3);
        iVar9 = (int)puVar11;
        if ((iVar9 != 1) && (puVar11 = puVar14, iVar9 == 3)) goto LAB_1000cc600;
        param_5 = (uint *)((long)puVar5 - (long)puVar11);
        if (puVar5 < puVar11) goto LAB_1000cc5e0;
        puVar2 = (undefined1 *)((long)puVar15 + 3);
        if (iVar9 == 2) {
          puVar14 = param_1;
          FUN_1000cc8d0(param_1,lVar10,lVar8 - lVar10,puVar2,puVar11,1);
          if ((uint *)0xffffffffffffff88 < puVar14) goto LAB_1000cc5e4;
        }
        else if (iVar9 == 1) {
          if (lVar10 == 0) {
            if (7 < (uint3)*puVar15) {
LAB_1000cc610:
              puVar14 = (uint *)0xffffffffffffffb6;
              goto LAB_1000cc5e4;
            }
LAB_1000cc504:
            puVar14 = (uint *)0x0;
          }
          else {
            if ((uint *)(lVar8 - lVar10) < puVar14) {
LAB_1000cc608:
              puVar14 = (uint *)0xffffffffffffffba;
              goto LAB_1000cc5e4;
            }
            func_0x000107c610bc(lVar10,*puVar2,puVar14);
          }
        }
        else {
          if (lVar10 == 0) {
            if (puVar11 != (uint *)0x0) goto LAB_1000cc610;
            goto LAB_1000cc504;
          }
          if ((uint *)(lVar8 - lVar10) < puVar11) goto LAB_1000cc608;
          func_0x000107c610b4(lVar10,puVar2,puVar11);
          puVar14 = puVar11;
        }
        if (param_1[0x1c24] != 0) {
          FUN_1000d2df8(param_1 + 0x1c2c,lVar10,puVar14);
        }
        lVar10 = lVar10 + (long)puVar14;
        puVar15 = (uint *)(puVar2 + (long)puVar11);
      } while (((ushort)uVar6 & 1) == 0);
      puVar14 = (uint *)(lVar10 - lVar12);
      if ((*(uint **)(param_1 + 0x1c1c) != (uint *)0xffffffffffffffff) &&
         (puVar14 != *(uint **)(param_1 + 0x1c1c))) {
LAB_1000cc600:
        puVar14 = (uint *)0xffffffffffffffec;
        goto LAB_1000cc5e4;
      }
      param_4 = puVar15;
      if (param_1[0x1c24] != 0) {
        uVar6 = (int)param_1 + 0x70b0;
        FUN_1000db3c0();
        bVar4 = param_5 < (uint *)0x4;
        param_5 = param_5 + -1;
        if ((bVar4) || (param_4 = puVar15 + 1, *puVar15 != uVar6)) {
          puVar14 = (uint *)0xffffffffffffffea;
          goto LAB_1000cc5e4;
        }
      }
      if ((uint *)0xffffffffffffff88 < puVar14) goto LAB_1000cc5e4;
      lVar12 = lVar12 + (long)puVar14;
      lStack_80 = lStack_80 - (long)puVar14;
      uVar6 = param_1[0x1c44];
      puVar5 = (uint *)0x5;
      if (uVar6 != 0) {
        puVar5 = (uint *)0x1;
      }
      bVar13 = 1;
    } while (puVar5 <= param_5);
  }
LAB_1000cc164:
  puVar5 = (uint *)0xffffffffffffffb8;
  if (param_5 == (uint *)0x0) {
    puVar5 = (uint *)(lVar12 - param_2);
  }
  return puVar5;
}



/* Entry: 1000cc630; end: 1000cc6f7;  */

void FUN_1000cc630(long param_1)

{
  ulong uVar1;
  undefined8 uStack_28;
  
  uVar1 = param_1 + 0x7070;
  FUN_1000cb2a4();
  if ((((uVar1 < 0xffffffffffffff89) && (uVar1 == 0)) &&
      ((*(int *)(param_1 + 0x708c) == 0 ||
       (*(int *)(param_1 + 0x7168) == *(int *)(param_1 + 0x708c))))) &&
     (*(int *)(param_1 + 0x7090) != 0)) {
    *(undefined8 *)(param_1 + 0x70b0) = 0;
    *(undefined8 *)(param_1 + 0x70c0) = 0xc2b2ae3d27d4eb4f;
    *(undefined8 *)(param_1 + 0x70b8) = 0x60ea27eeadc0b5d6;
    *(undefined8 *)(param_1 + 0x70c8) = 0;
    *(undefined8 *)(param_1 + 0x70d0) = 0x61c8864e7a143579;
    *(undefined8 *)(param_1 + 0x70e0) = 0;
    *(undefined8 *)(param_1 + 0x70d8) = 0;
    *(undefined8 *)(param_1 + 0x70f0) = 0;
    *(undefined8 *)(param_1 + 0x70e8) = 0;
    *(undefined8 *)(param_1 + 0x7100) = uStack_28;
    *(undefined8 *)(param_1 + 0x70f8) = 0;
  }
  return;
}



/* Entry: 1000cc6f8; end: 1000cc83f; -[SCManagedCaptureSessionImpl setRearCameraStabilizationMode:] */

void FUN_1000cc6f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar5);
  lVar2 = lVar5;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar5);
      }
      puVar3 = PTR_PTR_1126aff08;
      func_0x000107c4193c(*(undefined8 *)(lVar6 * 8));
      func_0x000107c49a88();
      if ((int)puVar3 != 0) {
        func_0x000107c3c610(param_1);
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x000107c4080c();
  }
  lVar2 = lVar5;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar5);
  func_0x000107c60bd8(lVar2);
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x10));
  func_0x000107c61574(*(undefined8 *)(lVar2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(lVar2,0x20,7);
  return;
}



/* Entry: 1000cc840; end: 1000cc84b;  */

void FUN_1000cc840(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000cc84c; end: 1000cc8cf;  */

void FUN_1000cc84c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a70c8;
  func_0x000107c610f8();
  func_0x000107c45d00();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000cc8d0);
  (*pcVar1)();
}



/* Entry: 1000cc8d0; end: 1000ce29b;  */

/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_1000cc8d0(ulong *******param_1,ulong *******param_2,long param_3,uint *param_4,ulong param_5,
             int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  bool bVar13;
  ulong *******pppppppuVar14;
  ulong *******pppppppuVar15;
  uint uVar16;
  ulong *****pppppuVar17;
  ulong uVar18;
  ulong *******pppppppuVar19;
  long lVar20;
  byte *pbVar21;
  ulong *******pppppppuVar22;
  ulong ******ppppppuVar23;
  ulong *****pppppuVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  ulong ******ppppppuVar29;
  ulong ******ppppppuVar30;
  uint uVar31;
  ulong ******ppppppuVar32;
  ulong *******pppppppuVar33;
  ulong *****pppppuVar34;
  ulong *****pppppuVar35;
  uint uVar36;
  ulong ******ppppppuVar37;
  ulong *******pppppppuVar38;
  ulong *******pppppppuVar39;
  ulong uVar40;
  ulong *******pppppppuVar41;
  ulong uVar42;
  ulong *******pppppppuVar43;
  ulong *******pppppppuVar44;
  ulong ******ppppppuVar45;
  ulong ******ppppppuVar46;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  ulong *****pppppuStack_190;
  ulong *****pppppuStack_188;
  ulong *****pppppuStack_180;
  ulong ******ppppppuStack_178;
  uint uStack_170;
  ulong *******pppppppuStack_168;
  ulong *******pppppppuStack_160;
  ulong *******pppppppuStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong ******ppppppuStack_130;
  long lStack_128;
  ulong *******apppppppuStack_120 [3];
  ulong ******ppppppuStack_108;
  ulong ******ppppppuStack_100;
  byte *pbStack_f8;
  ulong ******appppppuStack_f0 [2];
  ulong *******pppppppuStack_e0;
  ulong ******appppppuStack_d8 [13];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar33 = param_1;
  pppppppuVar15 = param_2;
  if (param_5 >> 0x11 != 0) goto LAB_1000cc908;
  pppppppuVar14 = param_1;
  if (2 < param_5) {
    bVar12 = (byte)*param_4;
    bVar9 = bVar12 & 3;
    if (bVar9 < 2) {
      bVar9 = bVar12 >> 2 & 3;
      if ((bVar12 & 3) == 0) {
        if (bVar9 == 1) {
          ppppppuVar37 = (ulong ******)(ulong)(ushort)((ushort)*param_4 >> 4);
          lVar20 = 2;
        }
        else if (bVar9 == 3) {
          ppppppuVar37 = (ulong ******)(ulong)(uint3)((uint3)*param_4 >> 4);
          lVar20 = 3;
        }
        else {
          ppppppuVar37 = (ulong ******)(ulong)(bVar12 >> 3);
          lVar20 = 1;
        }
        uVar25 = lVar20 + (long)ppppppuVar37;
        if (param_5 < uVar25 + 0x20) {
          if (param_5 < uVar25) goto LAB_1000cc91c;
          pppppppuVar33 = param_1 + 0xe3b;
          pppppppuVar15 = (ulong *******)((long)param_4 + lVar20);
          pppppppuVar14 = pppppppuVar33;
          func_0x000107c610b4(pppppppuVar33,pppppppuVar15,ppppppuVar37);
          param_1[0xe23] = (ulong ******)pppppppuVar33;
          param_1[0xe27] = ppppppuVar37;
          pbVar21 = (byte *)((long)pppppppuVar33 + (long)ppppppuVar37);
LAB_1000ccc54:
          pbVar21[8] = 0;
          pbVar21[9] = 0;
          pbVar21[10] = 0;
          pbVar21[0xb] = 0;
          pbVar21[0xc] = 0;
          pbVar21[0xd] = 0;
          pbVar21[0xe] = 0;
          pbVar21[0xf] = 0;
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          pbVar21[0x18] = 0;
          pbVar21[0x19] = 0;
          pbVar21[0x1a] = 0;
          pbVar21[0x1b] = 0;
          pbVar21[0x1c] = 0;
          pbVar21[0x1d] = 0;
          pbVar21[0x1e] = 0;
          pbVar21[0x1f] = 0;
          pbVar21[0x10] = 0;
          pbVar21[0x11] = 0;
          pbVar21[0x12] = 0;
          pbVar21[0x13] = 0;
          pbVar21[0x14] = 0;
          pbVar21[0x15] = 0;
          pbVar21[0x16] = 0;
          pbVar21[0x17] = 0;
          pppppppuVar33 = pppppppuVar14;
        }
        else {
          param_1[0xe23] = (ulong ******)((long)param_4 + lVar20);
          param_1[0xe27] = ppppppuVar37;
        }
      }
      else {
        if (bVar9 == 1) {
          ppppppuVar37 = (ulong ******)(ulong)(ushort)((ushort)*param_4 >> 4);
          lVar20 = 2;
        }
        else if (bVar9 == 3) {
          pppppppuVar38 = (ulong *******)0xffffffffffffffec;
          if ((param_5 == 3) || (0x20000f < (uint3)*param_4)) goto LAB_1000cc920;
          ppppppuVar37 = (ulong ******)(ulong)(uint3)((uint3)*param_4 >> 4);
          lVar20 = 3;
        }
        else {
          ppppppuVar37 = (ulong ******)(ulong)(bVar12 >> 3);
          lVar20 = 1;
        }
        pppppppuVar14 = param_1 + 0xe3b;
        pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + lVar20);
        pppppppuVar33 = pppppppuVar14;
        func_0x000107c610bc(pppppppuVar14,pppppppuVar15,ppppppuVar37 + 4);
        param_1[0xe23] = (ulong ******)pppppppuVar14;
        param_1[0xe27] = ppppppuVar37;
        uVar25 = lVar20 + 1;
      }
      pppppppuVar19 = (ulong *******)(param_5 - uVar25);
      if (pppppppuVar19 != (ulong *******)0x0) {
        pbVar2 = (byte *)((long)param_4 + uVar25);
        iVar26 = *(int *)((long)param_1 + 0x716c);
        pbVar3 = (byte *)((long)param_4 + param_5);
        pbVar21 = pbVar2 + 1;
        bVar9 = *pbVar2;
        uVar31 = (uint)bVar9;
        if (bVar9 == 0) {
          if (pppppppuVar19 == (ulong *******)0x1) {
            uVar31 = 0;
            pppppppuVar38 = (ulong *******)0x1;
LAB_1000ccdf0:
            pppppppuVar44 = (ulong *******)(pbVar2 + (long)pppppppuVar38);
            uVar25 = (long)pppppppuVar19 - (long)pppppppuVar38;
            pppppppuVar39 = param_2;
            if (iVar26 == 0) {
              if (param_6 == 0) {
                if (4 < (int)uVar31) goto LAB_1000ccf24;
LAB_1000ccf90:
                pbVar21 = (byte *)((long)param_1 + 0x716c);
                pbVar21[0] = 0;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
              }
              else {
                if ((param_1[0xe0f] < (ulong ******)0x1000001) || ((int)uVar31 < 5))
                goto LAB_1000ccf90;
LAB_1000ccf24:
                iVar26 = 0;
                uVar36 = *(uint *)((long)param_1[2] + 4);
                uVar27 = 1;
                do {
                  if (0x16 < *(byte *)((long)param_1[2] + (ulong)(uVar27 - 1) * 8 + 10)) {
                    iVar26 = iVar26 + 1;
                  }
                  uVar16 = uVar27 >> (ulong)(uVar36 & 0x1f);
                  uVar27 = uVar27 + 1;
                } while (uVar16 == 0);
                pbVar21 = (byte *)((long)param_1 + 0x716c);
                pbVar21[0] = 0;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
                if (6 < (uint)(iVar26 << (ulong)(8 - uVar36 & 0x1f))) goto LAB_1000cce00;
              }
              pppppppuVar4 = (ulong *******)((long)param_2 + param_3);
              pppppppuStack_198 = (ulong *******)param_1[0xe23];
              pppppppuVar5 = (ulong *******)((long)pppppppuStack_198 + (long)param_1[0xe27]);
              if (uVar31 != 0) {
                ppppppuVar30 = param_1[0xe0a];
                ppppppuVar29 = param_1[0xe0b];
                ppppppuVar37 = param_1[0xe0c];
                pbVar21 = (byte *)((long)param_1 + 0x70ac);
                pbVar21[0] = 1;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
                lVar20 = 0x58;
                lVar28 = 0x683c;
                do {
                  *(ulong *)((long)&ppppppuStack_178 + lVar20) =
                       (ulong)*(uint *)((long)param_1 + lVar28);
                  lVar20 = lVar20 + 8;
                  lVar28 = lVar28 + 4;
                } while (lVar20 != 0x70);
                pppppppuVar14 = pppppppuVar33;
                pppppppuVar15 = pppppppuStack_198;
                if (pppppppuVar19 == pppppppuVar38) goto LAB_1000cc91c;
                pppppppuStack_158 = pppppppuVar44 + 1;
                if (uVar25 < 8) {
                  ppppppuStack_178 = (ulong ******)(ulong)*(byte *)pppppppuVar44;
                  if ((long)uVar25 < 5) {
                    if (uVar25 == 2) goto LAB_1000cda3c;
                    if (uVar25 == 3) goto LAB_1000cda34;
                    if (uVar25 == 4) goto LAB_1000cda2c;
                  }
                  else {
                    if (uVar25 != 5) {
                      if (uVar25 != 6) {
                        if (uVar25 != 7) goto LAB_1000cda48;
                        ppppppuStack_178 =
                             (ulong ******)
                             ((ulong)ppppppuStack_178 |
                             (ulong)*(byte *)((long)pppppppuVar44 + 6) << 0x30);
                      }
                      ppppppuStack_178 =
                           (ulong ******)
                           ((long)ppppppuStack_178 +
                           ((ulong)*(byte *)((long)pppppppuVar44 + 5) << 0x28));
                    }
                    ppppppuStack_178 =
                         (ulong ******)
                         ((long)ppppppuStack_178 +
                         ((ulong)*(byte *)((long)pppppppuVar44 + 4) << 0x20));
LAB_1000cda2c:
                    ppppppuStack_178 =
                         ppppppuStack_178 + (ulong)*(byte *)((long)pppppppuVar44 + 3) * 0x200000;
LAB_1000cda34:
                    ppppppuStack_178 =
                         ppppppuStack_178 + (ulong)*(byte *)((long)pppppppuVar44 + 2) * 0x2000;
LAB_1000cda3c:
                    ppppppuStack_178 =
                         ppppppuStack_178 + (ulong)*(byte *)((long)pppppppuVar44 + 1) * 0x20;
                  }
LAB_1000cda48:
                  pppppppuStack_168 = pppppppuVar44;
                  pppppppuStack_160 = pppppppuVar44;
                  if (pbVar3[-1] == 0) goto LAB_1000cc91c;
                  uStack_170 = (int)LZCOUNT((uint)pbVar3[-1]) + (int)uVar25 * -8 + 0x29;
                }
                else {
                  pppppppuStack_168 = (ulong *******)(pbVar3 + -8);
                  ppppppuStack_178 = *pppppppuStack_168;
                  pppppppuStack_160 = pppppppuVar44;
                  if (((ulong)ppppppuStack_178 >> 0x38 == 0) ||
                     (uStack_170 = 8 - ((uint)LZCOUNT((uint)(byte)((ulong)ppppppuStack_178 >> 0x38))
                                       ^ 0x1f), 0xffffffffffffff88 < uVar25)) goto LAB_1000cc91c;
                }
                pppppppuStack_160 = pppppppuVar44;
                FUN_1000d0a08(&lStack_150,&ppppppuStack_178,*param_1);
                FUN_1000d0a08(&lStack_140,&ppppppuStack_178,param_1[2]);
                pppppppuVar33 = &ppppppuStack_130;
                pppppppuVar15 = &ppppppuStack_178;
                FUN_1000d0a08(pppppppuVar33,pppppppuVar15,param_1[1]);
                do {
                  if (0x40 < uStack_170) {
                    pppppppuVar14 = pppppppuVar33;
                    if (uVar31 == 0) {
LAB_1000ce274:
                      lVar20 = 0x58;
                      pbVar21 = (byte *)((long)param_1 + 0x683c);
                      do {
                        *(int *)pbVar21 = (int)*(undefined8 *)((long)&ppppppuStack_178 + lVar20);
                        lVar20 = lVar20 + 8;
                        pbVar21 = pbVar21 + 4;
                      } while (lVar20 != 0x70);
                      goto LAB_1000cd070;
                    }
                    goto LAB_1000cc91c;
                  }
                  if (pppppppuStack_168 < pppppppuStack_158) {
                    if (pppppppuStack_168 != pppppppuStack_160) {
                      uVar27 = (int)pppppppuStack_168 - (int)pppppppuStack_160;
                      if (pppppppuStack_160 <=
                          (ulong *******)((long)pppppppuStack_168 - (ulong)(uStack_170 >> 3))) {
                        uVar27 = uStack_170 >> 3;
                      }
                      uStack_170 = uStack_170 + uVar27 * -8;
                      goto LAB_1000cdb18;
                    }
                  }
                  else {
                    uVar27 = uStack_170 >> 3;
                    uStack_170 = uStack_170 & 7;
LAB_1000cdb18:
                    pppppppuStack_168 = (ulong *******)((long)pppppppuStack_168 - (ulong)uVar27);
                    ppppppuStack_178 = *pppppppuStack_168;
                  }
                  if (uVar31 == 0) {
                    if ((0x40 < uStack_170) ||
                       (((pppppppuVar38 = (ulong *******)0xffffffffffffffec, uStack_170 == 0x40 &&
                         (pppppppuStack_168 < pppppppuStack_158)) &&
                        (pppppppuStack_168 == pppppppuStack_160)))) goto LAB_1000ce274;
                    break;
                  }
                  uVar25 = (ulong)uStack_170;
                  puVar6 = (ushort *)(lStack_148 + lStack_150 * 8);
                  bVar9 = (byte)puVar6[1];
                  puVar7 = (ushort *)(lStack_128 + (long)ppppppuStack_130 * 8);
                  bVar12 = (byte)puVar7[1];
                  puVar8 = (ushort *)(lStack_138 + lStack_140 * 8);
                  bVar10 = (byte)puVar8[1];
                  pppppppuVar14 = (ulong *******)(ulong)bVar10;
                  uVar27 = (uint)bVar10;
                  if (bVar10 == 0) {
                    pppppppuVar33 = (ulong *******)0x0;
LAB_1000cdb94:
                    if (*(uint *)(puVar6 + 2) == 0) {
                      pppppppuVar33 = (ulong *******)((long)pppppppuVar33 + 1);
                    }
                    if (pppppppuVar33 != (ulong *******)0x0) {
                      if (pppppppuVar33 == (ulong *******)0x3) {
                        pppppppuVar15 = (ulong *******)((long)apppppppuStack_120[0] + -1);
                        if (pppppppuVar15 < (ulong *******)0x2) {
                          pppppppuVar15 = (ulong *******)0x1;
                        }
LAB_1000cdbd8:
                        apppppppuStack_120[2] = apppppppuStack_120[1];
                      }
                      else {
                        pppppppuVar15 = apppppppuStack_120[(long)pppppppuVar33];
                        if (pppppppuVar15 < (ulong *******)0x2) {
                          pppppppuVar15 = (ulong *******)0x1;
                        }
                        if (pppppppuVar33 != (ulong *******)0x1) goto LAB_1000cdbd8;
                      }
                      apppppppuStack_120[1] = apppppppuStack_120[0];
                      goto LAB_1000cdbe8;
                    }
                  }
                  else {
                    uVar40 = uVar25 & 0x3f;
                    uVar25 = (ulong)(uStack_170 + uVar27);
                    pppppppuVar15 =
                         (ulong *******)
                         (((ulong)((long)ppppppuStack_178 << uVar40) >>
                          ((ulong)-(uint)bVar10 & 0x3f)) + (ulong)*(uint *)(puVar8 + 2));
                    pppppppuVar33 = pppppppuVar15;
                    if (uVar27 == 1) goto LAB_1000cdb94;
                    apppppppuStack_120[2] = apppppppuStack_120[1];
                    apppppppuStack_120[1] = apppppppuStack_120[0];
LAB_1000cdbe8:
                    apppppppuStack_120[1] = apppppppuStack_120[0];
                    apppppppuStack_120[0] = pppppppuVar15;
                  }
                  pppppppuVar19 = apppppppuStack_120[0];
                  if (bVar12 == 0) {
                    pppppppuVar15 = (ulong *******)0x0;
                  }
                  else {
                    pppppppuVar15 =
                         (ulong *******)
                         ((ulong)((long)ppppppuStack_178 << (uVar25 & 0x3f)) >>
                         ((ulong)-(uint)bVar12 & 0x3f));
                    uVar25 = (ulong)((int)uVar25 + (uint)bVar12);
                  }
                  if ((0x1e < (uint)bVar12 + (uint)bVar9 + uVar27) &&
                     (uVar27 = (uint)uVar25, uVar27 < 0x41)) {
                    if (pppppppuStack_168 < pppppppuStack_158) {
                      if (pppppppuStack_168 == pppppppuStack_160) goto LAB_1000cdc74;
                      pppppppuVar14 =
                           (ulong *******)((long)pppppppuStack_168 - (ulong)(uVar27 >> 3));
                      uVar36 = (int)pppppppuStack_168 - (int)pppppppuStack_160;
                      if (pppppppuStack_160 <= pppppppuVar14) {
                        uVar36 = uVar27 >> 3;
                      }
                      uVar27 = uVar27 + uVar36 * -8;
                    }
                    else {
                      uVar36 = uVar27 >> 3;
                      uVar27 = uVar27 & 7;
                    }
                    pppppppuStack_168 = (ulong *******)((long)pppppppuStack_168 - (ulong)uVar36);
                    uVar25 = (ulong)uVar27;
                    ppppppuStack_178 = *pppppppuStack_168;
                  }
LAB_1000cdc74:
                  pbVar21 = (byte *)((long)pppppppuVar15 + (ulong)*(uint *)(puVar7 + 2));
                  uVar27 = (uint)bVar9;
                  iVar26 = (int)uVar25;
                  if (uVar27 != 0) {
                    iVar26 = (int)uVar25 + uVar27;
                  }
                  uVar40 = 0;
                  if (uVar27 != 0) {
                    uVar40 = (ulong)((long)ppppppuStack_178 << (uVar25 & 0x3f)) >>
                             ((ulong)-(uint)bVar9 & 0x3f);
                  }
                  pppppuVar17 = (ulong *****)(uVar40 + *(uint *)(puVar6 + 2));
                  iVar26 = iVar26 + (uint)*(byte *)((long)puVar6 + 3);
                  lStack_150 = ((ulong)ppppppuStack_178 >> ((ulong)(uint)-iVar26 & 0x3f) &
                               (ulong)*(uint *)(&UNK_10e011be0 +
                                               (ulong)*(byte *)((long)puVar6 + 3) * 4)) +
                               (ulong)*puVar6;
                  iVar26 = iVar26 + (uint)*(byte *)((long)puVar7 + 3);
                  ppppppuStack_130 =
                       (ulong ******)
                       (((ulong)ppppppuStack_178 >> ((ulong)(uint)-iVar26 & 0x3f) &
                        (ulong)*(uint *)(&UNK_10e011be0 + (ulong)*(byte *)((long)puVar7 + 3) * 4)) +
                       (ulong)*puVar7);
                  uStack_170 = iVar26 + (uint)*(byte *)((long)puVar8 + 3);
                  lStack_140 = ((ulong)ppppppuStack_178 >> ((ulong)-uStack_170 & 0x3f) &
                               (ulong)*(uint *)(&UNK_10e011be0 +
                                               (ulong)*(byte *)((long)puVar8 + 3) * 4)) +
                               (ulong)*puVar8;
                  pppppppuVar44 = (ulong *******)((long)pppppppuStack_198 + (long)pppppuVar17);
                  if ((pppppppuVar44 <= pppppppuVar5) &&
                     (pppppppuVar38 = (ulong *******)(pbVar21 + (long)pppppuVar17),
                     (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar38) <= pppppppuVar4 + -4
                     )) {
                    pppppppuVar33 = (ulong *******)((long)pppppppuVar39 + (long)pppppuVar17);
                    ppppppuVar45 = *pppppppuStack_198;
                    pppppppuVar39[1] = pppppppuStack_198[1];
                    *pppppppuVar39 = ppppppuVar45;
                    if ((ulong *****)0x10 < pppppuVar17) {
                      ppppppuVar45 = pppppppuStack_198[2];
                      pppppppuVar39[3] = pppppppuStack_198[3];
                      pppppppuVar39[2] = ppppppuVar45;
                      ppppppuVar45 = pppppppuStack_198[4];
                      pppppppuVar39[5] = pppppppuStack_198[5];
                      pppppppuVar39[4] = ppppppuVar45;
                      if (0x20 < (long)(pppppuVar17 + -2)) {
                        pppppppuVar43 = pppppppuVar39 + 6;
                        pppppppuVar41 = pppppppuStack_198 + 8;
                        do {
                          ppppppuVar45 = pppppppuVar41[-2];
                          pppppppuVar43[1] = pppppppuVar41[-1];
                          *pppppppuVar43 = ppppppuVar45;
                          ppppppuVar45 = *pppppppuVar41;
                          pppppppuVar43[3] = pppppppuVar41[1];
                          pppppppuVar43[2] = ppppppuVar45;
                          pppppppuVar43 = pppppppuVar43 + 4;
                          pppppppuVar41 = pppppppuVar41 + 4;
                        } while (pppppppuVar43 < pppppppuVar33);
                      }
                    }
                    ppppppuVar45 = (ulong ******)((long)pppppppuVar33 - (long)apppppppuStack_120[0])
                    ;
                    pppppppuVar43 = pppppppuVar33;
                    pppppppuStack_198 = pppppppuVar44;
                    if ((ulong *******)((long)pppppppuVar33 - (long)ppppppuVar30) <
                        apppppppuStack_120[0]) {
                      if ((ulong *******)((long)pppppppuVar33 - (long)ppppppuVar29) <
                          apppppppuStack_120[0]) goto LAB_1000cc91c;
                      lVar20 = ((long)pppppppuVar33 - (long)apppppppuStack_120[0]) -
                               (long)ppppppuVar30;
                      bVar13 = SCARRY8(lVar20,(long)pbVar21);
                      pbVar21 = pbVar21 + lVar20;
                      if (pbVar21 == (byte *)0x0 || (long)pbVar21 < 0 != bVar13) {
                        pppppppuVar15 = (ulong *******)((long)ppppppuVar37 + lVar20);
                        func_0x000107c610b8();
                        goto LAB_1000cde6c;
                      }
                      pppppppuVar15 = (ulong *******)((long)ppppppuVar37 + lVar20);
                      pppppppuVar14 = pppppppuVar33;
                      func_0x000107c610b8(pppppppuVar33,pppppppuVar15,-lVar20);
                      pppppppuVar43 = (ulong *******)((long)pppppppuVar33 - lVar20);
                      ppppppuVar45 = ppppppuVar30;
                    }
                    pppppppuVar33 = pppppppuVar14;
                    if (pppppppuVar19 < (ulong *******)0x10) {
                      if (pppppppuVar19 < (ulong *******)0x8) {
                        iVar26 = *(int *)(&UNK_10e011c80 + (long)pppppppuVar19 * 4);
                        *(byte *)pppppppuVar43 = *(byte *)ppppppuVar45;
                        *(byte *)((long)pppppppuVar43 + 1) = *(byte *)((long)ppppppuVar45 + 1);
                        *(byte *)((long)pppppppuVar43 + 2) = *(byte *)((long)ppppppuVar45 + 2);
                        *(byte *)((long)pppppppuVar43 + 3) = *(byte *)((long)ppppppuVar45 + 3);
                        uVar27 = *(uint *)(&UNK_10e011c60 + (long)pppppppuVar19 * 4);
                        *(undefined4 *)((long)pppppppuVar43 + 4) =
                             *(undefined4 *)((long)ppppppuVar45 + (ulong)uVar27);
                        ppppppuVar45 = (ulong ******)
                                       ((byte *)((long)ppppppuVar45 + (ulong)uVar27) + -(long)iVar26
                                       );
                      }
                      else {
                        *pppppppuVar43 = (ulong ******)*ppppppuVar45;
                      }
                      if ((byte *)0x8 < pbVar21) {
                        ppppppuVar23 = ppppppuVar45 + 1;
                        pppppppuVar14 = pppppppuVar43 + 1;
                        if ((long)pppppppuVar14 - (long)ppppppuVar23 < 0x10) {
                          do {
                            pppppppuVar19 = pppppppuVar14 + 1;
                            *pppppppuVar14 = (ulong ******)*ppppppuVar23;
                            ppppppuVar23 = ppppppuVar23 + 1;
                            pppppppuVar14 = pppppppuVar19;
                          } while (pppppppuVar19 <
                                   (ulong *******)((long)pppppppuVar43 + (long)pbVar21));
                        }
                        else {
                          ppppppuVar23 = (ulong ******)*ppppppuVar23;
                          pppppppuVar43[2] = (ulong ******)ppppppuVar45[2];
                          *pppppppuVar14 = ppppppuVar23;
                          ppppppuVar23 = (ulong ******)ppppppuVar45[3];
                          pppppppuVar43[4] = (ulong ******)ppppppuVar45[4];
                          pppppppuVar43[3] = ppppppuVar23;
                          if (0x28 < (long)pbVar21) {
                            pppppppuVar14 = pppppppuVar43 + 5;
                            ppppppuVar45 = ppppppuVar45 + 7;
                            do {
                              ppppppuVar23 = (ulong ******)ppppppuVar45[-2];
                              pppppppuVar14[1] = (ulong ******)ppppppuVar45[-1];
                              *pppppppuVar14 = ppppppuVar23;
                              ppppppuVar23 = (ulong ******)*ppppppuVar45;
                              pppppppuVar14[3] = (ulong ******)ppppppuVar45[1];
                              pppppppuVar14[2] = ppppppuVar23;
                              pppppppuVar14 = pppppppuVar14 + 4;
                              ppppppuVar45 = ppppppuVar45 + 4;
                            } while (pppppppuVar14 <
                                     (ulong *******)((long)pppppppuVar43 + (long)pbVar21));
                          }
                        }
                      }
                    }
                    else {
                      ppppppuVar23 = (ulong ******)*ppppppuVar45;
                      pppppppuVar43[1] = (ulong ******)ppppppuVar45[1];
                      *pppppppuVar43 = ppppppuVar23;
                      ppppppuVar23 = (ulong ******)ppppppuVar45[2];
                      pppppppuVar43[3] = (ulong ******)ppppppuVar45[3];
                      pppppppuVar43[2] = ppppppuVar23;
                      if (0x20 < (long)pbVar21) {
                        pppppppuVar14 = pppppppuVar43 + 4;
                        ppppppuVar45 = ppppppuVar45 + 6;
                        do {
                          ppppppuVar23 = (ulong ******)ppppppuVar45[-2];
                          pppppppuVar14[1] = (ulong ******)ppppppuVar45[-1];
                          *pppppppuVar14 = ppppppuVar23;
                          ppppppuVar23 = (ulong ******)*ppppppuVar45;
                          pppppppuVar14[3] = (ulong ******)ppppppuVar45[1];
                          pppppppuVar14[2] = ppppppuVar23;
                          pppppppuVar14 = pppppppuVar14 + 4;
                          ppppppuVar45 = ppppppuVar45 + 4;
                        } while (pppppppuVar14 <
                                 (ulong *******)((long)pppppppuVar43 + (long)pbVar21));
                      }
                    }
                    goto LAB_1000cde6c;
                  }
                  pppppppuVar33 = pppppppuVar39;
                  pppppppuVar15 = pppppppuVar4;
                  appppppuStack_f0[0] = (ulong ******)pppppuVar17;
                  appppppuStack_f0[1] = (ulong ******)pbVar21;
                  pppppppuStack_e0 = apppppppuStack_120[0];
                  func_0x000107c2ae84(pppppppuVar39,pppppppuVar4,appppppuStack_f0,&pppppppuStack_198
                                      ,pppppppuVar5,ppppppuVar30,ppppppuVar29,ppppppuVar37);
                  pppppppuVar38 = pppppppuVar33;
LAB_1000cde6c:
                  uVar31 = uVar31 - 1;
                  pppppppuVar39 = (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar38);
                } while (pppppppuVar38 < (ulong *******)0xffffffffffffff89);
                goto LAB_1000cc920;
              }
LAB_1000cd070:
              uVar40 = (long)pppppppuVar5 - (long)pppppppuStack_198;
              uVar25 = (long)pppppppuVar4 - (long)pppppppuVar39;
              pppppppuVar15 = pppppppuStack_198;
            }
            else {
              pbVar21 = (byte *)((long)param_1 + 0x716c);
              pbVar21[0] = 0;
              pbVar21[1] = 0;
              pbVar21[2] = 0;
              pbVar21[3] = 0;
LAB_1000cce00:
              pppppppuVar4 = (ulong *******)((long)param_2 + param_3);
              pppppppuStack_1a0 = (ulong *******)param_1[0xe23];
              pppppppuVar5 = (ulong *******)((long)pppppppuStack_1a0 + (long)param_1[0xe27]);
              if (uVar31 != 0) {
                ppppppuVar29 = param_1[0xe0a];
                ppppppuVar37 = param_1[0xe0b];
                ppppppuVar30 = param_1[0xe0c];
                pbVar21 = (byte *)((long)param_1 + 0x70ac);
                pbVar21[0] = 1;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
                lVar20 = 0x58;
                lVar28 = 0x683c;
                do {
                  *(ulong *)((long)&ppppppuStack_178 + lVar20) =
                       (ulong)*(uint *)((long)param_1 + lVar28);
                  lVar20 = lVar20 + 8;
                  lVar28 = lVar28 + 4;
                } while (lVar20 != 0x70);
                pbStack_f8 = (byte *)((long)param_2 - (long)ppppppuVar29);
                uVar27 = uVar31;
                if (3 < (int)uVar31) {
                  uVar27 = 4;
                }
                pppppppuVar14 = (ulong *******)apppppppuStack_120;
                pppppppuVar15 = pppppppuStack_1a0;
                ppppppuStack_108 = ppppppuVar29;
                ppppppuStack_100 = ppppppuVar30;
                if (pppppppuVar19 == pppppppuVar38) goto LAB_1000cc91c;
                pppppppuStack_158 = pppppppuVar44 + 1;
                if (uVar25 < 8) {
                  ppppppuStack_178 = (ulong ******)(ulong)*(byte *)pppppppuVar44;
                  if ((long)uVar25 < 5) {
                    if (uVar25 == 2) goto LAB_1000cd0e0;
                    if (uVar25 == 3) goto LAB_1000cd0d8;
                    if (uVar25 == 4) goto LAB_1000cd0d0;
                  }
                  else {
                    if (uVar25 != 5) {
                      if (uVar25 != 6) {
                        if (uVar25 != 7) goto LAB_1000cd0ec;
                        ppppppuStack_178 =
                             (ulong ******)
                             ((ulong)ppppppuStack_178 |
                             (ulong)*(byte *)((long)pppppppuVar44 + 6) << 0x30);
                      }
                      ppppppuStack_178 =
                           (ulong ******)
                           ((long)ppppppuStack_178 +
                           ((ulong)*(byte *)((long)pppppppuVar44 + 5) << 0x28));
                    }
                    ppppppuStack_178 =
                         (ulong ******)
                         ((long)ppppppuStack_178 +
                         ((ulong)*(byte *)((long)pppppppuVar44 + 4) << 0x20));
LAB_1000cd0d0:
                    ppppppuStack_178 =
                         ppppppuStack_178 + (ulong)*(byte *)((long)pppppppuVar44 + 3) * 0x200000;
LAB_1000cd0d8:
                    ppppppuStack_178 =
                         ppppppuStack_178 + (ulong)*(byte *)((long)pppppppuVar44 + 2) * 0x2000;
LAB_1000cd0e0:
                    ppppppuStack_178 =
                         ppppppuStack_178 + (ulong)*(byte *)((long)pppppppuVar44 + 1) * 0x20;
                  }
LAB_1000cd0ec:
                  pppppppuStack_168 = pppppppuVar44;
                  pppppppuStack_160 = pppppppuVar44;
                  if (pbVar3[-1] == 0) goto LAB_1000cc91c;
                  uStack_170 = (int)LZCOUNT((uint)pbVar3[-1]) + (int)uVar25 * -8 + 0x29;
                }
                else {
                  pppppppuStack_168 = (ulong *******)(pbVar3 + -8);
                  ppppppuStack_178 = *pppppppuStack_168;
                  pppppppuStack_160 = pppppppuVar44;
                  if (((ulong)ppppppuStack_178 >> 0x38 == 0) ||
                     (uStack_170 = 8 - ((uint)LZCOUNT((uint)(byte)((ulong)ppppppuStack_178 >> 0x38))
                                       ^ 0x1f), 0xffffffffffffff88 < uVar25)) goto LAB_1000cc91c;
                }
                pppppppuStack_160 = pppppppuVar44;
                FUN_1000d0a08(&lStack_150,&ppppppuStack_178,*param_1);
                FUN_1000d0a08(&lStack_140,&ppppppuStack_178,param_1[2]);
                pppppppuVar19 = &ppppppuStack_130;
                pppppppuVar15 = &ppppppuStack_178;
                FUN_1000d0a08(pppppppuVar19,pppppppuVar15,param_1[1]);
                uVar25 = (ulong)uStack_170;
                if (uStack_170 < 0x41) {
                  uVar40 = 0;
                  uVar42 = (ulong)(uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU));
                  pppppppuVar33 = (ulong *******)&pppppppuStack_e0;
                  pppppppuVar15 = apppppppuStack_120[1];
                  ppppppuVar45 = ppppppuStack_178;
                  pppppppuVar38 = pppppppuStack_168;
                  pppppppuVar14 = apppppppuStack_120[0];
                  do {
                    uVar36 = (uint)uVar25;
                    if (pppppppuVar38 < pppppppuStack_158) {
                      if (pppppppuVar38 != pppppppuStack_160) {
                        uVar16 = (int)pppppppuVar38 - (int)pppppppuStack_160;
                        if (pppppppuStack_160 <=
                            (ulong *******)((long)pppppppuVar38 - (uVar25 >> 3))) {
                          uVar16 = (uint)(uVar25 >> 3);
                        }
                        uStack_170 = uVar36 + uVar16 * -8;
                        goto LAB_1000cd1ec;
                      }
                    }
                    else {
                      uVar16 = uVar36 >> 3;
                      uStack_170 = uVar36 & 7;
LAB_1000cd1ec:
                      pppppppuVar38 = (ulong *******)((long)pppppppuVar38 - (ulong)uVar16);
                      uVar25 = (ulong)uStack_170;
                      ppppppuVar45 = *pppppppuVar38;
                      ppppppuStack_178 = ppppppuVar45;
                      pppppppuStack_168 = pppppppuVar38;
                    }
                    pppppppuVar19 = pppppppuVar33;
                    if (uVar42 == uVar40) goto LAB_1000cd46c;
                    puVar6 = (ushort *)(lStack_148 + lStack_150 * 8);
                    bVar9 = (byte)puVar6[1];
                    puVar7 = (ushort *)(lStack_128 + (long)ppppppuStack_130 * 8);
                    bVar12 = (byte)puVar7[1];
                    puVar8 = (ushort *)(lStack_138 + lStack_140 * 8);
                    bVar10 = (byte)puVar8[1];
                    uVar36 = (uint)bVar10;
                    if (bVar10 != 0) {
                      uVar18 = uVar25 & 0x3f;
                      uVar25 = (ulong)((int)uVar25 + uVar36);
                      pppppppuVar19 =
                           (ulong *******)
                           (((ulong)((long)ppppppuVar45 << uVar18) >> ((ulong)-(uint)bVar10 & 0x3f))
                           + (ulong)*(uint *)(puVar8 + 2));
                      pppppppuVar44 = pppppppuVar19;
                      if (uVar36 == 1) goto LAB_1000cd258;
                      goto LAB_1000cd29c;
                    }
                    pppppppuVar44 = (ulong *******)0x0;
LAB_1000cd258:
                    if (*(uint *)(puVar6 + 2) == 0) {
                      pppppppuVar44 = (ulong *******)((long)pppppppuVar44 + 1);
                    }
                    if (pppppppuVar44 != (ulong *******)0x0) {
                      if (pppppppuVar44 == (ulong *******)0x3) {
                        pppppppuVar19 = (ulong *******)((long)pppppppuVar14 + -1);
                        if (pppppppuVar19 < (ulong *******)0x2) {
                          pppppppuVar19 = (ulong *******)0x1;
                        }
LAB_1000cd29c:
                        apppppppuStack_120[2] = pppppppuVar15;
                      }
                      else {
                        pppppppuVar19 = apppppppuStack_120[(long)pppppppuVar44];
                        if (pppppppuVar19 < (ulong *******)0x2) {
                          pppppppuVar19 = (ulong *******)0x1;
                        }
                        if (pppppppuVar44 != (ulong *******)0x1) goto LAB_1000cd29c;
                      }
                      apppppppuStack_120[0] = pppppppuVar19;
                      apppppppuStack_120[1] = pppppppuVar14;
                      pppppppuVar15 = pppppppuVar14;
                      pppppppuVar14 = pppppppuVar19;
                    }
                    if (bVar12 == 0) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = (ulong)((long)ppppppuVar45 << (uVar25 & 0x3f)) >>
                               ((ulong)-(uint)bVar12 & 0x3f);
                      uVar25 = (ulong)((int)uVar25 + (uint)bVar12);
                    }
                    if ((0x1e < (uint)bVar12 + (uint)bVar9 + uVar36) &&
                       (uVar36 = (uint)uVar25, uVar36 < 0x41)) {
                      if (pppppppuVar38 < pppppppuStack_158) {
                        if (pppppppuVar38 == pppppppuStack_160) goto LAB_1000cd338;
                        uVar16 = (int)pppppppuVar38 - (int)pppppppuStack_160;
                        if (pppppppuStack_160 <=
                            (ulong *******)((long)pppppppuVar38 - (ulong)(uVar36 >> 3))) {
                          uVar16 = uVar36 >> 3;
                        }
                        uVar36 = uVar36 + uVar16 * -8;
                      }
                      else {
                        uVar16 = uVar36 >> 3;
                        uVar36 = uVar36 & 7;
                      }
                      pppppppuVar38 = (ulong *******)((long)pppppppuVar38 - (ulong)uVar16);
                      uVar25 = (ulong)uVar36;
                      ppppppuVar45 = *pppppppuVar38;
                      ppppppuStack_178 = ppppppuVar45;
                      pppppppuStack_168 = pppppppuVar38;
                    }
LAB_1000cd338:
                    iVar26 = (int)uVar25;
                    if (bVar9 == 0) {
                      uVar25 = 0;
                    }
                    else {
                      uVar25 = (ulong)((long)ppppppuVar45 << (uVar25 & 0x3f)) >>
                               ((ulong)-(uint)bVar9 & 0x3f);
                      iVar26 = iVar26 + (uint)bVar9;
                    }
                    ppppppuVar23 = (ulong ******)(uVar18 + *(uint *)(puVar7 + 2));
                    ppppppuVar46 = (ulong ******)(uVar25 + *(uint *)(puVar6 + 2));
                    pppppppuVar19 = (ulong *******)(pbStack_f8 + (long)ppppppuVar46);
                    ppppppuVar32 = ppppppuStack_100;
                    if (pppppppuVar14 <= pppppppuVar19) {
                      ppppppuVar32 = ppppppuStack_108;
                    }
                    ppppppuVar32 = (ulong ******)
                                   ((byte *)((long)ppppppuVar32 + (long)pppppppuVar19) +
                                   -(long)pppppppuVar14);
                    pbStack_f8 = (byte *)((long)pppppppuVar19 + (long)ppppppuVar23);
                    iVar26 = iVar26 + (uint)*(byte *)((long)puVar6 + 3);
                    lStack_150 = ((ulong)ppppppuVar45 >> ((ulong)(uint)-iVar26 & 0x3f) &
                                 (ulong)*(uint *)(&UNK_10e011be0 +
                                                 (ulong)*(byte *)((long)puVar6 + 3) * 4)) +
                                 (ulong)*puVar6;
                    iVar26 = iVar26 + (uint)*(byte *)((long)puVar7 + 3);
                    ppppppuStack_130 =
                         (ulong ******)
                         (((ulong)ppppppuVar45 >> ((ulong)(uint)-iVar26 & 0x3f) &
                          (ulong)*(uint *)(&UNK_10e011be0 + (ulong)*(byte *)((long)puVar7 + 3) * 4))
                         + (ulong)*puVar7);
                    uStack_170 = iVar26 + (uint)*(byte *)((long)puVar8 + 3);
                    uVar25 = (ulong)uStack_170;
                    lStack_140 = ((ulong)ppppppuVar45 >> ((ulong)-uStack_170 & 0x3f) &
                                 (ulong)*(uint *)(&UNK_10e011be0 +
                                                 (ulong)*(byte *)((long)puVar8 + 3) * 4)) +
                                 (ulong)*puVar8;
                    pppppppuVar33[-2] = ppppppuVar46;
                    pppppppuVar33[-1] = ppppppuVar23;
                    pppppppuVar19 = pppppppuVar33 + 4;
                    *pppppppuVar33 = (ulong ******)pppppppuVar14;
                    pppppppuVar33[1] = ppppppuVar32;
                    Hint_Prefetch(ppppppuVar32,0,0,0);
                    Hint_Prefetch((byte *)((long)ppppppuVar32 + (long)ppppppuVar23) + -1,0,0,0);
                    uVar40 = uVar40 + 1;
                    pppppppuVar33 = pppppppuVar19;
                  } while (uStack_170 < 0x41);
                }
                else {
                  uVar40 = 0;
                }
                pppppppuVar14 = pppppppuVar19;
                uVar42 = uVar40;
                if ((int)uVar27 <= (int)uVar40) {
LAB_1000cd46c:
                  while( true ) {
                    uVar16 = (uint)uVar25;
                    uVar36 = (uint)uVar42;
                    if (0x40 < uVar16) break;
                    if (pppppppuStack_168 < pppppppuStack_158) {
                      if (pppppppuStack_168 != pppppppuStack_160) {
                        uVar11 = (int)pppppppuStack_168 - (int)pppppppuStack_160;
                        if (pppppppuStack_160 <=
                            (ulong *******)((long)pppppppuStack_168 - (ulong)(uVar16 >> 3))) {
                          uVar11 = uVar16 >> 3;
                        }
                        uStack_170 = uVar16 + uVar11 * -8;
                        goto LAB_1000cd4d8;
                      }
                    }
                    else {
                      uVar11 = uVar16 >> 3;
                      uStack_170 = uVar16 & 7;
LAB_1000cd4d8:
                      pppppppuStack_168 = (ulong *******)((long)pppppppuStack_168 - (ulong)uVar11);
                      uVar25 = (ulong)uStack_170;
                      ppppppuStack_178 = *pppppppuStack_168;
                    }
                    if ((int)uVar31 <= (int)uVar36) goto LAB_1000cdf84;
                    puVar6 = (ushort *)(lStack_148 + lStack_150 * 8);
                    bVar9 = (byte)puVar6[1];
                    puVar7 = (ushort *)(lStack_128 + (long)ppppppuStack_130 * 8);
                    bVar12 = (byte)puVar7[1];
                    puVar8 = (ushort *)(lStack_138 + lStack_140 * 8);
                    bVar10 = (byte)puVar8[1];
                    uVar16 = (uint)bVar10;
                    if (bVar10 == 0) {
                      pppppppuVar33 = (ulong *******)0x0;
LAB_1000cd558:
                      if (*(uint *)(puVar6 + 2) == 0) {
                        pppppppuVar33 = (ulong *******)((long)pppppppuVar33 + 1);
                      }
                      if (pppppppuVar33 != (ulong *******)0x0) {
                        if (pppppppuVar33 == (ulong *******)0x3) {
                          pppppppuVar14 = (ulong *******)((long)apppppppuStack_120[0] + -1);
                          if (pppppppuVar14 < (ulong *******)0x2) {
                            pppppppuVar14 = (ulong *******)0x1;
                          }
LAB_1000cd5a0:
                          apppppppuStack_120[2] = apppppppuStack_120[1];
                        }
                        else {
                          pppppppuVar15 = apppppppuStack_120[(long)pppppppuVar33];
                          pppppppuVar14 = pppppppuVar15;
                          if (pppppppuVar15 < (ulong *******)0x2) {
                            pppppppuVar14 = (ulong *******)0x1;
                          }
                          if (pppppppuVar33 != (ulong *******)0x1) goto LAB_1000cd5a0;
                        }
                        apppppppuStack_120[1] = apppppppuStack_120[0];
                        goto LAB_1000cd5b0;
                      }
                    }
                    else {
                      pppppppuVar15 =
                           (ulong *******)
                           ((ulong)((long)ppppppuStack_178 << (uVar25 & 0x3f)) >>
                           ((ulong)-(uint)bVar10 & 0x3f));
                      uVar25 = (ulong)((int)uVar25 + uVar16);
                      pppppppuVar14 =
                           (ulong *******)((long)pppppppuVar15 + (ulong)*(uint *)(puVar8 + 2));
                      pppppppuVar33 = pppppppuVar14;
                      if (uVar16 == 1) goto LAB_1000cd558;
                      apppppppuStack_120[2] = apppppppuStack_120[1];
                      apppppppuStack_120[1] = apppppppuStack_120[0];
LAB_1000cd5b0:
                      apppppppuStack_120[1] = apppppppuStack_120[0];
                      apppppppuStack_120[0] = pppppppuVar14;
                    }
                    pppppppuVar44 = apppppppuStack_120[0];
                    if (bVar12 == 0) {
                      pppppppuVar14 = (ulong *******)0x0;
                    }
                    else {
                      pppppppuVar15 = (ulong *******)(ulong)-(uint)bVar12;
                      pppppppuVar14 =
                           (ulong *******)
                           ((ulong)((long)ppppppuStack_178 << (uVar25 & 0x3f)) >>
                           ((ulong)pppppppuVar15 & 0x3f));
                      uVar25 = (ulong)((int)uVar25 + (uint)bVar12);
                    }
                    if ((0x1e < (uint)bVar12 + (uint)bVar9 + uVar16) &&
                       (uVar16 = (uint)uVar25, uVar16 < 0x41)) {
                      if (pppppppuStack_168 < pppppppuStack_158) {
                        if (pppppppuStack_168 == pppppppuStack_160) goto LAB_1000cd648;
                        uVar11 = (int)pppppppuStack_168 - (int)pppppppuStack_160;
                        pppppppuVar15 = (ulong *******)(ulong)uVar11;
                        if (pppppppuStack_160 <=
                            (ulong *******)((long)pppppppuStack_168 - (ulong)(uVar16 >> 3))) {
                          uVar11 = uVar16 >> 3;
                        }
                        uVar16 = uVar16 + uVar11 * -8;
                      }
                      else {
                        uVar11 = uVar16 >> 3;
                        uVar16 = uVar16 & 7;
                      }
                      pppppppuStack_168 = (ulong *******)((long)pppppppuStack_168 - (ulong)uVar11);
                      uVar25 = (ulong)uVar16;
                      ppppppuStack_178 = *pppppppuStack_168;
                    }
LAB_1000cd648:
                    iVar26 = (int)uVar25;
                    if (bVar9 == 0) {
                      uVar25 = 0;
                    }
                    else {
                      uVar25 = (ulong)((long)ppppppuStack_178 << (uVar25 & 0x3f)) >>
                               ((ulong)-(uint)bVar9 & 0x3f);
                      iVar26 = iVar26 + (uint)bVar9;
                    }
                    pppppuVar17 = (ulong *****)((long)pppppppuVar14 + (ulong)*(uint *)(puVar7 + 2));
                    pppppuVar34 = (ulong *****)(uVar25 + *(uint *)(puVar6 + 2));
                    pppppppuVar43 = (ulong *******)(pbStack_f8 + (long)pppppuVar34);
                    pppppppuVar33 = &ppppppuStack_100;
                    if (apppppppuStack_120[0] <= pppppppuVar43) {
                      pppppppuVar33 = (ulong *******)(apppppppuStack_120 + 3);
                    }
                    ppppppuVar45 = *pppppppuVar33;
                    pbStack_f8 = (byte *)((long)pppppppuVar43 + (long)pppppuVar17);
                    iVar26 = iVar26 + (uint)*(byte *)((long)puVar6 + 3);
                    lStack_150 = ((ulong)ppppppuStack_178 >> ((ulong)(uint)-iVar26 & 0x3f) &
                                 (ulong)*(uint *)(&UNK_10e011be0 +
                                                 (ulong)*(byte *)((long)puVar6 + 3) * 4)) +
                                 (ulong)*puVar6;
                    iVar26 = iVar26 + (uint)*(byte *)((long)puVar7 + 3);
                    ppppppuStack_130 =
                         (ulong ******)
                         (((ulong)ppppppuStack_178 >> ((ulong)(uint)-iVar26 & 0x3f) &
                          (ulong)*(uint *)(&UNK_10e011be0 + (ulong)*(byte *)((long)puVar7 + 3) * 4))
                         + (ulong)*puVar7);
                    uStack_170 = iVar26 + (uint)*(byte *)((long)puVar8 + 3);
                    lStack_140 = ((ulong)ppppppuStack_178 >> ((ulong)-uStack_170 & 0x3f) &
                                 (ulong)*(uint *)(&UNK_10e011be0 +
                                                 (ulong)*(byte *)((long)puVar8 + 3) * 4)) +
                                 (ulong)*puVar8;
                    uVar25 = (ulong)(uVar36 & 3);
                    pppppppuVar41 = (ulong *******)appppppuStack_f0[uVar25 * 4];
                    pppppuVar24 = (ulong *****)appppppuStack_f0[uVar25 * 4 + 1];
                    pppppuVar35 = (ulong *****)appppppuStack_d8[uVar25 * 4 + -1];
                    pppppppuVar33 = (ulong *******)((long)pppppppuStack_1a0 + (long)pppppppuVar41);
                    if ((pppppppuVar5 < pppppppuVar33) ||
                       (pppppppuVar38 = (ulong *******)((long)pppppuVar24 + (long)pppppppuVar41),
                       pppppppuVar4 + -4 <
                       (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar38))) {
                      pppppuStack_180 = (ulong *****)appppppuStack_d8[uVar25 * 4];
                      pppppppuVar19 = pppppppuVar39;
                      pppppppuVar15 = pppppppuVar4;
                      pppppppuStack_198 = pppppppuVar41;
                      pppppuStack_190 = pppppuVar24;
                      pppppuStack_188 = pppppuVar35;
                      func_0x000107c2ae84(pppppppuVar39,pppppppuVar4,&pppppppuStack_198,
                                          &pppppppuStack_1a0,pppppppuVar5,ppppppuVar29,ppppppuVar37,
                                          ppppppuVar30);
                      pppppppuVar38 = pppppppuVar19;
                    }
                    else {
                      pppppppuVar19 = (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar41);
                      ppppppuVar23 = *pppppppuStack_1a0;
                      pppppppuVar39[1] = pppppppuStack_1a0[1];
                      *pppppppuVar39 = ppppppuVar23;
                      if ((ulong *******)0x10 < pppppppuVar41) {
                        ppppppuVar23 = pppppppuStack_1a0[2];
                        pppppppuVar39[3] = pppppppuStack_1a0[3];
                        pppppppuVar39[2] = ppppppuVar23;
                        ppppppuVar23 = pppppppuStack_1a0[4];
                        pppppppuVar39[5] = pppppppuStack_1a0[5];
                        pppppppuVar39[4] = ppppppuVar23;
                        if (0x20 < (long)(pppppppuVar41 + -2)) {
                          pppppppuVar41 = pppppppuVar39 + 6;
                          pppppppuVar22 = pppppppuStack_1a0 + 8;
                          do {
                            ppppppuVar23 = pppppppuVar22[-2];
                            pppppppuVar41[1] = pppppppuVar22[-1];
                            *pppppppuVar41 = ppppppuVar23;
                            ppppppuVar23 = *pppppppuVar22;
                            pppppppuVar41[3] = pppppppuVar22[1];
                            pppppppuVar41[2] = ppppppuVar23;
                            pppppppuVar41 = pppppppuVar41 + 4;
                            pppppppuVar22 = pppppppuVar22 + 4;
                          } while (pppppppuVar41 < pppppppuVar19);
                        }
                      }
                      ppppppuVar23 = (ulong ******)((long)pppppppuVar19 - (long)pppppuVar35);
                      pppppppuVar41 = pppppppuVar19;
                      pppppppuStack_1a0 = pppppppuVar33;
                      if ((ulong *****)((long)pppppppuVar19 - (long)ppppppuVar29) < pppppuVar35) {
                        if ((ulong *****)((long)pppppppuVar19 - (long)ppppppuVar37) < pppppuVar35)
                        goto LAB_1000cc91c;
                        lVar20 = ((long)pppppppuVar19 - (long)pppppuVar35) - (long)ppppppuVar29;
                        bVar13 = SCARRY8(lVar20,(long)pppppuVar24);
                        pppppuVar24 = (ulong *****)(lVar20 + (long)pppppuVar24);
                        if (pppppuVar24 == (ulong *****)0x0 || (long)pppppuVar24 < 0 != bVar13) {
                          pppppppuVar15 = (ulong *******)((long)ppppppuVar30 + lVar20);
                          func_0x000107c610b8();
                          goto LAB_1000cd9b8;
                        }
                        pppppppuVar15 = (ulong *******)((long)ppppppuVar30 + lVar20);
                        pppppppuVar14 = pppppppuVar19;
                        func_0x000107c610b8(pppppppuVar19,pppppppuVar15,-lVar20);
                        pppppppuVar41 = (ulong *******)((long)pppppppuVar19 - lVar20);
                        ppppppuVar23 = ppppppuVar29;
                      }
                      pppppppuVar19 = pppppppuVar14;
                      if (pppppuVar35 < (ulong *****)0x10) {
                        if (pppppuVar35 < (ulong *****)0x8) {
                          iVar26 = *(int *)(&UNK_10e011c80 + (long)pppppuVar35 * 4);
                          *(byte *)pppppppuVar41 = *(byte *)ppppppuVar23;
                          *(byte *)((long)pppppppuVar41 + 1) = *(byte *)((long)ppppppuVar23 + 1);
                          *(byte *)((long)pppppppuVar41 + 2) = *(byte *)((long)ppppppuVar23 + 2);
                          *(byte *)((long)pppppppuVar41 + 3) = *(byte *)((long)ppppppuVar23 + 3);
                          uVar16 = *(uint *)(&UNK_10e011c60 + (long)pppppuVar35 * 4);
                          *(undefined4 *)((long)pppppppuVar41 + 4) =
                               *(undefined4 *)((long)ppppppuVar23 + (ulong)uVar16);
                          ppppppuVar23 = (ulong ******)
                                         ((byte *)((long)ppppppuVar23 + (ulong)uVar16) +
                                         -(long)iVar26);
                        }
                        else {
                          *pppppppuVar41 = (ulong ******)*ppppppuVar23;
                        }
                        if ((ulong *****)0x8 < pppppuVar24) {
                          ppppppuVar46 = ppppppuVar23 + 1;
                          pppppppuVar33 = pppppppuVar41 + 1;
                          if ((long)pppppppuVar33 - (long)ppppppuVar46 < 0x10) {
                            do {
                              pppppppuVar14 = pppppppuVar33 + 1;
                              *pppppppuVar33 = (ulong ******)*ppppppuVar46;
                              ppppppuVar46 = ppppppuVar46 + 1;
                              pppppppuVar33 = pppppppuVar14;
                            } while (pppppppuVar14 <
                                     (ulong *******)((long)pppppppuVar41 + (long)pppppuVar24));
                          }
                          else {
                            ppppppuVar46 = (ulong ******)*ppppppuVar46;
                            pppppppuVar41[2] = (ulong ******)ppppppuVar23[2];
                            *pppppppuVar33 = ppppppuVar46;
                            ppppppuVar46 = (ulong ******)ppppppuVar23[3];
                            pppppppuVar41[4] = (ulong ******)ppppppuVar23[4];
                            pppppppuVar41[3] = ppppppuVar46;
                            if (0x28 < (long)pppppuVar24) {
                              pppppppuVar33 = pppppppuVar41 + 5;
                              ppppppuVar23 = ppppppuVar23 + 7;
                              do {
                                ppppppuVar46 = (ulong ******)ppppppuVar23[-2];
                                pppppppuVar33[1] = (ulong ******)ppppppuVar23[-1];
                                *pppppppuVar33 = ppppppuVar46;
                                ppppppuVar46 = (ulong ******)*ppppppuVar23;
                                pppppppuVar33[3] = (ulong ******)ppppppuVar23[1];
                                pppppppuVar33[2] = ppppppuVar46;
                                pppppppuVar33 = pppppppuVar33 + 4;
                                ppppppuVar23 = ppppppuVar23 + 4;
                              } while (pppppppuVar33 <
                                       (ulong *******)((long)pppppppuVar41 + (long)pppppuVar24));
                            }
                          }
                        }
                      }
                      else {
                        ppppppuVar46 = (ulong ******)*ppppppuVar23;
                        pppppppuVar41[1] = (ulong ******)ppppppuVar23[1];
                        *pppppppuVar41 = ppppppuVar46;
                        ppppppuVar46 = (ulong ******)ppppppuVar23[2];
                        pppppppuVar41[3] = (ulong ******)ppppppuVar23[3];
                        pppppppuVar41[2] = ppppppuVar46;
                        if (0x20 < (long)pppppuVar24) {
                          pppppppuVar33 = pppppppuVar41 + 4;
                          ppppppuVar23 = ppppppuVar23 + 6;
                          do {
                            ppppppuVar46 = (ulong ******)ppppppuVar23[-2];
                            pppppppuVar33[1] = (ulong ******)ppppppuVar23[-1];
                            *pppppppuVar33 = ppppppuVar46;
                            ppppppuVar46 = (ulong ******)*ppppppuVar23;
                            pppppppuVar33[3] = (ulong ******)ppppppuVar23[1];
                            pppppppuVar33[2] = ppppppuVar46;
                            pppppppuVar33 = pppppppuVar33 + 4;
                            ppppppuVar23 = ppppppuVar23 + 4;
                          } while (pppppppuVar33 <
                                   (ulong *******)((long)pppppppuVar41 + (long)pppppuVar24));
                        }
                      }
                    }
LAB_1000cd9b8:
                    pppppppuVar33 = pppppppuVar19;
                    if ((ulong *******)0xffffffffffffff88 < pppppppuVar38) goto LAB_1000cc920;
                    pppppuVar24 = (ulong *****)
                                  ((long)pppppppuVar43 + ((long)ppppppuVar45 - (long)pppppppuVar44))
                    ;
                    Hint_Prefetch(pppppuVar24,0,0,0);
                    Hint_Prefetch((byte *)((long)pppppuVar17 + (long)((long)pppppuVar24 + -1)),0,0,0
                                 );
                    appppppuStack_f0[uVar25 * 4] = (ulong ******)pppppuVar34;
                    appppppuStack_f0[uVar25 * 4 + 1] = (ulong ******)pppppuVar17;
                    appppppuStack_d8[uVar25 * 4 + -1] = (ulong ******)pppppppuVar44;
                    appppppuStack_d8[uVar25 * 4] = (ulong ******)pppppuVar24;
                    pppppppuVar39 = (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar38);
                    uVar42 = (ulong)(uVar36 + 1);
                    uVar25 = (ulong)uStack_170;
                  }
                  pppppppuVar14 = pppppppuVar19;
                  if ((int)uVar31 <= (int)uVar36) {
LAB_1000cdf84:
                    uVar36 = uVar36 - uVar27;
                    pppppppuVar33 = pppppppuVar19;
                    if ((int)uVar36 < (int)uVar31) {
                      do {
                        uVar25 = (ulong)(uVar36 & 3);
                        pppppppuVar44 = (ulong *******)appppppuStack_f0[uVar25 * 4];
                        pppppuVar17 = (ulong *****)appppppuStack_f0[uVar25 * 4 + 1];
                        pppppuVar34 = (ulong *****)appppppuStack_d8[uVar25 * 4 + -1];
                        pppppppuVar38 = (ulong *******)((long)pppppuVar17 + (long)pppppppuVar44);
                        pppppppuVar14 =
                             (ulong *******)((long)pppppppuStack_1a0 + (long)pppppppuVar44);
                        if (pppppppuVar5 < pppppppuVar14 ||
                            pppppppuVar4 + -4 <
                            (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar38)) {
                          pppppuStack_180 = (ulong *****)appppppuStack_d8[uVar25 * 4];
                          pppppppuVar38 = pppppppuVar39;
                          pppppppuVar15 = pppppppuVar4;
                          pppppppuStack_198 = pppppppuVar44;
                          pppppuStack_190 = pppppuVar17;
                          pppppuStack_188 = pppppuVar34;
                          func_0x000107c2ae84(pppppppuVar39,pppppppuVar4,&pppppppuStack_198,
                                              &pppppppuStack_1a0,pppppppuVar5,ppppppuVar29,
                                              ppppppuVar37,ppppppuVar30);
                          pppppppuVar33 = pppppppuVar38;
                        }
                        else {
                          pppppppuVar33 = (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar44)
                          ;
                          ppppppuVar45 = *pppppppuStack_1a0;
                          pppppppuVar39[1] = pppppppuStack_1a0[1];
                          *pppppppuVar39 = ppppppuVar45;
                          if ((ulong *******)0x10 < pppppppuVar44) {
                            ppppppuVar45 = pppppppuStack_1a0[2];
                            pppppppuVar39[3] = pppppppuStack_1a0[3];
                            pppppppuVar39[2] = ppppppuVar45;
                            ppppppuVar45 = pppppppuStack_1a0[4];
                            pppppppuVar39[5] = pppppppuStack_1a0[5];
                            pppppppuVar39[4] = ppppppuVar45;
                            if (0x20 < (long)(pppppppuVar44 + -2)) {
                              pppppppuVar44 = pppppppuVar39 + 6;
                              pppppppuVar43 = pppppppuStack_1a0 + 8;
                              do {
                                ppppppuVar45 = pppppppuVar43[-2];
                                pppppppuVar44[1] = pppppppuVar43[-1];
                                *pppppppuVar44 = ppppppuVar45;
                                ppppppuVar45 = *pppppppuVar43;
                                pppppppuVar44[3] = pppppppuVar43[1];
                                pppppppuVar44[2] = ppppppuVar45;
                                pppppppuVar44 = pppppppuVar44 + 4;
                                pppppppuVar43 = pppppppuVar43 + 4;
                              } while (pppppppuVar44 < pppppppuVar33);
                            }
                          }
                          ppppppuVar45 = (ulong ******)((long)pppppppuVar33 - (long)pppppuVar34);
                          pppppppuVar44 = pppppppuVar33;
                          pppppppuStack_1a0 = pppppppuVar14;
                          if ((ulong *****)((long)pppppppuVar33 - (long)ppppppuVar29) < pppppuVar34)
                          {
                            pppppppuVar14 = pppppppuVar19;
                            if ((ulong *****)((long)pppppppuVar33 - (long)ppppppuVar37) <
                                pppppuVar34) goto LAB_1000cc91c;
                            lVar20 = ((long)pppppppuVar33 - (long)pppppuVar34) - (long)ppppppuVar29;
                            bVar13 = SCARRY8(lVar20,(long)pppppuVar17);
                            pppppuVar17 = (ulong *****)(lVar20 + (long)pppppuVar17);
                            if (pppppuVar17 == (ulong *****)0x0 || (long)pppppuVar17 < 0 != bVar13)
                            {
                              pppppppuVar15 = (ulong *******)((long)ppppppuVar30 + lVar20);
                              func_0x000107c610b8();
                              goto LAB_1000ce1ec;
                            }
                            pppppppuVar15 = (ulong *******)((long)ppppppuVar30 + lVar20);
                            pppppppuVar19 = pppppppuVar33;
                            func_0x000107c610b8(pppppppuVar33,pppppppuVar15,-lVar20);
                            pppppppuVar44 = (ulong *******)((long)pppppppuVar33 - lVar20);
                            ppppppuVar45 = ppppppuVar29;
                          }
                          pppppppuVar33 = pppppppuVar19;
                          if (pppppuVar34 < (ulong *****)0x10) {
                            if (pppppuVar34 < (ulong *****)0x8) {
                              iVar26 = *(int *)(&UNK_10e011c80 + (long)pppppuVar34 * 4);
                              *(byte *)pppppppuVar44 = *(byte *)ppppppuVar45;
                              *(byte *)((long)pppppppuVar44 + 1) = *(byte *)((long)ppppppuVar45 + 1)
                              ;
                              *(byte *)((long)pppppppuVar44 + 2) = *(byte *)((long)ppppppuVar45 + 2)
                              ;
                              *(byte *)((long)pppppppuVar44 + 3) = *(byte *)((long)ppppppuVar45 + 3)
                              ;
                              uVar27 = *(uint *)(&UNK_10e011c60 + (long)pppppuVar34 * 4);
                              *(undefined4 *)((long)pppppppuVar44 + 4) =
                                   *(undefined4 *)((long)ppppppuVar45 + (ulong)uVar27);
                              ppppppuVar45 = (ulong ******)
                                             ((byte *)((long)ppppppuVar45 + (ulong)uVar27) +
                                             -(long)iVar26);
                            }
                            else {
                              *pppppppuVar44 = (ulong ******)*ppppppuVar45;
                            }
                            if ((ulong *****)0x8 < pppppuVar17) {
                              ppppppuVar23 = ppppppuVar45 + 1;
                              pppppppuVar14 = pppppppuVar44 + 1;
                              if ((long)pppppppuVar14 - (long)ppppppuVar23 < 0x10) {
                                do {
                                  pppppppuVar19 = pppppppuVar14 + 1;
                                  *pppppppuVar14 = (ulong ******)*ppppppuVar23;
                                  ppppppuVar23 = ppppppuVar23 + 1;
                                  pppppppuVar14 = pppppppuVar19;
                                } while (pppppppuVar19 <
                                         (ulong *******)((long)pppppppuVar44 + (long)pppppuVar17));
                              }
                              else {
                                ppppppuVar23 = (ulong ******)*ppppppuVar23;
                                pppppppuVar44[2] = (ulong ******)ppppppuVar45[2];
                                *pppppppuVar14 = ppppppuVar23;
                                ppppppuVar23 = (ulong ******)ppppppuVar45[3];
                                pppppppuVar44[4] = (ulong ******)ppppppuVar45[4];
                                pppppppuVar44[3] = ppppppuVar23;
                                if (0x28 < (long)pppppuVar17) {
                                  pppppppuVar14 = pppppppuVar44 + 5;
                                  ppppppuVar45 = ppppppuVar45 + 7;
                                  do {
                                    ppppppuVar23 = (ulong ******)ppppppuVar45[-2];
                                    pppppppuVar14[1] = (ulong ******)ppppppuVar45[-1];
                                    *pppppppuVar14 = ppppppuVar23;
                                    ppppppuVar23 = (ulong ******)*ppppppuVar45;
                                    pppppppuVar14[3] = (ulong ******)ppppppuVar45[1];
                                    pppppppuVar14[2] = ppppppuVar23;
                                    pppppppuVar14 = pppppppuVar14 + 4;
                                    ppppppuVar45 = ppppppuVar45 + 4;
                                  } while (pppppppuVar14 <
                                           (ulong *******)((long)pppppppuVar44 + (long)pppppuVar17))
                                  ;
                                }
                              }
                            }
                          }
                          else {
                            ppppppuVar23 = (ulong ******)*ppppppuVar45;
                            pppppppuVar44[1] = (ulong ******)ppppppuVar45[1];
                            *pppppppuVar44 = ppppppuVar23;
                            ppppppuVar23 = (ulong ******)ppppppuVar45[2];
                            pppppppuVar44[3] = (ulong ******)ppppppuVar45[3];
                            pppppppuVar44[2] = ppppppuVar23;
                            if (0x20 < (long)pppppuVar17) {
                              pppppppuVar14 = pppppppuVar44 + 4;
                              ppppppuVar45 = ppppppuVar45 + 6;
                              do {
                                ppppppuVar23 = (ulong ******)ppppppuVar45[-2];
                                pppppppuVar14[1] = (ulong ******)ppppppuVar45[-1];
                                *pppppppuVar14 = ppppppuVar23;
                                ppppppuVar23 = (ulong ******)*ppppppuVar45;
                                pppppppuVar14[3] = (ulong ******)ppppppuVar45[1];
                                pppppppuVar14[2] = ppppppuVar23;
                                pppppppuVar14 = pppppppuVar14 + 4;
                                ppppppuVar45 = ppppppuVar45 + 4;
                              } while (pppppppuVar14 <
                                       (ulong *******)((long)pppppppuVar44 + (long)pppppuVar17));
                            }
                          }
                        }
LAB_1000ce1ec:
                        if ((ulong *******)0xffffffffffffff88 < pppppppuVar38) goto LAB_1000cc920;
                        pppppppuVar39 = (ulong *******)((long)pppppppuVar39 + (long)pppppppuVar38);
                        uVar36 = uVar36 + 1;
                        pppppppuVar19 = pppppppuVar33;
                      } while (uVar36 != uVar31);
                    }
                    lVar20 = 0x58;
                    pbVar21 = (byte *)((long)param_1 + 0x683c);
                    do {
                      *(int *)pbVar21 = (int)*(undefined8 *)((long)&ppppppuStack_178 + lVar20);
                      lVar20 = lVar20 + 8;
                      pbVar21 = pbVar21 + 4;
                    } while (lVar20 != 0x70);
                    goto LAB_1000ccf78;
                  }
                }
                goto LAB_1000cc91c;
              }
LAB_1000ccf78:
              uVar40 = (long)pppppppuVar5 - (long)pppppppuStack_1a0;
              uVar25 = (long)pppppppuVar4 - (long)pppppppuVar39;
              pppppppuVar15 = pppppppuStack_1a0;
            }
            if (uVar25 < uVar40) {
              pppppppuVar38 = (ulong *******)0xffffffffffffffba;
            }
            else {
              pppppppuVar33 = pppppppuVar39;
              func_0x000107c610b4(pppppppuVar39,pppppppuVar15,uVar40);
              pppppppuVar38 = (ulong *******)((long)pppppppuVar39 + (uVar40 - (long)param_2));
            }
            goto LAB_1000cc920;
          }
        }
        else if ((char)bVar9 < '\0') {
          if (uVar31 == 0xff) {
            if (2 < (long)pppppppuVar19) {
              pbVar21 = pbVar2 + 3;
              uVar31 = *(ushort *)(pbVar2 + 1) + 0x7f00;
              goto LAB_1000ccc80;
            }
          }
          else if (1 < (long)pppppppuVar19) {
            pbVar21 = pbVar2 + 2;
            uVar31 = CONCAT11(bVar9,pbVar2[1]) - 0x8000;
            goto LAB_1000ccc80;
          }
        }
        else {
LAB_1000ccc80:
          pbVar1 = pbVar21 + 1;
          if (pbVar1 <= pbVar3) {
            bVar9 = *pbVar21;
            pppppppuVar14 = param_1 + 4;
            pppppppuVar15 = param_1;
            FUN_1000d0714(pppppppuVar14,param_1,bVar9 >> 6,0x23,9,pbVar1,(long)pbVar3 - (long)pbVar1
                          ,&UNK_10e011300,&UNK_10e011390,&UNK_10e011420,
                          *(undefined4 *)((long)param_1 + 0x70ac),iVar26,uVar31);
            if (pppppppuVar14 < (ulong *******)0xffffffffffffff89) {
              pbVar1 = pbVar1 + (long)pppppppuVar14;
              pppppppuVar14 = param_1 + 0x205;
              pppppppuVar15 = param_1 + 2;
              FUN_1000d0714(pppppppuVar14,pppppppuVar15,bVar9 >> 4 & 3,0x1f,8,pbVar1,
                            (long)pbVar3 - (long)pbVar1,&UNK_10e011628,&UNK_10e0116a8,&UNK_10e011728
                            ,*(undefined4 *)((long)param_1 + 0x70ac),
                            *(undefined4 *)((long)param_1 + 0x716c),uVar31);
              if (pppppppuVar14 < (ulong *******)0xffffffffffffff89) {
                pbVar1 = pbVar1 + (long)pppppppuVar14;
                pppppppuVar33 = param_1 + 0x306;
                pppppppuVar15 = param_1 + 1;
                FUN_1000d0714(pppppppuVar33,pppppppuVar15,bVar9 >> 2 & 3,0x34,9,pbVar1,
                              (long)pbVar3 - (long)pbVar1,&UNK_10e011830,&UNK_10e011904,
                              &UNK_10e0119d8,*(undefined4 *)((long)param_1 + 0x70ac),
                              *(undefined4 *)((long)param_1 + 0x716c),uVar31);
                pppppppuVar14 = pppppppuVar33;
                if (pppppppuVar33 < (ulong *******)0xffffffffffffff89) {
                  pppppppuVar38 = (ulong *******)(pbVar1 + (long)pppppppuVar33 + -(long)pbVar2);
                  if ((ulong *******)0xffffffffffffff88 < pppppppuVar38) goto LAB_1000cc920;
                  goto LAB_1000ccdf0;
                }
              }
            }
            goto LAB_1000cc91c;
          }
        }
      }
LAB_1000cc908:
      pppppppuVar38 = (ulong *******)0xffffffffffffffb8;
      goto LAB_1000cc920;
    }
    if ((bVar9 != 2) && (*(int *)(param_1 + 0xe15) == 0)) {
      pppppppuVar38 = (ulong *******)0xffffffffffffffe2;
      goto LAB_1000cc920;
    }
    if (param_5 < 5) goto LAB_1000cc91c;
    bVar12 = bVar12 >> 2 & 3;
    uVar31 = *param_4;
    if (bVar12 == 2) {
      uVar27 = uVar31 >> 4 & 0x3fff;
      uVar31 = uVar31 >> 0x12;
      bVar13 = true;
      lVar20 = 4;
LAB_1000ccb5c:
      uVar40 = (ulong)uVar31;
    }
    else {
      if (bVar12 != 3) {
        bVar13 = bVar12 != 0;
        uVar27 = uVar31 >> 4 & 0x3ff;
        uVar31 = uVar31 >> 0xe & 0x3ff;
        lVar20 = 3;
        goto LAB_1000ccb5c;
      }
      uVar27 = uVar31 >> 4 & 0x3ffff;
      if (0x20000 < uVar27) goto LAB_1000cc91c;
      uVar40 = (ulong)(uVar31 >> 0x16) | (ulong)(byte)param_4[1] << 10;
      bVar13 = true;
      lVar20 = 5;
    }
    uVar25 = uVar40 + lVar20;
    if (uVar25 <= param_5) {
      pppppppuVar33 = (ulong *******)(ulong)uVar27;
      if ((0x300 < uVar27) && (*(int *)((long)param_1 + 0x716c) != 0)) {
        uVar42 = 0;
        do {
          Hint_Prefetch((long)param_1[3] + uVar42,0,1,0);
          uVar18 = uVar42 >> 2;
          uVar42 = uVar42 + 0x40;
        } while (uVar18 < 0xff1);
      }
      if (bVar9 == 3) {
        pppppppuVar14 = param_1 + 0xe3b;
        pppppppuVar15 = pppppppuVar33;
        if (bVar13) {
          func_0x000107c2ae4c();
        }
        else {
          func_0x000107c2ae44(pppppppuVar14,pppppppuVar33,(long)param_4 + lVar20,uVar40,param_1[3],
                              *(undefined4 *)(param_1 + 0xe2a));
        }
      }
      else {
        pppppppuVar14 = param_1 + 0x507;
        pppppppuVar15 = param_1 + 0xe3b;
        if (bVar13) {
          FUN_1000ce2ec();
        }
        else {
          func_0x000107c2ae48(pppppppuVar14,pppppppuVar15,pppppppuVar33,(long)param_4 + lVar20,
                              uVar40,param_1 + 0xd09,0x800);
        }
      }
      if (pppppppuVar14 < (ulong *******)0xffffffffffffff89) {
        param_1[0xe23] = (ulong ******)(param_1 + 0xe3b);
        param_1[0xe27] = (ulong ******)pppppppuVar33;
        *(undefined4 *)(param_1 + 0xe15) = 1;
        if (bVar9 == 2) {
          param_1[3] = (ulong ******)(param_1 + 0x507);
        }
        pbVar21 = (byte *)((long)(param_1 + 0xe3b) + (long)pppppppuVar33);
        goto LAB_1000ccc54;
      }
    }
  }
LAB_1000cc91c:
  pppppppuVar38 = (ulong *******)0xffffffffffffffec;
  pppppppuVar33 = pppppppuVar14;
LAB_1000cc920:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (pppppppuVar15 < pppppppuVar33) {
      uVar25 = 0;
      if (pppppppuVar33 != (ulong *******)0x0) {
        uVar25 = (ulong)((long)pppppppuVar15 << 4) / (ulong)pppppppuVar33;
      }
      uVar25 = uVar25 & 0xffffffff;
    }
    else {
      uVar25 = 0xf;
    }
    lVar20 = uVar25 * 0x18;
    iVar26 = (int)((ulong)pppppppuVar33 >> 8);
    uVar31 = *(int *)(&UNK_10e010d68 + lVar20) + *(int *)(&UNK_10e010d6c + lVar20) * iVar26;
    return (ulong *******)
           (ulong)(uVar31 + (uVar31 >> 3) <
                  (uint)(*(int *)(&UNK_10e010d60 + lVar20) +
                        *(int *)(&UNK_10e010d64 + lVar20) * iVar26));
  }
  return pppppppuVar38;
}



/* Entry: 1000ce29c; end: 1000ce2eb;  */

bool FUN_1000ce29c(ulong param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  if (param_2 < param_1) {
    uVar3 = 0;
    if (param_1 != 0) {
      uVar3 = (param_2 << 4) / param_1;
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  else {
    uVar3 = 0xf;
  }
  lVar2 = uVar3 * 0x18;
  iVar4 = (int)(param_1 >> 8);
  uVar1 = *(int *)(&UNK_10e010d68 + lVar2) + *(int *)(&UNK_10e010d6c + lVar2) * iVar4;
  return uVar1 + (uVar1 >> 3) <
         (uint)(*(int *)(&UNK_10e010d60 + lVar2) + *(int *)(&UNK_10e010d64 + lVar2) * iVar4);
}



/* Entry: 1000ce2ec; end: 1000ce3c3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1000ce2ec(long *param_1,undefined2 *param_2,long *param_3,long param_4,long *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ushort *puVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  undefined2 *puVar32;
  undefined2 *puVar33;
  undefined2 *puVar34;
  undefined2 *puVar35;
  uint uVar36;
  uint uVar37;
  undefined1 *puVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  undefined2 *puVar42;
  ulong uVar43;
  long lVar44;
  int iVar45;
  ulong uVar46;
  ulong uVar47;
  int iVar48;
  int iVar49;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  uint uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  
  if (param_3 == (long *)0x0) {
    return (long *)0xffffffffffffffba;
  }
  if (param_5 == (long *)0x0) {
    return (long *)0xffffffffffffffec;
  }
  plVar29 = param_3;
  FUN_1000ce29c(param_3,param_5);
  if ((int)plVar29 == 0) {
    plVar29 = param_1;
    FUN_1000ce3c4(param_1,param_4,param_5,param_6,param_7);
    if ((long *)0xffffffffffffff88 < plVar29) {
      return plVar29;
    }
    uVar30 = (long)param_5 - (long)plVar29;
    if (param_5 < plVar29 || uVar30 == 0) {
      return (long *)0xffffffffffffffb8;
    }
    puVar10 = (ushort *)(param_4 + (long)plVar29);
    if (uVar30 < 10) {
      return (long *)0xffffffffffffffec;
    }
    uVar16 = *puVar10;
    uVar17 = puVar10[1];
    uVar18 = puVar10[2];
    uVar31 = (ulong)uVar16 + (ulong)uVar17 + (ulong)uVar18 + 6;
    if (uVar30 < uVar31) {
      return (long *)0xffffffffffffffec;
    }
    if (uVar16 == 0) {
      return (long *)0xffffffffffffffb8;
    }
    puStack_78 = (ulong *)(puVar10 + 3);
    puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar16);
    uVar19 = *(ushort *)((long)param_1 + 2);
    puStack_70 = (ulong *)(puVar10 + 7);
    if (uVar16 < 8) {
      uStack_90 = (ulong)(byte)*puStack_78;
      uVar39 = (uint)uVar16;
      if (uVar16 < 5) {
        if (uVar39 == 2) goto LAB_1000cf560;
        if (uVar39 == 3) goto LAB_1000cf558;
        if (uVar39 == 4) goto LAB_1000cf550;
      }
      else {
        if (uVar16 != 5) {
          if (uVar16 != 6) {
            if (uVar39 != 7) goto LAB_1000cf56c;
            uStack_90 = uStack_90 | (ulong)(byte)puVar10[6] << 0x30;
          }
          uStack_90 = uStack_90 + ((ulong)*(byte *)((long)puVar10 + 0xb) << 0x28);
        }
        uStack_90 = uStack_90 + ((ulong)(byte)puVar10[5] << 0x20);
LAB_1000cf550:
        uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar10 + 9) * 0x1000000;
LAB_1000cf558:
        uStack_90 = uStack_90 + (ulong)(byte)puVar10[4] * 0x10000;
LAB_1000cf560:
        uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar10 + 7) * 0x100;
      }
LAB_1000cf56c:
      if (*(byte *)((long)puStack_a0 + -1) != 0) {
        uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar39 * -8 + 0x29;
        puStack_80 = puStack_78;
        goto LAB_1000cf580;
      }
LAB_1000cfb9c:
      plVar29 = (long *)0xffffffffffffffec;
    }
    else {
      uStack_90 = puStack_a0[-1];
      if (uStack_90 >> 0x38 == 0) {
        return (long *)0xffffffffffffffff;
      }
      uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
      puStack_80 = puStack_a0 + -1;
LAB_1000cf580:
      if (uVar17 != 0) {
        puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar17);
        puStack_98 = puStack_a0 + 1;
        if (uVar17 < 8) {
          uStack_b8 = (ulong)(byte)*puStack_a0;
          uVar39 = (uint)uVar17;
          if (uVar17 < 5) {
            if (uVar39 == 2) goto LAB_1000cf638;
            if (uVar39 == 3) goto LAB_1000cf630;
            if (uVar39 == 4) goto LAB_1000cf628;
          }
          else {
            if (uVar17 != 5) {
              if (uVar17 != 6) {
                if (uVar39 != 7) goto LAB_1000cf644;
                uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
              }
              uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
LAB_1000cf628:
            uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
LAB_1000cf630:
            uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
LAB_1000cf638:
            uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
          }
LAB_1000cf644:
          if (*(byte *)((long)puStack_c8 + -1) == 0) goto LAB_1000cfb9c;
          uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar39 * -8 + 0x29;
          puStack_a8 = puStack_a0;
        }
        else {
          uStack_b8 = puStack_c8[-1];
          if (uStack_b8 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
          puStack_a8 = puStack_c8 + -1;
        }
        if (uVar18 != 0) {
          pbVar5 = (byte *)((long)puStack_c8 + (ulong)uVar18);
          puStack_c0 = puStack_c8 + 1;
          if (7 < uVar18) {
            uStack_e0 = *(ulong *)(pbVar5 + -8);
            if (uStack_e0 >> 0x38 == 0) {
              return (long *)0xffffffffffffffff;
            }
            uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
            puStack_d0 = (ulong *)(pbVar5 + -8);
            goto LAB_1000cf740;
          }
          uStack_e0 = (ulong)(byte)*puStack_c8;
          uVar39 = (uint)uVar18;
          if (uVar18 < 5) {
            if (uVar39 == 2) goto LAB_1000cf720;
            if (uVar39 == 3) goto LAB_1000cf718;
            if (uVar39 == 4) goto LAB_1000cf710;
          }
          else {
            if (uVar18 != 5) {
              if (uVar18 != 6) {
                if (uVar39 != 7) goto LAB_1000cf72c;
                uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
              }
              uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
LAB_1000cf710:
            uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
LAB_1000cf718:
            uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
LAB_1000cf720:
            uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
          }
LAB_1000cf72c:
          if (pbVar5[-1] != 0) {
            uStack_d8 = (int)LZCOUNT((uint)pbVar5[-1]) + uVar39 * -8 + 0x29;
            puStack_d0 = puStack_c8;
LAB_1000cf740:
            plVar29 = &lStack_108;
            FUN_1000d01fc(plVar29,pbVar5,uVar30 - uVar31);
            if ((long *)0xffffffffffffff88 < plVar29) {
              return plVar29;
            }
            uVar30 = (long)param_3 + 3;
            uVar31 = uVar30 >> 2;
            puVar6 = (undefined2 *)((long)param_2 + (uVar30 >> 2));
            puVar7 = (undefined2 *)((long)puVar6 + (uVar30 >> 2));
            puVar8 = (undefined2 *)((long)puVar7 + (uVar30 >> 2));
            iVar25 = (int)&uStack_90;
            func_0x0001000d031c();
            iVar26 = (int)&uStack_b8;
            func_0x0001000d031c();
            iVar27 = (int)&uStack_e0;
            func_0x0001000d031c();
            iVar28 = (int)&lStack_108;
            func_0x0001000d031c();
            puVar32 = (undefined2 *)(((long)param_2 + (long)param_3) - 3);
            puVar42 = param_2;
            puVar33 = puVar8;
            puVar35 = puVar7;
            puVar34 = puVar6;
            if (((iVar26 == 0 && iVar25 == 0) && (iVar27 == 0 && iVar28 == 0)) && (puVar8 < puVar32)
               ) {
              uVar39 = -(uint)uVar19 & 0x3f;
              uVar47 = (ulong)uStack_88;
              uVar46 = (ulong)uStack_b0;
              uVar30 = (ulong)uStack_d8;
              uVar43 = (ulong)uStack_100;
              plStack_110 = plStack_f8;
              puVar33 = param_2;
              lVar44 = lStack_108;
              do {
                puVar42 = puVar33;
                puVar38 = (undefined1 *)((long)puVar42 + uVar31);
                puVar33 = puVar42 + uVar31;
                puVar3 = (undefined1 *)((long)puVar42 + uVar31 * 3);
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_90 << (uVar47 & 0x3f)) >> uVar39) * 2 + 4);
                uVar41 = (int)uVar47 + (uint)(byte)puVar4[1];
                *(undefined1 *)puVar42 = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_b8 << (uVar46 & 0x3f)) >> uVar39) * 2 + 4);
                uVar37 = (int)uVar46 + (uint)(byte)puVar4[1];
                *puVar38 = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar39) * 2 + 4);
                uVar1 = (int)uVar30 + (uint)(byte)puVar4[1];
                *(undefined1 *)puVar33 = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((ulong)(lVar44 << (uVar43 & 0x3f)) >> uVar39) * 2 + 4);
                uVar2 = (int)uVar43 + (uint)(byte)puVar4[1];
                *puVar3 = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_90 << ((ulong)uVar41 & 0x3f)) >> uVar39) * 2 + 4)
                ;
                uVar41 = uVar41 + (byte)puVar4[1];
                *(undefined1 *)((long)puVar42 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_b8 << ((ulong)uVar37 & 0x3f)) >> uVar39) * 2 + 4)
                ;
                uVar37 = uVar37 + (byte)puVar4[1];
                puVar38[1] = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar39) * 2 + 4);
                uVar1 = uVar1 + (byte)puVar4[1];
                *(undefined1 *)((long)puVar33 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 +
                         ((ulong)(lVar44 << ((ulong)uVar2 & 0x3f)) >> uVar39) * 2 + 4);
                uVar2 = uVar2 + (byte)puVar4[1];
                puVar3[1] = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_90 << ((ulong)uVar41 & 0x3f)) >> uVar39) * 2 + 4)
                ;
                uVar41 = uVar41 + (byte)puVar4[1];
                *(undefined1 *)(puVar42 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_b8 << ((ulong)uVar37 & 0x3f)) >> uVar39) * 2 + 4)
                ;
                uVar37 = uVar37 + (byte)puVar4[1];
                puVar38[2] = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar39) * 2 + 4);
                uVar1 = uVar1 + (byte)puVar4[1];
                *(undefined1 *)(puVar33 + 1) = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 +
                         ((ulong)(lVar44 << ((ulong)uVar2 & 0x3f)) >> uVar39) * 2 + 4);
                uVar2 = uVar2 + (byte)puVar4[1];
                puVar3[2] = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_90 << ((ulong)uVar41 & 0x3f)) >> uVar39) * 2 + 4)
                ;
                uVar41 = uVar41 + (byte)puVar4[1];
                uVar47 = (ulong)uVar41;
                *(undefined1 *)((long)puVar42 + 3) = *puVar4;
                puVar4 = (undefined1 *)
                         ((long)param_1 + ((uStack_b8 << ((ulong)uVar37 & 0x3f)) >> uVar39) * 2 + 4)
                ;
                bVar11 = puVar4[1];
                puVar38[3] = *puVar4;
                puVar38 = (undefined1 *)
                          ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar39) * 2 + 4)
                ;
                bVar12 = puVar38[1];
                *(undefined1 *)((long)puVar33 + 3) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((ulong)(lVar44 << ((ulong)uVar2 & 0x3f)) >> uVar39) * 2 + 4);
                bVar13 = puVar38[1];
                puVar3[3] = *puVar38;
                if (uVar41 < 0x41) {
                  if (puStack_80 < puStack_70) {
                    if (puStack_80 == puStack_78) goto LAB_1000cfa6c;
                    uVar36 = (int)puStack_80 - (int)puStack_78;
                    if (puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uVar41 >> 3))) {
                      uVar36 = uVar41 >> 3;
                    }
                    uVar41 = uVar41 + uVar36 * -8;
                  }
                  else {
                    uVar36 = uVar41 >> 3;
                    uVar41 = uVar41 & 7;
                  }
                  uVar47 = (ulong)uVar41;
                  puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar36);
                  uStack_90 = *puStack_80;
                }
LAB_1000cfa6c:
                uVar37 = uVar37 + bVar11;
                uVar46 = (ulong)uVar37;
                if (uVar37 < 0x41) {
                  if (puStack_a8 < puStack_98) {
                    if (puStack_a8 == puStack_a0) goto LAB_1000cfad0;
                    uVar41 = (int)puStack_a8 - (int)puStack_a0;
                    if (puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uVar37 >> 3))) {
                      uVar41 = uVar37 >> 3;
                    }
                    uVar37 = uVar37 + uVar41 * -8;
                  }
                  else {
                    uVar41 = uVar37 >> 3;
                    uVar37 = uVar37 & 7;
                  }
                  uVar46 = (ulong)uVar37;
                  puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar41);
                  uStack_b8 = *puStack_a8;
                }
LAB_1000cfad0:
                uVar1 = uVar1 + bVar12;
                uVar30 = (ulong)uVar1;
                if (uVar1 < 0x41) {
                  if (puStack_d0 < puStack_c0) {
                    if (puStack_d0 == puStack_c8) goto LAB_1000cfb18;
                    uVar41 = (int)puStack_d0 - (int)puStack_c8;
                    if (puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uVar1 >> 3))) {
                      uVar41 = uVar1 >> 3;
                    }
                    uVar1 = uVar1 + uVar41 * -8;
                  }
                  else {
                    uVar41 = uVar1 >> 3;
                    uVar1 = uVar1 & 7;
                  }
                  uVar30 = (ulong)uVar1;
                  puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar41);
                  uStack_e0 = *puStack_d0;
                }
LAB_1000cfb18:
                uVar2 = uVar2 + bVar13;
                uVar43 = (ulong)uVar2;
                if (uVar2 < 0x41) {
                  if (plStack_110 < plStack_e8) {
                    if (plStack_110 == plStack_f0) goto LAB_1000cfb80;
                    uVar41 = (int)plStack_110 - (int)plStack_f0;
                    if (plStack_f0 <= (long *)((long)plStack_110 - (ulong)(uVar2 >> 3))) {
                      uVar41 = uVar2 >> 3;
                    }
                    uVar2 = uVar2 + uVar41 * -8;
                  }
                  else {
                    uVar41 = uVar2 >> 3;
                    uVar2 = uVar2 & 7;
                  }
                  plStack_110 = (long *)((long)plStack_110 - (ulong)uVar41);
                  uVar43 = (ulong)uVar2;
                  lVar44 = *plStack_110;
                  lStack_108 = lVar44;
                  plStack_f8 = plStack_110;
                }
LAB_1000cfb80:
                puVar33 = puVar42 + 2;
              } while (puVar3 + 4 < puVar32);
              puVar42 = puVar42 + 2;
              uStack_88 = (uint)uVar47;
              uStack_b0 = (uint)uVar46;
              uStack_d8 = (uint)uVar30;
              uStack_100 = (uint)uVar43;
              puVar33 = (undefined2 *)((long)puVar42 + uVar31 * 3);
              puVar35 = puVar42 + uVar31;
              puVar34 = (undefined2 *)((long)puVar42 + uVar31);
            }
            uVar39 = (uint)uVar19;
            if (puVar6 < puVar42) {
              return (long *)0xffffffffffffffec;
            }
            if (puVar7 < puVar34) {
              return (long *)0xffffffffffffffec;
            }
            if (puVar8 < puVar35) {
              return (long *)0xffffffffffffffec;
            }
            if (uStack_88 < 0x41) {
              uVar41 = -uVar39 & 0x3f;
              do {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) break;
                  bVar24 = puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uStack_88 >> 3));
                  uVar37 = uStack_88 >> 3;
                  if (!bVar24) {
                    uVar37 = (int)puStack_80 - (int)puStack_78;
                  }
                  uStack_88 = uStack_88 + uVar37 * -8;
                }
                else {
                  uVar37 = uStack_88 >> 3;
                  uStack_88 = uStack_88 & 7;
                  bVar24 = true;
                }
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar37);
                uStack_90 = *puStack_80;
                if (((undefined2 *)((long)puVar6 - 3U) <= puVar42) || (!bVar24)) break;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_88 = uStack_88 + (byte)puVar38[1];
                *(undefined1 *)puVar42 = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_88 = uStack_88 + (byte)puVar38[1];
                *(undefined1 *)((long)puVar42 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_88 = uStack_88 + (byte)puVar38[1];
                *(undefined1 *)(puVar42 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_88 = uStack_88 + (byte)puVar38[1];
                puVar9 = puVar42 + 2;
                *(undefined1 *)((long)puVar42 + 3) = *puVar38;
                puVar42 = puVar9;
                if (0x40 < uStack_88) break;
              } while( true );
            }
            if (puVar42 < puVar6) {
              puVar38 = (undefined1 *)((long)param_2 + (uVar31 - (long)puVar42));
              do {
                puVar3 = (undefined1 *)
                         ((long)param_1 +
                         ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> (-uVar39 & 0x3f)) * 2 + 4);
                uStack_88 = uStack_88 + (byte)puVar3[1];
                *(undefined1 *)puVar42 = *puVar3;
                puVar38 = puVar38 + -1;
                puVar42 = (undefined2 *)((long)puVar42 + 1);
              } while (puVar38 != (undefined1 *)0x0);
            }
            if (uStack_b0 < 0x41) {
              uVar41 = -uVar39 & 0x3f;
              do {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) break;
                  bVar24 = puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uStack_b0 >> 3));
                  uVar37 = uStack_b0 >> 3;
                  if (!bVar24) {
                    uVar37 = (int)puStack_a8 - (int)puStack_a0;
                  }
                  uStack_b0 = uStack_b0 + uVar37 * -8;
                }
                else {
                  uVar37 = uStack_b0 >> 3;
                  uStack_b0 = uStack_b0 & 7;
                  bVar24 = true;
                }
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar37);
                uStack_b8 = *puStack_a8;
                if (((undefined2 *)((long)puVar7 - 3U) <= puVar34) || (!bVar24)) break;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_b0 = uStack_b0 + (byte)puVar38[1];
                *(undefined1 *)puVar34 = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_b0 = uStack_b0 + (byte)puVar38[1];
                *(undefined1 *)((long)puVar34 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_b0 = uStack_b0 + (byte)puVar38[1];
                *(undefined1 *)(puVar34 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_b0 = uStack_b0 + (byte)puVar38[1];
                puVar42 = puVar34 + 2;
                *(undefined1 *)((long)puVar34 + 3) = *puVar38;
                puVar34 = puVar42;
                if (0x40 < uStack_b0) break;
              } while( true );
            }
            if (puVar34 < puVar7) {
              do {
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> (-uVar39 & 0x3f)) * 2 + 4);
                uStack_b0 = uStack_b0 + (byte)puVar38[1];
                puVar42 = (undefined2 *)((long)puVar34 + 1);
                *(undefined1 *)puVar34 = *puVar38;
                puVar34 = puVar42;
              } while (puVar42 < puVar7);
            }
            if (uStack_d8 < 0x41) {
              uVar41 = -uVar39 & 0x3f;
              do {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) break;
                  bVar24 = puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uStack_d8 >> 3));
                  uVar37 = uStack_d8 >> 3;
                  if (!bVar24) {
                    uVar37 = (int)puStack_d0 - (int)puStack_c8;
                  }
                  uStack_d8 = uStack_d8 + uVar37 * -8;
                }
                else {
                  uVar37 = uStack_d8 >> 3;
                  uStack_d8 = uStack_d8 & 7;
                  bVar24 = true;
                }
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar37);
                uStack_e0 = *puStack_d0;
                if (((undefined2 *)((long)puVar8 - 3U) <= puVar35) || (!bVar24)) break;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_d8 = uStack_d8 + (byte)puVar38[1];
                *(undefined1 *)puVar35 = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_d8 = uStack_d8 + (byte)puVar38[1];
                *(undefined1 *)((long)puVar35 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_d8 = uStack_d8 + (byte)puVar38[1];
                *(undefined1 *)(puVar35 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_d8 = uStack_d8 + (byte)puVar38[1];
                puVar42 = puVar35 + 2;
                *(undefined1 *)((long)puVar35 + 3) = *puVar38;
                puVar35 = puVar42;
                if (0x40 < uStack_d8) break;
              } while( true );
            }
            if (puVar35 < puVar8) {
              do {
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> (-uVar39 & 0x3f)) * 2 + 4);
                uStack_d8 = uStack_d8 + (byte)puVar38[1];
                puVar42 = (undefined2 *)((long)puVar35 + 1);
                *(undefined1 *)puVar35 = *puVar38;
                puVar35 = puVar42;
              } while (puVar42 < puVar8);
            }
            if (uStack_100 < 0x41) {
              uVar41 = -uVar39 & 0x3f;
              do {
                if (plStack_f8 < plStack_e8) {
                  if (plStack_f8 == plStack_f0) break;
                  bVar24 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
                  uVar37 = uStack_100 >> 3;
                  if (!bVar24) {
                    uVar37 = (int)plStack_f8 - (int)plStack_f0;
                  }
                  uStack_100 = uStack_100 + uVar37 * -8;
                }
                else {
                  uVar37 = uStack_100 >> 3;
                  uStack_100 = uStack_100 & 7;
                  bVar24 = true;
                }
                plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar37);
                lStack_108 = *plStack_f8;
                if ((puVar32 <= puVar33) || (!bVar24)) break;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_100 = uStack_100 + (byte)puVar38[1];
                *(undefined1 *)puVar33 = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_100 = uStack_100 + (byte)puVar38[1];
                *(undefined1 *)((long)puVar33 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_100 = uStack_100 + (byte)puVar38[1];
                *(undefined1 *)(puVar33 + 1) = *puVar38;
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar41) * 2 + 4);
                uStack_100 = uStack_100 + (byte)puVar38[1];
                puVar42 = puVar33 + 2;
                *(undefined1 *)((long)puVar33 + 3) = *puVar38;
                puVar33 = puVar42;
                if (0x40 < uStack_100) break;
              } while( true );
            }
            if (puVar33 < (undefined2 *)((long)param_2 + (long)param_3)) {
              lVar44 = (long)((long)param_3 + (long)param_2) - (long)puVar33;
              do {
                puVar38 = (undefined1 *)
                          ((long)param_1 +
                          ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> (-uVar39 & 0x3f)) *
                          2 + 4);
                uStack_100 = uStack_100 + (byte)puVar38[1];
                *(undefined1 *)puVar33 = *puVar38;
                lVar44 = lVar44 + -1;
                puVar33 = (undefined2 *)((long)puVar33 + 1);
              } while (lVar44 != 0);
            }
            if (((((((uStack_100 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                   puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
                uStack_88 == 0x40) && puStack_80 == puStack_78) {
              return param_3;
            }
            return (long *)0xffffffffffffffec;
          }
          goto LAB_1000cfb9c;
        }
      }
      plVar29 = (long *)0xffffffffffffffb8;
    }
    return plVar29;
  }
  plVar29 = param_1;
  func_0x0001099ed780(param_1,param_4,param_5,param_6,param_7);
  if ((long *)0xffffffffffffff88 < plVar29) {
    return plVar29;
  }
  uVar30 = (long)param_5 - (long)plVar29;
  if (param_5 < plVar29 || uVar30 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puVar10 = (ushort *)(param_4 + (long)plVar29);
  if (uVar30 < 10) {
    return (long *)0xffffffffffffffec;
  }
  uVar16 = *puVar10;
  uVar17 = puVar10[1];
  uVar18 = puVar10[2];
  uVar31 = (ulong)uVar16 + (ulong)uVar17 + (ulong)uVar18 + 6;
  if (uVar30 < uVar31) {
    return (long *)0xffffffffffffffec;
  }
  if (uVar16 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puStack_78 = (ulong *)(puVar10 + 3);
  puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar16);
  uVar19 = *(ushort *)((long)param_1 + 2);
  puStack_70 = (ulong *)(puVar10 + 7);
  if (uVar16 < 8) {
    uStack_90 = (ulong)(byte)*puStack_78;
    uVar39 = (uint)uVar16;
    if (uVar16 < 5) {
      if (uVar39 == 2) goto code_r0x0001099edf28;
      if (uVar39 == 3) goto code_r0x0001099edf20;
      if (uVar39 == 4) goto code_r0x0001099edf18;
    }
    else {
      if (uVar16 != 5) {
        if (uVar16 != 6) {
          if (uVar39 != 7) goto code_r0x0001099edf34;
          uStack_90 = uStack_90 | (ulong)(byte)puVar10[6] << 0x30;
        }
        uStack_90 = uStack_90 + ((ulong)*(byte *)((long)puVar10 + 0xb) << 0x28);
      }
      uStack_90 = uStack_90 + ((ulong)(byte)puVar10[5] << 0x20);
code_r0x0001099edf18:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar10 + 9) * 0x1000000;
code_r0x0001099edf20:
      uStack_90 = uStack_90 + (ulong)(byte)puVar10[4] * 0x10000;
code_r0x0001099edf28:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar10 + 7) * 0x100;
    }
code_r0x0001099edf34:
    if (*(byte *)((long)puStack_a0 + -1) != 0) {
      uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar39 * -8 + 0x29;
      puStack_80 = puStack_78;
      goto code_r0x0001099edf48;
    }
code_r0x0001099ee648:
    plVar29 = (long *)0xffffffffffffffec;
  }
  else {
    uStack_90 = puStack_a0[-1];
    if (uStack_90 >> 0x38 == 0) {
      return (long *)0xffffffffffffffff;
    }
    uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
    puStack_80 = puStack_a0 + -1;
code_r0x0001099edf48:
    if (uVar17 != 0) {
      puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar17);
      puStack_98 = puStack_a0 + 1;
      if (uVar17 < 8) {
        uStack_b8 = (ulong)(byte)*puStack_a0;
        uVar39 = (uint)uVar17;
        if (uVar17 < 5) {
          if (uVar39 == 2) goto code_r0x0001099ee000;
          if (uVar39 == 3) goto code_r0x0001099edff8;
          if (uVar39 == 4) goto code_r0x0001099edff0;
        }
        else {
          if (uVar17 != 5) {
            if (uVar17 != 6) {
              if (uVar39 != 7) goto code_r0x0001099ee00c;
              uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
          }
          uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
code_r0x0001099edff0:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
code_r0x0001099edff8:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
code_r0x0001099ee000:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
        }
code_r0x0001099ee00c:
        if (*(byte *)((long)puStack_c8 + -1) == 0) goto code_r0x0001099ee648;
        uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar39 * -8 + 0x29;
        puStack_a8 = puStack_a0;
      }
      else {
        uStack_b8 = puStack_c8[-1];
        if (uStack_b8 >> 0x38 == 0) {
          return (long *)0xffffffffffffffff;
        }
        uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
        puStack_a8 = puStack_c8 + -1;
      }
      if (uVar18 != 0) {
        pbVar5 = (byte *)((long)puStack_c8 + (ulong)uVar18);
        puStack_c0 = puStack_c8 + 1;
        if (7 < uVar18) {
          uStack_e0 = *(ulong *)(pbVar5 + -8);
          if (uStack_e0 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
          puStack_d0 = (ulong *)(pbVar5 + -8);
          goto code_r0x0001099ee108;
        }
        uStack_e0 = (ulong)(byte)*puStack_c8;
        uVar39 = (uint)uVar18;
        if (uVar18 < 5) {
          if (uVar39 == 2) goto code_r0x0001099ee0e8;
          if (uVar39 == 3) goto code_r0x0001099ee0e0;
          if (uVar39 == 4) goto code_r0x0001099ee0d8;
        }
        else {
          if (uVar18 != 5) {
            if (uVar18 != 6) {
              if (uVar39 != 7) goto code_r0x0001099ee0f4;
              uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
          }
          uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
code_r0x0001099ee0d8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
code_r0x0001099ee0e0:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
code_r0x0001099ee0e8:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
        }
code_r0x0001099ee0f4:
        if (pbVar5[-1] != 0) {
          uStack_d8 = (int)LZCOUNT((uint)pbVar5[-1]) + uVar39 * -8 + 0x29;
          puStack_d0 = puStack_c8;
code_r0x0001099ee108:
          plVar29 = &lStack_108;
          func_0x000107c2ae50(plVar29,pbVar5,uVar30 - uVar31);
          if ((long *)0xffffffffffffff88 < plVar29) {
            return plVar29;
          }
          puVar42 = (undefined2 *)((long)param_2 + (long)param_3);
          uVar30 = (long)param_3 + 3;
          puVar6 = (undefined2 *)((long)param_2 + (uVar30 >> 2));
          puVar7 = (undefined2 *)((long)puVar6 + (uVar30 >> 2));
          puVar8 = (undefined2 *)((long)puVar7 + (uVar30 >> 2));
          iVar25 = (int)&uStack_90;
          func_0x000107c2ae54();
          iVar26 = (int)&uStack_b8;
          func_0x000107c2ae54();
          iVar27 = (int)&uStack_e0;
          func_0x000107c2ae54();
          iVar28 = (int)&lStack_108;
          func_0x000107c2ae54();
          puVar32 = (undefined2 *)((long)puVar42 - 7);
          iVar45 = (int)puStack_78;
          iVar40 = (int)puStack_a0;
          iVar49 = (int)puStack_c8;
          iVar48 = (int)plStack_f0;
          puVar34 = puVar8;
          puVar35 = puVar7;
          puVar33 = puVar6;
          if ((puVar8 < puVar32) && ((iVar26 == 0 && iVar25 == 0) && (iVar27 == 0 && iVar28 == 0)))
          {
            uVar39 = -(uint)uVar19 & 0x3f;
            uVar47 = (ulong)uStack_88;
            uVar43 = (ulong)uStack_b0;
            uVar31 = (ulong)uStack_d8;
            uVar30 = (ulong)uStack_100;
            plStack_118 = plStack_f8;
            lVar44 = lStack_108;
            do {
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << (uVar47 & 0x3f)) >> uVar39) * 4 + 4);
              *param_2 = *puVar9;
              uVar41 = (int)uVar47 + (uint)*(byte *)(puVar9 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << (uVar43 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar33 = *puVar9;
              uVar37 = (int)uVar43 + (uint)*(byte *)(puVar9 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << (uVar31 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar35 = *puVar9;
              uVar1 = (int)uVar31 + (uint)*(byte *)(puVar9 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar44 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar34 = *puVar9;
              uVar2 = (int)uVar30 + (uint)*(byte *)(puVar9 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar41 & 0x3f)) >> uVar39) * 4 + 4);
              *param_2 = *puVar9;
              uVar41 = uVar41 + *(byte *)(puVar9 + 1);
              bVar11 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar37 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar33 = *puVar9;
              uVar37 = uVar37 + *(byte *)(puVar9 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar35 = *puVar9;
              uVar1 = uVar1 + *(byte *)(puVar9 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar44 << ((ulong)uVar2 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *puVar34 = *puVar9;
              uVar2 = uVar2 + *(byte *)(puVar9 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar9 + 3));
              param_2 = (undefined2 *)((long)param_2 + (ulong)bVar11);
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar41 & 0x3f)) >> uVar39) * 4 + 4);
              *param_2 = *puVar9;
              uVar41 = uVar41 + *(byte *)(puVar9 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar37 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar33 = *puVar9;
              uVar37 = uVar37 + *(byte *)(puVar9 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar35 = *puVar9;
              uVar1 = uVar1 + *(byte *)(puVar9 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar44 << ((ulong)uVar2 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *puVar34 = *puVar9;
              uVar2 = uVar2 + *(byte *)(puVar9 + 1);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar41 & 0x3f)) >> uVar39) * 4 + 4);
              *param_2 = *puVar9;
              uVar41 = uVar41 + *(byte *)(puVar9 + 1);
              uVar47 = (ulong)uVar41;
              bVar11 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar37 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar33 = *puVar9;
              bVar12 = *(byte *)(puVar9 + 1);
              bVar13 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar1 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar35 = *puVar9;
              bVar14 = *(byte *)(puVar9 + 1);
              bVar15 = *(byte *)((long)puVar9 + 3);
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((ulong)(lVar44 << ((ulong)uVar2 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *puVar34 = *puVar9;
              if (uVar41 < 0x41) {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) {
                    cVar20 = '\x01';
                    if (uVar41 == 0x40) {
                      cVar20 = '\x02';
                    }
                    goto code_r0x0001099ee47c;
                  }
                  cVar20 = (ulong *)((long)puStack_80 - (ulong)(uVar41 >> 3)) < puStack_78;
                  uVar36 = (int)puStack_80 - iVar45;
                  if (!(bool)cVar20) {
                    uVar36 = uVar41 >> 3;
                  }
                  uVar41 = uVar41 + uVar36 * -8;
                }
                else {
                  cVar20 = false;
                  uVar36 = uVar41 >> 3;
                  uVar41 = uVar41 & 7;
                }
                uVar47 = (ulong)uVar41;
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar36);
                uStack_90 = *puStack_80;
              }
              else {
                cVar20 = '\x03';
              }
code_r0x0001099ee47c:
              uVar37 = uVar37 + bVar12;
              uVar43 = (ulong)uVar37;
              if (uVar37 < 0x41) {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) {
                    cVar21 = '\x01';
                    if (uVar37 == 0x40) {
                      cVar21 = '\x02';
                    }
                    goto code_r0x0001099ee4e8;
                  }
                  cVar21 = (ulong *)((long)puStack_a8 - (ulong)(uVar37 >> 3)) < puStack_a0;
                  uVar41 = (int)puStack_a8 - iVar40;
                  if (!(bool)cVar21) {
                    uVar41 = uVar37 >> 3;
                  }
                  uVar37 = uVar37 + uVar41 * -8;
                }
                else {
                  cVar21 = false;
                  uVar41 = uVar37 >> 3;
                  uVar37 = uVar37 & 7;
                }
                uVar43 = (ulong)uVar37;
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar41);
                uStack_b8 = *puStack_a8;
              }
              else {
                cVar21 = '\x03';
              }
code_r0x0001099ee4e8:
              uVar1 = uVar1 + bVar14;
              uVar31 = (ulong)uVar1;
              if (uVar1 < 0x41) {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) {
                    cVar22 = '\x01';
                    if (uVar1 == 0x40) {
                      cVar22 = '\x02';
                    }
                    goto code_r0x0001099ee558;
                  }
                  cVar22 = (ulong *)((long)puStack_d0 - (ulong)(uVar1 >> 3)) < puStack_c8;
                  uVar41 = (int)puStack_d0 - iVar49;
                  if (!(bool)cVar22) {
                    uVar41 = uVar1 >> 3;
                  }
                  uVar1 = uVar1 + uVar41 * -8;
                }
                else {
                  cVar22 = false;
                  uVar41 = uVar1 >> 3;
                  uVar1 = uVar1 & 7;
                }
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar41);
                uVar31 = (ulong)uVar1;
                uStack_e0 = *puStack_d0;
              }
              else {
                cVar22 = '\x03';
              }
code_r0x0001099ee558:
              uVar2 = uVar2 + *(byte *)(puVar9 + 1);
              uVar30 = (ulong)uVar2;
              if (uVar2 < 0x41) {
                if (plStack_118 < plStack_e8) {
                  if (plStack_118 == plStack_f0) {
                    cVar23 = '\x03';
                    goto code_r0x0001099ee5dc;
                  }
                  cVar23 = (long *)((long)plStack_118 - (ulong)(uVar2 >> 3)) < plStack_f0;
                  uVar41 = (int)plStack_118 - iVar48;
                  if (!(bool)cVar23) {
                    uVar41 = uVar2 >> 3;
                  }
                  uVar2 = uVar2 + uVar41 * -8;
                }
                else {
                  cVar23 = false;
                  uVar41 = uVar2 >> 3;
                  uVar2 = uVar2 & 7;
                }
                plStack_118 = (long *)((long)plStack_118 - (ulong)uVar41);
                uVar30 = (ulong)uVar2;
                lVar44 = *plStack_118;
                lStack_108 = lVar44;
                plStack_f8 = plStack_118;
              }
              else {
                cVar23 = '\x03';
              }
code_r0x0001099ee5dc:
              param_2 = (undefined2 *)((long)param_2 + (ulong)bVar11);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)bVar13);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)bVar15);
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar9 + 3));
            } while (puVar34 < puVar32 &&
                     (((cVar21 == '\0' && cVar20 == '\0') && cVar22 == '\0') && cVar23 == '\0'));
            uStack_88 = (uint)uVar47;
            uStack_b0 = (uint)uVar43;
            uStack_d8 = (uint)uVar31;
            uStack_100 = (uint)uVar30;
          }
          if (puVar6 < param_2) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar7 < puVar33) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar8 < puVar35) {
            return (long *)0xffffffffffffffec;
          }
          uVar39 = -(uint)uVar19 & 0x3f;
          uVar30 = (ulong)uStack_88;
          if (uStack_88 < 0x41) {
            do {
              uVar41 = (uint)uVar30;
              if (puStack_80 < puStack_70) {
                if (puStack_80 == puStack_78) goto code_r0x0001099ee81c;
                bVar24 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar30 >> 3));
                uVar37 = (uint)(uVar30 >> 3);
                if (!bVar24) {
                  uVar37 = (int)puStack_80 - iVar45;
                }
                uStack_88 = uVar41 + uVar37 * -8;
              }
              else {
                uVar37 = uVar41 >> 3;
                uStack_88 = uVar41 & 7;
                bVar24 = true;
              }
              puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar37);
              uVar30 = (ulong)uStack_88;
              uStack_90 = *puStack_80;
              if (((undefined2 *)((long)puVar6 - 7U) <= param_2) || (!bVar24)) {
                if (uStack_88 < 0x41) goto code_r0x0001099ee81c;
                break;
              }
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
              *param_2 = *puVar9;
              bVar11 = *(byte *)(puVar9 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 +
                       ((uStack_90 << ((ulong)(uStack_88 + bVar11) & 0x3f)) >> uVar39) * 4 + 4);
              *param_2 = *puVar9;
              uStack_88 = uStack_88 + bVar11 + (uint)*(byte *)(puVar9 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *param_2 = *puVar9;
              uStack_88 = uStack_88 + *(byte *)(puVar9 + 1);
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3));
              puVar9 = (undefined2 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *param_2 = *puVar9;
              uStack_88 = uStack_88 + *(byte *)(puVar9 + 1);
              uVar30 = (ulong)uStack_88;
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3));
            } while (uStack_88 < 0x41);
          }
code_r0x0001099ee8ec:
          for (; uVar41 = (uint)uVar30, param_2 <= puVar6 + -1;
              param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3))) {
            puVar9 = (undefined2 *)
                     ((long)param_1 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *param_2 = *puVar9;
            uStack_88 = uVar41 + *(byte *)(puVar9 + 1);
            uVar30 = (ulong)uStack_88;
          }
          if (param_2 < puVar6) {
            puVar38 = (undefined1 *)
                      ((long)param_1 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *(undefined1 *)param_2 = *puVar38;
            if (puVar38[3] == '\x01') {
              uStack_88 = uVar41 + (byte)puVar38[2];
            }
            else if ((uVar41 < 0x40) && (uStack_88 = uVar41 + (byte)puVar38[2], 0x3f < uStack_88)) {
              uStack_88 = 0x40;
            }
          }
          uVar30 = (ulong)uStack_b0;
          if (uStack_b0 < 0x41) {
            do {
              uVar41 = (uint)uVar30;
              if (puStack_a8 < puStack_98) {
                if (puStack_a8 == puStack_a0) goto code_r0x0001099eea84;
                bVar24 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar30 >> 3));
                uVar37 = (uint)(uVar30 >> 3);
                if (!bVar24) {
                  uVar37 = (int)puStack_a8 - iVar40;
                }
                uStack_b0 = uVar41 + uVar37 * -8;
              }
              else {
                uVar37 = uVar41 >> 3;
                uStack_b0 = uVar41 & 7;
                bVar24 = true;
              }
              puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar37);
              uVar30 = (ulong)uStack_b0;
              uStack_b8 = *puStack_a8;
              if (((undefined2 *)((long)puVar7 - 7U) <= puVar33) || (!bVar24)) {
                if (uStack_b0 < 0x41) goto code_r0x0001099eea84;
                break;
              }
              puVar6 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar33 = *puVar6;
              bVar11 = *(byte *)(puVar6 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       ((long)param_1 +
                       ((uStack_b8 << ((ulong)(uStack_b0 + bVar11) & 0x3f)) >> uVar39) * 4 + 4);
              *puVar33 = *puVar6;
              uStack_b0 = uStack_b0 + bVar11 + (uint)*(byte *)(puVar6 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *puVar33 = *puVar6;
              uStack_b0 = uStack_b0 + *(byte *)(puVar6 + 1);
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *puVar33 = *puVar6;
              uStack_b0 = uStack_b0 + *(byte *)(puVar6 + 1);
              uVar30 = (ulong)uStack_b0;
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
            } while (uStack_b0 < 0x41);
          }
code_r0x0001099eeb54:
          for (; uVar41 = (uint)uVar30, puVar33 <= puVar7 + -1;
              puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3))) {
            puVar6 = (undefined2 *)
                     ((long)param_1 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *puVar33 = *puVar6;
            uStack_b0 = uVar41 + *(byte *)(puVar6 + 1);
            uVar30 = (ulong)uStack_b0;
          }
          if (puVar33 < puVar7) {
            puVar38 = (undefined1 *)
                      ((long)param_1 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *(undefined1 *)puVar33 = *puVar38;
            if (puVar38[3] == '\x01') {
              uStack_b0 = uVar41 + (byte)puVar38[2];
            }
            else if ((uVar41 < 0x40) && (uStack_b0 = uVar41 + (byte)puVar38[2], 0x3f < uStack_b0)) {
              uStack_b0 = 0x40;
            }
          }
          uVar30 = (ulong)uStack_d8;
          if (uStack_d8 < 0x41) {
            do {
              uVar41 = (uint)uVar30;
              if (puStack_d0 < puStack_c0) {
                if (puStack_d0 == puStack_c8) goto code_r0x0001099eecec;
                bVar24 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar30 >> 3));
                uVar37 = (uint)(uVar30 >> 3);
                if (!bVar24) {
                  uVar37 = (int)puStack_d0 - iVar49;
                }
                uStack_d8 = uVar41 + uVar37 * -8;
              }
              else {
                uVar37 = uVar41 >> 3;
                uStack_d8 = uVar41 & 7;
                bVar24 = true;
              }
              puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar37);
              uVar30 = (ulong)uStack_d8;
              uStack_e0 = *puStack_d0;
              if (((undefined2 *)((long)puVar8 - 7U) <= puVar35) || (!bVar24)) {
                if (uStack_d8 < 0x41) goto code_r0x0001099eecec;
                break;
              }
              puVar6 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
              *puVar35 = *puVar6;
              bVar11 = *(byte *)(puVar6 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       ((long)param_1 +
                       ((uStack_e0 << ((ulong)(uStack_d8 + bVar11) & 0x3f)) >> uVar39) * 4 + 4);
              *puVar35 = *puVar6;
              uStack_d8 = uStack_d8 + bVar11 + (uint)*(byte *)(puVar6 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *puVar35 = *puVar6;
              uStack_d8 = uStack_d8 + *(byte *)(puVar6 + 1);
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar6 + 3));
              puVar6 = (undefined2 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar39) * 4 + 4
                       );
              *puVar35 = *puVar6;
              uStack_d8 = uStack_d8 + *(byte *)(puVar6 + 1);
              uVar30 = (ulong)uStack_d8;
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar6 + 3));
            } while (uStack_d8 < 0x41);
          }
code_r0x0001099eedbc:
          for (; uVar41 = (uint)uVar30, puVar35 <= puVar8 + -1;
              puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar6 + 3))) {
            puVar6 = (undefined2 *)
                     ((long)param_1 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *puVar35 = *puVar6;
            uStack_d8 = uVar41 + *(byte *)(puVar6 + 1);
            uVar30 = (ulong)uStack_d8;
          }
          if (puVar35 < puVar8) {
            puVar38 = (undefined1 *)
                      ((long)param_1 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *(undefined1 *)puVar35 = *puVar38;
            if (puVar38[3] == '\x01') {
              uStack_d8 = uVar41 + (byte)puVar38[2];
            }
            else if ((uVar41 < 0x40) && (uStack_d8 = uVar41 + (byte)puVar38[2], 0x3f < uStack_d8)) {
              uStack_d8 = 0x40;
            }
          }
          for (; uVar30 = (ulong)uStack_100, uStack_100 < 0x41;
              uStack_100 = uStack_100 + *(byte *)(puVar6 + 1)) {
            if (plStack_f8 < plStack_e8) {
              if (plStack_f8 == plStack_f0) goto code_r0x0001099eef50;
              bVar24 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
              uVar41 = uStack_100 >> 3;
              if (!bVar24) {
                uVar41 = (int)plStack_f8 - iVar48;
              }
              uStack_100 = uStack_100 + uVar41 * -8;
            }
            else {
              uVar41 = uStack_100 >> 3;
              uStack_100 = uStack_100 & 7;
              bVar24 = true;
            }
            plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar41);
            uVar30 = (ulong)uStack_100;
            lStack_108 = *plStack_f8;
            if ((puVar32 <= puVar34) || (!bVar24)) {
              if (uStack_100 < 0x41) goto code_r0x0001099eef50;
              break;
            }
            puVar6 = (undefined2 *)
                     ((long)param_1 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *puVar34 = *puVar6;
            bVar11 = *(byte *)(puVar6 + 1);
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
            puVar6 = (undefined2 *)
                     ((long)param_1 +
                     ((ulong)(lStack_108 << ((ulong)(uStack_100 + bVar11) & 0x3f)) >> uVar39) * 4 +
                     4);
            *puVar34 = *puVar6;
            uStack_100 = uStack_100 + bVar11 + (uint)*(byte *)(puVar6 + 1);
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
            puVar6 = (undefined2 *)
                     ((long)param_1 +
                     ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar39) * 4 + 4);
            *puVar34 = *puVar6;
            uStack_100 = uStack_100 + *(byte *)(puVar6 + 1);
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
            puVar6 = (undefined2 *)
                     ((long)param_1 +
                     ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar39) * 4 + 4);
            *puVar34 = *puVar6;
            puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
          }
code_r0x0001099ef020:
          for (; uVar41 = (uint)uVar30, puVar34 <= puVar42 + -1;
              puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3))) {
            puVar6 = (undefined2 *)
                     ((long)param_1 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *puVar34 = *puVar6;
            uStack_100 = uVar41 + *(byte *)(puVar6 + 1);
            uVar30 = (ulong)uStack_100;
          }
          uVar37 = uVar41;
          if (puVar34 < puVar42) {
            puVar38 = (undefined1 *)
                      ((long)param_1 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
            *(undefined1 *)puVar34 = *puVar38;
            if (puVar38[3] == '\x01') {
              uVar37 = uVar41 + (byte)puVar38[2];
            }
            else {
              uVar37 = uStack_100;
              if ((uVar41 < 0x40) && (uVar37 = uVar41 + (byte)puVar38[2], 0x3f < uVar37)) {
                uVar37 = 0x40;
              }
            }
          }
          if (((((((uVar37 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                 puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
              uStack_88 == 0x40) && puStack_80 == puStack_78) {
            return param_3;
          }
          return (long *)0xffffffffffffffec;
        }
        goto code_r0x0001099ee648;
      }
    }
    plVar29 = (long *)0xffffffffffffffb8;
  }
  return plVar29;
code_r0x0001099ee81c:
  uVar41 = (uint)uVar30;
  if (puStack_80 < puStack_70) {
    if (puStack_80 == puStack_78) goto code_r0x0001099ee8ec;
    bVar24 = puStack_78 <= (ulong *)((long)puStack_80 - (uVar30 >> 3));
    uVar37 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar37 = (int)puStack_80 - iVar45;
    }
    uStack_88 = uVar41 + uVar37 * -8;
  }
  else {
    uVar37 = uVar41 >> 3;
    uStack_88 = uVar41 & 7;
    bVar24 = true;
  }
  puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar37);
  uVar30 = (ulong)uStack_88;
  uStack_90 = *puStack_80;
  if ((puVar6 + -1 < param_2) || (!bVar24)) goto code_r0x0001099ee8ec;
  puVar9 = (undefined2 *)((long)param_1 + ((uStack_90 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
  *param_2 = *puVar9;
  uStack_88 = uStack_88 + *(byte *)(puVar9 + 1);
  uVar30 = (ulong)uStack_88;
  param_2 = (undefined2 *)((long)param_2 + (ulong)*(byte *)((long)puVar9 + 3));
  if (0x40 < uStack_88) goto code_r0x0001099ee8ec;
  goto code_r0x0001099ee81c;
code_r0x0001099eea84:
  uVar41 = (uint)uVar30;
  if (puStack_a8 < puStack_98) {
    if (puStack_a8 == puStack_a0) goto code_r0x0001099eeb54;
    bVar24 = puStack_a0 <= (ulong *)((long)puStack_a8 - (uVar30 >> 3));
    uVar37 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar37 = (int)puStack_a8 - iVar40;
    }
    uStack_b0 = uVar41 + uVar37 * -8;
  }
  else {
    uVar37 = uVar41 >> 3;
    uStack_b0 = uVar41 & 7;
    bVar24 = true;
  }
  puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar37);
  uVar30 = (ulong)uStack_b0;
  uStack_b8 = *puStack_a8;
  if ((puVar7 + -1 < puVar33) || (!bVar24)) goto code_r0x0001099eeb54;
  puVar6 = (undefined2 *)((long)param_1 + ((uStack_b8 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
  *puVar33 = *puVar6;
  uStack_b0 = uStack_b0 + *(byte *)(puVar6 + 1);
  uVar30 = (ulong)uStack_b0;
  puVar33 = (undefined2 *)((long)puVar33 + (ulong)*(byte *)((long)puVar6 + 3));
  if (0x40 < uStack_b0) goto code_r0x0001099eeb54;
  goto code_r0x0001099eea84;
code_r0x0001099eecec:
  uVar41 = (uint)uVar30;
  if (puStack_d0 < puStack_c0) {
    if (puStack_d0 == puStack_c8) goto code_r0x0001099eedbc;
    bVar24 = puStack_c8 <= (ulong *)((long)puStack_d0 - (uVar30 >> 3));
    uVar37 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar37 = (int)puStack_d0 - iVar49;
    }
    uStack_d8 = uVar41 + uVar37 * -8;
  }
  else {
    uVar37 = uVar41 >> 3;
    uStack_d8 = uVar41 & 7;
    bVar24 = true;
  }
  puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar37);
  uVar30 = (ulong)uStack_d8;
  uStack_e0 = *puStack_d0;
  if ((puVar8 + -1 < puVar35) || (!bVar24)) goto code_r0x0001099eedbc;
  puVar6 = (undefined2 *)((long)param_1 + ((uStack_e0 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
  *puVar35 = *puVar6;
  uStack_d8 = uStack_d8 + *(byte *)(puVar6 + 1);
  uVar30 = (ulong)uStack_d8;
  puVar35 = (undefined2 *)((long)puVar35 + (ulong)*(byte *)((long)puVar6 + 3));
  if (0x40 < uStack_d8) goto code_r0x0001099eedbc;
  goto code_r0x0001099eecec;
code_r0x0001099eef50:
  uVar41 = (uint)uVar30;
  if (plStack_f8 < plStack_e8) {
    if (plStack_f8 == plStack_f0) goto code_r0x0001099ef020;
    bVar24 = plStack_f0 <= (long *)((long)plStack_f8 - (uVar30 >> 3));
    uVar37 = (uint)(uVar30 >> 3);
    if (!bVar24) {
      uVar37 = (int)plStack_f8 - iVar48;
    }
    uStack_100 = uVar41 + uVar37 * -8;
  }
  else {
    uVar37 = uVar41 >> 3;
    uStack_100 = uVar41 & 7;
    bVar24 = true;
  }
  plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar37);
  uVar30 = (ulong)uStack_100;
  lStack_108 = *plStack_f8;
  if ((puVar42 + -1 < puVar34) || (!bVar24)) goto code_r0x0001099ef020;
  puVar6 = (undefined2 *)
           ((long)param_1 + ((ulong)(lStack_108 << (uVar30 & 0x3f)) >> uVar39) * 4 + 4);
  *puVar34 = *puVar6;
  uStack_100 = uStack_100 + *(byte *)(puVar6 + 1);
  uVar30 = (ulong)uStack_100;
  puVar34 = (undefined2 *)((long)puVar34 + (ulong)*(byte *)((long)puVar6 + 3));
  if (0x40 < uStack_100) goto code_r0x0001099ef020;
  goto code_r0x0001099eef50;
}



/* Entry: 1000ce3c4; end: 1000ce4eb;  */

void FUN_1000ce3c4(uint *param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (0x13f < param_5) {
    uVar1 = param_4 + 0x40;
    uVar6 = uVar1;
    FUN_1000ce954(uVar1,0x100,param_4,&uStack_38,(long)&uStack_38 + 4,param_2,param_3);
    if (uVar6 < 0xffffffffffffff89) {
      uVar5 = *param_1;
      if (uStack_38._4_4_ <= (uVar5 & 0xff) + 1) {
        *param_1 = uVar5 & 0xff000000 | uVar5 & 0xff | (uStack_38._4_4_ & 0xff) << 0x10;
        if (uStack_38._4_4_ != 0) {
          uVar6 = 0;
          iVar7 = 0;
          do {
            iVar2 = *(int *)(param_4 + 4 + uVar6 * 4);
            *(int *)(param_4 + 4 + uVar6 * 4) = iVar7;
            iVar7 = (iVar2 << (ulong)((uint)uVar6 & 0x1f)) + iVar7;
            uVar6 = uVar6 + 1;
          } while (uStack_38._4_4_ != uVar6);
        }
        if ((int)uStack_38 != 0) {
          uVar6 = 0;
          do {
            bVar4 = *(byte *)(uVar1 + uVar6);
            uVar8 = (ulong)bVar4;
            uVar3 = *(uint *)(param_4 + uVar8 * 4);
            uVar9 = (ulong)uVar3;
            iVar7 = (1 << (ulong)(bVar4 & 0x1f)) >> 1;
            uVar5 = uVar3 + iVar7;
            if (uVar3 < uVar5) {
              pcVar10 = (char *)((long)param_1 + uVar9 * 2 + 5);
              do {
                pcVar10[-1] = (char)uVar6;
                *pcVar10 = ((char)(uStack_38 >> 0x20) + '\x01') - bVar4;
                uVar9 = uVar9 + 1;
                uVar5 = *(int *)(param_4 + uVar8 * 4) + iVar7;
                pcVar10 = pcVar10 + 2;
              } while (uVar9 < uVar5);
            }
            *(uint *)(param_4 + uVar8 * 4) = uVar5;
            uVar6 = uVar6 + 1;
          } while (uVar6 != (uStack_38 & 0xffffffff));
        }
      }
    }
  }
  return;
}



/* Entry: 1000ce4ec; end: 1000ce573;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1000ce4ec(long *param_1,undefined1 *param_2,long *param_3,long param_4,long *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint uVar32;
  undefined1 *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long *plStack_110;
  long lStack_108;
  uint uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  
  plVar22 = param_1;
  FUN_1000ce3c4(param_1,param_4,param_5,param_6,param_7);
  if ((long *)0xffffffffffffff88 < plVar22) {
    return plVar22;
  }
  uVar26 = (long)param_5 - (long)plVar22;
  if (param_5 < plVar22 || uVar26 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puVar4 = (ushort *)(param_4 + (long)plVar22);
  if (uVar26 < 10) {
    return (long *)0xffffffffffffffec;
  }
  uVar13 = *puVar4;
  uVar14 = puVar4[1];
  uVar15 = puVar4[2];
  uVar37 = (ulong)uVar13 + (ulong)uVar14 + (ulong)uVar15 + 6;
  if (uVar26 < uVar37) {
    return (long *)0xffffffffffffffec;
  }
  if (uVar13 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puStack_78 = (ulong *)(puVar4 + 3);
  puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar13);
  uVar16 = *(ushort *)((long)param_1 + 2);
  puStack_70 = (ulong *)(puVar4 + 7);
  if (uVar13 < 8) {
    uStack_90 = (ulong)(byte)*puStack_78;
    uVar31 = (uint)uVar13;
    if (uVar13 < 5) {
      if (uVar31 == 2) goto LAB_1000cf560;
      if (uVar31 == 3) goto LAB_1000cf558;
      if (uVar31 == 4) goto LAB_1000cf550;
    }
    else {
      if (uVar13 != 5) {
        if (uVar13 != 6) {
          if (uVar31 != 7) goto LAB_1000cf56c;
          uStack_90 = uStack_90 | (ulong)(byte)puVar4[6] << 0x30;
        }
        uStack_90 = uStack_90 + ((ulong)*(byte *)((long)puVar4 + 0xb) << 0x28);
      }
      uStack_90 = uStack_90 + ((ulong)(byte)puVar4[5] << 0x20);
LAB_1000cf550:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar4 + 9) * 0x1000000;
LAB_1000cf558:
      uStack_90 = uStack_90 + (ulong)(byte)puVar4[4] * 0x10000;
LAB_1000cf560:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)puVar4 + 7) * 0x100;
    }
LAB_1000cf56c:
    if (*(byte *)((long)puStack_a0 + -1) != 0) {
      uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar31 * -8 + 0x29;
      puStack_80 = puStack_78;
      goto LAB_1000cf580;
    }
LAB_1000cfb9c:
    plVar22 = (long *)0xffffffffffffffec;
  }
  else {
    uStack_90 = puStack_a0[-1];
    if (uStack_90 >> 0x38 == 0) {
      return (long *)0xffffffffffffffff;
    }
    uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
    puStack_80 = puStack_a0 + -1;
LAB_1000cf580:
    if (uVar14 != 0) {
      puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar14);
      puStack_98 = puStack_a0 + 1;
      if (uVar14 < 8) {
        uStack_b8 = (ulong)(byte)*puStack_a0;
        uVar31 = (uint)uVar14;
        if (uVar14 < 5) {
          if (uVar31 == 2) goto LAB_1000cf638;
          if (uVar31 == 3) goto LAB_1000cf630;
          if (uVar31 == 4) goto LAB_1000cf628;
        }
        else {
          if (uVar14 != 5) {
            if (uVar14 != 6) {
              if (uVar31 != 7) goto LAB_1000cf644;
              uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
          }
          uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
LAB_1000cf628:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
LAB_1000cf630:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
LAB_1000cf638:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
        }
LAB_1000cf644:
        if (*(byte *)((long)puStack_c8 + -1) == 0) goto LAB_1000cfb9c;
        uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar31 * -8 + 0x29;
        puStack_a8 = puStack_a0;
      }
      else {
        uStack_b8 = puStack_c8[-1];
        if (uStack_b8 >> 0x38 == 0) {
          return (long *)0xffffffffffffffff;
        }
        uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
        puStack_a8 = puStack_c8 + -1;
      }
      if (uVar15 != 0) {
        pbVar5 = (byte *)((long)puStack_c8 + (ulong)uVar15);
        puStack_c0 = puStack_c8 + 1;
        if (7 < uVar15) {
          uStack_e0 = *(ulong *)(pbVar5 + -8);
          if (uStack_e0 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
          puStack_d0 = (ulong *)(pbVar5 + -8);
          goto LAB_1000cf740;
        }
        uStack_e0 = (ulong)(byte)*puStack_c8;
        uVar31 = (uint)uVar15;
        if (uVar15 < 5) {
          if (uVar31 == 2) goto LAB_1000cf720;
          if (uVar31 == 3) goto LAB_1000cf718;
          if (uVar31 == 4) goto LAB_1000cf710;
        }
        else {
          if (uVar15 != 5) {
            if (uVar15 != 6) {
              if (uVar31 != 7) goto LAB_1000cf72c;
              uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
          }
          uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
LAB_1000cf710:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
LAB_1000cf718:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
LAB_1000cf720:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
        }
LAB_1000cf72c:
        if (pbVar5[-1] != 0) {
          uStack_d8 = (int)LZCOUNT((uint)pbVar5[-1]) + uVar31 * -8 + 0x29;
          puStack_d0 = puStack_c8;
LAB_1000cf740:
          plVar22 = &lStack_108;
          FUN_1000d01fc(plVar22,pbVar5,uVar26 - uVar37);
          if ((long *)0xffffffffffffff88 < plVar22) {
            return plVar22;
          }
          uVar26 = (long)param_3 + 3;
          uVar37 = uVar26 >> 2;
          puVar30 = param_2 + (uVar26 >> 2);
          puVar6 = puVar30 + (uVar26 >> 2);
          puVar7 = puVar6 + (uVar26 >> 2);
          iVar18 = (int)&uStack_90;
          func_0x0001000d031c();
          iVar19 = (int)&uStack_b8;
          func_0x0001000d031c();
          iVar20 = (int)&uStack_e0;
          func_0x0001000d031c();
          iVar21 = (int)&lStack_108;
          func_0x0001000d031c();
          puVar25 = param_2 + (long)param_3 + -3;
          puVar23 = param_2;
          puVar27 = puVar7;
          puVar28 = puVar6;
          puVar33 = puVar30;
          if (((iVar19 == 0 && iVar18 == 0) && (iVar20 == 0 && iVar21 == 0)) && (puVar7 < puVar25))
          {
            uVar31 = -(uint)uVar16 & 0x3f;
            uVar35 = (ulong)uStack_88;
            uVar36 = (ulong)uStack_b0;
            uVar26 = (ulong)uStack_d8;
            uVar34 = (ulong)uStack_100;
            plStack_110 = plStack_f8;
            puVar27 = param_2;
            lVar24 = lStack_108;
            do {
              puVar23 = puVar27;
              puVar27 = puVar23 + uVar37;
              puVar28 = puVar23 + uVar37 * 2;
              puVar33 = puVar23 + uVar37 * 3;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << (uVar35 & 0x3f)) >> uVar31) * 2 + 4);
              uVar32 = (int)uVar35 + (uint)(byte)puVar8[1];
              *puVar23 = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_b8 << (uVar36 & 0x3f)) >> uVar31) * 2 + 4);
              uVar1 = (int)uVar36 + (uint)(byte)puVar8[1];
              *puVar27 = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_e0 << (uVar26 & 0x3f)) >> uVar31) * 2 + 4);
              uVar2 = (int)uVar26 + (uint)(byte)puVar8[1];
              *puVar28 = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((ulong)(lVar24 << (uVar34 & 0x3f)) >> uVar31) * 2 + 4);
              uVar3 = (int)uVar34 + (uint)(byte)puVar8[1];
              *puVar33 = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar32 & 0x3f)) >> uVar31) * 2 + 4);
              uVar32 = uVar32 + (byte)puVar8[1];
              puVar23[1] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar1 & 0x3f)) >> uVar31) * 2 + 4);
              uVar1 = uVar1 + (byte)puVar8[1];
              puVar27[1] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar2 & 0x3f)) >> uVar31) * 2 + 4);
              uVar2 = uVar2 + (byte)puVar8[1];
              puVar28[1] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((ulong)(lVar24 << ((ulong)uVar3 & 0x3f)) >> uVar31) * 2 + 4
                       );
              uVar3 = uVar3 + (byte)puVar8[1];
              puVar33[1] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar32 & 0x3f)) >> uVar31) * 2 + 4);
              uVar32 = uVar32 + (byte)puVar8[1];
              puVar23[2] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar1 & 0x3f)) >> uVar31) * 2 + 4);
              uVar1 = uVar1 + (byte)puVar8[1];
              puVar27[2] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_e0 << ((ulong)uVar2 & 0x3f)) >> uVar31) * 2 + 4);
              uVar2 = uVar2 + (byte)puVar8[1];
              puVar28[2] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((ulong)(lVar24 << ((ulong)uVar3 & 0x3f)) >> uVar31) * 2 + 4
                       );
              uVar3 = uVar3 + (byte)puVar8[1];
              puVar33[2] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uVar32 & 0x3f)) >> uVar31) * 2 + 4);
              uVar32 = uVar32 + (byte)puVar8[1];
              uVar35 = (ulong)uVar32;
              puVar23[3] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_b8 << ((ulong)uVar1 & 0x3f)) >> uVar31) * 2 + 4);
              bVar10 = puVar8[1];
              puVar27[3] = *puVar8;
              puVar27 = (undefined1 *)
                        ((long)param_1 + ((uStack_e0 << ((ulong)uVar2 & 0x3f)) >> uVar31) * 2 + 4);
              bVar11 = puVar27[1];
              puVar28[3] = *puVar27;
              puVar27 = (undefined1 *)
                        ((long)param_1 +
                        ((ulong)(lVar24 << ((ulong)uVar3 & 0x3f)) >> uVar31) * 2 + 4);
              bVar12 = puVar27[1];
              puVar33[3] = *puVar27;
              if (uVar32 < 0x41) {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) goto LAB_1000cfa6c;
                  uVar29 = (int)puStack_80 - (int)puStack_78;
                  if (puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uVar32 >> 3))) {
                    uVar29 = uVar32 >> 3;
                  }
                  uVar32 = uVar32 + uVar29 * -8;
                }
                else {
                  uVar29 = uVar32 >> 3;
                  uVar32 = uVar32 & 7;
                }
                uVar35 = (ulong)uVar32;
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar29);
                uStack_90 = *puStack_80;
              }
LAB_1000cfa6c:
              uVar1 = uVar1 + bVar10;
              uVar36 = (ulong)uVar1;
              if (uVar1 < 0x41) {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) goto LAB_1000cfad0;
                  uVar32 = (int)puStack_a8 - (int)puStack_a0;
                  if (puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uVar1 >> 3))) {
                    uVar32 = uVar1 >> 3;
                  }
                  uVar1 = uVar1 + uVar32 * -8;
                }
                else {
                  uVar32 = uVar1 >> 3;
                  uVar1 = uVar1 & 7;
                }
                uVar36 = (ulong)uVar1;
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar32);
                uStack_b8 = *puStack_a8;
              }
LAB_1000cfad0:
              uVar2 = uVar2 + bVar11;
              uVar26 = (ulong)uVar2;
              if (uVar2 < 0x41) {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) goto LAB_1000cfb18;
                  uVar32 = (int)puStack_d0 - (int)puStack_c8;
                  if (puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uVar2 >> 3))) {
                    uVar32 = uVar2 >> 3;
                  }
                  uVar2 = uVar2 + uVar32 * -8;
                }
                else {
                  uVar32 = uVar2 >> 3;
                  uVar2 = uVar2 & 7;
                }
                uVar26 = (ulong)uVar2;
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar32);
                uStack_e0 = *puStack_d0;
              }
LAB_1000cfb18:
              uVar3 = uVar3 + bVar12;
              uVar34 = (ulong)uVar3;
              if (uVar3 < 0x41) {
                if (plStack_110 < plStack_e8) {
                  if (plStack_110 == plStack_f0) goto LAB_1000cfb80;
                  uVar32 = (int)plStack_110 - (int)plStack_f0;
                  if (plStack_f0 <= (long *)((long)plStack_110 - (ulong)(uVar3 >> 3))) {
                    uVar32 = uVar3 >> 3;
                  }
                  uVar3 = uVar3 + uVar32 * -8;
                }
                else {
                  uVar32 = uVar3 >> 3;
                  uVar3 = uVar3 & 7;
                }
                plStack_110 = (long *)((long)plStack_110 - (ulong)uVar32);
                uVar34 = (ulong)uVar3;
                lVar24 = *plStack_110;
                lStack_108 = lVar24;
                plStack_f8 = plStack_110;
              }
LAB_1000cfb80:
              puVar27 = puVar23 + 4;
            } while (puVar33 + 4 < puVar25);
            puVar23 = puVar23 + 4;
            uStack_88 = (uint)uVar35;
            uStack_b0 = (uint)uVar36;
            uStack_d8 = (uint)uVar26;
            uStack_100 = (uint)uVar34;
            puVar27 = puVar23 + uVar37 * 3;
            puVar28 = puVar23 + uVar37 * 2;
            puVar33 = puVar23 + uVar37;
          }
          uVar31 = (uint)uVar16;
          if (puVar30 < puVar23) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar6 < puVar33) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar7 < puVar28) {
            return (long *)0xffffffffffffffec;
          }
          if (uStack_88 < 0x41) {
            uVar32 = -uVar31 & 0x3f;
            do {
              if (puStack_80 < puStack_70) {
                if (puStack_80 == puStack_78) break;
                bVar17 = puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uStack_88 >> 3));
                uVar1 = uStack_88 >> 3;
                if (!bVar17) {
                  uVar1 = (int)puStack_80 - (int)puStack_78;
                }
                uStack_88 = uStack_88 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_88 >> 3;
                uStack_88 = uStack_88 & 7;
                bVar17 = true;
              }
              puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar1);
              uStack_90 = *puStack_80;
              if ((puVar30 + -3 <= puVar23) || (!bVar17)) break;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar32) * 2 + 4
                       );
              uStack_88 = uStack_88 + (byte)puVar8[1];
              *puVar23 = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar32) * 2 + 4
                       );
              uStack_88 = uStack_88 + (byte)puVar8[1];
              puVar23[1] = *puVar8;
              puVar8 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar32) * 2 + 4
                       );
              uStack_88 = uStack_88 + (byte)puVar8[1];
              puVar23[2] = *puVar8;
              puVar9 = (undefined1 *)
                       ((long)param_1 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar32) * 2 + 4
                       );
              uStack_88 = uStack_88 + (byte)puVar9[1];
              puVar8 = puVar23 + 4;
              puVar23[3] = *puVar9;
              puVar23 = puVar8;
              if (0x40 < uStack_88) break;
            } while( true );
          }
          if (puVar23 < puVar30) {
            puVar30 = param_2 + (uVar37 - (long)puVar23);
            do {
              puVar8 = (undefined1 *)
                       ((long)param_1 +
                       ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> (-uVar31 & 0x3f)) * 2 + 4);
              uStack_88 = uStack_88 + (byte)puVar8[1];
              *puVar23 = *puVar8;
              puVar30 = puVar30 + -1;
              puVar23 = puVar23 + 1;
            } while (puVar30 != (undefined1 *)0x0);
          }
          if (uStack_b0 < 0x41) {
            uVar32 = -uVar31 & 0x3f;
            do {
              if (puStack_a8 < puStack_98) {
                if (puStack_a8 == puStack_a0) break;
                bVar17 = puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uStack_b0 >> 3));
                uVar1 = uStack_b0 >> 3;
                if (!bVar17) {
                  uVar1 = (int)puStack_a8 - (int)puStack_a0;
                }
                uStack_b0 = uStack_b0 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_b0 >> 3;
                uStack_b0 = uStack_b0 & 7;
                bVar17 = true;
              }
              puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar1);
              uStack_b8 = *puStack_a8;
              if ((puVar6 + -3 <= puVar33) || (!bVar17)) break;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_b0 = uStack_b0 + (byte)puVar23[1];
              *puVar33 = *puVar23;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_b0 = uStack_b0 + (byte)puVar23[1];
              puVar33[1] = *puVar23;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_b0 = uStack_b0 + (byte)puVar23[1];
              puVar33[2] = *puVar23;
              puVar30 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_b0 = uStack_b0 + (byte)puVar30[1];
              puVar23 = puVar33 + 4;
              puVar33[3] = *puVar30;
              puVar33 = puVar23;
              if (0x40 < uStack_b0) break;
            } while( true );
          }
          if (puVar33 < puVar6) {
            do {
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> (-uVar31 & 0x3f)) * 2 + 4);
              uStack_b0 = uStack_b0 + (byte)puVar23[1];
              puVar30 = puVar33 + 1;
              *puVar33 = *puVar23;
              puVar33 = puVar30;
            } while (puVar30 < puVar6);
          }
          if (uStack_d8 < 0x41) {
            uVar32 = -uVar31 & 0x3f;
            do {
              if (puStack_d0 < puStack_c0) {
                if (puStack_d0 == puStack_c8) break;
                bVar17 = puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uStack_d8 >> 3));
                uVar1 = uStack_d8 >> 3;
                if (!bVar17) {
                  uVar1 = (int)puStack_d0 - (int)puStack_c8;
                }
                uStack_d8 = uStack_d8 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_d8 >> 3;
                uStack_d8 = uStack_d8 & 7;
                bVar17 = true;
              }
              puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar1);
              uStack_e0 = *puStack_d0;
              if ((puVar7 + -3 <= puVar28) || (!bVar17)) break;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_d8 = uStack_d8 + (byte)puVar23[1];
              *puVar28 = *puVar23;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_d8 = uStack_d8 + (byte)puVar23[1];
              puVar28[1] = *puVar23;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_d8 = uStack_d8 + (byte)puVar23[1];
              puVar28[2] = *puVar23;
              puVar30 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_d8 = uStack_d8 + (byte)puVar30[1];
              puVar23 = puVar28 + 4;
              puVar28[3] = *puVar30;
              puVar28 = puVar23;
              if (0x40 < uStack_d8) break;
            } while( true );
          }
          if (puVar28 < puVar7) {
            do {
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> (-uVar31 & 0x3f)) * 2 + 4);
              uStack_d8 = uStack_d8 + (byte)puVar23[1];
              puVar30 = puVar28 + 1;
              *puVar28 = *puVar23;
              puVar28 = puVar30;
            } while (puVar30 < puVar7);
          }
          if (uStack_100 < 0x41) {
            uVar32 = -uVar31 & 0x3f;
            do {
              if (plStack_f8 < plStack_e8) {
                if (plStack_f8 == plStack_f0) break;
                bVar17 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
                uVar1 = uStack_100 >> 3;
                if (!bVar17) {
                  uVar1 = (int)plStack_f8 - (int)plStack_f0;
                }
                uStack_100 = uStack_100 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_100 >> 3;
                uStack_100 = uStack_100 & 7;
                bVar17 = true;
              }
              plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar1);
              lStack_108 = *plStack_f8;
              if ((puVar25 <= puVar27) || (!bVar17)) break;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_100 = uStack_100 + (byte)puVar23[1];
              *puVar27 = *puVar23;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_100 = uStack_100 + (byte)puVar23[1];
              puVar27[1] = *puVar23;
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_100 = uStack_100 + (byte)puVar23[1];
              puVar27[2] = *puVar23;
              puVar30 = (undefined1 *)
                        ((long)param_1 +
                        ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar32) * 2 + 4);
              uStack_100 = uStack_100 + (byte)puVar30[1];
              puVar23 = puVar27 + 4;
              puVar27[3] = *puVar30;
              puVar27 = puVar23;
              if (0x40 < uStack_100) break;
            } while( true );
          }
          if (puVar27 < param_2 + (long)param_3) {
            lVar24 = (long)((long)param_3 + (long)param_2) - (long)puVar27;
            do {
              puVar23 = (undefined1 *)
                        ((long)param_1 +
                        ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> (-uVar31 & 0x3f)) * 2
                        + 4);
              uStack_100 = uStack_100 + (byte)puVar23[1];
              *puVar27 = *puVar23;
              lVar24 = lVar24 + -1;
              puVar27 = puVar27 + 1;
            } while (lVar24 != 0);
          }
          if (((((((uStack_100 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                 puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
              uStack_88 == 0x40) && puStack_80 == puStack_78) {
            return param_3;
          }
          return (long *)0xffffffffffffffec;
        }
        goto LAB_1000cfb9c;
      }
    }
    plVar22 = (long *)0xffffffffffffffb8;
  }
  return plVar22;
}



/* Entry: 1000ce574; end: 1000ce85f;  */

ulong FUN_1000ce574(ulong param_1,uint *param_2,int *param_3,uint *param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uStack_64;
  
  if (param_5 < 4) {
    uStack_64 = 0;
    func_0x000107c60e68(&uStack_64,param_4,param_5,4);
    FUN_1000ce574(param_1,param_2,param_3,&uStack_64,4);
    uVar8 = 0xffffffffffffffec;
    if (param_1 <= param_5 || 0xffffffffffffff88 < param_1) {
      uVar8 = param_1;
    }
  }
  else {
    func_0x000107c60ee4(param_1,(ulong)(*param_2 + 1) << 1);
    uVar18 = *param_4;
    uVar12 = uVar18 & 0xf;
    if (uVar12 < 0xb) {
      uVar9 = 0;
      *param_3 = uVar12 + 5;
      uVar3 = *param_2;
      uVar20 = 0x20 << (ulong)uVar12;
      uVar17 = uVar20 | 1;
      iVar19 = uVar12 + 6;
      uVar18 = uVar18 >> 4;
      puVar7 = (uint *)((long)param_4 + (param_5 - 7));
      puVar13 = (uint *)((long)param_4 + (param_5 - 4));
      uVar12 = 4;
      bVar6 = true;
      puVar15 = param_4;
      do {
        puVar16 = puVar15;
        uVar10 = uVar9;
        if (!bVar6) {
          while (((uVar18 ^ 0xffffffff) & 0xffff) == 0) {
            if (puVar16 < (uint *)((long)param_4 + (param_5 - 5))) {
              puVar16 = (uint *)((long)puVar16 + 2);
              uVar18 = *puVar16 >> (ulong)(uVar12 & 0x1f);
            }
            else {
              uVar18 = uVar18 >> 0x10;
              uVar12 = uVar12 + 0x10;
            }
            uVar10 = uVar10 + 0x18;
          }
          for (; uVar11 = uVar18 & 3, uVar11 == 3; uVar18 = uVar18 >> 2) {
            uVar10 = uVar10 + 3;
            uVar12 = uVar12 + 2;
          }
          uVar5 = uVar11 + uVar10;
          if (uVar3 < uVar5) {
            return 0xffffffffffffffd0;
          }
          if (uVar9 < uVar5) {
            func_0x000107c60ee4(param_1 + (ulong)uVar9 * 2,(ulong)(uVar10 + ~uVar9 + uVar11) * 2 + 2
                               );
            uVar9 = uVar5;
          }
          uVar12 = uVar12 + 2;
          puVar15 = (uint *)((long)puVar16 + (long)((int)uVar12 >> 3));
          uVar10 = uVar9;
          if ((puVar7 < puVar16) && (puVar13 < puVar15)) {
            uVar18 = uVar18 >> 2;
            puVar15 = puVar16;
          }
          else {
            uVar12 = uVar12 & 7;
            uVar18 = *puVar15 >> (ulong)uVar12;
          }
        }
        uVar11 = uVar20 * 2 - 1;
        uVar5 = uVar11 - uVar17;
        uVar9 = uVar18 & uVar20 - 1;
        uVar18 = uVar18 & uVar11;
        uVar11 = 0;
        if ((int)uVar20 <= (int)uVar18) {
          uVar11 = uVar5;
        }
        uVar18 = uVar18 - uVar11;
        iVar14 = iVar19;
        if (uVar9 < uVar5) {
          uVar18 = uVar9;
          iVar14 = iVar19 + -1;
        }
        iVar4 = uVar18 - 1;
        iVar2 = 1 - uVar18;
        if (1 - uVar18 == 0 || 1 < (int)uVar18) {
          iVar2 = iVar4;
        }
        uVar17 = uVar17 - iVar2;
        *(short *)(param_1 + (ulong)uVar10 * 2) = (short)iVar4;
        bVar6 = iVar4 != 0;
        for (; (int)uVar17 < (int)uVar20; uVar20 = (int)uVar20 >> 1) {
          iVar19 = iVar19 + -1;
        }
        uVar18 = iVar14 + uVar12;
        uVar9 = uVar10 + 1;
        bVar1 = puVar15 <= puVar7;
        puVar16 = (uint *)((long)puVar15 + (long)((int)uVar18 >> 3));
        iVar14 = (int)puVar15;
        puVar15 = puVar13;
        uVar12 = uVar18 + (iVar14 - (int)puVar13) * 8;
        if (bVar1 || puVar16 <= puVar13) {
          puVar15 = puVar16;
          uVar12 = uVar18 & 7;
        }
      } while ((uVar9 <= uVar3) && (uVar18 = *puVar15 >> (ulong)(uVar12 & 0x1f), 1 < (int)uVar17));
      uVar8 = 0xffffffffffffffec;
      if ((uVar17 == 1) && ((int)uVar12 < 0x21)) {
        *param_2 = uVar10;
        uVar8 = (long)puVar15 + ((long)((int)(uVar12 + 7) >> 3) - (long)param_4);
      }
    }
    else {
      uVar8 = 0xffffffffffffffd4;
    }
  }
  return uVar8;
}



/* Entry: 1000ce860; end: 1000ce953;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_1000ce860(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                    byte *param_6,uint *param_7)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  byte *pbVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  ushort uVar28;
  uint *puVar29;
  ushort auStack_5d8 [256];
  long lStack_3d8;
  uint auStack_3ac [65];
  long lStack_2a8;
  uint *puStack_2a0;
  uint *puStack_298;
  uint *puStack_290;
  uint *puStack_288;
  uint *puStack_280;
  uint *puStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  uint uStack_260;
  uint uStack_25c;
  uint auStack_258 [128];
  long lStack_58;
  
  puVar7 = &uStack_260;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_260 = 0xff;
  puVar8 = auStack_258;
  puVar6 = &uStack_25c;
  puVar11 = param_3;
  puVar21 = param_4;
  pbVar18 = param_6;
  FUN_1000ce574();
  puVar20 = puVar8;
  puStack_280 = puVar8;
  if (puVar8 < (uint *)0xffffffffffffff89) {
    puVar11 = (uint *)(ulong)uStack_25c;
    if ((uint)param_6 < uStack_25c) {
      puStack_280 = (uint *)0xffffffffffffffd4;
    }
    else {
      puVar6 = (uint *)(ulong)uStack_260;
      puVar7 = auStack_258;
      puVar20 = param_5;
      FUN_1000ceb4c();
      puStack_280 = puVar20;
      if (puVar20 < (uint *)0xffffffffffffff89) {
        puVar11 = (uint *)((long)param_4 - (long)puVar8);
        puVar6 = (uint *)((long)param_3 + (long)puVar8);
        puVar20 = param_1;
        puVar7 = param_2;
        puVar21 = param_5;
        FUN_1000cecd4();
        puStack_280 = puVar20;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puStack_280;
  }
  func_0x000107c60e78();
  puStack_2a0 = param_4;
  puStack_298 = param_1;
  puStack_290 = param_3;
  puStack_288 = param_2;
  puStack_278 = param_5;
  puStack_270 = &stack0xfffffffffffffff0;
  pcStack_268 = FUN_1000ce954;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = puVar20;
  puVar8 = puVar6;
  puVar12 = puVar11;
  puVar13 = puVar21;
  if (param_7 == (uint *)0x0) {
LAB_1000ceaf8:
    puVar15 = (uint *)0xffffffffffffffb8;
  }
  else {
    puVar29 = (uint *)(ulong)*pbVar18;
    if ((char)*pbVar18 < '\0') {
      puVar17 = (uint *)((long)puVar29 - 0x7eU >> 1);
      if (param_7 <= puVar17) goto LAB_1000ceaf8;
      puVar22 = (uint *)((long)puVar29 + -0x7f);
      if (puVar22 < puVar7) {
        if (puVar22 != (uint *)0x0) {
          puVar29 = (uint *)0x0;
          do {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)puVar20 + (long)puVar29) = *pbVar18 >> 4;
            ((byte *)((long)puVar20 + (long)puVar29))[1] = *pbVar18 & 0xf;
            puVar29 = (uint *)((long)puVar29 + 2);
          } while (puVar29 < puVar22);
          goto LAB_1000cea24;
        }
        puVar6[0xc] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[0] = 0;
        puVar6[1] = 0;
      }
LAB_1000ceb10:
      puVar15 = (uint *)0xffffffffffffffec;
    }
    else {
      if (param_7 <= puVar29) goto LAB_1000ceaf8;
      puVar7 = (uint *)((long)puVar7 + -1);
      puVar8 = (uint *)(pbVar18 + 1);
      puVar13 = auStack_3ac;
      puVar12 = puVar29;
      FUN_1000ce860();
      puVar15 = puVar22;
      puVar17 = puVar29;
      if (puVar22 < (uint *)0xffffffffffffff89) {
LAB_1000cea24:
        puVar6[0xc] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[0] = 0;
        puVar6[1] = 0;
        if (puVar22 != (uint *)0x0) {
          iVar14 = 0;
          puVar29 = (uint *)0x0;
          puVar15 = (uint *)0x1;
          do {
            uVar19 = (ulong)*(byte *)((long)puVar20 + (long)puVar29);
            if (0xb < uVar19) goto LAB_1000ceb10;
            puVar6[uVar19] = puVar6[uVar19] + 1;
            iVar14 = iVar14 + ((1 << (ulong)(*(byte *)((long)puVar20 + (long)puVar29) & 0x1f)) >> 1)
            ;
            bVar27 = puVar15 < puVar22;
            puVar29 = puVar15;
            puVar15 = (uint *)(ulong)((int)puVar15 + 1);
          } while (bVar27);
          if (iVar14 != 0) {
            uVar9 = (uint)LZCOUNT(iVar14) ^ 0x1f;
            if (uVar9 < 0xc) {
              *puVar21 = 0x20 - (uint)LZCOUNT(iVar14);
              iVar14 = (2 << (ulong)(uVar9 & 0x1f)) - iVar14;
              uVar9 = (uint)LZCOUNT(iVar14) ^ 0x1f;
              if (1 << (ulong)(uVar9 & 0x1f) == iVar14) {
                uVar9 = uVar9 + 1;
                *(char *)((long)puVar20 + (long)puVar22) = (char)uVar9;
                puVar6[uVar9] = puVar6[uVar9] + 1;
                puVar15 = (uint *)0xffffffffffffffec;
                if ((1 < puVar6[1]) && ((puVar6[1] & 1) == 0)) {
                  *puVar11 = (int)puVar22 + 1;
                  puVar15 = (uint *)((long)puVar17 + 1);
                }
                goto LAB_1000ceb14;
              }
            }
          }
        }
        goto LAB_1000ceb10;
      }
    }
  }
LAB_1000ceb14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return puVar15;
  }
  func_0x000107c60e78();
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uint)puVar8 < 0x100) {
    uVar9 = (uint)puVar12;
    if (uVar9 < 0xd) {
      uVar19 = 0;
      uVar25 = (ulong)((uint)puVar8 + 1);
      uVar4 = 1 << (ulong)(uVar9 & 0x1f);
      uVar23 = (ulong)uVar4;
      uVar26 = (ulong)(uVar4 - 1);
      iVar14 = 1;
      do {
        uVar28 = *(ushort *)((long)puVar7 + uVar19 * 2);
        puVar8 = (uint *)(long)(short)uVar28;
        if (uVar28 == 0xffff) {
          *(char *)((ushort *)((long)puVar22 + 6) + uVar26 * 2) = (char)uVar19;
          uVar28 = 1;
          uVar26 = (ulong)((int)uVar26 - 1);
        }
        else if ((int)((uint)(0x8000 << (ulong)(uVar9 & 0x1f)) >> 0x10) <= (int)(short)uVar28) {
          iVar14 = 0;
        }
        auStack_5d8[uVar19] = uVar28;
        uVar19 = uVar19 + 1;
      } while (uVar25 != uVar19);
      uVar19 = 0;
      uVar24 = 0;
      *puVar22 = uVar9 | iVar14 << 0x10;
      do {
        uVar28 = *(ushort *)((long)puVar7 + uVar19 * 2);
        if (0 < (short)uVar28) {
          iVar14 = 0;
          do {
            puVar8 = (uint *)(uVar24 * 4);
            *(char *)((ushort *)((long)puVar22 + 6) + uVar24 * 2) = (char)uVar19;
            do {
              uVar5 = (uVar4 >> 3) + (uVar4 >> 1) + 3 + (int)uVar24 & uVar4 - 1;
              uVar24 = (ulong)uVar5;
            } while ((uint)uVar26 < uVar5);
            iVar14 = iVar14 + 1;
          } while (iVar14 != (short)uVar28);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar25);
      if ((int)uVar24 == 0) {
        puVar16 = (undefined1 *)((long)puVar22 + 7);
        do {
          uVar28 = auStack_5d8[(byte)puVar16[-1]];
          auStack_5d8[(byte)puVar16[-1]] = uVar28 + 1;
          uVar5 = uVar9 - ((uint)LZCOUNT((uint)uVar28) ^ 0x1f);
          *puVar16 = (char)uVar5;
          *(ushort *)(puVar16 + -3) = (uVar28 << (ulong)(uVar5 & 0x1f)) - (short)uVar4;
          puVar16 = puVar16 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = (uint *)0xffffffffffffffff;
      }
    }
    else {
      puVar6 = (uint *)0xffffffffffffffd4;
    }
  }
  else {
    puVar6 = (uint *)0xffffffffffffffd2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return puVar6;
  }
  func_0x000107c60e78();
  puVar16 = (undefined1 *)((long)puVar6 + (long)puVar7);
  if (*(ushort *)((long)puVar13 + 2) == 0) {
    if (puVar12 == (uint *)0x0) {
      return (uint *)0xffffffffffffffb8;
    }
    puVar7 = puVar12 + -2;
    if (puVar12 < (uint *)0x8) {
      uVar19 = (ulong)(byte)*puVar8;
      if ((long)puVar12 < 5) {
        if (puVar12 == (uint *)0x2) goto LAB_1000cee98;
        if (puVar12 == (uint *)0x3) goto LAB_1000cee90;
        if (puVar12 == (uint *)0x4) goto LAB_1000cee88;
      }
      else {
        if (puVar12 != (uint *)0x5) {
          if (puVar12 != (uint *)0x6) {
            if (puVar12 != (uint *)0x7) goto LAB_1000ceea0;
            uVar19 = uVar19 | (ulong)*(byte *)((long)puVar8 + 6) << 0x30;
          }
          uVar19 = uVar19 + ((ulong)*(byte *)((long)puVar8 + 5) << 0x28);
        }
        uVar19 = uVar19 + ((ulong)(byte)puVar8[1] << 0x20);
LAB_1000cee88:
        uVar19 = uVar19 + (ulong)*(byte *)((long)puVar8 + 3) * 0x1000000;
LAB_1000cee90:
        uVar19 = uVar19 + (ulong)*(byte *)((long)puVar8 + 2) * 0x10000;
LAB_1000cee98:
        uVar19 = uVar19 + (ulong)*(byte *)((long)puVar8 + 1) * 0x100;
      }
LAB_1000ceea0:
      if (((byte *)((long)puVar8 + (long)puVar12))[-1] == 0) {
        return (uint *)0xffffffffffffffec;
      }
      puVar7 = (uint *)0x0;
      iVar14 = (int)LZCOUNT((uint)((byte *)((long)puVar8 + (long)puVar12))[-1]) + (int)puVar12 * -8
               + 0x29;
    }
    else {
      uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
      if (uVar19 >> 0x38 == 0) {
        return (uint *)0xffffffffffffffff;
      }
      if ((uint *)0xffffffffffffff88 < puVar12) {
        return puVar12;
      }
      iVar14 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar19 >> 0x38)) ^ 0x1f);
    }
    uVar28 = (ushort)*puVar13;
    uVar9 = iVar14 + (uint)uVar28;
    uVar23 = uVar19 >> ((ulong)-uVar9 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar28 * 4)
    ;
    if (uVar9 < 0x41) {
      if ((long)puVar7 < 8) {
        if (puVar7 == (uint *)0x0) goto LAB_1000cf184;
        puVar20 = puVar7;
        if ((long)(ulong)(uVar9 >> 3) <= (long)puVar7) {
          puVar20 = (uint *)(ulong)(uVar9 >> 3);
        }
        uVar9 = uVar9 + (int)puVar20 * -8;
      }
      else {
        puVar20 = (uint *)(ulong)(uVar9 >> 3);
        uVar9 = uVar9 & 7;
      }
      puVar7 = (uint *)((long)puVar7 - ((ulong)puVar20 & 0xffffffff));
      uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
    }
LAB_1000cf184:
    uVar9 = uVar9 + uVar28;
    uVar26 = uVar19 >> ((ulong)-uVar9 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar28 * 4)
    ;
    puVar20 = puVar6;
    if (uVar9 < 0x41) {
      puVar11 = puVar6;
      if (7 < (long)puVar7) {
        uVar4 = uVar9 >> 3;
        uVar9 = uVar9 & 7;
        puVar7 = (uint *)((long)puVar7 - (ulong)uVar4);
        uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
LAB_1000cf1ec:
        do {
          puVar20 = puVar11;
          if ((long)puVar7 < 8) {
            if (puVar7 == (uint *)0x0) goto LAB_1000cf2ec;
            puVar22 = (uint *)(ulong)(uVar9 >> 3);
            bVar27 = (long)puVar22 <= (long)puVar7;
            puVar21 = puVar7;
            if ((long)puVar22 <= (long)puVar7) {
              puVar21 = puVar22;
            }
            uVar9 = uVar9 + (int)puVar21 * -8;
          }
          else {
            puVar21 = (uint *)(ulong)(uVar9 >> 3);
            uVar9 = uVar9 & 7;
            bVar27 = true;
          }
          puVar7 = (uint *)((long)puVar7 - ((ulong)puVar21 & 0xffffffff));
          uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
          if ((puVar16 + -3 <= puVar11) || (!bVar27)) goto LAB_1000cf2ec;
          puVar20 = puVar13 + uVar23 + 1;
          uVar5 = *puVar20;
          iVar14 = uVar9 + *(byte *)((long)puVar20 + 3);
          uVar9 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar20 + 3) * 4);
          *(undefined1 *)puVar11 = *(undefined1 *)((long)puVar20 + 2);
          puVar20 = puVar13 + uVar26 + 1;
          uVar10 = *puVar20;
          iVar1 = iVar14 + (uint)*(byte *)((long)puVar20 + 3);
          uVar4 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar20 + 3) * 4);
          *(undefined1 *)((long)puVar11 + 1) = *(undefined1 *)((long)puVar20 + 2);
          puVar20 = puVar13 + (uVar19 >> ((ulong)(uint)-iVar14 & 0x3f) & (ulong)uVar9) +
                              (ulong)(ushort)uVar5 + 1;
          iVar14 = iVar1 + (uint)*(byte *)((long)puVar20 + 3);
          uVar23 = (uVar19 >> ((ulong)(uint)-iVar14 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar20 + 3) * 4)) +
                   (ulong)(ushort)*puVar20;
          *(undefined1 *)((long)puVar11 + 2) = *(undefined1 *)((long)puVar20 + 2);
          puVar20 = puVar13 + (uVar19 >> ((ulong)(uint)-iVar1 & 0x3f) & (ulong)uVar4) +
                              (ulong)(ushort)uVar10 + 1;
          uVar9 = iVar14 + (uint)*(byte *)((long)puVar20 + 3);
          uVar26 = (uVar19 >> ((ulong)-uVar9 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar20 + 3) * 4)) +
                   (ulong)(ushort)*puVar20;
          *(undefined1 *)((long)puVar11 + 3) = *(undefined1 *)((long)puVar20 + 2);
          puVar20 = puVar11 + 1;
          puVar11 = puVar11 + 1;
          if (0x40 < uVar9) goto LAB_1000cf2ec;
        } while( true );
      }
      if (puVar7 == (uint *)0x0) goto LAB_1000cf1ec;
      puVar21 = puVar7;
      if ((long)(ulong)(uVar9 >> 3) <= (long)puVar7) {
        puVar21 = (uint *)(ulong)(uVar9 >> 3);
      }
      uVar9 = uVar9 + (int)puVar21 * -8;
      puVar7 = (uint *)((long)puVar7 - ((ulong)puVar21 & 0xffffffff));
      uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
      if (uVar9 < 0x41) goto LAB_1000cf1ec;
    }
LAB_1000cf2ec:
    puVar11 = (uint *)(puVar16 + -2);
    if (puVar11 < puVar20) {
      return (uint *)0xffffffffffffffba;
    }
    puVar20 = (uint *)((long)puVar20 + 1);
    while( true ) {
      puVar21 = puVar13 + uVar23 + 1;
      uVar5 = *puVar21;
      uVar9 = uVar9 + *(byte *)((long)puVar21 + 3);
      uVar4 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar21 + 3) * 4);
      *(undefined1 *)((long)puVar20 + -1) = *(undefined1 *)((long)puVar21 + 2);
      if (0x40 < uVar9) break;
      if ((long)puVar7 < 8) {
        uVar25 = uVar19;
        uVar10 = uVar9;
        if (puVar7 != (uint *)0x0) {
          puVar21 = puVar7;
          if ((long)(ulong)(uVar9 >> 3) <= (long)puVar7) {
            puVar21 = (uint *)(ulong)(uVar9 >> 3);
          }
          uVar10 = uVar9 + (int)puVar21 * -8;
          goto LAB_1000cf350;
        }
      }
      else {
        puVar21 = (uint *)(ulong)(uVar9 >> 3);
        uVar10 = uVar9 & 7;
LAB_1000cf350:
        puVar7 = (uint *)((long)puVar7 - ((ulong)puVar21 & 0xffffffff));
        uVar25 = *(ulong *)((long)puVar8 + (long)puVar7);
      }
      if (puVar11 < puVar20) {
        return (uint *)0xffffffffffffffba;
      }
      uVar23 = (uVar19 >> ((ulong)-uVar9 & 0x3f) & (ulong)uVar4) + (ulong)(ushort)uVar5;
      puVar21 = puVar13 + uVar26 + 1;
      uVar5 = *puVar21;
      uVar10 = uVar10 + *(byte *)((long)puVar21 + 3);
      uVar4 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar21 + 3) * 4);
      *(undefined1 *)puVar20 = *(undefined1 *)((long)puVar21 + 2);
      if (0x40 < uVar10) goto LAB_1000cf424;
      if ((long)puVar7 < 8) {
        uVar19 = uVar25;
        uVar9 = uVar10;
        if (puVar7 != (uint *)0x0) {
          puVar21 = puVar7;
          if ((long)(ulong)(uVar10 >> 3) <= (long)puVar7) {
            puVar21 = (uint *)(ulong)(uVar10 >> 3);
          }
          uVar9 = uVar10 + (int)puVar21 * -8;
          goto LAB_1000cf3bc;
        }
      }
      else {
        puVar21 = (uint *)(ulong)(uVar10 >> 3);
        uVar9 = uVar10 & 7;
LAB_1000cf3bc:
        puVar7 = (uint *)((long)puVar7 - ((ulong)puVar21 & 0xffffffff));
        uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
      }
      uVar26 = (uVar25 >> ((ulong)-uVar10 & 0x3f) & (ulong)uVar4) + (ulong)(ushort)uVar5;
      puVar21 = (uint *)((long)puVar20 + 1);
      puVar20 = (uint *)((long)puVar20 + 2);
      if (puVar11 < puVar21) {
        return (uint *)0xffffffffffffffba;
      }
    }
LAB_1000cf414:
    puVar16 = (undefined1 *)((long)puVar20 + 1);
    *(undefined1 *)puVar20 = *(undefined1 *)((long)(puVar13 + uVar26 + 1) + 2);
LAB_1000cf430:
    return (uint *)(puVar16 + -(long)puVar6);
  }
  if (puVar12 == (uint *)0x0) {
    return (uint *)0xffffffffffffffb8;
  }
  puVar7 = puVar12 + -2;
  if (puVar12 < (uint *)0x8) {
    uVar19 = (ulong)(byte)*puVar8;
    if ((long)puVar12 < 5) {
      if (puVar12 == (uint *)0x2) goto LAB_1000cedd0;
      if (puVar12 == (uint *)0x3) goto LAB_1000cedc8;
      if (puVar12 == (uint *)0x4) goto LAB_1000cedc0;
    }
    else {
      if (puVar12 != (uint *)0x5) {
        if (puVar12 != (uint *)0x6) {
          if (puVar12 != (uint *)0x7) goto LAB_1000cedd8;
          uVar19 = uVar19 | (ulong)*(byte *)((long)puVar8 + 6) << 0x30;
        }
        uVar19 = uVar19 + ((ulong)*(byte *)((long)puVar8 + 5) << 0x28);
      }
      uVar19 = uVar19 + ((ulong)(byte)puVar8[1] << 0x20);
LAB_1000cedc0:
      uVar19 = uVar19 + (ulong)*(byte *)((long)puVar8 + 3) * 0x1000000;
LAB_1000cedc8:
      uVar19 = uVar19 + (ulong)*(byte *)((long)puVar8 + 2) * 0x10000;
LAB_1000cedd0:
      uVar19 = uVar19 + (ulong)*(byte *)((long)puVar8 + 1) * 0x100;
    }
LAB_1000cedd8:
    if (((byte *)((long)puVar8 + (long)puVar12))[-1] == 0) {
      return (uint *)0xffffffffffffffec;
    }
    puVar7 = (uint *)0x0;
    iVar14 = (int)LZCOUNT((uint)((byte *)((long)puVar8 + (long)puVar12))[-1]) + (int)puVar12 * -8 +
             0x29;
  }
  else {
    uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
    if (uVar19 >> 0x38 == 0) {
      return (uint *)0xffffffffffffffff;
    }
    if ((uint *)0xffffffffffffff88 < puVar12) {
      return puVar12;
    }
    iVar14 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar19 >> 0x38)) ^ 0x1f);
  }
  uVar28 = (ushort)*puVar13;
  uVar9 = iVar14 + (uint)uVar28;
  uVar23 = uVar19 >> ((ulong)-uVar9 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar28 * 4);
  if (uVar9 < 0x41) {
    if ((long)puVar7 < 8) {
      if (puVar7 == (uint *)0x0) goto LAB_1000cef1c;
      puVar20 = puVar7;
      if ((long)(ulong)(uVar9 >> 3) <= (long)puVar7) {
        puVar20 = (uint *)(ulong)(uVar9 >> 3);
      }
      uVar9 = uVar9 + (int)puVar20 * -8;
    }
    else {
      puVar20 = (uint *)(ulong)(uVar9 >> 3);
      uVar9 = uVar9 & 7;
    }
    puVar7 = (uint *)((long)puVar7 - ((ulong)puVar20 & 0xffffffff));
    uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
  }
LAB_1000cef1c:
  uVar9 = uVar9 + uVar28;
  uVar25 = (ulong)uVar9;
  uVar26 = uVar19 >> ((ulong)-uVar9 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar28 * 4);
  puVar20 = puVar6;
  if (uVar9 < 0x41) {
    if ((long)puVar7 < 8) {
      if (puVar7 != (uint *)0x0) {
        puVar11 = puVar7;
        if ((long)(ulong)(uVar9 >> 3) <= (long)puVar7) {
          puVar11 = (uint *)(ulong)(uVar9 >> 3);
        }
        uVar9 = uVar9 + (int)puVar11 * -8;
        puVar7 = (uint *)((long)puVar7 - ((ulong)puVar11 & 0xffffffff));
        uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
        goto joined_r0x0001000cef68;
      }
    }
    else {
      uVar25 = (ulong)(uVar9 & 7);
      puVar7 = (uint *)((long)puVar7 - (ulong)(uVar9 >> 3));
      uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
    }
    do {
      uVar9 = (uint)uVar25;
      if ((long)puVar7 < 8) {
        if (puVar7 == (uint *)0x0) break;
        puVar21 = (uint *)(uVar25 >> 3);
        bVar27 = (long)puVar21 <= (long)puVar7;
        puVar11 = puVar7;
        if ((long)puVar21 <= (long)puVar7) {
          puVar11 = puVar21;
        }
        uVar9 = uVar9 + (int)puVar11 * -8;
      }
      else {
        puVar11 = (uint *)(ulong)(uVar9 >> 3);
        uVar9 = uVar9 & 7;
        bVar27 = true;
      }
      uVar25 = (ulong)uVar9;
      puVar7 = (uint *)((long)puVar7 - ((ulong)puVar11 & 0xffffffff));
      uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
      if ((puVar16 + -3 <= puVar20) || (!bVar27)) break;
      puVar11 = puVar13 + uVar23 + 1;
      uVar5 = *puVar11;
      bVar3 = *(byte *)((long)puVar11 + 3);
      uVar9 = uVar9 + bVar3;
      *(undefined1 *)puVar20 = *(undefined1 *)((long)puVar11 + 2);
      puVar11 = puVar13 + uVar26 + 1;
      uVar10 = *puVar11;
      bVar2 = *(byte *)((long)puVar11 + 3);
      uVar4 = uVar9 + bVar2;
      *(undefined1 *)((long)puVar20 + 1) = *(undefined1 *)((long)puVar11 + 2);
      puVar11 = puVar13 + ((uVar19 << (uVar25 & 0x3f)) >> ((ulong)-(uint)bVar3 & 0x3f)) +
                          (ulong)(ushort)uVar5 + 1;
      uVar5 = uVar4 + *(byte *)((long)puVar11 + 3);
      uVar23 = ((uVar19 << ((ulong)uVar4 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar11 + 3) & 0x3f)) + (ulong)(ushort)*puVar11;
      *(undefined1 *)((long)puVar20 + 2) = *(undefined1 *)((long)puVar11 + 2);
      puVar11 = puVar13 + ((uVar19 << ((ulong)uVar9 & 0x3f)) >> ((ulong)-(uint)bVar2 & 0x3f)) +
                          (ulong)(ushort)uVar10 + 1;
      uVar9 = uVar5 + *(byte *)((long)puVar11 + 3);
      uVar26 = ((uVar19 << ((ulong)uVar5 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar11 + 3) & 0x3f)) + (ulong)(ushort)*puVar11;
      *(undefined1 *)((long)puVar20 + 3) = *(undefined1 *)((long)puVar11 + 2);
      puVar20 = puVar20 + 1;
joined_r0x0001000cef68:
      uVar25 = (ulong)uVar9;
      if (0x40 < uVar9) break;
    } while( true );
  }
  puVar11 = (uint *)(puVar16 + -2);
  if (puVar20 <= puVar11) {
    puVar20 = (uint *)((long)puVar20 + 1);
    do {
      puVar21 = puVar13 + uVar23 + 1;
      uVar4 = *puVar21;
      bVar3 = *(byte *)((long)puVar21 + 3);
      uVar9 = (int)uVar25 + (uint)bVar3;
      *(undefined1 *)((long)puVar20 + -1) = *(undefined1 *)((long)puVar21 + 2);
      if (0x40 < uVar9) goto LAB_1000cf414;
      if ((long)puVar7 < 8) {
        uVar24 = uVar19;
        if (puVar7 != (uint *)0x0) {
          puVar21 = puVar7;
          if ((long)(ulong)(uVar9 >> 3) <= (long)puVar7) {
            puVar21 = (uint *)(ulong)(uVar9 >> 3);
          }
          uVar9 = uVar9 + (int)puVar21 * -8;
          goto LAB_1000cf0d0;
        }
      }
      else {
        puVar21 = (uint *)(ulong)(uVar9 >> 3);
        uVar9 = uVar9 & 7;
LAB_1000cf0d0:
        puVar7 = (uint *)((long)puVar7 - ((ulong)puVar21 & 0xffffffff));
        uVar24 = *(ulong *)((long)puVar8 + (long)puVar7);
      }
      if (puVar11 < puVar20) {
        return (uint *)0xffffffffffffffba;
      }
      uVar23 = ((uVar19 << (uVar25 & 0x3f)) >> ((ulong)-(uint)bVar3 & 0x3f)) + (ulong)(ushort)uVar4;
      puVar21 = puVar13 + uVar26 + 1;
      uVar5 = *puVar21;
      bVar3 = *(byte *)((long)puVar21 + 3);
      uVar4 = uVar9 + bVar3;
      *(undefined1 *)puVar20 = *(undefined1 *)((long)puVar21 + 2);
      if (0x40 < uVar4) goto LAB_1000cf424;
      if ((long)puVar7 < 8) {
        uVar19 = uVar24;
        if (puVar7 != (uint *)0x0) {
          puVar21 = puVar7;
          if ((long)(ulong)(uVar4 >> 3) <= (long)puVar7) {
            puVar21 = (uint *)(ulong)(uVar4 >> 3);
          }
          uVar4 = uVar4 + (int)puVar21 * -8;
          goto LAB_1000cf138;
        }
      }
      else {
        puVar21 = (uint *)(ulong)(uVar4 >> 3);
        uVar4 = uVar4 & 7;
LAB_1000cf138:
        puVar7 = (uint *)((long)puVar7 - ((ulong)puVar21 & 0xffffffff));
        uVar19 = *(ulong *)((long)puVar8 + (long)puVar7);
      }
      uVar25 = (ulong)uVar4;
      uVar26 = ((uVar24 << ((ulong)uVar9 & 0x3f)) >> ((ulong)-(uint)bVar3 & 0x3f)) +
               (ulong)(ushort)uVar5;
      puVar21 = (uint *)((long)puVar20 + 1);
      puVar20 = (uint *)((long)puVar20 + 2);
    } while (puVar21 <= puVar11);
  }
  return (uint *)0xffffffffffffffba;
LAB_1000cf424:
  *(undefined1 *)((long)puVar20 + 1) = *(undefined1 *)((long)(puVar13 + uVar23 + 1) + 2);
  puVar16 = (undefined1 *)((long)puVar20 + 2);
  goto LAB_1000cf430;
}



/* Entry: 1000ce954; end: 1000ceb4b;  */

/* WARNING: Type propagation algorithm not settling */

uint * FUN_1000ce954(uint *param_1,uint *param_2,byte *param_3,uint *param_4,ushort *param_5,
                    byte *param_6,uint *param_7)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  long lVar8;
  uint *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  bool bVar25;
  ushort uVar26;
  uint *puVar27;
  ushort auStack_378 [256];
  long lStack_178;
  ushort auStack_14c [130];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  pbVar10 = param_3;
  puVar18 = param_4;
  puVar13 = param_5;
  if (param_7 == (uint *)0x0) {
LAB_1000ceaf8:
    puVar19 = (uint *)0xffffffffffffffb8;
  }
  else {
    puVar27 = (uint *)(ulong)*param_6;
    if ((char)*param_6 < '\0') {
      puVar16 = (uint *)((long)puVar27 - 0x7eU >> 1);
      if (param_7 <= puVar16) goto LAB_1000ceaf8;
      puVar9 = (uint *)((long)puVar27 + -0x7f);
      if (puVar9 < param_2) {
        if (puVar9 != (uint *)0x0) {
          puVar27 = (uint *)0x0;
          do {
            param_6 = param_6 + 1;
            *(byte *)((long)param_1 + (long)puVar27) = *param_6 >> 4;
            ((byte *)((long)param_1 + (long)puVar27))[1] = *param_6 & 0xf;
            puVar27 = (uint *)((long)puVar27 + 2);
          } while (puVar27 < puVar9);
          goto LAB_1000cea24;
        }
        param_3[0x30] = 0;
        param_3[0x31] = 0;
        param_3[0x32] = 0;
        param_3[0x33] = 0;
        param_3[0x18] = 0;
        param_3[0x19] = 0;
        param_3[0x1a] = 0;
        param_3[0x1b] = 0;
        param_3[0x1c] = 0;
        param_3[0x1d] = 0;
        param_3[0x1e] = 0;
        param_3[0x1f] = 0;
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        param_3[0x14] = 0;
        param_3[0x15] = 0;
        param_3[0x16] = 0;
        param_3[0x17] = 0;
        param_3[0x28] = 0;
        param_3[0x29] = 0;
        param_3[0x2a] = 0;
        param_3[0x2b] = 0;
        param_3[0x2c] = 0;
        param_3[0x2d] = 0;
        param_3[0x2e] = 0;
        param_3[0x2f] = 0;
        param_3[0x20] = 0;
        param_3[0x21] = 0;
        param_3[0x22] = 0;
        param_3[0x23] = 0;
        param_3[0x24] = 0;
        param_3[0x25] = 0;
        param_3[0x26] = 0;
        param_3[0x27] = 0;
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        param_3[0] = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
      }
LAB_1000ceb10:
      puVar19 = (uint *)0xffffffffffffffec;
    }
    else {
      if (param_7 <= puVar27) goto LAB_1000ceaf8;
      param_2 = (uint *)((long)param_2 + -1);
      pbVar10 = param_6 + 1;
      puVar13 = auStack_14c;
      puVar18 = puVar27;
      FUN_1000ce860();
      puVar19 = puVar9;
      puVar16 = puVar27;
      if (puVar9 < (uint *)0xffffffffffffff89) {
LAB_1000cea24:
        param_3[0x30] = 0;
        param_3[0x31] = 0;
        param_3[0x32] = 0;
        param_3[0x33] = 0;
        param_3[0x18] = 0;
        param_3[0x19] = 0;
        param_3[0x1a] = 0;
        param_3[0x1b] = 0;
        param_3[0x1c] = 0;
        param_3[0x1d] = 0;
        param_3[0x1e] = 0;
        param_3[0x1f] = 0;
        param_3[0x10] = 0;
        param_3[0x11] = 0;
        param_3[0x12] = 0;
        param_3[0x13] = 0;
        param_3[0x14] = 0;
        param_3[0x15] = 0;
        param_3[0x16] = 0;
        param_3[0x17] = 0;
        param_3[0x28] = 0;
        param_3[0x29] = 0;
        param_3[0x2a] = 0;
        param_3[0x2b] = 0;
        param_3[0x2c] = 0;
        param_3[0x2d] = 0;
        param_3[0x2e] = 0;
        param_3[0x2f] = 0;
        param_3[0x20] = 0;
        param_3[0x21] = 0;
        param_3[0x22] = 0;
        param_3[0x23] = 0;
        param_3[0x24] = 0;
        param_3[0x25] = 0;
        param_3[0x26] = 0;
        param_3[0x27] = 0;
        param_3[8] = 0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0;
        param_3[0xf] = 0;
        param_3[0] = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        if (puVar9 != (uint *)0x0) {
          iVar14 = 0;
          puVar27 = (uint *)0x0;
          puVar19 = (uint *)0x1;
          do {
            uVar17 = (ulong)*(byte *)((long)param_1 + (long)puVar27);
            if (0xb < uVar17) goto LAB_1000ceb10;
            *(int *)(param_3 + uVar17 * 4) = *(int *)(param_3 + uVar17 * 4) + 1;
            iVar14 = iVar14 + ((1 << (ulong)(*(byte *)((long)param_1 + (long)puVar27) & 0x1f)) >> 1)
            ;
            bVar25 = puVar19 < puVar9;
            puVar27 = puVar19;
            puVar19 = (uint *)(ulong)((int)puVar19 + 1);
          } while (bVar25);
          if (iVar14 != 0) {
            uVar11 = (uint)LZCOUNT(iVar14) ^ 0x1f;
            if (uVar11 < 0xc) {
              *(uint *)param_5 = 0x20 - (uint)LZCOUNT(iVar14);
              iVar14 = (2 << (ulong)(uVar11 & 0x1f)) - iVar14;
              uVar11 = (uint)LZCOUNT(iVar14) ^ 0x1f;
              if (1 << (ulong)(uVar11 & 0x1f) == iVar14) {
                uVar11 = uVar11 + 1;
                *(char *)((long)param_1 + (long)puVar9) = (char)uVar11;
                *(int *)(param_3 + (ulong)uVar11 * 4) = *(int *)(param_3 + (ulong)uVar11 * 4) + 1;
                puVar19 = (uint *)0xffffffffffffffec;
                if ((1 < *(uint *)(param_3 + 4)) && ((*(uint *)(param_3 + 4) & 1) == 0)) {
                  *param_4 = (int)puVar9 + 1;
                  puVar19 = (uint *)((long)puVar16 + 1);
                }
                goto LAB_1000ceb14;
              }
            }
          }
        }
        goto LAB_1000ceb10;
      }
    }
  }
LAB_1000ceb14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar19;
  }
  func_0x000107c60e78();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uint)pbVar10 < 0x100) {
    uVar11 = (uint)puVar18;
    if (uVar11 < 0xd) {
      uVar17 = 0;
      uVar24 = (ulong)((uint)pbVar10 + 1);
      uVar1 = 1 << (ulong)(uVar11 & 0x1f);
      uVar21 = (ulong)uVar1;
      uVar23 = (ulong)(uVar1 - 1);
      iVar14 = 1;
      do {
        uVar26 = *(ushort *)((long)param_2 + uVar17 * 2);
        pbVar10 = (byte *)(long)(short)uVar26;
        if (uVar26 == 0xffff) {
          lVar8 = uVar23 * 4;
          uVar23 = (ulong)((int)uVar23 - 1);
          *(char *)((long)puVar9 + 6 + lVar8) = (char)uVar17;
          uVar26 = 1;
        }
        else if ((int)((uint)(0x8000 << (ulong)(uVar11 & 0x1f)) >> 0x10) <= (int)(short)uVar26) {
          iVar14 = 0;
        }
        auStack_378[uVar17] = uVar26;
        uVar17 = uVar17 + 1;
      } while (uVar24 != uVar17);
      uVar17 = 0;
      uVar22 = 0;
      *puVar9 = uVar11 | iVar14 << 0x10;
      do {
        sVar7 = *(short *)((long)param_2 + uVar17 * 2);
        if (0 < sVar7) {
          iVar14 = 0;
          do {
            pbVar10 = (byte *)(uVar22 * 4);
            pbVar10[(long)puVar9 + 6] = (byte)uVar17;
            do {
              uVar12 = (uVar1 >> 3) + (uVar1 >> 1) + 3 + (int)uVar22 & uVar1 - 1;
              uVar22 = (ulong)uVar12;
            } while ((uint)uVar23 < uVar12);
            iVar14 = iVar14 + 1;
          } while (iVar14 != sVar7);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar24);
      if ((int)uVar22 == 0) {
        puVar15 = (undefined1 *)((long)puVar9 + 7);
        do {
          uVar26 = auStack_378[(byte)puVar15[-1]];
          auStack_378[(byte)puVar15[-1]] = uVar26 + 1;
          uVar12 = uVar11 - ((uint)LZCOUNT((uint)uVar26) ^ 0x1f);
          *puVar15 = (char)uVar12;
          *(ushort *)(puVar15 + -3) = (uVar26 << (ulong)(uVar12 & 0x1f)) - (short)uVar1;
          puVar15 = puVar15 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9 = (uint *)0xffffffffffffffff;
      }
    }
    else {
      puVar9 = (uint *)0xffffffffffffffd4;
    }
  }
  else {
    puVar9 = (uint *)0xffffffffffffffd2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar9;
  }
  func_0x000107c60e78();
  puVar15 = (undefined1 *)((long)puVar9 + (long)param_2);
  if (puVar13[1] == 0) {
    if (puVar18 == (uint *)0x0) {
      return (uint *)0xffffffffffffffb8;
    }
    puVar27 = puVar18 + -2;
    if (puVar18 < (uint *)0x8) {
      uVar17 = (ulong)*pbVar10;
      if ((long)puVar18 < 5) {
        if (puVar18 == (uint *)0x2) goto LAB_1000cee98;
        if (puVar18 == (uint *)0x3) goto LAB_1000cee90;
        if (puVar18 == (uint *)0x4) goto LAB_1000cee88;
      }
      else {
        if (puVar18 != (uint *)0x5) {
          if (puVar18 != (uint *)0x6) {
            if (puVar18 != (uint *)0x7) goto LAB_1000ceea0;
            uVar17 = uVar17 | (ulong)pbVar10[6] << 0x30;
          }
          uVar17 = uVar17 + ((ulong)pbVar10[5] << 0x28);
        }
        uVar17 = uVar17 + ((ulong)pbVar10[4] << 0x20);
LAB_1000cee88:
        uVar17 = uVar17 + (ulong)pbVar10[3] * 0x1000000;
LAB_1000cee90:
        uVar17 = uVar17 + (ulong)pbVar10[2] * 0x10000;
LAB_1000cee98:
        uVar17 = uVar17 + (ulong)pbVar10[1] * 0x100;
      }
LAB_1000ceea0:
      if ((pbVar10 + (long)puVar18)[-1] == 0) {
        return (uint *)0xffffffffffffffec;
      }
      puVar27 = (uint *)0x0;
      iVar14 = (int)LZCOUNT((uint)(pbVar10 + (long)puVar18)[-1]) + (int)puVar18 * -8 + 0x29;
    }
    else {
      uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
      if (uVar17 >> 0x38 == 0) {
        return (uint *)0xffffffffffffffff;
      }
      if ((uint *)0xffffffffffffff88 < puVar18) {
        return puVar18;
      }
      iVar14 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar17 >> 0x38)) ^ 0x1f);
    }
    uVar26 = *puVar13;
    uVar11 = iVar14 + (uint)uVar26;
    uVar21 = uVar17 >> ((ulong)-uVar11 & 0x3f) &
             (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar26 * 4);
    if (uVar11 < 0x41) {
      if ((long)puVar27 < 8) {
        if (puVar27 == (uint *)0x0) goto LAB_1000cf184;
        puVar18 = puVar27;
        if ((long)(ulong)(uVar11 >> 3) <= (long)puVar27) {
          puVar18 = (uint *)(ulong)(uVar11 >> 3);
        }
        uVar11 = uVar11 + (int)puVar18 * -8;
      }
      else {
        puVar18 = (uint *)(ulong)(uVar11 >> 3);
        uVar11 = uVar11 & 7;
      }
      puVar27 = (uint *)((long)puVar27 - ((ulong)puVar18 & 0xffffffff));
      uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
    }
LAB_1000cf184:
    uVar11 = uVar11 + uVar26;
    uVar24 = uVar17 >> ((ulong)-uVar11 & 0x3f) &
             (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar26 * 4);
    puVar18 = puVar9;
    if (uVar11 < 0x41) {
      puVar16 = puVar9;
      if (7 < (long)puVar27) {
        uVar1 = uVar11 >> 3;
        uVar11 = uVar11 & 7;
        puVar27 = (uint *)((long)puVar27 - (ulong)uVar1);
        uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
LAB_1000cf1ec:
        do {
          puVar18 = puVar16;
          if ((long)puVar27 < 8) {
            if (puVar27 == (uint *)0x0) goto LAB_1000cf2ec;
            puVar20 = (uint *)(ulong)(uVar11 >> 3);
            bVar25 = (long)puVar20 <= (long)puVar27;
            puVar19 = puVar27;
            if ((long)puVar20 <= (long)puVar27) {
              puVar19 = puVar20;
            }
            uVar11 = uVar11 + (int)puVar19 * -8;
          }
          else {
            puVar19 = (uint *)(ulong)(uVar11 >> 3);
            uVar11 = uVar11 & 7;
            bVar25 = true;
          }
          puVar27 = (uint *)((long)puVar27 - ((ulong)puVar19 & 0xffffffff));
          uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
          if ((puVar15 + -3 <= puVar16) || (!bVar25)) goto LAB_1000cf2ec;
          puVar3 = puVar13 + uVar21 * 2 + 2;
          uVar26 = *puVar3;
          iVar14 = uVar11 + *(byte *)((long)puVar3 + 3);
          uVar11 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
          *(char *)puVar16 = (char)puVar3[1];
          puVar3 = puVar13 + uVar24 * 2 + 2;
          uVar6 = *puVar3;
          iVar2 = iVar14 + (uint)*(byte *)((long)puVar3 + 3);
          uVar1 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
          *(char *)((long)puVar16 + 1) = (char)puVar3[1];
          puVar3 = puVar13 + (uVar17 >> ((ulong)(uint)-iVar14 & 0x3f) & (ulong)uVar11) * 2 +
                             (ulong)uVar26 * 2 + 2;
          iVar14 = iVar2 + (uint)*(byte *)((long)puVar3 + 3);
          uVar21 = (uVar17 >> ((ulong)(uint)-iVar14 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4)) +
                   (ulong)*puVar3;
          *(char *)((long)puVar16 + 2) = (char)puVar3[1];
          puVar3 = puVar13 + (uVar17 >> ((ulong)(uint)-iVar2 & 0x3f) & (ulong)uVar1) * 2 +
                             (ulong)uVar6 * 2 + 2;
          uVar11 = iVar14 + (uint)*(byte *)((long)puVar3 + 3);
          uVar24 = (uVar17 >> ((ulong)-uVar11 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4)) +
                   (ulong)*puVar3;
          *(char *)((long)puVar16 + 3) = (char)puVar3[1];
          puVar18 = puVar16 + 1;
          puVar16 = puVar16 + 1;
          if (0x40 < uVar11) goto LAB_1000cf2ec;
        } while( true );
      }
      if (puVar27 == (uint *)0x0) goto LAB_1000cf1ec;
      puVar19 = puVar27;
      if ((long)(ulong)(uVar11 >> 3) <= (long)puVar27) {
        puVar19 = (uint *)(ulong)(uVar11 >> 3);
      }
      uVar11 = uVar11 + (int)puVar19 * -8;
      puVar27 = (uint *)((long)puVar27 - ((ulong)puVar19 & 0xffffffff));
      uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
      if (uVar11 < 0x41) goto LAB_1000cf1ec;
    }
LAB_1000cf2ec:
    puVar16 = (uint *)(puVar15 + -2);
    if (puVar16 < puVar18) {
      return (uint *)0xffffffffffffffba;
    }
    puVar18 = (uint *)((long)puVar18 + 1);
    while( true ) {
      puVar3 = puVar13 + uVar21 * 2 + 2;
      uVar26 = *puVar3;
      uVar11 = uVar11 + *(byte *)((long)puVar3 + 3);
      uVar1 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
      *(char *)((long)puVar18 + -1) = (char)puVar3[1];
      if (0x40 < uVar11) break;
      if ((long)puVar27 < 8) {
        uVar23 = uVar17;
        uVar12 = uVar11;
        if (puVar27 != (uint *)0x0) {
          puVar19 = puVar27;
          if ((long)(ulong)(uVar11 >> 3) <= (long)puVar27) {
            puVar19 = (uint *)(ulong)(uVar11 >> 3);
          }
          uVar12 = uVar11 + (int)puVar19 * -8;
          goto LAB_1000cf350;
        }
      }
      else {
        puVar19 = (uint *)(ulong)(uVar11 >> 3);
        uVar12 = uVar11 & 7;
LAB_1000cf350:
        puVar27 = (uint *)((long)puVar27 - ((ulong)puVar19 & 0xffffffff));
        uVar23 = *(ulong *)(pbVar10 + (long)puVar27);
      }
      if (puVar16 < puVar18) {
        return (uint *)0xffffffffffffffba;
      }
      uVar21 = (uVar17 >> ((ulong)-uVar11 & 0x3f) & (ulong)uVar1) + (ulong)uVar26;
      puVar3 = puVar13 + uVar24 * 2 + 2;
      uVar26 = *puVar3;
      uVar12 = uVar12 + *(byte *)((long)puVar3 + 3);
      uVar1 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
      *(char *)puVar18 = (char)puVar3[1];
      if (0x40 < uVar12) goto LAB_1000cf424;
      if ((long)puVar27 < 8) {
        uVar17 = uVar23;
        uVar11 = uVar12;
        if (puVar27 != (uint *)0x0) {
          puVar19 = puVar27;
          if ((long)(ulong)(uVar12 >> 3) <= (long)puVar27) {
            puVar19 = (uint *)(ulong)(uVar12 >> 3);
          }
          uVar11 = uVar12 + (int)puVar19 * -8;
          goto LAB_1000cf3bc;
        }
      }
      else {
        puVar19 = (uint *)(ulong)(uVar12 >> 3);
        uVar11 = uVar12 & 7;
LAB_1000cf3bc:
        puVar27 = (uint *)((long)puVar27 - ((ulong)puVar19 & 0xffffffff));
        uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
      }
      uVar24 = (uVar23 >> ((ulong)-uVar12 & 0x3f) & (ulong)uVar1) + (ulong)uVar26;
      puVar19 = (uint *)((long)puVar18 + 1);
      puVar18 = (uint *)((long)puVar18 + 2);
      if (puVar16 < puVar19) {
        return (uint *)0xffffffffffffffba;
      }
    }
LAB_1000cf414:
    puVar15 = (undefined1 *)((long)puVar18 + 1);
    *(char *)puVar18 = (char)(puVar13 + uVar24 * 2 + 2)[1];
LAB_1000cf430:
    return (uint *)(puVar15 + -(long)puVar9);
  }
  if (puVar18 == (uint *)0x0) {
    return (uint *)0xffffffffffffffb8;
  }
  puVar27 = puVar18 + -2;
  if (puVar18 < (uint *)0x8) {
    uVar17 = (ulong)*pbVar10;
    if ((long)puVar18 < 5) {
      if (puVar18 == (uint *)0x2) goto LAB_1000cedd0;
      if (puVar18 == (uint *)0x3) goto LAB_1000cedc8;
      if (puVar18 == (uint *)0x4) goto LAB_1000cedc0;
    }
    else {
      if (puVar18 != (uint *)0x5) {
        if (puVar18 != (uint *)0x6) {
          if (puVar18 != (uint *)0x7) goto LAB_1000cedd8;
          uVar17 = uVar17 | (ulong)pbVar10[6] << 0x30;
        }
        uVar17 = uVar17 + ((ulong)pbVar10[5] << 0x28);
      }
      uVar17 = uVar17 + ((ulong)pbVar10[4] << 0x20);
LAB_1000cedc0:
      uVar17 = uVar17 + (ulong)pbVar10[3] * 0x1000000;
LAB_1000cedc8:
      uVar17 = uVar17 + (ulong)pbVar10[2] * 0x10000;
LAB_1000cedd0:
      uVar17 = uVar17 + (ulong)pbVar10[1] * 0x100;
    }
LAB_1000cedd8:
    if ((pbVar10 + (long)puVar18)[-1] == 0) {
      return (uint *)0xffffffffffffffec;
    }
    puVar27 = (uint *)0x0;
    iVar14 = (int)LZCOUNT((uint)(pbVar10 + (long)puVar18)[-1]) + (int)puVar18 * -8 + 0x29;
  }
  else {
    uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
    if (uVar17 >> 0x38 == 0) {
      return (uint *)0xffffffffffffffff;
    }
    if ((uint *)0xffffffffffffff88 < puVar18) {
      return puVar18;
    }
    iVar14 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar17 >> 0x38)) ^ 0x1f);
  }
  uVar26 = *puVar13;
  uVar11 = iVar14 + (uint)uVar26;
  uVar21 = uVar17 >> ((ulong)-uVar11 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar26 * 4);
  if (uVar11 < 0x41) {
    if ((long)puVar27 < 8) {
      if (puVar27 == (uint *)0x0) goto LAB_1000cef1c;
      puVar18 = puVar27;
      if ((long)(ulong)(uVar11 >> 3) <= (long)puVar27) {
        puVar18 = (uint *)(ulong)(uVar11 >> 3);
      }
      uVar11 = uVar11 + (int)puVar18 * -8;
    }
    else {
      puVar18 = (uint *)(ulong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
    }
    puVar27 = (uint *)((long)puVar27 - ((ulong)puVar18 & 0xffffffff));
    uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
  }
LAB_1000cef1c:
  uVar11 = uVar11 + uVar26;
  uVar23 = (ulong)uVar11;
  uVar24 = uVar17 >> ((ulong)-uVar11 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar26 * 4);
  puVar18 = puVar9;
  if (uVar11 < 0x41) {
    if ((long)puVar27 < 8) {
      if (puVar27 != (uint *)0x0) {
        puVar16 = puVar27;
        if ((long)(ulong)(uVar11 >> 3) <= (long)puVar27) {
          puVar16 = (uint *)(ulong)(uVar11 >> 3);
        }
        uVar11 = uVar11 + (int)puVar16 * -8;
        puVar27 = (uint *)((long)puVar27 - ((ulong)puVar16 & 0xffffffff));
        uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
        goto joined_r0x0001000cef68;
      }
    }
    else {
      uVar23 = (ulong)(uVar11 & 7);
      puVar27 = (uint *)((long)puVar27 - (ulong)(uVar11 >> 3));
      uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
    }
    do {
      uVar11 = (uint)uVar23;
      if ((long)puVar27 < 8) {
        if (puVar27 == (uint *)0x0) break;
        puVar19 = (uint *)(uVar23 >> 3);
        bVar25 = (long)puVar19 <= (long)puVar27;
        puVar16 = puVar27;
        if ((long)puVar19 <= (long)puVar27) {
          puVar16 = puVar19;
        }
        uVar11 = uVar11 + (int)puVar16 * -8;
      }
      else {
        puVar16 = (uint *)(ulong)(uVar11 >> 3);
        uVar11 = uVar11 & 7;
        bVar25 = true;
      }
      uVar23 = (ulong)uVar11;
      puVar27 = (uint *)((long)puVar27 - ((ulong)puVar16 & 0xffffffff));
      uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
      if ((puVar15 + -3 <= puVar18) || (!bVar25)) break;
      puVar3 = puVar13 + uVar21 * 2 + 2;
      uVar26 = *puVar3;
      bVar5 = *(byte *)((long)puVar3 + 3);
      uVar11 = uVar11 + bVar5;
      *(char *)puVar18 = (char)puVar3[1];
      puVar3 = puVar13 + uVar24 * 2 + 2;
      uVar6 = *puVar3;
      bVar4 = *(byte *)((long)puVar3 + 3);
      uVar1 = uVar11 + bVar4;
      *(char *)((long)puVar18 + 1) = (char)puVar3[1];
      puVar3 = puVar13 + ((uVar17 << (uVar23 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) * 2 +
                         (ulong)uVar26 * 2 + 2;
      uVar12 = uVar1 + *(byte *)((long)puVar3 + 3);
      uVar21 = ((uVar17 << ((ulong)uVar1 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar3 + 3) & 0x3f)) + (ulong)*puVar3;
      *(char *)((long)puVar18 + 2) = (char)puVar3[1];
      puVar3 = puVar13 + ((uVar17 << ((ulong)uVar11 & 0x3f)) >> ((ulong)-(uint)bVar4 & 0x3f)) * 2 +
                         (ulong)uVar6 * 2 + 2;
      uVar11 = uVar12 + *(byte *)((long)puVar3 + 3);
      uVar24 = ((uVar17 << ((ulong)uVar12 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar3 + 3) & 0x3f)) + (ulong)*puVar3;
      *(char *)((long)puVar18 + 3) = (char)puVar3[1];
      puVar18 = puVar18 + 1;
joined_r0x0001000cef68:
      uVar23 = (ulong)uVar11;
      if (0x40 < uVar11) break;
    } while( true );
  }
  puVar16 = (uint *)(puVar15 + -2);
  if (puVar18 <= puVar16) {
    puVar18 = (uint *)((long)puVar18 + 1);
    do {
      puVar3 = puVar13 + uVar21 * 2 + 2;
      uVar26 = *puVar3;
      bVar5 = *(byte *)((long)puVar3 + 3);
      uVar11 = (int)uVar23 + (uint)bVar5;
      *(char *)((long)puVar18 + -1) = (char)puVar3[1];
      if (0x40 < uVar11) goto LAB_1000cf414;
      if ((long)puVar27 < 8) {
        uVar22 = uVar17;
        if (puVar27 != (uint *)0x0) {
          puVar19 = puVar27;
          if ((long)(ulong)(uVar11 >> 3) <= (long)puVar27) {
            puVar19 = (uint *)(ulong)(uVar11 >> 3);
          }
          uVar11 = uVar11 + (int)puVar19 * -8;
          goto LAB_1000cf0d0;
        }
      }
      else {
        puVar19 = (uint *)(ulong)(uVar11 >> 3);
        uVar11 = uVar11 & 7;
LAB_1000cf0d0:
        puVar27 = (uint *)((long)puVar27 - ((ulong)puVar19 & 0xffffffff));
        uVar22 = *(ulong *)(pbVar10 + (long)puVar27);
      }
      if (puVar16 < puVar18) {
        return (uint *)0xffffffffffffffba;
      }
      uVar21 = ((uVar17 << (uVar23 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) + (ulong)uVar26;
      puVar3 = puVar13 + uVar24 * 2 + 2;
      uVar26 = *puVar3;
      bVar5 = *(byte *)((long)puVar3 + 3);
      uVar1 = uVar11 + bVar5;
      *(char *)puVar18 = (char)puVar3[1];
      if (0x40 < uVar1) goto LAB_1000cf424;
      if ((long)puVar27 < 8) {
        uVar17 = uVar22;
        if (puVar27 != (uint *)0x0) {
          puVar19 = puVar27;
          if ((long)(ulong)(uVar1 >> 3) <= (long)puVar27) {
            puVar19 = (uint *)(ulong)(uVar1 >> 3);
          }
          uVar1 = uVar1 + (int)puVar19 * -8;
          goto LAB_1000cf138;
        }
      }
      else {
        puVar19 = (uint *)(ulong)(uVar1 >> 3);
        uVar1 = uVar1 & 7;
LAB_1000cf138:
        puVar27 = (uint *)((long)puVar27 - ((ulong)puVar19 & 0xffffffff));
        uVar17 = *(ulong *)(pbVar10 + (long)puVar27);
      }
      uVar23 = (ulong)uVar1;
      uVar24 = ((uVar22 << ((ulong)uVar11 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) + (ulong)uVar26;
      puVar19 = (uint *)((long)puVar18 + 1);
      puVar18 = (uint *)((long)puVar18 + 2);
    } while (puVar19 <= puVar16);
  }
  return (uint *)0xffffffffffffffba;
LAB_1000cf424:
  *(char *)((long)puVar18 + 1) = (char)(puVar13 + uVar21 * 2 + 2)[1];
  puVar15 = (undefined1 *)((long)puVar18 + 2);
  goto LAB_1000cf430;
}



/* Entry: 1000ceb4c; end: 1000cecd3;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_1000ceb4c(uint *param_1,long param_2,byte *param_3,undefined1 *param_4,ushort *param_5)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  bool bVar23;
  ushort uVar24;
  ushort auStack_228 [256];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uint)param_3 < 0x100) {
    uVar10 = (uint)param_4;
    if (uVar10 < 0xd) {
      uVar13 = 0;
      uVar22 = (ulong)((uint)param_3 + 1);
      uVar1 = 1 << (ulong)(uVar10 & 0x1f);
      uVar18 = (ulong)uVar1;
      uVar20 = (ulong)(uVar1 - 1);
      iVar21 = 1;
      do {
        uVar24 = *(ushort *)(param_2 + uVar13 * 2);
        param_3 = (byte *)(long)(short)uVar24;
        if (uVar24 == 0xffff) {
          lVar8 = uVar20 * 4;
          uVar20 = (ulong)((int)uVar20 - 1);
          *(char *)((long)param_1 + 6 + lVar8) = (char)uVar13;
          uVar24 = 1;
        }
        else if ((int)((uint)(0x8000 << (ulong)(uVar10 & 0x1f)) >> 0x10) <= (int)(short)uVar24) {
          iVar21 = 0;
        }
        auStack_228[uVar13] = uVar24;
        uVar13 = uVar13 + 1;
      } while (uVar22 != uVar13);
      uVar13 = 0;
      uVar19 = 0;
      *param_1 = uVar10 | iVar21 << 0x10;
      do {
        sVar7 = *(short *)(param_2 + uVar13 * 2);
        if (0 < sVar7) {
          iVar21 = 0;
          do {
            param_3 = (byte *)(uVar19 * 4);
            param_3[(long)param_1 + 6] = (byte)uVar13;
            do {
              uVar11 = (uVar1 >> 3) + (uVar1 >> 1) + 3 + (int)uVar19 & uVar1 - 1;
              uVar19 = (ulong)uVar11;
            } while ((uint)uVar20 < uVar11);
            iVar21 = iVar21 + 1;
          } while (iVar21 != sVar7);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar22);
      if ((int)uVar19 == 0) {
        puVar9 = (undefined1 *)((long)param_1 + 7);
        do {
          uVar24 = auStack_228[(byte)puVar9[-1]];
          auStack_228[(byte)puVar9[-1]] = uVar24 + 1;
          uVar11 = uVar10 - ((uint)LZCOUNT((uint)uVar24) ^ 0x1f);
          *puVar9 = (char)uVar11;
          *(ushort *)(puVar9 + -3) = (uVar24 << (ulong)(uVar11 & 0x1f)) - (short)uVar1;
          puVar9 = puVar9 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        puVar9 = (undefined1 *)0x0;
      }
      else {
        puVar9 = (undefined1 *)0xffffffffffffffff;
      }
    }
    else {
      puVar9 = (undefined1 *)0xffffffffffffffd4;
    }
  }
  else {
    puVar9 = (undefined1 *)0xffffffffffffffd2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar9;
  }
  func_0x000107c60e78();
  if (param_5[1] == 0) {
    if (param_4 == (undefined1 *)0x0) {
      return (undefined1 *)0xffffffffffffffb8;
    }
    puVar17 = param_4 + -8;
    if (param_4 < (undefined1 *)0x8) {
      uVar13 = (ulong)*param_3;
      if ((long)param_4 < 5) {
        if (param_4 == (undefined1 *)0x2) goto LAB_1000cee98;
        if (param_4 == (undefined1 *)0x3) goto LAB_1000cee90;
        if (param_4 == (undefined1 *)0x4) goto LAB_1000cee88;
      }
      else {
        if (param_4 != (undefined1 *)0x5) {
          if (param_4 != (undefined1 *)0x6) {
            if (param_4 != (undefined1 *)0x7) goto LAB_1000ceea0;
            uVar13 = uVar13 | (ulong)param_3[6] << 0x30;
          }
          uVar13 = uVar13 + ((ulong)param_3[5] << 0x28);
        }
        uVar13 = uVar13 + ((ulong)param_3[4] << 0x20);
LAB_1000cee88:
        uVar13 = uVar13 + (ulong)param_3[3] * 0x1000000;
LAB_1000cee90:
        uVar13 = uVar13 + (ulong)param_3[2] * 0x10000;
LAB_1000cee98:
        uVar13 = uVar13 + (ulong)param_3[1] * 0x100;
      }
LAB_1000ceea0:
      if ((param_3 + (long)param_4)[-1] == 0) {
        return (undefined1 *)0xffffffffffffffec;
      }
      puVar17 = (undefined1 *)0x0;
      iVar21 = (int)LZCOUNT((uint)(param_3 + (long)param_4)[-1]) + (int)param_4 * -8 + 0x29;
    }
    else {
      uVar13 = *(ulong *)(param_3 + (long)puVar17);
      if (uVar13 >> 0x38 == 0) {
        return (undefined1 *)0xffffffffffffffff;
      }
      if ((undefined1 *)0xffffffffffffff88 < param_4) {
        return param_4;
      }
      iVar21 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar13 >> 0x38)) ^ 0x1f);
    }
    uVar24 = *param_5;
    uVar10 = iVar21 + (uint)uVar24;
    uVar18 = uVar13 >> ((ulong)-uVar10 & 0x3f) &
             (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar24 * 4);
    if (uVar10 < 0x41) {
      if ((long)puVar17 < 8) {
        if (puVar17 == (undefined1 *)0x0) goto LAB_1000cf184;
        puVar14 = puVar17;
        if ((long)(ulong)(uVar10 >> 3) <= (long)puVar17) {
          puVar14 = (undefined1 *)(ulong)(uVar10 >> 3);
        }
        uVar10 = uVar10 + (int)puVar14 * -8;
      }
      else {
        puVar14 = (undefined1 *)(ulong)(uVar10 >> 3);
        uVar10 = uVar10 & 7;
      }
      puVar17 = puVar17 + -((ulong)puVar14 & 0xffffffff);
      uVar13 = *(ulong *)(param_3 + (long)puVar17);
    }
LAB_1000cf184:
    uVar10 = uVar10 + uVar24;
    uVar22 = uVar13 >> ((ulong)-uVar10 & 0x3f) &
             (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar24 * 4);
    puVar14 = puVar9;
    if (uVar10 < 0x41) {
      puVar12 = puVar9;
      if (7 < (long)puVar17) {
        uVar1 = uVar10 >> 3;
        uVar10 = uVar10 & 7;
        puVar17 = puVar17 + -(ulong)uVar1;
        uVar13 = *(ulong *)(param_3 + (long)puVar17);
LAB_1000cf1ec:
        do {
          puVar14 = puVar12;
          if ((long)puVar17 < 8) {
            if (puVar17 == (undefined1 *)0x0) goto LAB_1000cf2ec;
            puVar16 = (undefined1 *)(ulong)(uVar10 >> 3);
            bVar23 = (long)puVar16 <= (long)puVar17;
            puVar15 = puVar17;
            if ((long)puVar16 <= (long)puVar17) {
              puVar15 = puVar16;
            }
            uVar10 = uVar10 + (int)puVar15 * -8;
          }
          else {
            puVar15 = (undefined1 *)(ulong)(uVar10 >> 3);
            uVar10 = uVar10 & 7;
            bVar23 = true;
          }
          puVar17 = puVar17 + -((ulong)puVar15 & 0xffffffff);
          uVar13 = *(ulong *)(param_3 + (long)puVar17);
          if ((puVar9 + param_2 + -3 <= puVar12) || (!bVar23)) goto LAB_1000cf2ec;
          puVar3 = param_5 + uVar18 * 2 + 2;
          uVar24 = *puVar3;
          iVar21 = uVar10 + *(byte *)((long)puVar3 + 3);
          uVar10 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
          *puVar12 = (char)puVar3[1];
          puVar3 = param_5 + uVar22 * 2 + 2;
          uVar6 = *puVar3;
          iVar2 = iVar21 + (uint)*(byte *)((long)puVar3 + 3);
          uVar1 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
          puVar12[1] = (char)puVar3[1];
          puVar3 = param_5 + (uVar13 >> ((ulong)(uint)-iVar21 & 0x3f) & (ulong)uVar10) * 2 +
                             (ulong)uVar24 * 2 + 2;
          iVar21 = iVar2 + (uint)*(byte *)((long)puVar3 + 3);
          uVar18 = (uVar13 >> ((ulong)(uint)-iVar21 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4)) +
                   (ulong)*puVar3;
          puVar12[2] = (char)puVar3[1];
          puVar3 = param_5 + (uVar13 >> ((ulong)(uint)-iVar2 & 0x3f) & (ulong)uVar1) * 2 +
                             (ulong)uVar6 * 2 + 2;
          uVar10 = iVar21 + (uint)*(byte *)((long)puVar3 + 3);
          uVar22 = (uVar13 >> ((ulong)-uVar10 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4)) +
                   (ulong)*puVar3;
          puVar12[3] = (char)puVar3[1];
          puVar14 = puVar12 + 4;
          puVar12 = puVar12 + 4;
          if (0x40 < uVar10) goto LAB_1000cf2ec;
        } while( true );
      }
      if (puVar17 == (undefined1 *)0x0) goto LAB_1000cf1ec;
      puVar15 = puVar17;
      if ((long)(ulong)(uVar10 >> 3) <= (long)puVar17) {
        puVar15 = (undefined1 *)(ulong)(uVar10 >> 3);
      }
      uVar10 = uVar10 + (int)puVar15 * -8;
      puVar17 = puVar17 + -((ulong)puVar15 & 0xffffffff);
      uVar13 = *(ulong *)(param_3 + (long)puVar17);
      if (uVar10 < 0x41) goto LAB_1000cf1ec;
    }
LAB_1000cf2ec:
    puVar12 = puVar9 + param_2 + -2;
    if (puVar12 < puVar14) {
      return (undefined1 *)0xffffffffffffffba;
    }
    puVar14 = puVar14 + 1;
    while( true ) {
      puVar3 = param_5 + uVar18 * 2 + 2;
      uVar24 = *puVar3;
      uVar10 = uVar10 + *(byte *)((long)puVar3 + 3);
      uVar1 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
      puVar14[-1] = (char)puVar3[1];
      if (0x40 < uVar10) break;
      if ((long)puVar17 < 8) {
        uVar20 = uVar13;
        uVar11 = uVar10;
        if (puVar17 != (undefined1 *)0x0) {
          puVar15 = puVar17;
          if ((long)(ulong)(uVar10 >> 3) <= (long)puVar17) {
            puVar15 = (undefined1 *)(ulong)(uVar10 >> 3);
          }
          uVar11 = uVar10 + (int)puVar15 * -8;
          goto LAB_1000cf350;
        }
      }
      else {
        puVar15 = (undefined1 *)(ulong)(uVar10 >> 3);
        uVar11 = uVar10 & 7;
LAB_1000cf350:
        puVar17 = puVar17 + -((ulong)puVar15 & 0xffffffff);
        uVar20 = *(ulong *)(param_3 + (long)puVar17);
      }
      if (puVar12 < puVar14) {
        return (undefined1 *)0xffffffffffffffba;
      }
      uVar18 = (uVar13 >> ((ulong)-uVar10 & 0x3f) & (ulong)uVar1) + (ulong)uVar24;
      puVar3 = param_5 + uVar22 * 2 + 2;
      uVar24 = *puVar3;
      uVar11 = uVar11 + *(byte *)((long)puVar3 + 3);
      uVar1 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar3 + 3) * 4);
      *puVar14 = (char)puVar3[1];
      if (0x40 < uVar11) goto LAB_1000cf424;
      if ((long)puVar17 < 8) {
        uVar13 = uVar20;
        uVar10 = uVar11;
        if (puVar17 != (undefined1 *)0x0) {
          puVar15 = puVar17;
          if ((long)(ulong)(uVar11 >> 3) <= (long)puVar17) {
            puVar15 = (undefined1 *)(ulong)(uVar11 >> 3);
          }
          uVar10 = uVar11 + (int)puVar15 * -8;
          goto LAB_1000cf3bc;
        }
      }
      else {
        puVar15 = (undefined1 *)(ulong)(uVar11 >> 3);
        uVar10 = uVar11 & 7;
LAB_1000cf3bc:
        puVar17 = puVar17 + -((ulong)puVar15 & 0xffffffff);
        uVar13 = *(ulong *)(param_3 + (long)puVar17);
      }
      uVar22 = (uVar20 >> ((ulong)-uVar11 & 0x3f) & (ulong)uVar1) + (ulong)uVar24;
      puVar15 = puVar14 + 1;
      puVar14 = puVar14 + 2;
      if (puVar12 < puVar15) {
        return (undefined1 *)0xffffffffffffffba;
      }
    }
LAB_1000cf414:
    puVar17 = puVar14 + 1;
    *puVar14 = (char)(param_5 + uVar22 * 2 + 2)[1];
LAB_1000cf430:
    return puVar17 + -(long)puVar9;
  }
  if (param_4 == (undefined1 *)0x0) {
    return (undefined1 *)0xffffffffffffffb8;
  }
  puVar17 = param_4 + -8;
  if (param_4 < (undefined1 *)0x8) {
    uVar13 = (ulong)*param_3;
    if ((long)param_4 < 5) {
      if (param_4 == (undefined1 *)0x2) goto LAB_1000cedd0;
      if (param_4 == (undefined1 *)0x3) goto LAB_1000cedc8;
      if (param_4 == (undefined1 *)0x4) goto LAB_1000cedc0;
    }
    else {
      if (param_4 != (undefined1 *)0x5) {
        if (param_4 != (undefined1 *)0x6) {
          if (param_4 != (undefined1 *)0x7) goto LAB_1000cedd8;
          uVar13 = uVar13 | (ulong)param_3[6] << 0x30;
        }
        uVar13 = uVar13 + ((ulong)param_3[5] << 0x28);
      }
      uVar13 = uVar13 + ((ulong)param_3[4] << 0x20);
LAB_1000cedc0:
      uVar13 = uVar13 + (ulong)param_3[3] * 0x1000000;
LAB_1000cedc8:
      uVar13 = uVar13 + (ulong)param_3[2] * 0x10000;
LAB_1000cedd0:
      uVar13 = uVar13 + (ulong)param_3[1] * 0x100;
    }
LAB_1000cedd8:
    if ((param_3 + (long)param_4)[-1] == 0) {
      return (undefined1 *)0xffffffffffffffec;
    }
    puVar17 = (undefined1 *)0x0;
    iVar21 = (int)LZCOUNT((uint)(param_3 + (long)param_4)[-1]) + (int)param_4 * -8 + 0x29;
  }
  else {
    uVar13 = *(ulong *)(param_3 + (long)puVar17);
    if (uVar13 >> 0x38 == 0) {
      return (undefined1 *)0xffffffffffffffff;
    }
    if ((undefined1 *)0xffffffffffffff88 < param_4) {
      return param_4;
    }
    iVar21 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar13 >> 0x38)) ^ 0x1f);
  }
  uVar24 = *param_5;
  uVar10 = iVar21 + (uint)uVar24;
  uVar18 = uVar13 >> ((ulong)-uVar10 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar24 * 4);
  if (uVar10 < 0x41) {
    if ((long)puVar17 < 8) {
      if (puVar17 == (undefined1 *)0x0) goto LAB_1000cef1c;
      puVar14 = puVar17;
      if ((long)(ulong)(uVar10 >> 3) <= (long)puVar17) {
        puVar14 = (undefined1 *)(ulong)(uVar10 >> 3);
      }
      uVar10 = uVar10 + (int)puVar14 * -8;
    }
    else {
      puVar14 = (undefined1 *)(ulong)(uVar10 >> 3);
      uVar10 = uVar10 & 7;
    }
    puVar17 = puVar17 + -((ulong)puVar14 & 0xffffffff);
    uVar13 = *(ulong *)(param_3 + (long)puVar17);
  }
LAB_1000cef1c:
  uVar10 = uVar10 + uVar24;
  uVar20 = (ulong)uVar10;
  uVar22 = uVar13 >> ((ulong)-uVar10 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar24 * 4);
  puVar14 = puVar9;
  if (uVar10 < 0x41) {
    if ((long)puVar17 < 8) {
      if (puVar17 != (undefined1 *)0x0) {
        puVar12 = puVar17;
        if ((long)(ulong)(uVar10 >> 3) <= (long)puVar17) {
          puVar12 = (undefined1 *)(ulong)(uVar10 >> 3);
        }
        uVar10 = uVar10 + (int)puVar12 * -8;
        puVar17 = puVar17 + -((ulong)puVar12 & 0xffffffff);
        uVar13 = *(ulong *)(param_3 + (long)puVar17);
        goto joined_r0x0001000cef68;
      }
    }
    else {
      uVar20 = (ulong)(uVar10 & 7);
      puVar17 = puVar17 + -(ulong)(uVar10 >> 3);
      uVar13 = *(ulong *)(param_3 + (long)puVar17);
    }
    do {
      uVar10 = (uint)uVar20;
      if ((long)puVar17 < 8) {
        if (puVar17 == (undefined1 *)0x0) break;
        puVar15 = (undefined1 *)(uVar20 >> 3);
        bVar23 = (long)puVar15 <= (long)puVar17;
        puVar12 = puVar17;
        if ((long)puVar15 <= (long)puVar17) {
          puVar12 = puVar15;
        }
        uVar10 = uVar10 + (int)puVar12 * -8;
      }
      else {
        puVar12 = (undefined1 *)(ulong)(uVar10 >> 3);
        uVar10 = uVar10 & 7;
        bVar23 = true;
      }
      uVar20 = (ulong)uVar10;
      puVar17 = puVar17 + -((ulong)puVar12 & 0xffffffff);
      uVar13 = *(ulong *)(param_3 + (long)puVar17);
      if ((puVar9 + param_2 + -3 <= puVar14) || (!bVar23)) break;
      puVar3 = param_5 + uVar18 * 2 + 2;
      uVar24 = *puVar3;
      bVar5 = *(byte *)((long)puVar3 + 3);
      uVar10 = uVar10 + bVar5;
      *puVar14 = (char)puVar3[1];
      puVar3 = param_5 + uVar22 * 2 + 2;
      uVar6 = *puVar3;
      bVar4 = *(byte *)((long)puVar3 + 3);
      uVar1 = uVar10 + bVar4;
      puVar14[1] = (char)puVar3[1];
      puVar3 = param_5 + ((uVar13 << (uVar20 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) * 2 +
                         (ulong)uVar24 * 2 + 2;
      uVar11 = uVar1 + *(byte *)((long)puVar3 + 3);
      uVar18 = ((uVar13 << ((ulong)uVar1 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar3 + 3) & 0x3f)) + (ulong)*puVar3;
      puVar14[2] = (char)puVar3[1];
      puVar3 = param_5 + ((uVar13 << ((ulong)uVar10 & 0x3f)) >> ((ulong)-(uint)bVar4 & 0x3f)) * 2 +
                         (ulong)uVar6 * 2 + 2;
      uVar10 = uVar11 + *(byte *)((long)puVar3 + 3);
      uVar22 = ((uVar13 << ((ulong)uVar11 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar3 + 3) & 0x3f)) + (ulong)*puVar3;
      puVar14[3] = (char)puVar3[1];
      puVar14 = puVar14 + 4;
joined_r0x0001000cef68:
      uVar20 = (ulong)uVar10;
      if (0x40 < uVar10) break;
    } while( true );
  }
  puVar12 = puVar9 + param_2 + -2;
  if (puVar14 <= puVar12) {
    puVar14 = puVar14 + 1;
    do {
      puVar3 = param_5 + uVar18 * 2 + 2;
      uVar24 = *puVar3;
      bVar5 = *(byte *)((long)puVar3 + 3);
      uVar10 = (int)uVar20 + (uint)bVar5;
      puVar14[-1] = (char)puVar3[1];
      if (0x40 < uVar10) goto LAB_1000cf414;
      if ((long)puVar17 < 8) {
        uVar19 = uVar13;
        if (puVar17 != (undefined1 *)0x0) {
          puVar15 = puVar17;
          if ((long)(ulong)(uVar10 >> 3) <= (long)puVar17) {
            puVar15 = (undefined1 *)(ulong)(uVar10 >> 3);
          }
          uVar10 = uVar10 + (int)puVar15 * -8;
          goto LAB_1000cf0d0;
        }
      }
      else {
        puVar15 = (undefined1 *)(ulong)(uVar10 >> 3);
        uVar10 = uVar10 & 7;
LAB_1000cf0d0:
        puVar17 = puVar17 + -((ulong)puVar15 & 0xffffffff);
        uVar19 = *(ulong *)(param_3 + (long)puVar17);
      }
      if (puVar12 < puVar14) {
        return (undefined1 *)0xffffffffffffffba;
      }
      uVar18 = ((uVar13 << (uVar20 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) + (ulong)uVar24;
      puVar3 = param_5 + uVar22 * 2 + 2;
      uVar24 = *puVar3;
      bVar5 = *(byte *)((long)puVar3 + 3);
      uVar1 = uVar10 + bVar5;
      *puVar14 = (char)puVar3[1];
      if (0x40 < uVar1) goto LAB_1000cf424;
      if ((long)puVar17 < 8) {
        uVar13 = uVar19;
        if (puVar17 != (undefined1 *)0x0) {
          puVar15 = puVar17;
          if ((long)(ulong)(uVar1 >> 3) <= (long)puVar17) {
            puVar15 = (undefined1 *)(ulong)(uVar1 >> 3);
          }
          uVar1 = uVar1 + (int)puVar15 * -8;
          goto LAB_1000cf138;
        }
      }
      else {
        puVar15 = (undefined1 *)(ulong)(uVar1 >> 3);
        uVar1 = uVar1 & 7;
LAB_1000cf138:
        puVar17 = puVar17 + -((ulong)puVar15 & 0xffffffff);
        uVar13 = *(ulong *)(param_3 + (long)puVar17);
      }
      uVar20 = (ulong)uVar1;
      uVar22 = ((uVar19 << ((ulong)uVar10 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) + (ulong)uVar24;
      puVar15 = puVar14 + 1;
      puVar14 = puVar14 + 2;
    } while (puVar15 <= puVar12);
  }
  return (undefined1 *)0xffffffffffffffba;
LAB_1000cf424:
  puVar14[1] = (char)(param_5 + uVar18 * 2 + 2)[1];
  puVar17 = puVar14 + 2;
  goto LAB_1000cf430;
}



/* Entry: 1000cecd4; end: 1000cf43b;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1000cecd4(undefined1 *param_1,long param_2,byte *param_3,ulong param_4,ushort *param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  bool bVar19;
  ulong uVar20;
  
  if (param_5[1] == 0) {
    if (param_4 == 0) {
      return 0xffffffffffffffb8;
    }
    uVar13 = param_4 - 8;
    if (param_4 < 8) {
      uVar12 = (ulong)*param_3;
      if ((long)param_4 < 5) {
        if (param_4 == 2) goto LAB_1000cee98;
        if (param_4 == 3) goto LAB_1000cee90;
        if (param_4 == 4) goto LAB_1000cee88;
      }
      else {
        if (param_4 != 5) {
          if (param_4 != 6) {
            if (param_4 != 7) goto LAB_1000ceea0;
            uVar12 = uVar12 | (ulong)param_3[6] << 0x30;
          }
          uVar12 = uVar12 + ((ulong)param_3[5] << 0x28);
        }
        uVar12 = uVar12 + ((ulong)param_3[4] << 0x20);
LAB_1000cee88:
        uVar12 = uVar12 + (ulong)param_3[3] * 0x1000000;
LAB_1000cee90:
        uVar12 = uVar12 + (ulong)param_3[2] * 0x10000;
LAB_1000cee98:
        uVar12 = uVar12 + (ulong)param_3[1] * 0x100;
      }
LAB_1000ceea0:
      if (param_3[param_4 - 1] == 0) {
        return 0xffffffffffffffec;
      }
      uVar13 = 0;
      iVar14 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
    }
    else {
      uVar12 = *(ulong *)(param_3 + uVar13);
      if (uVar12 >> 0x38 == 0) {
        return 0xffffffffffffffff;
      }
      if (0xffffffffffffff88 < param_4) {
        return param_4;
      }
      iVar14 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar12 >> 0x38)) ^ 0x1f);
    }
    uVar7 = *param_5;
    uVar17 = iVar14 + (uint)uVar7;
    uVar15 = uVar12 >> ((ulong)-uVar17 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar7 * 4)
    ;
    if (uVar17 < 0x41) {
      if ((long)uVar13 < 8) {
        if (uVar13 == 0) goto LAB_1000cf184;
        uVar12 = uVar13;
        if ((long)(ulong)(uVar17 >> 3) <= (long)uVar13) {
          uVar12 = (ulong)(uVar17 >> 3);
        }
        uVar17 = uVar17 + (int)uVar12 * -8;
      }
      else {
        uVar12 = (ulong)(uVar17 >> 3);
        uVar17 = uVar17 & 7;
      }
      uVar13 = uVar13 - (uVar12 & 0xffffffff);
      uVar12 = *(ulong *)(param_3 + uVar13);
    }
LAB_1000cf184:
    uVar17 = uVar17 + uVar7;
    uVar18 = uVar12 >> ((ulong)-uVar17 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar7 * 4)
    ;
    puVar10 = param_1;
    if (uVar17 < 0x41) {
      puVar11 = param_1;
      if (7 < (long)uVar13) {
        uVar2 = uVar17 >> 3;
        uVar17 = uVar17 & 7;
        uVar13 = uVar13 - uVar2;
        uVar12 = *(ulong *)(param_3 + uVar13);
LAB_1000cf1ec:
        do {
          puVar10 = puVar11;
          if ((long)uVar13 < 8) {
            if (uVar13 == 0) goto LAB_1000cf2ec;
            uVar16 = (ulong)(uVar17 >> 3);
            bVar19 = (long)uVar16 <= (long)uVar13;
            uVar12 = uVar13;
            if ((long)uVar16 <= (long)uVar13) {
              uVar12 = uVar16;
            }
            uVar17 = uVar17 + (int)uVar12 * -8;
          }
          else {
            uVar12 = (ulong)(uVar17 >> 3);
            uVar17 = uVar17 & 7;
            bVar19 = true;
          }
          uVar13 = uVar13 - (uVar12 & 0xffffffff);
          uVar12 = *(ulong *)(param_3 + uVar13);
          if ((param_1 + param_2 + -3 <= puVar11) || (!bVar19)) goto LAB_1000cf2ec;
          puVar4 = param_5 + uVar15 * 2 + 2;
          uVar7 = *puVar4;
          iVar14 = uVar17 + *(byte *)((long)puVar4 + 3);
          uVar17 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
          *puVar11 = (char)puVar4[1];
          puVar4 = param_5 + uVar18 * 2 + 2;
          uVar8 = *puVar4;
          iVar3 = iVar14 + (uint)*(byte *)((long)puVar4 + 3);
          uVar2 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
          puVar11[1] = (char)puVar4[1];
          puVar4 = param_5 + (uVar12 >> ((ulong)(uint)-iVar14 & 0x3f) & (ulong)uVar17) * 2 +
                             (ulong)uVar7 * 2 + 2;
          iVar14 = iVar3 + (uint)*(byte *)((long)puVar4 + 3);
          uVar15 = (uVar12 >> ((ulong)(uint)-iVar14 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar4 + 3) * 4)) +
                   (ulong)*puVar4;
          puVar11[2] = (char)puVar4[1];
          puVar4 = param_5 + (uVar12 >> ((ulong)(uint)-iVar3 & 0x3f) & (ulong)uVar2) * 2 +
                             (ulong)uVar8 * 2 + 2;
          uVar17 = iVar14 + (uint)*(byte *)((long)puVar4 + 3);
          uVar18 = (uVar12 >> ((ulong)-uVar17 & 0x3f) &
                   (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar4 + 3) * 4)) +
                   (ulong)*puVar4;
          puVar11[3] = (char)puVar4[1];
          puVar10 = puVar11 + 4;
          puVar11 = puVar11 + 4;
          if (0x40 < uVar17) goto LAB_1000cf2ec;
        } while( true );
      }
      if (uVar13 == 0) goto LAB_1000cf1ec;
      uVar12 = uVar13;
      if ((long)(ulong)(uVar17 >> 3) <= (long)uVar13) {
        uVar12 = (ulong)(uVar17 >> 3);
      }
      uVar17 = uVar17 + (int)uVar12 * -8;
      uVar13 = uVar13 - (uVar12 & 0xffffffff);
      uVar12 = *(ulong *)(param_3 + uVar13);
      if (uVar17 < 0x41) goto LAB_1000cf1ec;
    }
LAB_1000cf2ec:
    puVar11 = param_1 + param_2 + -2;
    if (puVar11 < puVar10) {
      return 0xffffffffffffffba;
    }
    puVar10 = puVar10 + 1;
    while( true ) {
      puVar4 = param_5 + uVar15 * 2 + 2;
      uVar7 = *puVar4;
      uVar17 = uVar17 + *(byte *)((long)puVar4 + 3);
      uVar2 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
      puVar10[-1] = (char)puVar4[1];
      if (0x40 < uVar17) break;
      if ((long)uVar13 < 8) {
        uVar16 = uVar12;
        uVar9 = uVar17;
        if (uVar13 != 0) {
          uVar15 = uVar13;
          if ((long)(ulong)(uVar17 >> 3) <= (long)uVar13) {
            uVar15 = (ulong)(uVar17 >> 3);
          }
          uVar9 = uVar17 + (int)uVar15 * -8;
          goto LAB_1000cf350;
        }
      }
      else {
        uVar15 = (ulong)(uVar17 >> 3);
        uVar9 = uVar17 & 7;
LAB_1000cf350:
        uVar13 = uVar13 - (uVar15 & 0xffffffff);
        uVar16 = *(ulong *)(param_3 + uVar13);
      }
      if (puVar11 < puVar10) {
        return 0xffffffffffffffba;
      }
      uVar15 = (uVar12 >> ((ulong)-uVar17 & 0x3f) & (ulong)uVar2) + (ulong)uVar7;
      puVar4 = param_5 + uVar18 * 2 + 2;
      uVar7 = *puVar4;
      uVar9 = uVar9 + *(byte *)((long)puVar4 + 3);
      uVar2 = *(uint *)(&UNK_10e00f7c4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
      *puVar10 = (char)puVar4[1];
      if (0x40 < uVar9) goto LAB_1000cf424;
      if ((long)uVar13 < 8) {
        uVar12 = uVar16;
        uVar17 = uVar9;
        if (uVar13 != 0) {
          uVar12 = uVar13;
          if ((long)(ulong)(uVar9 >> 3) <= (long)uVar13) {
            uVar12 = (ulong)(uVar9 >> 3);
          }
          uVar17 = uVar9 + (int)uVar12 * -8;
          goto LAB_1000cf3bc;
        }
      }
      else {
        uVar12 = (ulong)(uVar9 >> 3);
        uVar17 = uVar9 & 7;
LAB_1000cf3bc:
        uVar13 = uVar13 - (uVar12 & 0xffffffff);
        uVar12 = *(ulong *)(param_3 + uVar13);
      }
      uVar18 = (uVar16 >> ((ulong)-uVar9 & 0x3f) & (ulong)uVar2) + (ulong)uVar7;
      puVar1 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      if (puVar11 < puVar1) {
        return 0xffffffffffffffba;
      }
    }
LAB_1000cf414:
    puVar11 = puVar10 + 1;
    *puVar10 = (char)(param_5 + uVar18 * 2 + 2)[1];
LAB_1000cf430:
    return (long)puVar11 - (long)param_1;
  }
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar13 = param_4 - 8;
  if (param_4 < 8) {
    uVar12 = (ulong)*param_3;
    if ((long)param_4 < 5) {
      if (param_4 == 2) goto LAB_1000cedd0;
      if (param_4 == 3) goto LAB_1000cedc8;
      if (param_4 == 4) goto LAB_1000cedc0;
    }
    else {
      if (param_4 != 5) {
        if (param_4 != 6) {
          if (param_4 != 7) goto LAB_1000cedd8;
          uVar12 = uVar12 | (ulong)param_3[6] << 0x30;
        }
        uVar12 = uVar12 + ((ulong)param_3[5] << 0x28);
      }
      uVar12 = uVar12 + ((ulong)param_3[4] << 0x20);
LAB_1000cedc0:
      uVar12 = uVar12 + (ulong)param_3[3] * 0x1000000;
LAB_1000cedc8:
      uVar12 = uVar12 + (ulong)param_3[2] * 0x10000;
LAB_1000cedd0:
      uVar12 = uVar12 + (ulong)param_3[1] * 0x100;
    }
LAB_1000cedd8:
    if (param_3[param_4 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    uVar13 = 0;
    iVar14 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
  }
  else {
    uVar12 = *(ulong *)(param_3 + uVar13);
    if (uVar12 >> 0x38 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    iVar14 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar12 >> 0x38)) ^ 0x1f);
  }
  uVar7 = *param_5;
  uVar17 = iVar14 + (uint)uVar7;
  uVar15 = uVar12 >> ((ulong)-uVar17 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar7 * 4);
  if (uVar17 < 0x41) {
    if ((long)uVar13 < 8) {
      if (uVar13 == 0) goto LAB_1000cef1c;
      uVar12 = uVar13;
      if ((long)(ulong)(uVar17 >> 3) <= (long)uVar13) {
        uVar12 = (ulong)(uVar17 >> 3);
      }
      uVar17 = uVar17 + (int)uVar12 * -8;
    }
    else {
      uVar12 = (ulong)(uVar17 >> 3);
      uVar17 = uVar17 & 7;
    }
    uVar13 = uVar13 - (uVar12 & 0xffffffff);
    uVar12 = *(ulong *)(param_3 + uVar13);
  }
LAB_1000cef1c:
  uVar17 = uVar17 + uVar7;
  uVar16 = (ulong)uVar17;
  uVar18 = uVar12 >> ((ulong)-uVar17 & 0x3f) & (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar7 * 4);
  puVar10 = param_1;
  if (uVar17 < 0x41) {
    if ((long)uVar13 < 8) {
      if (uVar13 != 0) {
        uVar12 = uVar13;
        if ((long)(ulong)(uVar17 >> 3) <= (long)uVar13) {
          uVar12 = (ulong)(uVar17 >> 3);
        }
        uVar17 = uVar17 + (int)uVar12 * -8;
        uVar13 = uVar13 - (uVar12 & 0xffffffff);
        uVar12 = *(ulong *)(param_3 + uVar13);
        goto joined_r0x0001000cef68;
      }
    }
    else {
      uVar16 = (ulong)(uVar17 & 7);
      uVar13 = uVar13 - (uVar17 >> 3);
      uVar12 = *(ulong *)(param_3 + uVar13);
    }
    do {
      uVar17 = (uint)uVar16;
      if ((long)uVar13 < 8) {
        if (uVar13 == 0) break;
        uVar16 = uVar16 >> 3;
        bVar19 = (long)uVar16 <= (long)uVar13;
        uVar12 = uVar13;
        if ((long)uVar16 <= (long)uVar13) {
          uVar12 = uVar16;
        }
        uVar17 = uVar17 + (int)uVar12 * -8;
      }
      else {
        uVar12 = (ulong)(uVar17 >> 3);
        uVar17 = uVar17 & 7;
        bVar19 = true;
      }
      uVar16 = (ulong)uVar17;
      uVar13 = uVar13 - (uVar12 & 0xffffffff);
      uVar12 = *(ulong *)(param_3 + uVar13);
      if ((param_1 + param_2 + -3 <= puVar10) || (!bVar19)) break;
      puVar4 = param_5 + uVar15 * 2 + 2;
      uVar7 = *puVar4;
      bVar6 = *(byte *)((long)puVar4 + 3);
      uVar17 = uVar17 + bVar6;
      *puVar10 = (char)puVar4[1];
      puVar4 = param_5 + uVar18 * 2 + 2;
      uVar8 = *puVar4;
      bVar5 = *(byte *)((long)puVar4 + 3);
      uVar2 = uVar17 + bVar5;
      puVar10[1] = (char)puVar4[1];
      puVar4 = param_5 + ((uVar12 << (uVar16 & 0x3f)) >> ((ulong)-(uint)bVar6 & 0x3f)) * 2 +
                         (ulong)uVar7 * 2 + 2;
      uVar9 = uVar2 + *(byte *)((long)puVar4 + 3);
      uVar15 = ((uVar12 << ((ulong)uVar2 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar4 + 3) & 0x3f)) + (ulong)*puVar4;
      puVar10[2] = (char)puVar4[1];
      puVar4 = param_5 + ((uVar12 << ((ulong)uVar17 & 0x3f)) >> ((ulong)-(uint)bVar5 & 0x3f)) * 2 +
                         (ulong)uVar8 * 2 + 2;
      uVar17 = uVar9 + *(byte *)((long)puVar4 + 3);
      uVar18 = ((uVar12 << ((ulong)uVar9 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar4 + 3) & 0x3f)) + (ulong)*puVar4;
      puVar10[3] = (char)puVar4[1];
      puVar10 = puVar10 + 4;
joined_r0x0001000cef68:
      uVar16 = (ulong)uVar17;
      if (0x40 < uVar17) break;
    } while( true );
  }
  puVar11 = param_1 + param_2 + -2;
  if (puVar10 <= puVar11) {
    puVar10 = puVar10 + 1;
    do {
      puVar4 = param_5 + uVar15 * 2 + 2;
      uVar7 = *puVar4;
      bVar6 = *(byte *)((long)puVar4 + 3);
      uVar17 = (int)uVar16 + (uint)bVar6;
      puVar10[-1] = (char)puVar4[1];
      if (0x40 < uVar17) goto LAB_1000cf414;
      if ((long)uVar13 < 8) {
        uVar20 = uVar12;
        if (uVar13 != 0) {
          uVar15 = uVar13;
          if ((long)(ulong)(uVar17 >> 3) <= (long)uVar13) {
            uVar15 = (ulong)(uVar17 >> 3);
          }
          uVar17 = uVar17 + (int)uVar15 * -8;
          goto LAB_1000cf0d0;
        }
      }
      else {
        uVar15 = (ulong)(uVar17 >> 3);
        uVar17 = uVar17 & 7;
LAB_1000cf0d0:
        uVar13 = uVar13 - (uVar15 & 0xffffffff);
        uVar20 = *(ulong *)(param_3 + uVar13);
      }
      if (puVar11 < puVar10) {
        return 0xffffffffffffffba;
      }
      uVar15 = ((uVar12 << (uVar16 & 0x3f)) >> ((ulong)-(uint)bVar6 & 0x3f)) + (ulong)uVar7;
      puVar4 = param_5 + uVar18 * 2 + 2;
      uVar7 = *puVar4;
      bVar6 = *(byte *)((long)puVar4 + 3);
      uVar2 = uVar17 + bVar6;
      *puVar10 = (char)puVar4[1];
      if (0x40 < uVar2) goto LAB_1000cf424;
      if ((long)uVar13 < 8) {
        uVar12 = uVar20;
        if (uVar13 != 0) {
          uVar12 = uVar13;
          if ((long)(ulong)(uVar2 >> 3) <= (long)uVar13) {
            uVar12 = (ulong)(uVar2 >> 3);
          }
          uVar2 = uVar2 + (int)uVar12 * -8;
          goto LAB_1000cf138;
        }
      }
      else {
        uVar12 = (ulong)(uVar2 >> 3);
        uVar2 = uVar2 & 7;
LAB_1000cf138:
        uVar13 = uVar13 - (uVar12 & 0xffffffff);
        uVar12 = *(ulong *)(param_3 + uVar13);
      }
      uVar16 = (ulong)uVar2;
      uVar18 = ((uVar20 << ((ulong)uVar17 & 0x3f)) >> ((ulong)-(uint)bVar6 & 0x3f)) + (ulong)uVar7;
      puVar1 = puVar10 + 1;
      puVar10 = puVar10 + 2;
    } while (puVar1 <= puVar11);
  }
  return 0xffffffffffffffba;
LAB_1000cf424:
  puVar10[1] = (char)(param_5 + uVar15 * 2 + 2)[1];
  puVar11 = puVar10 + 2;
  goto LAB_1000cf430;
}



/* Entry: 1000cf43c; end: 1000d01fb;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1000cf43c(undefined1 *param_1,long *param_2,ushort *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  undefined1 *puVar29;
  uint uVar30;
  uint uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long *plStack_110;
  long lStack_108;
  uint uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  uint uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  uint uStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  
  if (param_4 < 10) {
    return (long *)0xffffffffffffffec;
  }
  uVar12 = *param_3;
  uVar13 = param_3[1];
  uVar14 = param_3[2];
  uVar25 = (ulong)uVar12 + (ulong)uVar13 + (ulong)uVar14 + 6;
  if (param_4 < uVar25) {
    return (long *)0xffffffffffffffec;
  }
  if (uVar12 == 0) {
    return (long *)0xffffffffffffffb8;
  }
  puStack_78 = (ulong *)(param_3 + 3);
  puStack_a0 = (ulong *)((long)puStack_78 + (ulong)uVar12);
  uVar15 = *(ushort *)(param_5 + 2);
  puStack_70 = (ulong *)(param_3 + 7);
  if (uVar12 < 8) {
    uStack_90 = (ulong)(byte)*puStack_78;
    uVar30 = (uint)uVar12;
    if (uVar12 < 5) {
      if (uVar30 == 2) goto LAB_1000cf560;
      if (uVar30 == 3) goto LAB_1000cf558;
      if (uVar30 == 4) goto LAB_1000cf550;
    }
    else {
      if (uVar12 != 5) {
        if (uVar12 != 6) {
          if (uVar30 != 7) goto LAB_1000cf56c;
          uStack_90 = uStack_90 | (ulong)(byte)param_3[6] << 0x30;
        }
        uStack_90 = uStack_90 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
      }
      uStack_90 = uStack_90 + ((ulong)(byte)param_3[5] << 0x20);
LAB_1000cf550:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
LAB_1000cf558:
      uStack_90 = uStack_90 + (ulong)(byte)param_3[4] * 0x10000;
LAB_1000cf560:
      uStack_90 = uStack_90 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
    }
LAB_1000cf56c:
    if (*(byte *)((long)puStack_a0 + -1) != 0) {
      uStack_88 = (int)LZCOUNT((uint)*(byte *)((long)puStack_a0 + -1)) + uVar30 * -8 + 0x29;
      puStack_80 = puStack_78;
      goto LAB_1000cf580;
    }
LAB_1000cfb9c:
    plVar21 = (long *)0xffffffffffffffec;
  }
  else {
    uStack_90 = puStack_a0[-1];
    if (uStack_90 >> 0x38 == 0) {
      return (long *)0xffffffffffffffff;
    }
    uStack_88 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_90 >> 0x38)) ^ 0x1f);
    puStack_80 = puStack_a0 + -1;
LAB_1000cf580:
    if (uVar13 != 0) {
      puStack_c8 = (ulong *)((long)puStack_a0 + (ulong)uVar13);
      puStack_98 = puStack_a0 + 1;
      if (uVar13 < 8) {
        uStack_b8 = (ulong)(byte)*puStack_a0;
        uVar30 = (uint)uVar13;
        if (uVar13 < 5) {
          if (uVar30 == 2) goto LAB_1000cf638;
          if (uVar30 == 3) goto LAB_1000cf630;
          if (uVar30 == 4) goto LAB_1000cf628;
        }
        else {
          if (uVar13 != 5) {
            if (uVar13 != 6) {
              if (uVar30 != 7) goto LAB_1000cf644;
              uStack_b8 = uStack_b8 | (ulong)*(byte *)((long)puStack_a0 + 6) << 0x30;
            }
            uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 5) << 0x28);
          }
          uStack_b8 = uStack_b8 + ((ulong)*(byte *)((long)puStack_a0 + 4) << 0x20);
LAB_1000cf628:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 3) * 0x1000000;
LAB_1000cf630:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 2) * 0x10000;
LAB_1000cf638:
          uStack_b8 = uStack_b8 + (ulong)*(byte *)((long)puStack_a0 + 1) * 0x100;
        }
LAB_1000cf644:
        if (*(byte *)((long)puStack_c8 + -1) == 0) goto LAB_1000cfb9c;
        uStack_b0 = (int)LZCOUNT((uint)*(byte *)((long)puStack_c8 + -1)) + uVar30 * -8 + 0x29;
        puStack_a8 = puStack_a0;
      }
      else {
        uStack_b8 = puStack_c8[-1];
        if (uStack_b8 >> 0x38 == 0) {
          return (long *)0xffffffffffffffff;
        }
        uStack_b0 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_b8 >> 0x38)) ^ 0x1f);
        puStack_a8 = puStack_c8 + -1;
      }
      if (uVar14 != 0) {
        pbVar4 = (byte *)((long)puStack_c8 + (ulong)uVar14);
        puStack_c0 = puStack_c8 + 1;
        if (7 < uVar14) {
          uStack_e0 = *(ulong *)(pbVar4 + -8);
          if (uStack_e0 >> 0x38 == 0) {
            return (long *)0xffffffffffffffff;
          }
          uStack_d8 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_e0 >> 0x38)) ^ 0x1f);
          puStack_d0 = (ulong *)(pbVar4 + -8);
          goto LAB_1000cf740;
        }
        uStack_e0 = (ulong)(byte)*puStack_c8;
        uVar30 = (uint)uVar14;
        if (uVar14 < 5) {
          if (uVar30 == 2) goto LAB_1000cf720;
          if (uVar30 == 3) goto LAB_1000cf718;
          if (uVar30 == 4) goto LAB_1000cf710;
        }
        else {
          if (uVar14 != 5) {
            if (uVar14 != 6) {
              if (uVar30 != 7) goto LAB_1000cf72c;
              uStack_e0 = uStack_e0 | (ulong)*(byte *)((long)puStack_c8 + 6) << 0x30;
            }
            uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 5) << 0x28);
          }
          uStack_e0 = uStack_e0 + ((ulong)*(byte *)((long)puStack_c8 + 4) << 0x20);
LAB_1000cf710:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 3) * 0x1000000;
LAB_1000cf718:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 2) * 0x10000;
LAB_1000cf720:
          uStack_e0 = uStack_e0 + (ulong)*(byte *)((long)puStack_c8 + 1) * 0x100;
        }
LAB_1000cf72c:
        if (pbVar4[-1] != 0) {
          uStack_d8 = (int)LZCOUNT((uint)pbVar4[-1]) + uVar30 * -8 + 0x29;
          puStack_d0 = puStack_c8;
LAB_1000cf740:
          plVar21 = &lStack_108;
          FUN_1000d01fc(plVar21,pbVar4,param_4 - uVar25);
          if ((long *)0xffffffffffffff88 < plVar21) {
            return plVar21;
          }
          param_5 = param_5 + 4;
          uVar25 = (long)param_2 + 3;
          uVar36 = uVar25 >> 2;
          puVar29 = param_1 + (uVar25 >> 2);
          puVar5 = puVar29 + (uVar25 >> 2);
          puVar6 = puVar5 + (uVar25 >> 2);
          iVar17 = (int)&uStack_90;
          func_0x0001000d031c();
          iVar18 = (int)&uStack_b8;
          func_0x0001000d031c();
          iVar19 = (int)&uStack_e0;
          func_0x0001000d031c();
          iVar20 = (int)&lStack_108;
          func_0x0001000d031c();
          puVar24 = param_1 + (long)param_2 + -3;
          puVar22 = param_1;
          puVar26 = puVar6;
          puVar27 = puVar5;
          puVar32 = puVar29;
          if (((iVar18 == 0 && iVar17 == 0) && (iVar19 == 0 && iVar20 == 0)) && (puVar6 < puVar24))
          {
            uVar30 = -(uint)uVar15 & 0x3f;
            uVar34 = (ulong)uStack_88;
            uVar35 = (ulong)uStack_b0;
            uVar25 = (ulong)uStack_d8;
            uVar33 = (ulong)uStack_100;
            plStack_110 = plStack_f8;
            puVar26 = param_1;
            lVar23 = lStack_108;
            do {
              puVar22 = puVar26;
              puVar26 = puVar22 + uVar36;
              puVar27 = puVar22 + uVar36 * 2;
              puVar32 = puVar22 + uVar36 * 3;
              puVar7 = (undefined1 *)(param_5 + ((uStack_90 << (uVar34 & 0x3f)) >> uVar30) * 2);
              uVar31 = (int)uVar34 + (uint)(byte)puVar7[1];
              *puVar22 = *puVar7;
              puVar7 = (undefined1 *)(param_5 + ((uStack_b8 << (uVar35 & 0x3f)) >> uVar30) * 2);
              uVar1 = (int)uVar35 + (uint)(byte)puVar7[1];
              *puVar26 = *puVar7;
              puVar7 = (undefined1 *)(param_5 + ((uStack_e0 << (uVar25 & 0x3f)) >> uVar30) * 2);
              uVar2 = (int)uVar25 + (uint)(byte)puVar7[1];
              *puVar27 = *puVar7;
              puVar7 = (undefined1 *)(param_5 + ((ulong)(lVar23 << (uVar33 & 0x3f)) >> uVar30) * 2);
              uVar3 = (int)uVar33 + (uint)(byte)puVar7[1];
              *puVar32 = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar31 & 0x3f)) >> uVar30) * 2);
              uVar31 = uVar31 + (byte)puVar7[1];
              puVar22[1] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar1 & 0x3f)) >> uVar30) * 2);
              uVar1 = uVar1 + (byte)puVar7[1];
              puVar26[1] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar2 & 0x3f)) >> uVar30) * 2);
              uVar2 = uVar2 + (byte)puVar7[1];
              puVar27[1] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((ulong)(lVar23 << ((ulong)uVar3 & 0x3f)) >> uVar30) * 2);
              uVar3 = uVar3 + (byte)puVar7[1];
              puVar32[1] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar31 & 0x3f)) >> uVar30) * 2);
              uVar31 = uVar31 + (byte)puVar7[1];
              puVar22[2] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar1 & 0x3f)) >> uVar30) * 2);
              uVar1 = uVar1 + (byte)puVar7[1];
              puVar26[2] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_e0 << ((ulong)uVar2 & 0x3f)) >> uVar30) * 2);
              uVar2 = uVar2 + (byte)puVar7[1];
              puVar27[2] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((ulong)(lVar23 << ((ulong)uVar3 & 0x3f)) >> uVar30) * 2);
              uVar3 = uVar3 + (byte)puVar7[1];
              puVar32[2] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uVar31 & 0x3f)) >> uVar30) * 2);
              uVar31 = uVar31 + (byte)puVar7[1];
              uVar34 = (ulong)uVar31;
              puVar22[3] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_b8 << ((ulong)uVar1 & 0x3f)) >> uVar30) * 2);
              bVar9 = puVar7[1];
              puVar26[3] = *puVar7;
              puVar26 = (undefined1 *)
                        (param_5 + ((uStack_e0 << ((ulong)uVar2 & 0x3f)) >> uVar30) * 2);
              bVar10 = puVar26[1];
              puVar27[3] = *puVar26;
              puVar26 = (undefined1 *)
                        (param_5 + ((ulong)(lVar23 << ((ulong)uVar3 & 0x3f)) >> uVar30) * 2);
              bVar11 = puVar26[1];
              puVar32[3] = *puVar26;
              if (uVar31 < 0x41) {
                if (puStack_80 < puStack_70) {
                  if (puStack_80 == puStack_78) goto LAB_1000cfa6c;
                  uVar28 = (int)puStack_80 - (int)puStack_78;
                  if (puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uVar31 >> 3))) {
                    uVar28 = uVar31 >> 3;
                  }
                  uVar31 = uVar31 + uVar28 * -8;
                }
                else {
                  uVar28 = uVar31 >> 3;
                  uVar31 = uVar31 & 7;
                }
                uVar34 = (ulong)uVar31;
                puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar28);
                uStack_90 = *puStack_80;
              }
LAB_1000cfa6c:
              uVar1 = uVar1 + bVar9;
              uVar35 = (ulong)uVar1;
              if (uVar1 < 0x41) {
                if (puStack_a8 < puStack_98) {
                  if (puStack_a8 == puStack_a0) goto LAB_1000cfad0;
                  uVar31 = (int)puStack_a8 - (int)puStack_a0;
                  if (puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uVar1 >> 3))) {
                    uVar31 = uVar1 >> 3;
                  }
                  uVar1 = uVar1 + uVar31 * -8;
                }
                else {
                  uVar31 = uVar1 >> 3;
                  uVar1 = uVar1 & 7;
                }
                uVar35 = (ulong)uVar1;
                puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar31);
                uStack_b8 = *puStack_a8;
              }
LAB_1000cfad0:
              uVar2 = uVar2 + bVar10;
              uVar25 = (ulong)uVar2;
              if (uVar2 < 0x41) {
                if (puStack_d0 < puStack_c0) {
                  if (puStack_d0 == puStack_c8) goto LAB_1000cfb18;
                  uVar31 = (int)puStack_d0 - (int)puStack_c8;
                  if (puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uVar2 >> 3))) {
                    uVar31 = uVar2 >> 3;
                  }
                  uVar2 = uVar2 + uVar31 * -8;
                }
                else {
                  uVar31 = uVar2 >> 3;
                  uVar2 = uVar2 & 7;
                }
                uVar25 = (ulong)uVar2;
                puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar31);
                uStack_e0 = *puStack_d0;
              }
LAB_1000cfb18:
              uVar3 = uVar3 + bVar11;
              uVar33 = (ulong)uVar3;
              if (uVar3 < 0x41) {
                if (plStack_110 < plStack_e8) {
                  if (plStack_110 == plStack_f0) goto LAB_1000cfb80;
                  uVar31 = (int)plStack_110 - (int)plStack_f0;
                  if (plStack_f0 <= (long *)((long)plStack_110 - (ulong)(uVar3 >> 3))) {
                    uVar31 = uVar3 >> 3;
                  }
                  uVar3 = uVar3 + uVar31 * -8;
                }
                else {
                  uVar31 = uVar3 >> 3;
                  uVar3 = uVar3 & 7;
                }
                plStack_110 = (long *)((long)plStack_110 - (ulong)uVar31);
                uVar33 = (ulong)uVar3;
                lVar23 = *plStack_110;
                lStack_108 = lVar23;
                plStack_f8 = plStack_110;
              }
LAB_1000cfb80:
              puVar26 = puVar22 + 4;
            } while (puVar32 + 4 < puVar24);
            puVar22 = puVar22 + 4;
            uStack_88 = (uint)uVar34;
            uStack_b0 = (uint)uVar35;
            uStack_d8 = (uint)uVar25;
            uStack_100 = (uint)uVar33;
            puVar26 = puVar22 + uVar36 * 3;
            puVar27 = puVar22 + uVar36 * 2;
            puVar32 = puVar22 + uVar36;
          }
          uVar30 = (uint)uVar15;
          if (puVar29 < puVar22) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar5 < puVar32) {
            return (long *)0xffffffffffffffec;
          }
          if (puVar6 < puVar27) {
            return (long *)0xffffffffffffffec;
          }
          if (uStack_88 < 0x41) {
            uVar31 = -uVar30 & 0x3f;
            do {
              if (puStack_80 < puStack_70) {
                if (puStack_80 == puStack_78) break;
                bVar16 = puStack_78 <= (ulong *)((long)puStack_80 - (ulong)(uStack_88 >> 3));
                uVar1 = uStack_88 >> 3;
                if (!bVar16) {
                  uVar1 = (int)puStack_80 - (int)puStack_78;
                }
                uStack_88 = uStack_88 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_88 >> 3;
                uStack_88 = uStack_88 & 7;
                bVar16 = true;
              }
              puStack_80 = (ulong *)((long)puStack_80 - (ulong)uVar1);
              uStack_90 = *puStack_80;
              if ((puVar29 + -3 <= puVar22) || (!bVar16)) break;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar31) * 2);
              uStack_88 = uStack_88 + (byte)puVar7[1];
              *puVar22 = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar31) * 2);
              uStack_88 = uStack_88 + (byte)puVar7[1];
              puVar22[1] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar31) * 2);
              uStack_88 = uStack_88 + (byte)puVar7[1];
              puVar22[2] = *puVar7;
              puVar8 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> uVar31) * 2);
              uStack_88 = uStack_88 + (byte)puVar8[1];
              puVar7 = puVar22 + 4;
              puVar22[3] = *puVar8;
              puVar22 = puVar7;
              if (0x40 < uStack_88) break;
            } while( true );
          }
          if (puVar22 < puVar29) {
            puVar29 = param_1 + (uVar36 - (long)puVar22);
            do {
              puVar7 = (undefined1 *)
                       (param_5 + ((uStack_90 << ((ulong)uStack_88 & 0x3f)) >> (-uVar30 & 0x3f)) * 2
                       );
              uStack_88 = uStack_88 + (byte)puVar7[1];
              *puVar22 = *puVar7;
              puVar29 = puVar29 + -1;
              puVar22 = puVar22 + 1;
            } while (puVar29 != (undefined1 *)0x0);
          }
          if (uStack_b0 < 0x41) {
            uVar31 = -uVar30 & 0x3f;
            do {
              if (puStack_a8 < puStack_98) {
                if (puStack_a8 == puStack_a0) break;
                bVar16 = puStack_a0 <= (ulong *)((long)puStack_a8 - (ulong)(uStack_b0 >> 3));
                uVar1 = uStack_b0 >> 3;
                if (!bVar16) {
                  uVar1 = (int)puStack_a8 - (int)puStack_a0;
                }
                uStack_b0 = uStack_b0 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_b0 >> 3;
                uStack_b0 = uStack_b0 & 7;
                bVar16 = true;
              }
              puStack_a8 = (ulong *)((long)puStack_a8 - (ulong)uVar1);
              uStack_b8 = *puStack_a8;
              if ((puVar5 + -3 <= puVar32) || (!bVar16)) break;
              puVar22 = (undefined1 *)
                        (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar31) * 2);
              uStack_b0 = uStack_b0 + (byte)puVar22[1];
              *puVar32 = *puVar22;
              puVar22 = (undefined1 *)
                        (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar31) * 2);
              uStack_b0 = uStack_b0 + (byte)puVar22[1];
              puVar32[1] = *puVar22;
              puVar22 = (undefined1 *)
                        (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar31) * 2);
              uStack_b0 = uStack_b0 + (byte)puVar22[1];
              puVar32[2] = *puVar22;
              puVar29 = (undefined1 *)
                        (param_5 + ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> uVar31) * 2);
              uStack_b0 = uStack_b0 + (byte)puVar29[1];
              puVar22 = puVar32 + 4;
              puVar32[3] = *puVar29;
              puVar32 = puVar22;
              if (0x40 < uStack_b0) break;
            } while( true );
          }
          if (puVar32 < puVar5) {
            do {
              puVar22 = (undefined1 *)
                        (param_5 +
                        ((uStack_b8 << ((ulong)uStack_b0 & 0x3f)) >> (-uVar30 & 0x3f)) * 2);
              uStack_b0 = uStack_b0 + (byte)puVar22[1];
              puVar29 = puVar32 + 1;
              *puVar32 = *puVar22;
              puVar32 = puVar29;
            } while (puVar29 < puVar5);
          }
          if (uStack_d8 < 0x41) {
            uVar31 = -uVar30 & 0x3f;
            do {
              if (puStack_d0 < puStack_c0) {
                if (puStack_d0 == puStack_c8) break;
                bVar16 = puStack_c8 <= (ulong *)((long)puStack_d0 - (ulong)(uStack_d8 >> 3));
                uVar1 = uStack_d8 >> 3;
                if (!bVar16) {
                  uVar1 = (int)puStack_d0 - (int)puStack_c8;
                }
                uStack_d8 = uStack_d8 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_d8 >> 3;
                uStack_d8 = uStack_d8 & 7;
                bVar16 = true;
              }
              puStack_d0 = (ulong *)((long)puStack_d0 - (ulong)uVar1);
              uStack_e0 = *puStack_d0;
              if ((puVar6 + -3 <= puVar27) || (!bVar16)) break;
              puVar22 = (undefined1 *)
                        (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar31) * 2);
              uStack_d8 = uStack_d8 + (byte)puVar22[1];
              *puVar27 = *puVar22;
              puVar22 = (undefined1 *)
                        (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar31) * 2);
              uStack_d8 = uStack_d8 + (byte)puVar22[1];
              puVar27[1] = *puVar22;
              puVar22 = (undefined1 *)
                        (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar31) * 2);
              uStack_d8 = uStack_d8 + (byte)puVar22[1];
              puVar27[2] = *puVar22;
              puVar29 = (undefined1 *)
                        (param_5 + ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> uVar31) * 2);
              uStack_d8 = uStack_d8 + (byte)puVar29[1];
              puVar22 = puVar27 + 4;
              puVar27[3] = *puVar29;
              puVar27 = puVar22;
              if (0x40 < uStack_d8) break;
            } while( true );
          }
          if (puVar27 < puVar6) {
            do {
              puVar22 = (undefined1 *)
                        (param_5 +
                        ((uStack_e0 << ((ulong)uStack_d8 & 0x3f)) >> (-uVar30 & 0x3f)) * 2);
              uStack_d8 = uStack_d8 + (byte)puVar22[1];
              puVar29 = puVar27 + 1;
              *puVar27 = *puVar22;
              puVar27 = puVar29;
            } while (puVar29 < puVar6);
          }
          if (uStack_100 < 0x41) {
            uVar31 = -uVar30 & 0x3f;
            do {
              if (plStack_f8 < plStack_e8) {
                if (plStack_f8 == plStack_f0) break;
                bVar16 = plStack_f0 <= (long *)((long)plStack_f8 - (ulong)(uStack_100 >> 3));
                uVar1 = uStack_100 >> 3;
                if (!bVar16) {
                  uVar1 = (int)plStack_f8 - (int)plStack_f0;
                }
                uStack_100 = uStack_100 + uVar1 * -8;
              }
              else {
                uVar1 = uStack_100 >> 3;
                uStack_100 = uStack_100 & 7;
                bVar16 = true;
              }
              plStack_f8 = (long *)((long)plStack_f8 - (ulong)uVar1);
              lStack_108 = *plStack_f8;
              if ((puVar24 <= puVar26) || (!bVar16)) break;
              puVar22 = (undefined1 *)
                        (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar31) * 2
                        );
              uStack_100 = uStack_100 + (byte)puVar22[1];
              *puVar26 = *puVar22;
              puVar22 = (undefined1 *)
                        (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar31) * 2
                        );
              uStack_100 = uStack_100 + (byte)puVar22[1];
              puVar26[1] = *puVar22;
              puVar22 = (undefined1 *)
                        (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar31) * 2
                        );
              uStack_100 = uStack_100 + (byte)puVar22[1];
              puVar26[2] = *puVar22;
              puVar29 = (undefined1 *)
                        (param_5 + ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> uVar31) * 2
                        );
              uStack_100 = uStack_100 + (byte)puVar29[1];
              puVar22 = puVar26 + 4;
              puVar26[3] = *puVar29;
              puVar26 = puVar22;
              if (0x40 < uStack_100) break;
            } while( true );
          }
          if (puVar26 < param_1 + (long)param_2) {
            lVar23 = (long)((long)param_2 + (long)param_1) - (long)puVar26;
            do {
              puVar22 = (undefined1 *)
                        (param_5 +
                        ((ulong)(lStack_108 << ((ulong)uStack_100 & 0x3f)) >> (-uVar30 & 0x3f)) * 2)
              ;
              uStack_100 = uStack_100 + (byte)puVar22[1];
              *puVar26 = *puVar22;
              lVar23 = lVar23 + -1;
              puVar26 = puVar26 + 1;
            } while (lVar23 != 0);
          }
          if (((((((uStack_100 == 0x40 && plStack_f8 == plStack_f0) && uStack_d8 == 0x40) &&
                 puStack_d0 == puStack_c8) && uStack_b0 == 0x40) && puStack_a8 == puStack_a0) &&
              uStack_88 == 0x40) && puStack_80 == puStack_78) {
            return param_2;
          }
          return (long *)0xffffffffffffffec;
        }
        goto LAB_1000cfb9c;
      }
    }
    plVar21 = (long *)0xffffffffffffffb8;
  }
  return plVar21;
}



/* Entry: 1000d01fc; end: 1000d03b3;  */

ulong FUN_1000d01fc(ulong *param_1,byte *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return 0xffffffffffffffb8;
  }
  param_1[3] = (ulong)param_2;
  param_1[4] = (ulong)(param_2 + 8);
  if (7 < param_3) {
    uVar2 = *(ulong *)(param_2 + (param_3 - 8));
    param_1[2] = (ulong)(param_2 + (param_3 - 8));
    *param_1 = uVar2;
    if (param_2[param_3 - 1] == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      return 0xffffffffffffffff;
    }
    iVar1 = 8 - ((uint)LZCOUNT((uint)param_2[param_3 - 1]) ^ 0x1f);
    goto LAB_1000d02f8;
  }
  param_1[2] = (ulong)param_2;
  uVar2 = (ulong)*param_2;
  *param_1 = uVar2;
  if ((long)param_3 < 5) {
    if (param_3 == 2) goto LAB_1000d02d4;
    if (param_3 == 3) goto LAB_1000d02c8;
    if (param_3 == 4) goto LAB_1000d02bc;
  }
  else {
    if (param_3 != 5) {
      if (param_3 != 6) {
        if (param_3 != 7) goto LAB_1000d02e0;
        uVar2 = uVar2 | (ulong)param_2[6] << 0x30;
        *param_1 = uVar2;
      }
      uVar2 = uVar2 + ((ulong)param_2[5] << 0x28);
      *param_1 = uVar2;
    }
    uVar2 = uVar2 + ((ulong)param_2[4] << 0x20);
    *param_1 = uVar2;
LAB_1000d02bc:
    uVar2 = uVar2 + (ulong)param_2[3] * 0x1000000;
    *param_1 = uVar2;
LAB_1000d02c8:
    uVar2 = uVar2 + (ulong)param_2[2] * 0x10000;
    *param_1 = uVar2;
LAB_1000d02d4:
    *param_1 = uVar2 + (ulong)param_2[1] * 0x100;
  }
LAB_1000d02e0:
  if (param_2[param_3 - 1] == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 0xffffffffffffffec;
  }
  iVar1 = (int)LZCOUNT((uint)param_2[param_3 - 1]) + (int)param_3 * -8 + 0x29;
LAB_1000d02f8:
  *(int *)(param_1 + 1) = iVar1;
  return param_3;
}



/* Entry: 1000d03b4; end: 1000d0423;  */

void FUN_1000d03b4(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *extraout_x8;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined1 uStack_71;
  
  if (param_2 < 0x7ffffffffffffff7) {
    func_0x0001000d03a8();
    if (param_2 < 0x17) {
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      *unaff_x19 = 0;
      *(char *)((long)unaff_x19 + 0x17) = (char)unaff_x20;
    }
    else {
      uVar2 = 0x19;
      if ((unaff_x20 | 7) != 0x17) {
        uVar2 = (unaff_x20 | 7) + 1;
      }
      uVar3 = uVar2;
      func_0x000107c60e20();
      unaff_x19[1] = unaff_x20;
      unaff_x19[2] = uVar2 | 0x8000000000000000;
      *unaff_x19 = uVar3;
    }
    return;
  }
  func_0x000104bd47d4();
  plVar4 = extraout_x8;
  FUN_1000d03b4(extraout_x8,param_5 + param_3,&uStack_71);
  plVar1 = (long *)*plVar4;
  if (-1 < *(char *)((long)plVar4 + 0x17)) {
    plVar1 = plVar4;
  }
  if (param_3 != 0) {
    func_0x000107c610b8(plVar1,param_2,param_3);
  }
  if (param_5 != 0) {
    func_0x000107c610b8((long)plVar1 + param_3,param_4,param_5);
  }
  *(undefined1 *)((long)plVar1 + param_3 + param_5) = 0;
  return;
}



/* Entry: 1000d0424; end: 1000d04b3;  */

void FUN_1000d0424(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined1 uStack_41;
  
  FUN_1000d03b4(param_1,param_6 + param_4,&uStack_41);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  if (param_4 != 0) {
    func_0x000107c610b8(plVar1,param_3,param_4);
  }
  if (param_6 != 0) {
    func_0x000107c610b8((long)plVar1 + param_4,param_5,param_6);
  }
  *(undefined1 *)((long)plVar1 + param_4 + param_6) = 0;
  return;
}



/* Entry: 1000d04b4; end: 1000d04cb;  */

void FUN_1000d04b4(void)

{
  return;
}



/* Entry: 1000d04cc; end: 1000d0537;  */

void FUN_1000d04cc(long param_1)

{
  func_0x0001000d04c0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1000d0538; end: 1000d054f;  */

void FUN_1000d0538(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1000d0550; end: 1000d060b; -[SCManagedCaptureDeviceSubjectAreaHandler initWithCaptureResource:captureDeviceManager:] */

undefined1 *
FUN_1000d0550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8a30;
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
    *(undefined4 *)((long)puVar1 + 0x1c) = 0x3a83126f;
    func_0x000107c3c960(puVar1);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000d060c; end: 1000d06f3; -[SCManagedCaptureDeviceSubjectAreaHandler _subjectAreaDidChange:] */

void FUN_1000d060c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4f7e8(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1000d06f4; end: 1000d0713;  */

void FUN_1000d06f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127daba0);
  return;
}



/* Entry: 1000d0714; end: 1000d088f;  */

ulong * FUN_1000d0714(ulong *param_1,ulong *param_2,uint *param_3,byte *param_4,long param_5,
                     byte *param_6,long param_7,byte *param_8,long param_9,ulong param_10,
                     int param_11,int param_12,int param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ushort uVar18;
  ulong *puVar19;
  uint uVar20;
  ushort auStack_142 [53];
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  uint uStack_bc;
  uint uStack_b8;
  ulong auStack_b2 [13];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = (uint)param_4;
  iVar7 = (int)param_3;
  puVar6 = param_1;
  puVar13 = param_2;
  pbVar9 = param_6;
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      puVar19 = (ulong *)0x0;
      *param_2 = param_10;
    }
    else if (param_7 == 0) {
      puVar19 = (ulong *)0xffffffffffffffb8;
    }
    else {
      bVar3 = *param_6;
      if (uStack_b8 < bVar3) goto LAB_1000d084c;
      uVar1 = *(undefined4 *)(param_8 + (ulong)(uint)bVar3 * 4);
      uVar2 = *(undefined4 *)(param_9 + (ulong)bVar3 * 4);
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0xb) = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      *(char *)((long)param_1 + 10) = (char)uVar2;
      *(undefined4 *)((long)param_1 + 0xc) = uVar1;
      *param_2 = (ulong)param_1;
      puVar19 = (ulong *)0x1;
    }
  }
  else {
    uVar20 = (uint)param_5;
    if (iVar7 == 2) {
      puVar19 = auStack_b2;
      puVar13 = (ulong *)&uStack_b8;
      param_3 = &uStack_bc;
      FUN_1000ce574();
      puVar6 = puVar19;
      param_4 = param_6;
      param_5 = param_7;
      if ((puVar19 < (ulong *)0xffffffffffffff89) &&
         (pbVar9 = (byte *)(ulong)uStack_bc, uStack_bc <= uVar20)) {
        param_3 = (uint *)(ulong)uStack_b8;
        puVar13 = auStack_b2;
        puVar6 = param_1;
        FUN_1000d0890();
        *param_2 = (ulong)param_1;
        param_1 = puVar6;
        param_2 = puVar13;
        param_4 = param_8;
        param_5 = param_9;
        param_6 = pbVar9;
      }
      else {
LAB_1000d084c:
        puVar19 = (ulong *)0xffffffffffffffec;
        param_1 = puVar6;
        param_2 = puVar13;
        param_6 = pbVar9;
      }
    }
    else {
      if (param_11 == 0) goto LAB_1000d084c;
      puVar19 = (ulong *)0x0;
      if ((param_12 != 0) && (0x18 < param_13)) {
        uVar10 = 0;
        do {
          Hint_Prefetch(*param_2 + uVar10,0,1,0);
          uVar10 = uVar10 + 0x40;
        } while (uVar10 < (8 << (ulong)(uVar20 & 0x1f) | 8));
        puVar19 = (ulong *)0x0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar19;
  }
  func_0x000107c60e78();
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_1000d0890;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (uint)param_6;
  uVar20 = 1 << (ulong)(uVar8 & 0x1f);
  uVar10 = (ulong)uVar20;
  uVar11 = (ulong)((int)param_3 + 1);
  if ((int)param_3 == -1) {
    *param_1 = (long)param_6 << 0x20 | 1;
  }
  else {
    uVar15 = 0;
    uVar14 = (ulong)(uVar20 - 1);
    uVar17 = 1;
    do {
      uVar18 = *(ushort *)((long)param_2 + uVar15 * 2);
      param_3 = (uint *)(long)(short)uVar18;
      if (uVar18 == 0xffff) {
        lVar5 = uVar14 * 8;
        uVar14 = (ulong)((int)uVar14 - 1);
        *(int *)((long)param_1 + 0xc + lVar5) = (int)uVar15;
        uVar18 = 1;
      }
      else if ((0x10000 << (ulong)(uVar8 - 1 & 0x1f)) >> 0x10 <= (int)(short)uVar18) {
        uVar17 = 0;
      }
      auStack_142[uVar15] = uVar18;
      uVar15 = uVar15 + 1;
    } while (uVar11 != uVar15);
    uVar15 = 0;
    uVar16 = 0;
    *param_1 = (ulong)uVar17 | (long)param_6 << 0x20;
    do {
      sVar4 = *(short *)((long)param_2 + uVar15 * 2);
      if (0 < sVar4) {
        iVar7 = 0;
        do {
          param_3 = (uint *)(uVar16 * 8);
          *(int *)((long)param_1 + 0xc + (long)param_3) = (int)uVar15;
          do {
            uVar17 = (uVar20 >> 3) + (uVar20 >> 1) + 3 + (int)uVar16 & uVar20 - 1;
            uVar16 = (ulong)uVar17;
          } while ((uint)uVar14 < uVar17);
          iVar7 = iVar7 + 1;
        } while (iVar7 != sVar4);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar11);
  }
  puVar12 = (uint *)((long)param_1 + 0xc);
  do {
    uVar11 = (ulong)*puVar12;
    uVar18 = auStack_142[uVar11];
    auStack_142[uVar11] = uVar18 + 1;
    uVar17 = uVar8 - ((uint)LZCOUNT((uint)uVar18) ^ 0x1f);
    *(char *)((long)puVar12 + -1) = (char)uVar17;
    *(ushort *)(puVar12 + -1) = (uVar18 << (ulong)(uVar17 & 0x1f)) - (short)uVar20;
    *(char *)((long)puVar12 + -2) = (char)*(undefined4 *)(param_5 + uVar11 * 4);
    *puVar12 = *(uint *)(param_4 + uVar11 * 4);
    uVar10 = uVar10 - 1;
    puVar12 = puVar12 + 2;
  } while (uVar10 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return param_1;
  }
  func_0x000107c60e78();
  uVar20 = (uint)param_2[1] + param_3[1];
  uVar8 = *(uint *)(&UNK_10e011be0 + (ulong)param_3[1] * 4);
  *(uint *)(param_2 + 1) = uVar20;
  *param_1 = *param_2 >> ((ulong)-uVar20 & 0x3f) & (ulong)uVar8;
  if (uVar20 < 0x41) {
    uVar10 = param_2[2];
    if (uVar10 < param_2[4]) {
      uVar11 = param_2[3];
      if (uVar10 == uVar11) goto LAB_1000d0a9c;
      uVar8 = (int)uVar10 - (int)uVar11;
      if (uVar11 <= uVar10 - (uVar20 >> 3)) {
        uVar8 = uVar20 >> 3;
      }
      puVar13 = (ulong *)(uVar10 - uVar8);
      param_2[2] = (ulong)puVar13;
      uVar20 = uVar20 + uVar8 * -8;
    }
    else {
      puVar13 = (ulong *)(uVar10 - (uVar20 >> 3));
      param_2[2] = (ulong)puVar13;
      uVar20 = uVar20 & 7;
    }
    *(uint *)(param_2 + 1) = uVar20;
    *param_2 = *puVar13;
  }
LAB_1000d0a9c:
  param_1[1] = (ulong)(param_3 + 2);
  return param_1;
}



/* Entry: 1000d0890; end: 1000d0a07;  */

void FUN_1000d0890(ulong *param_1,ulong *param_2,long param_3,long param_4,long param_5,uint param_6
                  )

{
  short sVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  ushort uVar13;
  int iVar14;
  ushort auStack_82 [53];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1 << (ulong)(param_6 & 0x1f);
  uVar5 = (ulong)uVar4;
  uVar6 = (ulong)((int)param_3 + 1);
  if ((int)param_3 == -1) {
    *param_1 = (ulong)param_6 << 0x20 | 1;
  }
  else {
    uVar10 = 0;
    uVar9 = (ulong)(uVar4 - 1);
    uVar12 = 1;
    do {
      uVar13 = *(ushort *)((long)param_2 + uVar10 * 2);
      param_3 = (long)(short)uVar13;
      if (uVar13 == 0xffff) {
        lVar3 = uVar9 * 8;
        uVar9 = (ulong)((int)uVar9 - 1);
        *(int *)((long)param_1 + lVar3 + 0xc) = (int)uVar10;
        uVar13 = 1;
      }
      else if ((0x10000 << (ulong)(param_6 - 1 & 0x1f)) >> 0x10 <= (int)(short)uVar13) {
        uVar12 = 0;
      }
      auStack_82[uVar10] = uVar13;
      uVar10 = uVar10 + 1;
    } while (uVar6 != uVar10);
    uVar10 = 0;
    uVar11 = 0;
    *param_1 = CONCAT44(param_6,uVar12);
    do {
      sVar1 = *(short *)((long)param_2 + uVar10 * 2);
      if (0 < sVar1) {
        iVar14 = 0;
        do {
          param_3 = uVar11 * 8;
          *(int *)((long)param_1 + param_3 + 0xc) = (int)uVar10;
          do {
            uVar2 = (uVar4 >> 3) + (uVar4 >> 1) + 3 + (int)uVar11 & uVar4 - 1;
            uVar11 = (ulong)uVar2;
          } while ((uint)uVar9 < uVar2);
          iVar14 = iVar14 + 1;
        } while (iVar14 != sVar1);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar6);
  }
  puVar7 = (uint *)((long)param_1 + 0xc);
  do {
    uVar6 = (ulong)*puVar7;
    uVar13 = auStack_82[uVar6];
    auStack_82[uVar6] = uVar13 + 1;
    uVar2 = param_6 - ((uint)LZCOUNT((uint)uVar13) ^ 0x1f);
    *(char *)((long)puVar7 + -1) = (char)uVar2;
    *(ushort *)(puVar7 + -1) = (uVar13 << (ulong)(uVar2 & 0x1f)) - (short)uVar4;
    *(char *)((long)puVar7 + -2) = (char)*(undefined4 *)(param_5 + uVar6 * 4);
    *puVar7 = *(uint *)(param_4 + uVar6 * 4);
    uVar5 = uVar5 - 1;
    puVar7 = puVar7 + 2;
  } while (uVar5 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
  uVar4 = (int)param_2[1] + *(uint *)(param_3 + 4);
  uVar2 = *(uint *)(&UNK_10e011be0 + (ulong)*(uint *)(param_3 + 4) * 4);
  *(uint *)(param_2 + 1) = uVar4;
  *param_1 = *param_2 >> ((ulong)-uVar4 & 0x3f) & (ulong)uVar2;
  if (uVar4 < 0x41) {
    uVar5 = param_2[2];
    if (uVar5 < param_2[4]) {
      uVar6 = param_2[3];
      if (uVar5 == uVar6) goto LAB_1000d0a9c;
      uVar2 = (int)uVar5 - (int)uVar6;
      if (uVar6 <= uVar5 - (uVar4 >> 3)) {
        uVar2 = uVar4 >> 3;
      }
      puVar8 = (ulong *)(uVar5 - uVar2);
      param_2[2] = (ulong)puVar8;
      uVar4 = uVar4 + uVar2 * -8;
    }
    else {
      puVar8 = (ulong *)(uVar5 - (uVar4 >> 3));
      param_2[2] = (ulong)puVar8;
      uVar4 = uVar4 & 7;
    }
    *(uint *)(param_2 + 1) = uVar4;
    *param_2 = *puVar8;
  }
LAB_1000d0a9c:
  param_1[1] = param_3 + 8;
  return;
}



/* Entry: 1000d0a08; end: 1000d0aa7;  */

void FUN_1000d0a08(ulong *param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar2 = (int)param_2[1] + *(uint *)(param_3 + 4);
  uVar1 = *(uint *)(&UNK_10e011be0 + (ulong)*(uint *)(param_3 + 4) * 4);
  *(uint *)(param_2 + 1) = uVar2;
  *param_1 = *param_2 >> ((ulong)-uVar2 & 0x3f) & (ulong)uVar1;
  if (uVar2 < 0x41) {
    uVar3 = param_2[2];
    if (uVar3 < param_2[4]) {
      uVar5 = param_2[3];
      if (uVar3 == uVar5) goto LAB_1000d0a9c;
      uVar1 = (int)uVar3 - (int)uVar5;
      if (uVar5 <= uVar3 - (uVar2 >> 3)) {
        uVar1 = uVar2 >> 3;
      }
      puVar4 = (ulong *)(uVar3 - uVar1);
      param_2[2] = (ulong)puVar4;
      uVar2 = uVar2 + uVar1 * -8;
    }
    else {
      puVar4 = (ulong *)(uVar3 - (uVar2 >> 3));
      param_2[2] = (ulong)puVar4;
      uVar2 = uVar2 & 7;
    }
    *(uint *)(param_2 + 1) = uVar2;
    *param_2 = *puVar4;
  }
LAB_1000d0a9c:
  param_1[1] = param_3 + 8;
  return;
}



/* Entry: 1000d0aa8; end: 1000d0bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d0aa8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815490;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x0001000d0af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 1000d0bf8; end: 1000d0c1b;  */

void FUN_1000d0bf8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 1000d0c1c; end: 1000d0cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d0c1c(void)

{
  long extraout_x8;
  long lVar1;
  long *unaff_x20;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)((long)unaff_x20 + _DAT_1130950b8))(puVar2);
  func_0x000100087f6c(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1000d0cbc; end: 1000d0cdb;  */

void FUN_1000d0cbc(void)

{
  FUN_1000d0c1c();
  return;
}



/* Entry: 1000d0cdc; end: 1000d0d13;  */

void FUN_1000d0cdc(undefined8 param_1)

{
  if (lRam00000001130977e8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e8223f0);
  return;
}



/* Entry: 1000d0d14; end: 1000d0e63;  */

void FUN_1000d0d14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar3 = 0;
  FUN_1000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  func_0x000107c61174(*param_2);
  FUN_1000d0fb8(puVar7);
  puVar4 = puVar7;
  func_0x000107c614c4(puVar7,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      uVar8 = *puVar7;
      func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar5));
      lVar5 = 0x11305f560;
      FUN_1000285a8(0x11305f560,&UNK_10dcd48f8);
      iVar2 = *(int *)(lVar5 + 0x80);
      iVar1 = *(int *)(lVar5 + 0xa0);
      *param_1 = uVar8;
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 8))((undefined1 *)((long)puVar7 + (long)iVar1),lVar5);
      goto LAB_1000d0e48;
    }
    uVar8 = *puVar7;
    lVar5 = 0x112d7af10;
    puVar6 = &UNK_10dbcce80;
LAB_1000d0dc4:
    FUN_1000285a8(lVar5,puVar6);
    iVar2 = *(int *)(lVar5 + 0x50);
  }
  else {
    if (iVar2 == 2) {
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
      lVar5 = 0x11305f568;
      puVar6 = &UNK_10dd3d7c0;
      goto LAB_1000d0dc4;
    }
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
    lVar5 = 0x11305f558;
    FUN_1000285a8(0x11305f558,&UNK_10dcd48f0);
    iVar2 = *(int *)(lVar5 + 0x60);
  }
  *param_1 = uVar8;
LAB_1000d0e48:
  FUN_1000d1dcc((undefined1 *)((long)puVar7 + (long)iVar2));
  return;
}



/* Entry: 1000d0e64; end: 1000d0fb7;  */

void FUN_1000d0e64(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  puVar2 = PTR___sBi64_WV_11034d670;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar3 = 0x13f;
  puStack_100 = puVar1;
  puStack_f8 = puVar1;
  puStack_f0 = puVar1;
  FUN_1000776dc();
  if (param_2 < 0x40) {
    lVar3 = *(long *)(lVar3 + -8) + 0x40;
    puStack_e0 = &UNK_10dd3d7e8;
    uVar5 = 0;
    puStack_e8 = (undefined *)lVar3;
    func_0x000107c61500(auStack_90,0,5,&puStack_100);
    puStack_d8 = &UNK_10dd3d800;
    lVar4 = 0x13f;
    puStack_100 = puVar1;
    puStack_f8 = puVar1;
    puStack_f0 = puVar1;
    puStack_e8 = puVar1;
    puStack_e0 = puVar1;
    lStack_d0 = lVar3;
    puStack_c8 = puVar1;
    puStack_70 = auStack_90;
    func_0x000107c5eea4();
    if (uVar5 < 0x40) {
      lStack_c0 = *(long *)(lVar4 + -8) + 0x40;
      puStack_b8 = &UNK_10dd3d7e8;
      func_0x000107c61500(auStack_b0,0,10,&puStack_100);
      puVar2 = puVar2 + 0x40;
      puStack_100 = puVar2;
      puStack_f8 = puVar2;
      puStack_f0 = puVar2;
      puStack_e8 = (undefined *)lVar3;
      puStack_68 = auStack_b0;
      func_0x000107c61500(auStack_120,0,4,&puStack_100);
      puStack_100 = puVar2;
      puStack_f8 = puVar2;
      puStack_f0 = puVar2;
      puStack_e8 = puVar2;
      puStack_e0 = (undefined *)lVar3;
      puStack_60 = auStack_120;
      func_0x000107c61500(auStack_140,0,5,&puStack_100);
      puStack_58 = auStack_140;
      func_0x000107c61528(param_1,0x100,4,&puStack_70);
    }
  }
  return;
}



/* Entry: 1000d0fb8; end: 1000d1127;  */

void FUN_1000d0fb8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  
  lVar2 = 0x1130978f0;
  FUN_1000285a8(0x1130978f0,&UNK_10dd3d828);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  FUN_1000d0cdc();
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x38))(lVar5,1,1,lVar2);
  lStack_c0 = lVar5;
  lStack_a0 = lVar5;
  lStack_80 = lVar5;
  lStack_60 = lVar5;
  FUN_1000d1128(FUN_1000d15c4,auStack_70,FUN_1008cdf24,auStack_90,&UNK_104899c2c,auStack_b0,
                &UNK_104899cfc,auStack_d0);
  FUN_1000bc298(lVar5,puVar4,0x1130978f0,&UNK_10dd3d828);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 != 1) {
    func_0x000107c61170(param_2);
    FUN_1000d1c24(puVar4,param_1);
    func_0x0001000bc2e0(lVar5,0x1130978f0,&UNK_10dd3d828);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d1128);
  (*pcVar1)();
}



/* Entry: 1000d1128; end: 1000d15c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d1128(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_90;
  code *pcStack_88;
  
  lVar5 = 0x112d373d8;
  uStack_90 = param_4;
  pcStack_88 = param_3;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar8 - extraout_x12_00;
  bVar1 = *(byte *)(unaff_x20 + _DAT_113097828);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097830) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d157c);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097838) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d158c);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097840) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d159c);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113097830);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113097838);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_113097840);
      FUN_1000bc298(unaff_x20 + _DAT_113097848,lVar5,0x112d373d8,&UNK_10d9014c0);
      if (*(byte *)(unaff_x20 + _DAT_113097850) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15ac);
        (*pcVar2)();
      }
      (*param_1)(uVar11,uVar4,uVar7,lVar5,*(byte *)(unaff_x20 + _DAT_113097850) & 1);
      func_0x0001000bc2e0(lVar5,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097858) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d1584);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097860) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d1594);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097868) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15a4);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097870) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15b0);
        (*pcVar2)();
      }
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097878) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15b8);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113097858);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113097860);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_113097868);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_113097870);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_113097878);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113097880);
      FUN_1000bc298(unaff_x20 + _DAT_113097888,lVar8,0x112d373d8,&UNK_10d9014c0);
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113097890) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15bc);
        (*pcVar2)();
      }
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_113097890);
      FUN_1000bc298(unaff_x20 + _DAT_113097898,lVar6,0x112d373d8,&UNK_10d9014c0);
      lVar3 = 0;
      func_0x000107c5eea4();
      lVar10 = *(long *)(lVar3 + -8);
      lVar5 = lVar6;
      (**(code **)(lVar10 + 0x30))(lVar6,1,lVar3);
      if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15c0);
        (*pcVar2)();
      }
      if (*(byte *)(unaff_x20 + _DAT_1130978a0) == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15c4);
        (*pcVar2)();
      }
      (*pcStack_88)(uVar12,uVar13,uVar14,uVar4,uVar7,uVar11,uVar9,lVar8,lVar6,
                    *(byte *)(unaff_x20 + _DAT_1130978a0) & 1);
      func_0x0001000bc2e0(lVar8,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar10 + 8))(lVar6,lVar3);
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978a8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d1580);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978b0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d1590);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978b8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15a0);
      (*pcVar2)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_1130978b8),
               *(undefined8 *)(unaff_x20 + _DAT_1130978a8),
               *(undefined8 *)(unaff_x20 + _DAT_1130978b0),unaff_x20 + _DAT_1130978c0);
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978c8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d1588);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978d0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d1598);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978d8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15a8);
      (*pcVar2)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130978e0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d15b4);
      (*pcVar2)();
    }
    (*param_7)(*(undefined8 *)(unaff_x20 + _DAT_1130978d8),
               *(undefined8 *)(unaff_x20 + _DAT_1130978e0),
               *(undefined8 *)(unaff_x20 + _DAT_1130978c8),
               *(undefined8 *)(unaff_x20 + _DAT_1130978d0),unaff_x20 + _DAT_1130978e8);
  }
  return;
}



/* Entry: 1000d15c4; end: 1000d15cb;  */

void FUN_1000d15c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x0001000bc2e0(puVar4,0x1130978f0,&UNK_10dd3d828);
  lVar3 = 0x112d7af10;
  FUN_1000285a8(0x112d7af10,&UNK_10dbcce80);
  iVar1 = *(int *)(lVar3 + 0x50);
  iVar2 = *(int *)(lVar3 + 0x60);
  *puVar4 = param_2;
  puVar4[1] = param_3;
  puVar4[2] = param_1;
  func_0x0001000bc298(param_4,(long)puVar4 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  *(undefined1 *)((long)puVar4 + (long)iVar2) = param_5;
  lVar3 = 0;
  FUN_1000d0cdc();
  func_0x000107c6159c(puVar4,lVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0001000d16a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,0,1,lVar3);
  return;
}



/* Entry: 1000d15cc; end: 1000d16a3;  */

void FUN_1000d15cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  func_0x0001000bc2e0(param_6,0x1130978f0,&UNK_10dd3d828);
  lVar3 = 0x112d7af10;
  FUN_1000285a8(0x112d7af10,&UNK_10dbcce80);
  iVar1 = *(int *)(lVar3 + 0x50);
  iVar2 = *(int *)(lVar3 + 0x60);
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = param_1;
  func_0x0001000bc298(param_4,(long)param_6 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  *(undefined1 *)((long)param_6 + (long)iVar2) = param_5;
  lVar3 = 0;
  FUN_1000d0cdc();
  func_0x000107c6159c(param_6,lVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0001000d16a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_6,0,1,lVar3);
  return;
}



/* Entry: 1000d16a4; end: 1000d1933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d16a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  *(undefined8 *)(unaff_x20 + _DAT_112da95f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da9600) = param_2;
  FUN_10006a340(0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_1);
  func_0x000107c6157c();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + _DAT_112da9608) = param_2;
  *(undefined **)(unaff_x20 + _DAT_112da9610) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar2 = _DAT_112da9618;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112da9618) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_48,0x21,0);
  *(undefined **)(unaff_x20 + lVar2) = puVar1;
  uVar3 = 0;
  func_0x0001000d182c(0,10,0,puVar1);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  func_0x000107c614a8(auStack_48);
  lVar2 = _DAT_112da9620;
  *(undefined **)(unaff_x20 + _DAT_112da9620) = puVar1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_48,0x21,0);
  *(undefined **)(unaff_x20 + lVar2) = puVar1;
  uVar3 = 0;
  func_0x0001000d182c(0,0x100,0,puVar1);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  func_0x000107c614a8();
  FUN_1000d06f4();
  func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000d1934; end: 1000d1953;  */

void FUN_1000d1934(void)

{
  func_0x000107c61168(&PTR_PTR_1127daac8);
  return;
}



/* Entry: 1000d1954; end: 1000d1c23;  */

undefined8 * FUN_1000d1954(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[2] = param_2[2];
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar4 = 0x112d7af10;
      FUN_1000285a8(0x112d7af10,&UNK_10dbcce80);
      lVar6 = (long)*(int *)(lVar4 + 0x50);
      lVar3 = 0;
      func_0x000107c5eea4();
      lVar7 = *(long *)(lVar3 + -8);
      lVar5 = (long)param_2 + lVar6;
      (**(code **)(lVar7 + 0x30))(lVar5,1,lVar3);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
        (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
      }
      else {
        lVar5 = 0x112d373d8;
        FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
        func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      iVar1 = *(int *)(lVar4 + 0x60);
    }
    else {
      uVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar9;
      param_1[5] = param_2[5];
      func_0x000107c61434();
      lVar4 = 0x11305f560;
      FUN_1000285a8(0x11305f560,&UNK_10dcd48f8);
      lVar6 = (long)*(int *)(lVar4 + 0x80);
      lVar3 = 0;
      func_0x000107c5eea4();
      lVar7 = *(long *)(lVar3 + -8);
      lVar5 = (long)param_2 + lVar6;
      (**(code **)(lVar7 + 0x30))(lVar5,1,lVar3);
      if ((int)lVar5 == 0) {
        pcVar8 = *(code **)(lVar7 + 0x10);
        (*pcVar8)((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
        (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
      }
      else {
        lVar5 = 0x112d373d8;
        FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
        func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
        pcVar8 = *(code **)(lVar7 + 0x10);
      }
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x90)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x90));
      (*pcVar8)((long)param_1 + (long)*(int *)(lVar4 + 0xa0),
                (long)param_2 + (long)*(int *)(lVar4 + 0xa0),lVar3);
      iVar1 = *(int *)(lVar4 + 0xb0);
    }
    *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  }
  else {
    if (iVar1 == 2) {
      lVar4 = 0x11305f568;
      FUN_1000285a8(0x11305f568,&UNK_10dd3d7c0);
      iVar1 = *(int *)(lVar4 + 0x50);
    }
    else {
      param_1[3] = param_2[3];
      lVar4 = 0x11305f558;
      FUN_1000285a8(0x11305f558,&UNK_10dcd48f0);
      iVar1 = *(int *)(lVar4 + 0x60);
    }
    lVar3 = (long)iVar1;
    lVar5 = 0;
    func_0x000107c5eea4();
    lVar6 = *(long *)(lVar5 + -8);
    lVar4 = (long)param_2 + lVar3;
    (**(code **)(lVar6 + 0x30))(lVar4,1,lVar5);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar5);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar3,0,1,lVar5);
    }
    else {
      lVar4 = 0x112d373d8;
      FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar3,(long)param_2 + lVar3,
                          *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  func_0x000107c6159c(param_1,param_3,puVar2);
  return param_1;
}



/* Entry: 1000d1c24; end: 1000d1c67;  */

undefined8 FUN_1000d1c24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000d0cdc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000d1c68; end: 1000d1dcb;  */

void FUN_1000d1c68(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)lVar5;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
      lVar5 = 0x11305f560;
      FUN_1000285a8(0x11305f560,&UNK_10dcd48f8);
      iVar1 = *(int *)(lVar5 + 0x80);
      lVar2 = 0;
      func_0x000107c5eea4();
      lVar6 = *(long *)(lVar2 + -8);
      lVar3 = param_1 + iVar1;
      (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
      if ((int)lVar3 == 0) {
        (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,lVar2);
      }
      lVar5 = (long)*(int *)(lVar5 + 0xa0);
      goto LAB_1000d1db4;
    }
    lVar5 = 0x112d7af10;
    puVar4 = &UNK_10dbcce80;
LAB_1000d1d60:
    FUN_1000285a8(lVar5,puVar4);
    iVar1 = *(int *)(lVar5 + 0x50);
  }
  else {
    if (iVar1 == 2) {
      lVar5 = 0x11305f568;
      puVar4 = &UNK_10dd3d7c0;
      goto LAB_1000d1d60;
    }
    if (iVar1 != 3) {
      return;
    }
    lVar5 = 0x11305f558;
    FUN_1000285a8(0x11305f558,&UNK_10dcd48f0);
    iVar1 = *(int *)(lVar5 + 0x60);
  }
  lVar5 = (long)iVar1;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
LAB_1000d1db4:
                    /* WARNING: Could not recover jumptable at 0x0001000d1dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + lVar5,lVar2);
  return;
}



/* Entry: 1000d1dcc; end: 1000d1e13;  */

undefined8 FUN_1000d1dcc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d373d8;
  FUN_1000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1000d1e14; end: 1000d1e27;  */

bool FUN_1000d1e14(int *param_1)

{
  return *param_1 - 0x13U < 0xfffffffe;
}



/* Entry: 1000d1e28; end: 1000d1e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d1e28(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = param_1;
  (**(code **)(unaff_x20 + _DAT_113094cd0))();
  if ((uVar1 & 1) != 0) {
    func_0x000100087f6c(param_1);
  }
  return;
}



/* Entry: 1000d1e7c; end: 1000d1e9b;  */

void FUN_1000d1e7c(void)

{
  FUN_1000d1e28();
  return;
}



/* Entry: 1000d1e9c; end: 1000d1f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d1e9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da95b8);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da95b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da95c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da95c8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000d1f20; end: 1000d1f43;  */

void FUN_1000d1f20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d1f44; end: 1000d1f4f;  */

undefined * FUN_1000d1f44(void)

{
  return &UNK_1103ce8e8;
}



/* Entry: 1000d1f50; end: 1000d1feb; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage setObjectValue:forKey:shouldPersist:] */

/* WARNING: Possible PIC construction at 0x0001000d1fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000d1fd4) */

void FUN_1000d1f50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1000d1fec(param_3,uVar1,param_4,param_2,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1000d1fec; end: 1000d220b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d1fec(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar1 = &puStack_90;
  ppuVar4 = &puStack_90;
  uVar5 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar5 = param_4 >> 0x38 & 0xf;
  }
  if (param_2 == 0) {
    if (uVar5 == 0) goto LAB_1000d21b4;
    lVar7 = *(long *)(unaff_x20 + _DAT_112da95c0);
    uVar6 = *(undefined8 *)(lVar7 + _DAT_112da95f8);
    puVar2 = &UNK_1103cdf20;
    func_0x000107c613fc(&UNK_1103cdf20,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar7);
    puVar3 = &UNK_1103cdf48;
    func_0x000107c613fc(&UNK_1103cdf48,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_3;
    *(ulong *)(puVar3 + 0x20) = param_4;
    pcStack_70 = (code *)&UNK_1014c46e4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000f6b44;
    puStack_78 = &UNK_1103cdf60;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    uVar5 = param_4;
    puVar2 = puStack_68;
  }
  else {
    if (uVar5 == 0) goto LAB_1000d21b4;
    lVar7 = *(long *)(unaff_x20 + _DAT_112da95c0);
    uVar6 = *(undefined8 *)(lVar7 + _DAT_112da95f8);
    puVar2 = &UNK_1103cdf20;
    func_0x000107c613fc(&UNK_1103cdf20,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar7);
    puVar3 = &UNK_1103cdf98;
    func_0x000107c613fc(&UNK_1103cdf98,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_3;
    *(ulong *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    *(ulong *)(puVar3 + 0x30) = param_2;
    pcStack_70 = FUN_100102704;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000f6b44;
    puStack_78 = &UNK_1103cdfb0;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c61434(param_4);
    uVar5 = param_2;
    ppuVar4 = ppuVar1;
  }
  func_0x000107c61434(uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar4);
LAB_1000d21b4:
  if ((param_5 & 1) != 0) {
    FUN_1000d224c(&puStack_90);
    puVar2 = puStack_90;
    FUN_1000d28b0(param_1,param_2,param_3,param_4);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1000d220c; end: 1000d222b;  */

void FUN_1000d220c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000d222c; end: 1000d224b;  */

void FUN_1000d222c(void)

{
  func_0x000107c61168(&PTR_PTR_113096318);
  return;
}



/* Entry: 1000d224c; end: 1000d225f;  */

void FUN_1000d224c(void)

{
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  FUN_100075034(FUN_1000ca6b0,auStack_50);
  return;
}



/* Entry: 1000d2260; end: 1000d22a7;  */

void FUN_1000d2260(undefined8 param_1,code *param_2)

{
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*param_2)(param_1,auStack_50);
  return;
}



/* Entry: 1000d22a8; end: 1000d22b3;  */

void FUN_1000d22a8(undefined8 param_1)

{
  code *pcVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  lVar2 = *(long *)(**(long **)(unaff_x20 + 0x28) + 0x50);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(lVar4 + 0x40),pcVar1,*(undefined8 *)(unaff_x20 + 0x20));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_60 = lVar2;
  FUN_100075034(puVar3,FUN_1000ca6b0,auStack_70,lVar2);
  (*pcVar1)(param_1,puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}


