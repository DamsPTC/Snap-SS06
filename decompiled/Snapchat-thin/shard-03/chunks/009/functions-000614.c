/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ed30f4; end: 102ed3147;  */

void FUN_102ed30f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102ecec50(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102ed3148; end: 102ed31bf;  */

void FUN_102ed3148(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102ed33f8;
  plVar4[3] = lVar1;
  plVar4[4] = lVar2;
  plVar4[2] = unaff_x20 + 0x18;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  plVar4[5] = (long)plVar3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102ed0084;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)();
  return;
}



/* Entry: 102ed31c0; end: 102ed3237;  */

void FUN_102ed31c0(undefined8 param_1)

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



/* Entry: 102ed3238; end: 102ed3297;  */

void FUN_102ed3238(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ed33fc;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec7310,lVar1,lVar2);
  return;
}



/* Entry: 102ed3298; end: 102ed3307;  */

void FUN_102ed3298(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102ed3400;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102ed3308; end: 102ed332b;  */

undefined8 FUN_102ed3308(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102ed332c; end: 102ed333f;  */

void FUN_102ed332c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 102ed3340; end: 102ed3353;  */

void FUN_102ed3340(void)

{
  FUN_102ed2b1c();
  return;
}



/* Entry: 102ed3354; end: 102ed3407;  */

void FUN_102ed3354(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return;
}



/* Entry: 102ed3408; end: 102ed349b;  */

void FUN_102ed3408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_5 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ed349c;
                    /* WARNING: Could not recover jumptable at 0x000102ed3498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3,1,param_4,param_5);
  return;
}



/* Entry: 102ed349c; end: 102ed34eb;  */

void FUN_102ed349c(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ed34e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102ed34ec; end: 102ed350b;  */

void FUN_102ed34ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102ed350c; end: 102ed35a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed350c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f279e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ed35a4; end: 102ed3603; -[MemoriesSnapDocDuplicationDetectionServices init] */

void FUN_102ed35a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapDocDuplicationDetectionServicesAPI.MemoriesSnapDocDuplicationDetectionServices"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed35d0);
  (*pcVar1)();
}



/* Entry: 102ed3604; end: 102ed3613; -[MemoriesSnapDocDuplicationDetectionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed3604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f279e0));
  return;
}



/* Entry: 102ed3614; end: 102ed3adb;  */

uint FUN_102ed3614(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  lVar3 = param_1;
  func_0x000102ed3798();
  lVar10 = *(long *)(lVar3 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 == 0) {
    uVar9 = 0;
    uVar2 = 0;
  }
  else {
    uVar9 = 0;
    uVar2 = 0;
    plVar11 = (long *)(lVar3 + 0x28);
    do {
      lVar7 = *plVar11;
      if (lVar7 == 0) {
        uVar2 = 1;
      }
      else if (lVar7 == 1) {
        uVar9 = 1;
      }
      else if (lVar7 != 2) {
        lVar8 = plVar11[-1];
        func_0x000102ed3f3c(lVar8,lVar7);
        func_0x000107c61434(lVar7);
        puVar4 = puVar6;
        func_0x000107c61558();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          func_0x000102ed5f60(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar1 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          func_0x000102ed5f60(puVar6,uVar1 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
        *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar8;
        *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar7;
        func_0x000102ed3f50(lVar8,lVar7);
      }
      plVar11 = plVar11 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  func_0x000107c6142c(lVar3);
  func_0x000107c61434(puVar6);
  func_0x00010392c7e8(uVar2,uVar9,puVar6);
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(param_1);
  return uVar2 & 0x101;
}



/* Entry: 102ed3adc; end: 102ed3eb3;  */

/* WARNING: Removing unreachable block (ram,0x000102ed3eac) */
/* WARNING: Removing unreachable block (ram,0x000102ed3ea4) */
/* WARNING: Removing unreachable block (ram,0x000102ed3e9c) */
/* WARNING: Removing unreachable block (ram,0x000102ed3ea0) */
/* WARNING: Removing unreachable block (ram,0x000102ed3ea8) */
/* WARNING: Removing unreachable block (ram,0x000102ed3eb0) */
/* WARNING: Removing unreachable block (ram,0x000102ed3e98) */

undefined1  [16] FUN_102ed3adc(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **unaff_x20;
  undefined **ppuVar7;
  undefined1 auVar8 [16];
  
  ppuVar2 = unaff_x20;
  func_0x000107c51cec();
  func_0x000107c61180();
  ppuVar1 = ppuVar2;
  func_0x000107c5faec();
  lVar3 = param_2;
  func_0x000107c61170(ppuVar2);
  ppuVar7 = &PTR____CFConstantStringClassReference_110f52d38;
  ppuVar2 = ppuVar7;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52d38);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar2);
  if (ppuVar7 == ppuVar1 && lVar3 == param_2) {
    func_0x000107c6142c(param_2);
    param_2 = lVar3;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c605b8(ppuVar7,lVar3,ppuVar1,param_2,0);
    func_0x000107c6142c(lVar3);
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110f52cd8;
      ppuVar2 = ppuVar7;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52cd8);
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar2);
      lVar3 = lVar4;
      if ((ppuVar7 == ppuVar1) && (lVar4 == param_2)) {
LAB_102ed3be4:
        func_0x000107c6142c(param_2);
        param_2 = lVar3;
      }
      else {
        func_0x000107c605b8(ppuVar7,lVar4,ppuVar1,param_2,0);
        func_0x000107c6142c(lVar4);
        if (((ulong)ppuVar7 & 1) == 0) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110f52d18;
          ppuVar2 = ppuVar7;
          func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52d18);
          func_0x000107c5faec();
          func_0x000107c61170(ppuVar2);
          if ((ppuVar7 == ppuVar1) && (lVar3 == param_2)) goto LAB_102ed3be4;
          lVar4 = lVar3;
          func_0x000107c605b8(ppuVar7,lVar3,ppuVar1,param_2,0);
          func_0x000107c6142c(lVar3);
          if (((ulong)ppuVar7 & 1) != 0) goto LAB_102ed3c20;
          ppuVar7 = &PTR____CFConstantStringClassReference_110f52cf8;
          ppuVar2 = ppuVar7;
          func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52cf8);
          func_0x000107c5faec();
          lVar3 = lVar4;
          func_0x000107c61170(ppuVar2);
          if ((ppuVar7 == ppuVar1) && (lVar4 == param_2)) {
LAB_102ed3ce4:
            func_0x000107c6142c(param_2);
            lVar5 = lVar3;
            param_2 = lVar4;
LAB_102ed3d1c:
            func_0x000107c6142c(param_2);
          }
          else {
            lVar5 = lVar4;
            func_0x000107c605b8(ppuVar7,lVar4,ppuVar1,param_2,0);
            func_0x000107c6142c(lVar4);
            if (((ulong)ppuVar7 & 1) != 0) goto LAB_102ed3d1c;
            ppuVar7 = &PTR____CFConstantStringClassReference_110f52d98;
            ppuVar2 = ppuVar7;
            func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52d98);
            func_0x000107c5faec();
            lVar3 = lVar5;
            func_0x000107c61170(ppuVar2);
            if ((ppuVar7 == ppuVar1) && (lVar4 = lVar5, lVar5 == param_2)) goto LAB_102ed3ce4;
            lVar6 = lVar5;
            func_0x000107c605b8(ppuVar7,lVar5,ppuVar1,param_2,0);
            func_0x000107c6142c(lVar5);
            lVar5 = lVar6;
            if (((ulong)ppuVar7 & 1) != 0) goto LAB_102ed3d1c;
            ppuVar7 = &PTR____CFConstantStringClassReference_110f52d78;
            ppuVar2 = ppuVar7;
            func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52d78);
            func_0x000107c5faec();
            lVar3 = lVar6;
            func_0x000107c61170(ppuVar2);
            lVar4 = lVar6;
            if ((ppuVar7 == ppuVar1) && (lVar6 == param_2)) goto LAB_102ed3ce4;
            func_0x000107c605b8(ppuVar7,lVar6,ppuVar1,param_2,0);
            func_0x000107c6142c(lVar6);
            lVar5 = lVar4;
            if (((ulong)ppuVar7 & 1) != 0) goto LAB_102ed3d1c;
            ppuVar7 = &PTR____CFConstantStringClassReference_110f52db8;
            ppuVar2 = ppuVar7;
            func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52db8);
            func_0x000107c5faec();
            lVar3 = lVar4;
            func_0x000107c61170(ppuVar2);
            if ((ppuVar7 == ppuVar1) && (lVar4 == param_2)) goto LAB_102ed3ce4;
            lVar5 = lVar4;
            func_0x000107c605b8(ppuVar7,lVar4,ppuVar1,param_2,0);
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(lVar4);
            if (((ulong)ppuVar7 & 1) == 0) {
              ppuVar2 = (undefined **)0x0;
              lVar5 = 2;
              goto LAB_102ed3c2c;
            }
          }
          func_0x000107c4fa4c();
          func_0x000107c61180();
          ppuVar2 = unaff_x20;
          func_0x000107c5faec();
          func_0x000107c61170(unaff_x20);
          goto LAB_102ed3c2c;
        }
      }
