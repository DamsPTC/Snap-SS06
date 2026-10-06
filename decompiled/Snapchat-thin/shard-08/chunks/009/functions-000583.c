/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106710df4; end: 106710e2f; -[SCLensExplorerStoryViewModel .cxx_destruct] */

void FUN_106710df4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106710e30; end: 106710e4b; +[SCLensExplorerStoryViewModelBuilder lensExplorerStoryViewModel] */

void FUN_106710e30(void)

{
  _objc_alloc_init(PTR_PTR_1126ccea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106710e4c; end: 106710fbb; +[SCLensExplorerStoryViewModelBuilder lensExplorerStoryViewModelFromExistingLensExplorerStoryViewModel:] */

void FUN_106710e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126ccea0;
  _objc_retain(param_3);
  func_0x00010c093780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25a020(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ba4a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2bc9e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb780(param_3);
  puVar6 = puVar5;
  func_0x00010c2ae920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c1112a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2b5d60(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf341e0(param_3);
  _objc_release(param_3);
  puVar10 = puVar8;
  func_0x00010c2aa440(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106710fbc; end: 106710ff3; -[SCLensExplorerStoryViewModelBuilder build] */

void FUN_106710fbc(long param_1)

{
  _objc_alloc(PTR_PTR_1126cce60);
  func_0x00010c04dd80(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106710ff4; end: 10671102b; -[SCLensExplorerStoryViewModelBuilder withStoryItem:] */

long FUN_106710ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10671102c; end: 106711063; -[SCLensExplorerStoryViewModelBuilder withViewingCountText:] */

long FUN_10671102c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106711064; end: 10671106b; -[SCLensExplorerStoryViewModelBuilder withFullCellSize:] */

void FUN_106711064(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  return;
}



/* Entry: 10671106c; end: 1067110a3; -[SCLensExplorerStoryViewModelBuilder withPreviewImage:] */

long FUN_10671106c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1067110a4; end: 1067110ab; -[SCLensExplorerStoryViewModelBuilder withCellType:] */

void FUN_1067110a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1067110ac; end: 1067110e7; -[SCLensExplorerStoryViewModelBuilder .cxx_destruct] */

void FUN_1067110ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067110e8; end: 1067111e3; -[SCLensExplorerHeroCellViewModel initWithHeroItem:estimatedCellSize:fullCellWidth:roundCorners:useCardBackground:shadowOrientation:separatorType:fetchedImages:] */

undefined1 *
FUN_1067110e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126f2ab0;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1067111e4; end: 106711207; -[SCLensExplorerHeroCellViewModel copyWithZone:] */

undefined8 FUN_1067111e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106711208; end: 1067112fb; -[SCLensExplorerHeroCellViewModel hash] */

undefined8 * FUN_106711208(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_70 = uVar1;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_106711418:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106711424;
    puVar7 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((((*(long *)((long)puVar2 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(char *)((long)puVar2 + 8) == param_3[8])) &&
         (*(long *)((long)puVar2 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)((long)puVar2 + 0x30) == *(long *)(param_3 + 0x30))))) {
      puVar7 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar2 + 0x40) != *(double *)(param_3 + 0x40)) ||
         (*(double *)((long)puVar2 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_106711424;
      dVar8 = ABS(*(double *)((long)puVar2 + 0x18) - *(double *)(param_3 + 0x18));
      if (((dVar8 < 2.2250738585072014e-308) ||
          (dVar8 < ABS(*(double *)((long)puVar2 + 0x18) + *(double *)(param_3 + 0x18)) *
                   2.220446049250313e-16)) &&
         ((lVar4 = *(long *)((long)puVar2 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        puVar7 = *(undefined1 **)((long)puVar2 + 0x38);
        if (puVar7 != *(undefined1 **)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_106711424;
        }
        goto LAB_106711418;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_106711424:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 1067112fc; end: 10671143f; -[SCLensExplorerHeroCellViewModel isEqual:] */

long FUN_1067112fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106711418:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106711424;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
         (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_106711424;
      dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      if (((dVar4 < 2.2250738585072014e-308) ||
          (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                   2.220446049250313e-16)) &&
         ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x38);
        if (lVar3 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_106711424;
        }
        goto LAB_106711418;
      }
    }
    lVar3 = 0;
  }
LAB_106711424:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106711440; end: 106711447; -[SCLensExplorerHeroCellViewModel heroItem] */

undefined8 FUN_106711440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106711448; end: 10671144f; -[SCLensExplorerHeroCellViewModel estimatedCellSize] */

undefined1  [16] FUN_106711448(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 106711450; end: 106711457; -[SCLensExplorerHeroCellViewModel fullCellWidth] */

undefined8 FUN_106711450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106711458; end: 10671145f; -[SCLensExplorerHeroCellViewModel roundCorners] */

undefined8 FUN_106711458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106711460; end: 106711467; -[SCLensExplorerHeroCellViewModel useCardBackground] */

undefined1 FUN_106711460(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106711468; end: 10671146f; -[SCLensExplorerHeroCellViewModel shadowOrientation] */

undefined8 FUN_106711468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106711470; end: 106711477; -[SCLensExplorerHeroCellViewModel separatorType] */

undefined8 FUN_106711470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106711478; end: 10671147f; -[SCLensExplorerHeroCellViewModel fetchedImages] */

undefined8 FUN_106711478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106711480; end: 1067114af; -[SCLensExplorerHeroCellViewModel .cxx_destruct] */

void FUN_106711480(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067114b0; end: 1067114cb; +[SCLensExplorerHeroCellViewModelBuilder lensExplorerHeroCellViewModel] */

void FUN_1067114b0(void)

{
  _objc_alloc_init(PTR_PTR_1126cd038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067114cc; end: 1067116a3; +[SCLensExplorerHeroCellViewModelBuilder lensExplorerHeroCellViewModelFromExistingLensExplorerHeroCellViewModel:] */

void FUN_1067114cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126cd038;
  _objc_retain(param_3);
  func_0x00010c092f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe0f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af720(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf996c0(param_3);
  puVar4 = puVar3;
  func_0x00010c2ad560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb7a0(param_3);
  puVar5 = puVar4;
  func_0x00010c2ae940(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c141e60(param_3);
  puVar7 = puVar5;
  func_0x00010c2b7660(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c28fee0(param_3);
  puVar8 = puVar7;
  func_0x00010c2bc280(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c22a080(param_3);
  puVar9 = puVar8;
  func_0x00010c2b8540(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c15e4e0(param_3);
  puVar10 = puVar9;
  func_0x00010c2b82e0(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfab820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar11 = puVar10;
  func_0x00010c2addc0(puVar10,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1067116a4; end: 1067116eb; -[SCLensExplorerHeroCellViewModelBuilder build] */

void FUN_1067116a4(long param_1)

{
  _objc_alloc(PTR_PTR_1126cce88);
  func_0x00010c01a5c0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067116ec; end: 106711723; -[SCLensExplorerHeroCellViewModelBuilder withHeroItem:] */

long FUN_1067116ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106711724; end: 10671172b; -[SCLensExplorerHeroCellViewModelBuilder withEstimatedCellSize:] */

void FUN_106711724(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* Entry: 10671172c; end: 106711733; -[SCLensExplorerHeroCellViewModelBuilder withFullCellWidth:] */

void FUN_10671172c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 106711734; end: 10671173b; -[SCLensExplorerHeroCellViewModelBuilder withRoundCorners:] */

void FUN_106711734(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10671173c; end: 106711743; -[SCLensExplorerHeroCellViewModelBuilder withUseCardBackground:] */

void FUN_10671173c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106711744; end: 10671174b; -[SCLensExplorerHeroCellViewModelBuilder withShadowOrientation:] */

void FUN_106711744(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10671174c; end: 106711753; -[SCLensExplorerHeroCellViewModelBuilder withSeparatorType:] */

void FUN_10671174c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106711754; end: 10671178b; -[SCLensExplorerHeroCellViewModelBuilder withFetchedImages:] */

long FUN_106711754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10671178c; end: 1067117bb; -[SCLensExplorerHeroCellViewModelBuilder .cxx_destruct] */

void FUN_10671178c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067117bc; end: 1067118d3; -[SCLensExplorerBannerCellViewModel initWithLayout:bannerViewModel:sectionId:fullCellWidth:loggingInfo:] */

undefined1 *
FUN_1067117bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f2ab8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1067118d4; end: 1067118f7; -[SCLensExplorerBannerCellViewModel copyWithZone:] */

undefined8 FUN_1067118d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067118f8; end: 1067119a7; -[SCLensExplorerBannerCellViewModel hash] */

undefined8 * FUN_1067118f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar4;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_106711a8c:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106711a98;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x20) - *(double *)(param_3 + 0x20));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x20) + *(double *)(param_3 + 0x20)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if ((((bVar1) &&
           ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
         ((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
        puVar9 = *(undefined1 **)((long)puVar5 + 0x28);
        if (puVar9 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106711a98;
        }
        goto LAB_106711a8c;
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_106711a98:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 1067119a8; end: 106711ab3; -[SCLensExplorerBannerCellViewModel isEqual:] */

long FUN_1067119a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106711a8c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106711a98;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_106711a98;
        }
        goto LAB_106711a8c;
      }
    }
    lVar4 = 0;
  }
LAB_106711a98:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106711ab4; end: 106711abb; -[SCLensExplorerBannerCellViewModel layout] */

undefined8 FUN_106711ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106711abc; end: 106711ac3; -[SCLensExplorerBannerCellViewModel bannerViewModel] */

undefined8 FUN_106711abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106711ac4; end: 106711acb; -[SCLensExplorerBannerCellViewModel sectionId] */

undefined8 FUN_106711ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106711acc; end: 106711ad3; -[SCLensExplorerBannerCellViewModel fullCellWidth] */

undefined8 FUN_106711acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106711ad4; end: 106711adb; -[SCLensExplorerBannerCellViewModel loggingInfo] */

undefined8 FUN_106711ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106711adc; end: 106711b23; -[SCLensExplorerBannerCellViewModel .cxx_destruct] */

void FUN_106711adc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106711b24; end: 106711b7f; -[SCLensExplorerHeroCellElementAttributes initWithElementId:size:] */

void FUN_106711b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f2ac0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  return;
}



/* Entry: 106711b80; end: 106711ba3; -[SCLensExplorerHeroCellElementAttributes copyWithZone:] */

undefined8 FUN_106711b80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106711ba4; end: 106711c47; -[SCLensExplorerHeroCellElementAttributes hash] */

long * FUN_106711ba4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  plVar2 = &lStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&lStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == (long *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)plVar2;
      _objc_opt_class(plVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar3 & 1) == 0) || (*(long *)((long)plVar2 + 8) != *(long *)(param_3 + 8))) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        uVar4 = 0;
        if (*(double *)((long)plVar2 + 0x18) == *(double *)(param_3 + 0x18)) {
          uVar4 = (uint)(*(double *)((long)plVar2 + 0x10) == *(double *)(param_3 + 0x10));
        }
        puVar6 = (undefined1 *)(ulong)uVar4;
      }
    }
  }
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 106711c48; end: 106711ce7; -[SCLensExplorerHeroCellElementAttributes isEqual:] */

bool FUN_106711c48(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) {
          bVar3 = *(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10);
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106711ce8; end: 106711cef; -[SCLensExplorerHeroCellElementAttributes elementId] */

undefined8 FUN_106711ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106711cf0; end: 106711cf7; -[SCLensExplorerHeroCellElementAttributes size] */

undefined1  [16] FUN_106711cf0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 106711cf8; end: 106711d63; +[SCLensExplorerLensFeedViewModel creatorViewModelWithViewModel:] */

void FUN_106711cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd0f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106711d64; end: 106711dcf; +[SCLensExplorerLensFeedViewModel heroViewModelWithViewModel:] */

void FUN_106711d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd0f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106711dd0; end: 106711e33; +[SCLensExplorerLensFeedViewModel lensViewModelWithViewModel:] */

void FUN_106711dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd0f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106711e34; end: 106711e9f; +[SCLensExplorerLensFeedViewModel loadingViewModelWithViewModel:] */

void FUN_106711e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd0f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106711ea0; end: 106711f0b; +[SCLensExplorerLensFeedViewModel storyViewModelWithViewModel:] */

void FUN_106711ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd0f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106711f0c; end: 106711f2f; -[SCLensExplorerLensFeedViewModel copyWithZone:] */

undefined8 FUN_106711f0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106711f30; end: 106711fcb; -[SCLensExplorerLensFeedViewModel hash] */

void FUN_106711f30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126f2ac8;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106711fcc; end: 10671200f; -[SCLensExplorerLensFeedViewModel internalInit] */

void FUN_106711fcc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2ac8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106712010; end: 10671210f; -[SCLensExplorerLensFeedViewModel isEqual:] */

long FUN_106712010(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067120e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067120f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_1067120f4;
              }
              goto LAB_1067120e8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1067120f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106712110; end: 106712223; -[SCLensExplorerLensFeedViewModel matchLensViewModel:loadingViewModel:storyViewModel:creatorViewModel:heroViewModel:] */

void FUN_106712110(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_1067121ec;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_1067121ec;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_1067121ec;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_1067121ec;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else {
    if ((lVar1 != 4) || (param_7 == 0)) goto LAB_1067121ec;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1067121ec:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106712224; end: 106712277; -[SCLensExplorerLensFeedViewModel .cxx_destruct] */

void FUN_106712224(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106712278; end: 106712323; -[SCLensExplorerIndexMove initWithFromIndex:toIndex:] */

undefined1 *
FUN_106712278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106712324; end: 106712347; -[SCLensExplorerIndexMove copyWithZone:] */

undefined8 FUN_106712324(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106712348; end: 1067123bb; -[SCLensExplorerIndexMove hash] */

undefined8 * FUN_106712348(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10671243c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106712448;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106712448;
        }
        goto LAB_10671243c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106712448:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1067123bc; end: 106712463; -[SCLensExplorerIndexMove isEqual:] */

long FUN_1067123bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10671243c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106712448;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106712448;
        }
        goto LAB_10671243c;
      }
    }
    lVar3 = 0;
  }
LAB_106712448:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106712464; end: 10671246b; -[SCLensExplorerIndexMove fromIndex] */

undefined8 FUN_106712464(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10671246c; end: 106712473; -[SCLensExplorerIndexMove toIndex] */

undefined8 FUN_10671246c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106712474; end: 1067124a3; -[SCLensExplorerIndexMove .cxx_destruct] */

void FUN_106712474(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067124a4; end: 10671252f; -[SCLensExplorerItemModel initWithReuseIdentifier:cellSize:] */

undefined1 *
FUN_1067124a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f2ad8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106712530; end: 106712553; -[SCLensExplorerItemModel copyWithZone:] */

undefined8 FUN_106712530(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106712554; end: 1067125ff; -[SCLensExplorerItemModel hash] */

undefined8 * FUN_106712554(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106712684:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106712688;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)((long)puVar3 + 0x10) == *(double *)(param_3 + 0x10)) &&
         (bVar1 = false, !NAN(*(double *)((long)puVar3 + 0x18)) && !NAN(*(double *)(param_3 + 0x18))
         )) {
        bVar1 = *(double *)((long)puVar3 + 0x18) == *(double *)(param_3 + 0x18);
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + 8);
        if (puVar6 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_106712688;
        }
        goto LAB_106712684;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106712688:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106712600; end: 1067126a3; -[SCLensExplorerItemModel isEqual:] */

long FUN_106712600(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106712684:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106712688;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x18)) && !NAN(*(double *)(param_3 + 0x18)))) {
        bVar1 = *(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18);
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_106712688;
        }
        goto LAB_106712684;
      }
    }
    lVar4 = 0;
  }
LAB_106712688:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1067126a4; end: 1067126ab; -[SCLensExplorerItemModel reuseIdentifier] */

undefined8 FUN_1067126a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067126ac; end: 1067126b3; -[SCLensExplorerItemModel cellSize] */

undefined1  [16] FUN_1067126ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 1067126b4; end: 1067126bf; -[SCLensExplorerItemModel .cxx_destruct] */

void FUN_1067126b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067126c0; end: 1067127bf; -[SCLensExplorerSectionLayoutConfiguration initWithMinimumInteritemSpacing:sectionInsets:layoutType:itemSize:itemWidth:verticalSpacing:] */

undefined1 *
FUN_1067126c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_10);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126f2ae0;
  uStack_80 = param_8;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 1067127c0; end: 1067127e3; -[SCLensExplorerSectionLayoutConfiguration copyWithZone:] */

undefined8 FUN_1067127c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067127e4; end: 10671293b; -[SCLensExplorerSectionLayoutConfiguration hash] */

ulong * FUN_1067127e4(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ushort uVar10;
  double dVar11;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_78 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_68 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_50 = uVar4;
  func_0x00010bfde980();
  puVar6 = &uStack_78;
  uStack_30 = uVar5;
  func_0x000100505190(puVar6,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_106712a58:
    puVar9 = (ulong *)0x1;
  }
  else {
    puVar9 = (ulong *)0x0;
    if ((puVar6 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_106712a5c;
    puVar9 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar7 & 1) != 0) && (puVar6[3] == param_3[3])) {
      dVar11 = ABS((double)puVar6[1] - (double)param_3[1]);
      dVar2 = ABS((double)puVar6[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar2))) {
        bVar3 = dVar11 < dVar2;
      }
      if ((bVar3) &&
         (uVar10 = NEON_uminv(CONCAT26(-(ushort)((double)puVar6[10] == (double)param_3[10]),
                                       CONCAT24(-(ushort)((double)puVar6[9] == (double)param_3[9]),
                                                CONCAT22(-(ushort)((double)puVar6[8] ==
                                                                  (double)param_3[8]),
                                                         -(ushort)((double)puVar6[7] ==
                                                                  (double)param_3[7])))),2),
         (uVar10 & 1) != 0)) {
        puVar9 = (ulong *)0x0;
        if (((double)puVar6[5] != (double)param_3[5]) || ((double)puVar6[6] != (double)param_3[6]))
        goto LAB_106712a5c;
        uVar8 = puVar6[2];
        if ((uVar8 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar8 != 0)) {
          puVar9 = (ulong *)puVar6[4];
          if (puVar9 != (ulong *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_106712a5c;
          }
          goto LAB_106712a58;
        }
      }
    }
    puVar9 = (ulong *)0x0;
  }
LAB_106712a5c:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10671293c; end: 106712a77; -[SCLensExplorerSectionLayoutConfiguration isEqual:] */

long FUN_10671293c(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106712a58:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106712a5c;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      dVar7 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar1 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if ((bVar2) &&
         (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x50) ==
                                               *(double *)(param_3 + 0x50)),
                                      CONCAT24(-(ushort)(*(double *)(param_1 + 0x48) ==
                                                        *(double *)(param_3 + 0x48)),
                                               CONCAT22(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                                 *(double *)(param_3 + 0x40)),
                                                        -(ushort)(*(double *)(param_1 + 0x38) ==
                                                                 *(double *)(param_3 + 0x38))))),2),
         (uVar6 & 1) != 0)) {
        lVar5 = 0;
        if ((*(double *)(param_1 + 0x28) != *(double *)(param_3 + 0x28)) ||
           (*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30))) goto LAB_106712a5c;
        lVar5 = *(long *)(param_1 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106712a5c;
          }
          goto LAB_106712a58;
        }
      }
    }
    lVar5 = 0;
  }
LAB_106712a5c:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106712a78; end: 106712a7f; -[SCLensExplorerSectionLayoutConfiguration minimumInteritemSpacing] */

undefined8 FUN_106712a78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106712a80; end: 106712a8b; -[SCLensExplorerSectionLayoutConfiguration sectionInsets] */

undefined8 FUN_106712a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106712a8c; end: 106712a93; -[SCLensExplorerSectionLayoutConfiguration layoutType] */

undefined8 FUN_106712a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106712a94; end: 106712a9b; -[SCLensExplorerSectionLayoutConfiguration itemSize] */

undefined1  [16] FUN_106712a94(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 106712a9c; end: 106712aa3; -[SCLensExplorerSectionLayoutConfiguration itemWidth] */

undefined8 FUN_106712a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106712aa4; end: 106712aab; -[SCLensExplorerSectionLayoutConfiguration verticalSpacing] */

undefined8 FUN_106712aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106712aac; end: 106712adb; -[SCLensExplorerSectionLayoutConfiguration .cxx_destruct] */

void FUN_106712aac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106712adc; end: 106712b23; +[SCLensExplorerSectionLayoutType defaultLayout] */

void FUN_106712adc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccaa8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106712b24; end: 106712b7b; +[SCLensExplorerSectionLayoutType orthogonalWithScrollBehaviour:] */

void FUN_106712b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccaa8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106712b7c; end: 106712b9f; -[SCLensExplorerSectionLayoutType copyWithZone:] */

undefined8 FUN_106712b7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106712ba0; end: 106712bf7; -[SCLensExplorerSectionLayoutType hash] */

void FUN_106712ba0(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f2ae8;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106712bf8; end: 106712c3b; -[SCLensExplorerSectionLayoutType internalInit] */

void FUN_106712bf8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2ae8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106712c3c; end: 106712cd3; -[SCLensExplorerSectionLayoutType isEqual:] */

bool FUN_106712c3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106712cd4; end: 106712d57; -[SCLensExplorerSectionLayoutType matchDefaultLayout:orthogonal:] */

void FUN_106712cd4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106712d58; end: 106712e63; -[SCLensExplorerSectionModel initWithItemModels:registerCellClassesMap:registerSupplementaryViews:sectionIdentifier:] */

undefined1 *
FUN_106712d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f2af0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106712e64; end: 106712e87; -[SCLensExplorerSectionModel copyWithZone:] */

undefined8 FUN_106712e64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106712e88; end: 106712f13; -[SCLensExplorerSectionModel hash] */

undefined8 * FUN_106712e88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106712fc4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106712fd0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_106712fd0;
            }
            goto LAB_106712fc4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106712fd0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106712f14; end: 106712feb; -[SCLensExplorerSectionModel isEqual:] */

long FUN_106712f14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106712fc4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106712fd0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_106712fd0;
            }
            goto LAB_106712fc4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106712fd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106712fec; end: 106712ff3; -[SCLensExplorerSectionModel itemModels] */

undefined8 FUN_106712fec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106712ff4; end: 106712ffb; -[SCLensExplorerSectionModel registerCellClassesMap] */

undefined8 FUN_106712ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