LAB_102ed3c20:
      func_0x000107c6142c(param_2);
      ppuVar2 = (undefined **)0x0;
      lVar5 = 0;
      goto LAB_102ed3c2c;
    }
  }
  func_0x000107c6142c(param_2);
  ppuVar2 = (undefined **)0x0;
  lVar5 = 1;
LAB_102ed3c2c:
  auVar8._8_8_ = lVar5;
  auVar8._0_8_ = ppuVar2;
  return auVar8;
}



/* Entry: 102ed3eb4; end: 102ed3ee7;  */

void FUN_102ed3eb4(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 102ed3ee8; end: 102ed3f2b;  */

void FUN_102ed3ee8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102ed3f2c; end: 102ed3f63;  */

void FUN_102ed3f2c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102ed3f64; end: 102ed4077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102ed3f64(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  bVar5 = *(byte *)(param_1 + _DAT_112f86e80);
  uVar8 = (uint)bVar5;
  uVar6 = *(undefined1 *)(param_1 + _DAT_112f86e88);
  lVar10 = *(long *)(param_1 + _DAT_112f86e90);
  lVar9 = *(long *)(lVar10 + 0x10);
  if (lVar9 != 0) {
    FUN_102f03144(0,lVar9,0);
    puVar11 = (undefined8 *)(lVar10 + 0x28);
    do {
      uVar1 = puVar11[-1];
      uVar3 = *puVar11;
      uVar2 = *(ulong *)(puVar7 + 0x10);
      uVar4 = *(ulong *)(puVar7 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_102f03144(1 < uVar4,uVar2 + 1,1);
      }
      puVar11 = puVar11 + 2;
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  func_0x00010392c7e8(bVar5,uVar6,puVar7);
  return uVar8 & 0x101;
}



/* Entry: 102ed4078; end: 102ed408f;  */

void FUN_102ed4078(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102ed4090; end: 102ed41f3;  */

undefined8 * FUN_102ed4090(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 102ed41f4; end: 102ed4317;  */

int FUN_102ed41f4(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Entry: 102ed4318; end: 102ed43c3;  */

void FUN_102ed4318(void)

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



/* Entry: 102ed43c4; end: 102ed43d3;  */

void FUN_102ed43c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102ed43d4; end: 102ed441f;  */

void FUN_102ed43d4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 102ed4420; end: 102ed4593;  */

void FUN_102ed4420(void)

{
  return;
}



/* Entry: 102ed4594; end: 102ed45d3;  */

void FUN_102ed4594(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f27ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db635d4;
  func_0x000107c61520(&UNK_10db635d4,&UNK_1105e5c00);
  puRam0000000112f27ac8 = puVar1;
  return;
}



/* Entry: 102ed45d4; end: 102ed461b;  */

void FUN_102ed45d4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000102ed4400();
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined **)(lVar2 + 0x78) = puVar1;
  *param_1 = lVar2;
  return;
}



/* Entry: 102ed461c; end: 102ed467f;  */

void FUN_102ed461c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ed4680; end: 102ed46d3;  */

void FUN_102ed4680(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ed46d4;
  plVar1[0x19] = param_3;
  plVar1[0x1a] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4728,0,0);
  return;
}



/* Entry: 102ed46d4; end: 102ed470f;  */

void FUN_102ed46d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ed470c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ed4710; end: 102ed4727;  */

void FUN_102ed4710(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4728,0,0);
  return;
}



/* Entry: 102ed4728; end: 102ed47cf;  */

void FUN_102ed4728(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0xd0) + 0x28);
  *(long **)(unaff_x22 + 0xd8) = plVar4;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ed4784;
  plVar1[5] = unaff_x22 + 0xb0;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed47d0; end: 102ed4827;  */

void FUN_102ed47d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar3 + 0x70) = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4828,0,0);
  return;
}



/* Entry: 102ed4828; end: 102ed48c7;  */

void FUN_102ed4828(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0xd0) + 0x20);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ed4880;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed48c8; end: 102ed4a17;  */

void FUN_102ed48c8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  
  lVar9 = *(long *)(*(long *)(unaff_x22 + 200) + 0x10);
  *(long *)(unaff_x22 + 0xf8) = lVar9;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar9 != 0) {
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined **)(unaff_x22 + 0x108) = puVar3;
    FUN_102ed6e60(*(long *)(unaff_x22 + 200) + 0x20,unaff_x22 + 0x38);
    func_0x000100d2a98c(unaff_x22 + 0x38,unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar9 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
    puVar4 = (undefined8 *)(unaff_x22 + 0x60);
    func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x78));
    uVar5 = *puVar4;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
    piVar8 = *(int **)(lVar9 + 0x20);
    iVar1 = *piVar8;
    plVar6 = (long *)(ulong)(uint)piVar8[1];
    func_0x000107c61174();
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x118) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102ed4a18;
                    /* WARNING: Could not recover jumptable at 0x000102ed49c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))
              (unaff_x22 + 0x88,uVar5,"beginSession(with:)",0x13,0x2000000000000002,0x51,
               unaff_x22 + 0xb8,uVar2,lVar9);
    return;
  }
  *(undefined **)(unaff_x22 + 0x128) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar6 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102ed4dc4;
  plVar10 = *(long **)(unaff_x22 + 0xd8);
  plVar6[5] = unaff_x22 + 0xc0;
  plVar6[6] = (long)plVar10;
  lVar11 = *(long *)(*plVar10 + 0x50);
  plVar6[7] = lVar11;
  lVar9 = 0;
  __sSqMa(0,lVar11);
  plVar6[8] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar6[9] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[10] = uVar7;
  lVar9 = *(long *)(lVar11 + -8);
  plVar6[0xb] = lVar9;
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed4a18; end: 102ed4a87;  */

void FUN_102ed4a18(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    func_0x000107c61170(*(undefined8 *)(lVar2 + 0x110));
    pcVar1 = FUN_102ed4bf0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(lVar2 + 0xb8);
    func_0x000107c61170(*(undefined8 *)(lVar2 + 0x110));
    pcVar1 = FUN_102ed4a88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ed4a88; end: 102ed4bef;  */

void FUN_102ed4a88(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  
  func_0x000100fee738(*(undefined8 *)(unaff_x22 + 0x120));
  lVar6 = *(long *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar9 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000834e4(unaff_x22 + 0x60);
  if (lVar6 + 1 == lVar9) {
    *(undefined8 *)(unaff_x22 + 0x128) = uVar2;
    plVar3 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x130) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102ed4dc4;
    plVar10 = *(long **)(unaff_x22 + 0xd8);
    plVar3[5] = unaff_x22 + 0xc0;
    plVar3[6] = (long)plVar10;
    lVar9 = *(long *)(*plVar10 + 0x50);
    plVar3[7] = lVar9;
    lVar6 = 0;
    __sSqMa(0,lVar9);
    plVar3[8] = lVar6;
    lVar6 = *(long *)(lVar6 + -8);
    plVar3[9] = lVar6;
    uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[10] = uVar7;
    lVar6 = *(long *)(lVar9 + -8);
    plVar3[0xb] = lVar6;
    uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar3[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x100);
  *(long *)(unaff_x22 + 0x100) = lVar6 + 1;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar2;
  FUN_102ed6e60(*(long *)(unaff_x22 + 200) + lVar6 * 0x28 + 0x48,unaff_x22 + 0x38);
  func_0x000100d2a98c(unaff_x22 + 0x38,unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar6 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  puVar4 = (undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x78));
  uVar5 = *puVar4;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar5;
  piVar8 = *(int **)(lVar6 + 0x20);
  iVar1 = *piVar8;
  plVar3 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102ed4a18;
                    /* WARNING: Could not recover jumptable at 0x000102ed4bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (unaff_x22 + 0x88,uVar5,"beginSession(with:)",0x13,0x2000000000000002,0x51,
             unaff_x22 + 0xb8,uVar2,lVar6);
  return;
}



/* Entry: 102ed4bf0; end: 102ed4dc3;  */

void FUN_102ed4bf0(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x108);
  func_0x000107c61558();
  uVar10 = *(ulong *)(unaff_x22 + 0x108);
  uVar8 = uVar10;
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
    func_0x000100fb5010(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
  }
  uVar3 = *(ulong *)(uVar8 + 0x10);
  uVar10 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar3) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    func_0x000100fb5010(uVar10,uVar3 + 1,1,uVar8);
  }
  *(ulong *)(uVar10 + 0x10) = uVar3 + 1;
  func_0x000100d2a98c(unaff_x22 + 0x88,uVar10 + uVar3 * 0x28 + 0x20);
  lVar7 = *(long *)(unaff_x22 + 0xf8);
  lVar12 = *(long *)(unaff_x22 + 0x100);
  func_0x0001000834e4(unaff_x22 + 0x60);
  if (lVar12 + 1 == lVar7) {
    *(ulong *)(unaff_x22 + 0x128) = uVar10;
    plVar4 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x130) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102ed4dc4;
    plVar11 = *(long **)(unaff_x22 + 0xd8);
    plVar4[5] = unaff_x22 + 0xc0;
    plVar4[6] = (long)plVar11;
    lVar12 = *(long *)(*plVar11 + 0x50);
    plVar4[7] = lVar12;
    lVar7 = 0;
    __sSqMa(0,lVar12);
    plVar4[8] = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    plVar4[9] = lVar7;
    uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[10] = uVar8;
    lVar7 = *(long *)(lVar12 + -8);
    plVar4[0xb] = lVar7;
    uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[0xc] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x100);
  *(long *)(unaff_x22 + 0x100) = lVar7 + 1;
  *(ulong *)(unaff_x22 + 0x108) = uVar10;
  FUN_102ed6e60(*(long *)(unaff_x22 + 200) + lVar7 * 0x28 + 0x48,unaff_x22 + 0x38);
  func_0x000100d2a98c(unaff_x22 + 0x38,unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  puVar5 = (undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000a8868(puVar5,*(undefined8 *)(unaff_x22 + 0x78));
  uVar6 = *puVar5;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar6;
  piVar9 = *(int **)(lVar7 + 0x20);
  iVar1 = *piVar9;
  plVar4 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ed4a18;
                    /* WARNING: Could not recover jumptable at 0x000102ed4d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (unaff_x22 + 0x88,uVar6,"beginSession(with:)",0x13,0x2000000000000002,0x51,
             unaff_x22 + 0xb8,uVar2,lVar7);
  return;
}



/* Entry: 102ed4dc4; end: 102ed4e0f;  */

void FUN_102ed4dc4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x130));
  *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4e10,*(undefined8 *)(lVar1 + 0xc0),0);
  return;
}



/* Entry: 102ed4e10; end: 102ed4e67;  */

void FUN_102ed4e10(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4e68,0,0);
  return;
}



/* Entry: 102ed4e68; end: 102ed4e9f;  */

void FUN_102ed4e68(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102ed4e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed4ea0; end: 102ed4ef7;  */

void FUN_102ed4ea0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ed4ef8;
  plVar1[0x19] = param_3;
  plVar1[0x1a] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4728,0,0);
  return;
}



/* Entry: 102ed4ef8; end: 102ed4f3f;  */

void FUN_102ed4ef8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4f40,0,0);
  return;
}



/* Entry: 102ed4f40; end: 102ed50bb;  */

void FUN_102ed4f40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(unaff_x22 + 0x70);
  lVar8 = *(long *)(lVar11 + 0x10);
  if (lVar8 != 0) {
    func_0x000102f0317c(0,lVar8,0);
    lVar11 = lVar11 + 0x20;
    do {
      FUN_102ed6e60(lVar11,unaff_x22 + 0x10);
      func_0x000100d2a98c(unaff_x22 + 0x10,unaff_x22 + 0x38);
      lVar9 = *(long *)(unaff_x22 + 0x50);
      func_0x0001000c6518(unaff_x22 + 0x38,lVar9);
      lVar9 = *(long *)(lVar9 + -8);
      puVar5 = (undefined8 *)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
      func_0x000107c615b8();
      (**(code **)(lVar9 + 0x10))();
      uVar1 = *puVar5;
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      uVar12 = puVar5[4];
      func_0x000107c61170(puVar5[1]);
      func_0x0001000834e4(unaff_x22 + 0x38);
      func_0x000107c615c0(puVar5);
      uVar7 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
        func_0x000102f0317c(1 < *(ulong *)(puVar4 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar4 + uVar7 * 0x20 + 0x20) = uVar1;
      *(undefined8 *)(puVar4 + uVar7 * 0x20 + 0x28) = uVar3;
      *(undefined8 *)(puVar4 + uVar7 * 0x20 + 0x30) = uVar12;
      *(undefined8 *)(puVar4 + uVar7 * 0x20 + 0x38) = uVar2;
      lVar11 = lVar11 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(undefined **)(unaff_x22 + 0x88) = puVar4;
  plVar6 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102ed50bc;
  plVar10 = *(long **)(unaff_x22 + 0x78);
  plVar6[5] = unaff_x22 + 0x60;
  plVar6[6] = (long)plVar10;
  lVar8 = *(long *)(*plVar10 + 0x50);
  plVar6[7] = lVar8;
  lVar11 = 0;
  __sSqMa(0,lVar8);
  plVar6[8] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar6[9] = lVar11;
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[10] = uVar7;
  lVar11 = *(long *)(lVar8 + -8);
  plVar6[0xb] = lVar11;
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed50bc; end: 102ed5153;  */

void FUN_102ed50bc(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0x90));
  uVar3 = *(undefined8 *)(lVar7 + 0x60);
  lVar2 = *(long *)(lVar7 + 0x68);
  *(undefined8 *)(lVar7 + 0x98) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x28);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(lVar7 + 0xa0) = plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)FUN_102ed5154;
                    /* WARNING: Could not recover jumptable at 0x000102ed5150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(lVar7 + 0x88),uVar3,lVar2);
  return;
}



/* Entry: 102ed5154; end: 102ed51cb;  */

void FUN_102ed5154(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  uVar4 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa0));
  func_0x000107c615e8(uVar1);
  func_0x000107c6142c(uVar4);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102ed51cc;
  }
  else {
    pcVar2 = (code *)0x102ed51d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102ed51cc; end: 102ed51e3;  */

void FUN_102ed51cc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102ed51d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed51e4; end: 102ed53e3;  */

void FUN_102ed51e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined2 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(long **)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ed5244;
  plVar1[5] = unaff_x22 + 0x70;
  plVar1[6] = (long)param_2;
  lVar4 = *(long *)(*param_2 + 0x50);
  plVar1[7] = lVar4;
  lVar2 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed53e4; end: 102ed5607;  */

void FUN_102ed53e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long unaff_x22;
  undefined *puVar11;
  undefined8 uVar12;
  
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(unaff_x22 + 200);
  lVar6 = *(long *)(lVar10 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c6142c(lVar10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000102f0317c(0,lVar6,0);
    lVar10 = lVar10 + 0x20;
    do {
      FUN_102ed6e60(lVar10,unaff_x22 + 0x10);
      func_0x000100d2a98c(unaff_x22 + 0x10,unaff_x22 + 0x38);
      lVar8 = *(long *)(unaff_x22 + 0x50);
      func_0x0001000c6518(unaff_x22 + 0x38,lVar8);
      lVar8 = *(long *)(lVar8 + -8);
      puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      func_0x000107c615b8();
      (**(code **)(lVar8 + 0x10))();
      uVar1 = *puVar4;
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      uVar12 = puVar4[4];
      func_0x000107c61170(puVar4[1]);
      func_0x0001000834e4(unaff_x22 + 0x38);
      func_0x000107c615c0(puVar4);
      uVar5 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar5) {
        func_0x000102f0317c(1 < *(ulong *)(puVar11 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar11 + uVar5 * 0x20 + 0x20) = uVar1;
      *(undefined8 *)(puVar11 + uVar5 * 0x20 + 0x28) = uVar3;
      *(undefined8 *)(puVar11 + uVar5 * 0x20 + 0x30) = uVar12;
      *(undefined8 *)(puVar11 + uVar5 * 0x20 + 0x38) = uVar2;
      lVar10 = lVar10 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 200));
  }
  *(undefined **)(unaff_x22 + 0xd0) = puVar11;
  if (*(long *)(unaff_x22 + 0x88) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
    func_0x000107c6157c(*(long *)(unaff_x22 + 0x88));
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd8) = plVar7;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102ed566c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScT5valuexvg_11034fdb8)();
    return;
  }
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102ed572c;
  plVar9 = *(long **)(unaff_x22 + 0x90);
  plVar7[5] = unaff_x22 + 0x60;
  plVar7[6] = (long)plVar9;
  lVar6 = *(long *)(*plVar9 + 0x50);
  plVar7[7] = lVar6;
  lVar10 = 0;
  __sSqMa(0,lVar6);
  plVar7[8] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  plVar7[9] = lVar10;
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[10] = uVar5;
  lVar10 = *(long *)(lVar6 + -8);
  plVar7[0xb] = lVar10;
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed5608; end: 102ed566b;  */

void FUN_102ed5608(undefined1 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_102ed5d04();
  func_0x000107c613f8(&UNK_1105e5c00,param_1,0,0);
  *param_1 = 1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_102ed5914(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ed5668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed566c; end: 102ed56cf;  */

void FUN_102ed566c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ed56d0;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0xd0));
    pcVar1 = FUN_102ed588c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ed56d0; end: 102ed572b;  */

void FUN_102ed56d0(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ed572c;
  plVar4 = *(long **)(unaff_x22 + 0x90);
  plVar1[5] = unaff_x22 + 0x60;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed572c; end: 102ed57d3;  */

void FUN_102ed572c(void)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar3 = *(ushort *)(lVar8 + 0x108);
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0xe8));
  uVar4 = *(undefined8 *)(lVar8 + 0x60);
  lVar2 = *(long *)(lVar8 + 0x68);
  *(undefined8 *)(lVar8 + 0xf0) = uVar4;
  func_0x000107c614f0(uVar4);
  piVar6 = *(int **)(lVar2 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(lVar8 + 0xf8) = plVar5;
  *plVar5 = lVar7;
  plVar5[1] = (long)FUN_102ed57d4;
                    /* WARNING: Could not recover jumptable at 0x000102ed57d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(lVar8 + 0xd0),uVar3 & 0x101,*(undefined8 *)(lVar8 + 0x98),uVar4,lVar2);
  return;
}



/* Entry: 102ed57d4; end: 102ed584b;  */

void FUN_102ed57d4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xf0);
  uVar4 = *(undefined8 *)(lVar3 + 0xd0);
  *(long *)(lVar3 + 0x100) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xf8));
  func_0x000107c615e8(uVar1);
  func_0x000107c6142c(uVar4);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102ed584c;
  }
  else {
    pcVar2 = FUN_102ed58d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102ed584c; end: 102ed588b;  */

void FUN_102ed584c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_102ed5914(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ed5888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed588c; end: 102ed58d3;  */

void FUN_102ed588c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_102ed5914(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ed58d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed58d4; end: 102ed5913;  */

void FUN_102ed58d4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_102ed5914(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ed5910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed5914; end: 102ed5a17;  */

void FUN_102ed5914(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_102ed6e60(param_1,auStack_78);
      func_0x000100d2a98c(auStack_78,auStack_a0);
      FUN_102ed6e60(auStack_a0,auStack_c8);
      puVar1 = &UNK_1105e5cd8;
      func_0x000107c613fc(&UNK_1105e5cd8,0x38,7);
      func_0x000100d2a98c(auStack_c8,puVar1 + 0x10);
      uVar2 = 0x112d518a8;
      func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
      uVar3 = 0;
      func_0x0001009548b0(0,0,0x54,4,0,0,&UNK_10db636b8,puVar1,uVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(uVar3);
      func_0x0001000834e4(auStack_a0);
      param_1 = param_1 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 102ed5a18; end: 102ed5b87;  */

/* WARNING: Possible PIC construction at 0x000102ed5aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed5aa4) */

void FUN_102ed5a18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_1105e5d28;
  func_0x000107c613fc(&UNK_1105e5d28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(param_1);
  func_0x0001001ca524(0,0,0x54,3,0,0,&UNK_10db636e8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102ed5b88; end: 102ed5c67;  */

/* WARNING: Possible PIC construction at 0x000102ed5c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed5c4c) */

void FUN_102ed5b88(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x30);
  puVar3 = &UNK_1105e5cb0;
  func_0x000107c613fc(&UNK_1105e5cb0,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  puVar3[0x28] = (byte)param_1 & 1;
  puVar3[0x29] = (byte)((uint)param_1 >> 8) & 1;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000100859150(0,0,0x54,3,0,0,&UNK_10db636a0,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102ed5c68; end: 102ed5d03;  */

void FUN_102ed5c68(void)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ushort uVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar7 = 0x100;
  if (*(char *)(unaff_x20 + 0x29) == '\0') {
    uVar7 = 0;
  }
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ed7080;
  *(ushort *)(plVar4 + 0x21) = uVar7 | bVar2;
  plVar4[0x12] = lVar9;
  plVar4[0x13] = lVar8;
  plVar4[0x10] = (long)plVar1;
  plVar4[0x11] = lVar5;
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  plVar4[0x14] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x102ed5244;
  plVar3[5] = (long)(plVar4 + 0xe);
  plVar3[6] = (long)plVar1;
  lVar8 = *(long *)(*plVar1 + 0x50);
  plVar3[7] = lVar8;
  lVar5 = 0;
  __sSqMa(0,lVar8);
  plVar3[8] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[9] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[10] = uVar6;
  lVar5 = *(long *)(lVar8 + -8);
  plVar3[0xb] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ed5d04; end: 102ed5d43;  */

void FUN_102ed5d04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f27b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db635fc;
  func_0x000107c61520(&UNK_10db635fc,&UNK_1105e5c00);
  puRam0000000112f27b90 = puVar1;
  return;
}



/* Entry: 102ed5d44; end: 102ed5d5b;  */

void FUN_102ed5d44(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed5d5c,0,0);
  return;
}



/* Entry: 102ed5d5c; end: 102ed5dd3;  */

void FUN_102ed5d5c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102ed5dd4;
                    /* WARNING: Could not recover jumptable at 0x000102ed5dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 102ed5dd4; end: 102ed5e33;  */

void FUN_102ed5dd4(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ed5e34;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x102ed5e44;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ed5e34; end: 102ed5e57;  */

void FUN_102ed5e34(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102ed5e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ed5e58; end: 102ed6067;  */

undefined * FUN_102ed5e58(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed5f60);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f27ba0;
    func_0x0001000285a8(0x112f27ba0,&UNK_10db63aa0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1105e5b40);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102ed6068; end: 102ed6097;  */

ulong FUN_102ed6068(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed671c);
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
  FUN_102ed686c(uVar2,uVar4,&SUB_1012fc5c8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed6718);
      (*pcVar1)();
    }
    FUN_102ed68ec(0,uVar2,uVar3 + 0x20,param_4,0x112d715d8,&PTR_PTR_1126b3560);
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



/* Entry: 102ed6098; end: 102ed619f;  */

undefined * FUN_102ed6098(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed61a0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f27bd0;
    func_0x0001000285a8(0x112f27bd0,&UNK_10db63720);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_1105e88a8);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x40 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102ed61a0; end: 102ed62df;  */

ulong FUN_102ed61a0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed62e0);
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
  FUN_102ed686c(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed62dc);
      (*pcVar1)();
    }
    func_0x000102ed6a08(0,uVar2,uVar3 + 0x20,param_4,param_6);
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



/* Entry: 102ed62e0; end: 102ed6317;  */

ulong FUN_102ed62e0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed65b8);
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
  FUN_102ed686c(uVar2,uVar4,0x102f0bb8c);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed65b4);
      (*pcVar1)();
    }
    func_0x000102ed6c34(0,uVar2,uVar3 + 0x20,param_4,0x112d6dfc8,&UNK_10d9301c0);
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



/* Entry: 102ed6318; end: 102ed645b;  */

undefined * FUN_102ed6318(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ed645c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f27bb0;
    func_0x0001000285a8(0x112f27bb0,&UNK_10db63708);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f27bb8;
    func_0x0001000285a8(0x112f27bb8,&UNK_10db63710);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102ed645c; end: 102ed646f;  */

ulong FUN_102ed645c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed686c);
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
  FUN_102ed686c(uVar2,uVar4,0x102f0bba0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed6868);
      (*pcVar1)();
    }
    (*(code *)0x102ed6b10)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102ed6470; end: 102ed65b7;  */

ulong FUN_102ed6470(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed65b8);
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
  FUN_102ed686c(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed65b4);
      (*pcVar1)();
    }
    func_0x000102ed6c34(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102ed65b8; end: 102ed65d3;  */

ulong FUN_102ed65b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed671c);
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
  FUN_102ed686c(uVar2,uVar4,FUN_102f0bc38);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed6718);
      (*pcVar1)();
    }
    FUN_102ed68ec(0,uVar2,uVar3 + 0x20,param_4,0x112f27bc8,&PTR_PTR_1126b37e0);
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



/* Entry: 102ed65d4; end: 102ed671b;  */

ulong FUN_102ed65d4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed671c);
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
  FUN_102ed686c(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed6718);
      (*pcVar1)();
    }
    FUN_102ed68ec(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102ed671c; end: 102ed672f;  */

ulong FUN_102ed671c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed686c);
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
  FUN_102ed686c(uVar2,uVar4,0x102f0bc5c);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed6868);
      (*pcVar1)();
    }
    FUN_102ed6d48(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102ed6730; end: 102ed686b;  */

ulong FUN_102ed6730(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed686c);
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
  FUN_102ed686c(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ed6868);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102ed686c; end: 102ed68eb;  */

undefined * FUN_102ed686c(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 102ed68ec; end: 102ed6d47;  */

long FUN_102ed68ec(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed6a04);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed6a08);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102ed7040(0,param_5,param_6);
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
      FUN_102ed7040(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed6a00);
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



/* Entry: 102ed6d48; end: 102ed6e5f;  */

long FUN_102ed6d48(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed6e5c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed6e60);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102ed7040(0,0x112f27bc0,&PTR_PTR_1126c0e50);
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
      FUN_102ed7040(0,0x112f27bc0,&PTR_PTR_1126c0e50);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102ed6e58);
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



/* Entry: 102ed6e60; end: 102ed6ea3;  */

long FUN_102ed6e60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ed6ea4; end: 102ed6ef7;  */

void FUN_102ed6ea4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ed7084;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed5d5c,0,0);
  return;
}



/* Entry: 102ed6ef8; end: 102ed6f63;  */

void FUN_102ed6ef8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ed6f64;
  plVar4[0xe] = lVar2;
  plVar4[0xf] = lVar5;
  plVar3 = (long *)0x140;
  func_0x000107c615b8();
  plVar4[0x10] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102ed4ef8;
  plVar3[0x19] = lVar2;
  plVar3[0x1a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4728,0,0);
  return;
}



/* Entry: 102ed6f64; end: 102ed6f9f;  */

void FUN_102ed6f64(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ed6f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ed6fa0; end: 102ed7003;  */

void FUN_102ed6fa0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ed7004;
  plVar3 = (long *)0x140;
  func_0x000107c615b8();
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102ed46d4;
  plVar3[0x19] = lVar2;
  plVar3[0x1a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ed4728,0,0);
  return;
}



/* Entry: 102ed7004; end: 102ed703f;  */

void FUN_102ed7004(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ed703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ed7040; end: 102ed707f;  */

void FUN_102ed7040(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102ed7080; end: 102ed7087;  */

void FUN_102ed7080(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ed6f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ed7088; end: 102ed780f;  */

void FUN_102ed7088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc(unaff_x20,0x140,7);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x70) = param_39;
  *(undefined8 *)(unaff_x20 + 0x78) = param_38;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_16;
  *(undefined8 *)(unaff_x20 + 0x98) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_20;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_21;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_22;
  *(undefined8 *)(unaff_x20 + 200) = param_23;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_24;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_25;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_26;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_27;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_28;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_29;
  *(undefined8 *)(unaff_x20 + 0x100) = param_30;
  *(undefined8 *)(unaff_x20 + 0x108) = param_31;
  *(undefined8 *)(unaff_x20 + 0x110) = param_32;
  *(undefined8 *)(unaff_x20 + 0x120) = param_36;
  *(undefined8 *)(unaff_x20 + 0x118) = param_35;
  *(undefined8 *)(unaff_x20 + 0x130) = param_33;
  *(undefined8 *)(unaff_x20 + 0x138) = param_34;
  *(undefined8 *)(unaff_x20 + 0x128) = param_37;
  return;
}



/* Entry: 102ed7810; end: 102ed78db;  */

/* WARNING: Possible PIC construction at 0x000102ed78bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed78c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed7810(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_3 + _DAT_113077160);
  lVar1 = 0;
  func_0x000102ed4660();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f27df8,&UNK_10db63908);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar4);
  pcVar3 = FUN_102ed45d4;
  func_0x0001000bdd8c(FUN_102ed45d4,0);
  *(code **)(lVar2 + 0x28) = pcVar3;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105e5c80;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102ed78dc; end: 102ed78e7;  */

/* WARNING: Possible PIC construction at 0x000102ed78bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed78c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed78dc(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113077160);
  lVar2 = 0;
  func_0x000102ed4660();
  lVar3 = lVar2;
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f27df8,&UNK_10db63908);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar6);
  pcVar4 = FUN_102ed45d4;
  func_0x0001000bdd8c(FUN_102ed45d4,0);
  *(code **)(lVar3 + 0x28) = pcVar4;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105e5c80;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102ed78e8; end: 102ed81ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ed78e8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                  undefined8 param_22,undefined8 param_23,long param_24,long param_25,
                  undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
                  undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
                  undefined8 param_34,long param_35,undefined8 param_36,undefined8 param_37,
                  long param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_110;
  long lStack_108;
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
  undefined8 uStack_70;
  
  uVar15 = ((undefined8 *)(param_3 + _DAT_11303c130))[1];
  uVar14 = *(undefined8 *)(param_3 + _DAT_11303c130);
  func_0x000107c4b8d8();
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(param_8 + _DAT_113080ad0);
  func_0x0001000285a8(0x112ee4190,&UNK_10db0f210);
  uVar2 = *(undefined8 *)(param_24 + _DAT_113046cb0);
  func_0x0001000bda74();
  lVar12 = _DAT_113043c88;
  uVar9 = *(undefined8 *)(param_25 + _DAT_113039d80);
  uVar10 = *(undefined8 *)(param_35 + _DAT_113080518);
  lVar3 = 0;
  FUN_102f057d8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112f27e48,0);
  func_0x000107c61614(lVar4 + _DAT_112f27e50,0);
  *(undefined1 *)(lVar4 + _DAT_112f27e58) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f27e80);
  FUN_102ed3eb4(&uStack_100);
  puVar1[1] = uStack_f8;
  *puVar1 = uStack_100;
  puVar1[3] = uStack_e8;
  puVar1[2] = uStack_f0;
  puVar1[9] = uStack_b8;
  puVar1[8] = uStack_c0;
  puVar1[0xb] = uStack_a8;
  puVar1[10] = uStack_b0;
  puVar1[5] = uStack_d8;
  puVar1[4] = uStack_e0;
  puVar1[7] = uStack_c8;
  puVar1[6] = uStack_d0;
  puVar1[0x12] = uStack_70;
  puVar1[0xf] = uStack_88;
  puVar1[0xe] = uStack_90;
  puVar1[0x11] = uStack_78;
  puVar1[0x10] = uStack_80;
  puVar1[0xd] = uStack_98;
  puVar1[0xc] = uStack_a0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f27fc8);
  puVar1[1] = uStack_f8;
  *puVar1 = uStack_100;
  puVar1[3] = uStack_e8;
  puVar1[2] = uStack_f0;
  puVar1[9] = uStack_b8;
  puVar1[8] = uStack_c0;
  puVar1[0xb] = uStack_a8;
  puVar1[10] = uStack_b0;
  puVar1[5] = uStack_d8;
  puVar1[4] = uStack_e0;
  puVar1[7] = uStack_c8;
  puVar1[6] = uStack_d0;
  puVar1[0x12] = uStack_70;
  puVar1[0xf] = uStack_88;
  puVar1[0xe] = uStack_90;
  puVar1[0x11] = uStack_78;
  puVar1[0x10] = uStack_80;
  puVar1[0xd] = uStack_98;
  puVar1[0xc] = uStack_a0;
  lVar11 = _DAT_112f27fd0;
  puVar5 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar5);
  *(undefined **)(lVar4 + lVar11) = puVar6;
  *(undefined8 *)(lVar4 + _DAT_112f27fd8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112f27ea8) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f27eb0);
  puVar1[1] = uVar15;
  *puVar1 = uVar14;
  *(undefined8 *)(lVar4 + _DAT_112f27eb8) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112f27e98) = param_5;
  *(long *)(lVar4 + _DAT_112f27ec0) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112f27fb8) = param_39;
  *(undefined8 *)(lVar4 + _DAT_112f27ec8) = param_7;
  *(undefined8 *)(lVar4 + _DAT_112f27ed0) = uVar13;
  *(undefined8 *)(lVar4 + _DAT_112f27ed8) = param_9;
  *(undefined8 *)(lVar4 + _DAT_112f27ee0) = param_10;
  *(undefined8 *)(lVar4 + _DAT_112f27e60) = param_11;
  *(undefined8 *)(lVar4 + _DAT_112f27ee8) = param_12;
  *(undefined8 *)(lVar4 + _DAT_112f27ef0) = param_13;
  *(undefined8 *)(lVar4 + _DAT_112f27ef8) = param_14;
  *(undefined8 *)(lVar4 + _DAT_112f27f00) = param_15;
  *(undefined8 *)(lVar4 + _DAT_112f27f08) = param_16;
  *(undefined8 *)(lVar4 + _DAT_112f27f10) = param_17;
  *(undefined8 *)(lVar4 + _DAT_112f27f18) = param_18;
  *(undefined8 *)(lVar4 + _DAT_112f27f20) = param_19;
  *(undefined8 *)(lVar4 + _DAT_112f27f28) = param_20;
  *(undefined8 *)(lVar4 + _DAT_112f27f30) = param_21;
  *(undefined8 *)(lVar4 + _DAT_112f27f38) = param_22;
  *(undefined8 *)(lVar4 + _DAT_112f27f40) = param_23;
  *(undefined8 *)(lVar4 + _DAT_112f27f68) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112f27f48) = uVar9;
  *(undefined8 *)(lVar4 + _DAT_112f27f70) = param_26;
  *(undefined8 *)(lVar4 + _DAT_112f27f78) = param_27;
  *(undefined8 *)(lVar4 + _DAT_112f27f80) = param_28;
  *(undefined8 *)(lVar4 + _DAT_112f27f88) = param_29;
  *(undefined8 *)(lVar4 + _DAT_112f27f90) = param_30;
  *(undefined8 *)(lVar4 + _DAT_112f27f98) = param_31;
  *(undefined8 *)(lVar4 + _DAT_112f27fa0) = param_32;
  *(undefined8 *)(lVar4 + _DAT_112f27f50) = param_33;
  *(undefined8 *)(lVar4 + _DAT_112f27f58) = param_34;
  *(undefined8 *)(lVar4 + _DAT_112f27e78) = uVar10;
  *(undefined8 *)(lVar4 + _DAT_112f27fa8) = param_36;
  *(undefined8 *)(lVar4 + _DAT_112f27e90) = param_37;
  func_0x00010134c94c(param_38 + lVar12,lVar4 + _DAT_112f27fb0);
  lVar11 = *(long *)(param_6 + _DAT_113093a98);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(uVar14);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_39);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c61174();
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_23);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(uVar9);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174();
  func_0x000107c61174(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c615f0(param_33);
  func_0x000107c615f0(param_34);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
    lVar12 = 0;
  }
  else {
    uVar9 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f113d30);
    lVar12 = lVar11;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(uVar9);
  }
  *(long *)(lVar4 + _DAT_112f27e70) = lVar12;
  puVar5 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + _DAT_112f27fc0) = puVar5;
  func_0x0001000285a8(0x112f27de0,&UNK_10db638f0);
  func_0x000107c613fc();
  uVar9 = 0;
  func_0x00010095c380();
  puVar5 = &UNK_1105e5da8;
  func_0x000107c613fc(&UNK_1105e5da8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_11;
  *(undefined8 *)(puVar5 + 0x18) = uVar9;
  func_0x0001000285a8(0x112f27de8,&UNK_10db638f8);
  func_0x000107c613fc();
  func_0x000107c61174(param_11);
  func_0x000107c6157c(uVar9);
  pcVar7 = FUN_102ed860c;
  func_0x0001000bdd8c(FUN_102ed860c,puVar5);
  *(code **)(lVar4 + _DAT_112f27f60) = pcVar7;
  puVar5 = &UNK_1105e5dd0;
  func_0x000107c613fc(&UNK_1105e5dd0,0x60,7);
  *(undefined8 *)(puVar5 + 0x10) = param_14;
  *(undefined8 *)(puVar5 + 0x18) = param_15;
  *(undefined8 *)(puVar5 + 0x20) = param_16;
  *(undefined8 *)(puVar5 + 0x28) = param_18;
  *(undefined8 *)(puVar5 + 0x30) = param_17;
  *(undefined8 *)(puVar5 + 0x38) = param_22;
  *(undefined8 *)(puVar5 + 0x40) = param_19;
  *(undefined8 *)(puVar5 + 0x48) = param_30;
  *(undefined8 *)(puVar5 + 0x50) = param_5;
  *(undefined8 *)(puVar5 + 0x58) = param_21;
  func_0x0001000285a8(0x112f27df0,&UNK_10db63900);
  func_0x000107c613fc();
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_30);
  pcVar7 = FUN_102ed8614;
  func_0x0001000bdd8c(FUN_102ed8614,puVar5);
  *(code **)(lVar4 + _DAT_112f27ea0) = pcVar7;
  plVar8 = &lStack_110;
  lStack_110 = lVar4;
  lStack_108 = lVar3;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(param_7);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar9);
  *param_1 = plVar8;
  return;
}



/* Entry: 102ed8200; end: 102ed8273;  */

void FUN_102ed8200(void)

{
  long unaff_x20;
  
  FUN_102ed78e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138));
  return;
}



/* Entry: 102ed8274; end: 102ed854b;  */

/* WARNING: Possible PIC construction at 0x000102ed83a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ed83a4) */

void FUN_102ed8274(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x130));
  return;
}



/* Entry: 102ed854c; end: 102ed85e7;  */

void FUN_102ed854c(long param_1)

{
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_150 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = &UNK_10db638d0;
  puStack_28 = &UNK_10db638d0;
  puStack_148 = puStack_150;
  puStack_140 = puStack_150;
  puStack_138 = puStack_150;
  puStack_130 = puStack_150;
  puStack_128 = puStack_150;
  puStack_120 = puStack_150;
  puStack_118 = puStack_150;
  puStack_110 = puStack_150;
  puStack_108 = puStack_150;
  puStack_100 = puStack_150;
  puStack_f8 = puStack_150;
  puStack_f0 = puStack_150;
  puStack_e8 = puStack_150;
  puStack_e0 = puStack_150;
  puStack_d8 = puStack_150;
  puStack_d0 = puStack_150;
  puStack_c8 = puStack_150;
  puStack_c0 = puStack_150;
  puStack_b8 = puStack_150;
  puStack_b0 = puStack_150;
  puStack_a8 = puStack_150;
  puStack_a0 = puStack_150;
  puStack_98 = puStack_150;
  puStack_90 = puStack_150;
  puStack_88 = puStack_150;
  puStack_80 = puStack_150;
  puStack_78 = puStack_150;
  puStack_70 = puStack_150;
  puStack_68 = puStack_150;
  puStack_60 = puStack_150;
  puStack_58 = puStack_150;
  puStack_50 = puStack_150;
  puStack_48 = puStack_150;
  puStack_40 = puStack_150;
  puStack_38 = puStack_150;
  func_0x000107c61524(param_1,0x100,0x26,&puStack_150,param_1 + 0x70);
  return;
}



/* Entry: 102ed85e8; end: 102ed860b;  */

void FUN_102ed85e8(undefined8 *param_1,undefined8 param_2)

{
  func_0x000102ed73c8();
  *param_1 = param_2;
  return;
}


