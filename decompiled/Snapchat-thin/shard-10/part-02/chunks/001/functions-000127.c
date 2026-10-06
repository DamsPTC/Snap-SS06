/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c7d658; end: 107c7d65f; -[SCDiscoverFeedSectionHeaderViewModelBuilder withLeftMargin:] */

void FUN_107c7d658(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 107c7d660; end: 107c7d667; -[SCDiscoverFeedSectionHeaderViewModelBuilder withRightMargin:] */

void FUN_107c7d660(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 107c7d668; end: 107c7d69f; -[SCDiscoverFeedSectionHeaderViewModelBuilder withPrimaryButtonActionModel:] */

long FUN_107c7d668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7d6a0; end: 107c7d6d7; -[SCDiscoverFeedSectionHeaderViewModelBuilder withSecondaryButtonActionModel:] */

long FUN_107c7d6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7d6d8; end: 107c7d70f; -[SCDiscoverFeedSectionHeaderViewModelBuilder withDebugActionModel:] */

long FUN_107c7d6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7d710; end: 107c7d747; -[SCDiscoverFeedSectionHeaderViewModelBuilder withSecondaryButtonStyleViewModel:] */

long FUN_107c7d710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7d748; end: 107c7d7e3; -[SCDiscoverFeedSectionHeaderViewModelBuilder .cxx_destruct] */

void FUN_107c7d748(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c7d7e4; end: 107c7d8f7; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel initWithImage:shouldPositionImageRightOfText:imageEdgeInsets:contentEdgeInsets:cornerRadius:backgroundColor:] */

undefined8 *
FUN_107c7d7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_11);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126fa468;
  puVar1 = &uStack_80;
  uStack_80 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_12;
    puVar1[5] = param_1;
    puVar1[6] = param_2;
    puVar1[7] = param_3;
    puVar1[8] = param_4;
    puVar1[9] = param_5;
    puVar1[10] = param_6;
    puVar1[0xb] = param_7;
    puVar1[0xc] = param_8;
    puVar1[3] = in_stack_00000000;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_11);
  return puVar1;
}



/* Entry: 107c7d8f8; end: 107c7d91b; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel copyWithZone:] */

undefined8 FUN_107c7d8f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c7d91c; end: 107c7dab7; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel hash] */

undefined8 * FUN_107c7d91c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  double dVar12;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uStack_80 = (ulong)*(byte *)(param_1 + 8);
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_78 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_70 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_68 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_60 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_58 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_38 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_88 = uVar4;
  func_0x00010bfde980();
  puVar6 = &uStack_88;
  uStack_30 = uVar5;
  func_0x000100505190(puVar6,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_107c7dbd4:
    puVar10 = (undefined8 *)0x1;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c7dbe0;
    puVar10 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if ((((ulong)puVar7 & 1) != 0) &&
       (((*(char *)(puVar6 + 1) == *(char *)(param_3 + 1) &&
         (uVar11 = NEON_uminv(CONCAT26(-(ushort)((double)puVar6[8] == (double)param_3[8]),
                                       CONCAT24(-(ushort)((double)puVar6[7] == (double)param_3[7]),
                                                CONCAT22(-(ushort)((double)puVar6[6] ==
                                                                  (double)param_3[6]),
                                                         -(ushort)((double)puVar6[5] ==
                                                                  (double)param_3[5])))),2),
         (uVar11 & 1) != 0)) &&
        (uVar11 = NEON_uminv(CONCAT26(-(ushort)((double)puVar6[0xc] == (double)param_3[0xc]),
                                      CONCAT24(-(ushort)((double)puVar6[0xb] == (double)param_3[0xb]
                                                        ),
                                               CONCAT22(-(ushort)((double)puVar6[10] ==
                                                                 (double)param_3[10]),
                                                        -(ushort)((double)puVar6[9] ==
                                                                 (double)param_3[9])))),2),
        (uVar11 & 1) != 0)))) {
      dVar12 = ABS((double)puVar6[3] - (double)param_3[3]);
      dVar2 = ABS((double)puVar6[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
        bVar3 = dVar12 < dVar2;
      }
      if ((bVar3) &&
         ((lVar8 = puVar6[2], lVar8 == param_3[2] || (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
        puVar10 = (undefined8 *)puVar6[4];
        if (puVar10 != (undefined8 *)param_3[4]) {
          func_0x00010c071c60();
          goto LAB_107c7dbe0;
        }
        goto LAB_107c7dbd4;
      }
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_107c7dbe0:
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 107c7dab8; end: 107c7dbfb; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel isEqual:] */

long FUN_107c7dab8(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_107c7dbd4:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c7dbe0;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x40) ==
                                               *(double *)(param_3 + 0x40)),
                                      CONCAT24(-(ushort)(*(double *)(param_1 + 0x38) ==
                                                        *(double *)(param_3 + 0x38)),
                                               CONCAT22(-(ushort)(*(double *)(param_1 + 0x30) ==
                                                                 *(double *)(param_3 + 0x30)),
                                                        -(ushort)(*(double *)(param_1 + 0x28) ==
                                                                 *(double *)(param_3 + 0x28))))),2),
         (uVar6 & 1) != 0)) &&
        (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x60) ==
                                              *(double *)(param_3 + 0x60)),
                                     CONCAT24(-(ushort)(*(double *)(param_1 + 0x58) ==
                                                       *(double *)(param_3 + 0x58)),
                                              CONCAT22(-(ushort)(*(double *)(param_1 + 0x50) ==
                                                                *(double *)(param_3 + 0x50)),
                                                       -(ushort)(*(double *)(param_1 + 0x48) ==
                                                                *(double *)(param_3 + 0x48))))),2),
        (uVar6 & 1) != 0)))) {
      dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar1 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if ((bVar2) &&
         ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071c60();
          goto LAB_107c7dbe0;
        }
        goto LAB_107c7dbd4;
      }
    }
    lVar5 = 0;
  }
LAB_107c7dbe0:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 107c7dbfc; end: 107c7dc03; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel image] */

undefined8 FUN_107c7dbfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c7dc04; end: 107c7dc0b; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel shouldPositionImageRightOfText] */

undefined1 FUN_107c7dc04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c7dc0c; end: 107c7dc17; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel imageEdgeInsets] */

undefined8 FUN_107c7dc0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c7dc18; end: 107c7dc23; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel contentEdgeInsets] */

undefined8 FUN_107c7dc18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c7dc24; end: 107c7dc2b; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel cornerRadius] */

undefined8 FUN_107c7dc24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c7dc2c; end: 107c7dc33; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel backgroundColor] */

undefined8 FUN_107c7dc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c7dc34; end: 107c7dc63; -[SCDiscoverFeedSectionHeaderButtonStyleViewModel .cxx_destruct] */

void FUN_107c7dc34(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c7dc64; end: 107c7dc7f; +[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder discoverFeedSectionHeaderButtonStyleViewModel] */

void FUN_107c7dc64(void)

{
  _objc_alloc_init(PTR_PTR_1126d59e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c7dc80; end: 107c7ddf7; +[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder discoverFeedSectionHeaderButtonStyleViewModelFromExistingDiscoverFeedSectionHeaderButtonStyleViewModel:] */

void FUN_107c7dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126d59e8;
  _objc_retain(param_3);
  func_0x00010bf81e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2afa20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c231dc0(param_3);
  puVar5 = puVar3;
  func_0x00010c2b8a80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7600(param_3);
  puVar6 = puVar5;
  func_0x00010c2afa40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c400(param_3);
  puVar7 = puVar6;
  func_0x00010c2aad80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0(param_3);
  puVar8 = puVar7;
  func_0x00010c2ab220(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar8;
  func_0x00010c2a9060(puVar8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 107c7ddf8; end: 107c7de4f; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder build] */

void FUN_107c7ddf8(long param_1)

{
  _objc_alloc(PTR_PTR_1126d73d0);
  func_0x00010c01c320(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c7de50; end: 107c7de87; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder withImage:] */

long FUN_107c7de50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7de88; end: 107c7de8f; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder withShouldPositionImageRightOfText:] */

void FUN_107c7de88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107c7de90; end: 107c7de9b; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder withImageEdgeInsets:] */

void FUN_107c7de90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  *(undefined8 *)(param_5 + 0x28) = param_3;
  *(undefined8 *)(param_5 + 0x30) = param_4;
  return;
}



/* Entry: 107c7de9c; end: 107c7dea7; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder withContentEdgeInsets:] */

void FUN_107c7de9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x38) = param_1;
  *(undefined8 *)(param_5 + 0x40) = param_2;
  *(undefined8 *)(param_5 + 0x48) = param_3;
  *(undefined8 *)(param_5 + 0x50) = param_4;
  return;
}



/* Entry: 107c7dea8; end: 107c7deaf; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder withCornerRadius:] */

void FUN_107c7dea8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 107c7deb0; end: 107c7dee7; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder withBackgroundColor:] */

long FUN_107c7deb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7dee8; end: 107c7df17; -[SCDiscoverFeedSectionHeaderButtonStyleViewModelBuilder .cxx_destruct] */

void FUN_107c7dee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c7df18; end: 107c7e0fb; -[SCDiscoverFeedDynamicReplayOverlayViewModel initWithPrimaryIconImage:primaryIconSubtitle:primaryIconSubtitleMaxLines:secondaryIconImage:secondaryIconSubtitle:secondaryIconSubtitleMaxLines:replayOverlayTitle:showMiddleSeparator:middleSeparatorColor:maskOverlayColor:compactLayoutMultiplier:hideUnderlyingLabels:primaryIconSize:] */

undefined8 *
FUN_107c7df18(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_78 = PTR_PTR_1126fa470;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    puVar1[4] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined1 *)((long)puVar1 + 9) = param_16;
    puVar1[0xb] = param_2;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 107c7e0fc; end: 107c7e11f; -[SCDiscoverFeedDynamicReplayOverlayViewModel copyWithZone:] */

undefined8 FUN_107c7e0fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c7e120; end: 107c7e22f; -[SCDiscoverFeedDynamicReplayOverlayViewModel hash] */

undefined8 * FUN_107c7e120(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_40 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar7 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_107c7e3cc:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107c7e3d8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))) &&
         (*(char *)((long)puVar4 + 8) == param_3[8])) && (*(char *)((long)puVar4 + 9) == param_3[9])
        ))) {
      fVar11 = ABS(*(float *)((long)puVar4 + 0xc) - *(float *)(param_3 + 0xc));
      fVar9 = ABS(*(float *)((long)puVar4 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar9))) {
        bVar1 = fVar11 < fVar9;
      }
      if (bVar1) {
        dVar12 = ABS(*(double *)((long)puVar4 + 0x58) - *(double *)(param_3 + 0x58));
        dVar10 = ABS(*(double *)((long)puVar4 + 0x58) + *(double *)(param_3 + 0x58)) *
                 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar10))) {
          bVar1 = dVar12 < dVar10;
        }
        if (((((bVar1) &&
              ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x40), lVar6 == *(long *)(param_3 + 0x40) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x48), lVar6 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071c60(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x50);
          if (puVar8 != *(undefined1 **)(param_3 + 0x50)) {
            func_0x00010c071c60();
            goto LAB_107c7e3d8;
          }
          goto LAB_107c7e3cc;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107c7e3d8:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107c7e230; end: 107c7e3f3; -[SCDiscoverFeedDynamicReplayOverlayViewModel isEqual:] */

long FUN_107c7e230(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c7e3cc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c7e3d8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      fVar7 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar5))) {
        bVar1 = fVar7 < fVar5;
      }
      if (bVar1) {
        dVar8 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
        dVar6 = ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar6))) {
          bVar1 = dVar8 < dVar6;
        }
        if (((((bVar1) &&
              ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
           ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071c60(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x50);
          if (lVar4 != *(long *)(param_3 + 0x50)) {
            func_0x00010c071c60();
            goto LAB_107c7e3d8;
          }
          goto LAB_107c7e3cc;
        }
      }
    }
    lVar4 = 0;
  }
LAB_107c7e3d8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107c7e3f4; end: 107c7e3fb; -[SCDiscoverFeedDynamicReplayOverlayViewModel primaryIconImage] */

undefined8 FUN_107c7e3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c7e3fc; end: 107c7e403; -[SCDiscoverFeedDynamicReplayOverlayViewModel primaryIconSubtitle] */

undefined8 FUN_107c7e3fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c7e404; end: 107c7e40b; -[SCDiscoverFeedDynamicReplayOverlayViewModel primaryIconSubtitleMaxLines] */

undefined8 FUN_107c7e404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c7e40c; end: 107c7e413; -[SCDiscoverFeedDynamicReplayOverlayViewModel secondaryIconImage] */

undefined8 FUN_107c7e40c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c7e414; end: 107c7e41b; -[SCDiscoverFeedDynamicReplayOverlayViewModel secondaryIconSubtitle] */

undefined8 FUN_107c7e414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c7e41c; end: 107c7e423; -[SCDiscoverFeedDynamicReplayOverlayViewModel secondaryIconSubtitleMaxLines] */

undefined8 FUN_107c7e41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c7e424; end: 107c7e42b; -[SCDiscoverFeedDynamicReplayOverlayViewModel replayOverlayTitle] */

undefined8 FUN_107c7e424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c7e42c; end: 107c7e433; -[SCDiscoverFeedDynamicReplayOverlayViewModel showMiddleSeparator] */

undefined1 FUN_107c7e42c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c7e434; end: 107c7e43b; -[SCDiscoverFeedDynamicReplayOverlayViewModel middleSeparatorColor] */

undefined8 FUN_107c7e434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c7e43c; end: 107c7e443; -[SCDiscoverFeedDynamicReplayOverlayViewModel maskOverlayColor] */

undefined8 FUN_107c7e43c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c7e444; end: 107c7e44b; -[SCDiscoverFeedDynamicReplayOverlayViewModel compactLayoutMultiplier] */

undefined4 FUN_107c7e444(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107c7e44c; end: 107c7e453; -[SCDiscoverFeedDynamicReplayOverlayViewModel hideUnderlyingLabels] */

undefined1 FUN_107c7e44c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107c7e454; end: 107c7e45b; -[SCDiscoverFeedDynamicReplayOverlayViewModel primaryIconSize] */

undefined8 FUN_107c7e454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c7e45c; end: 107c7e4c7; -[SCDiscoverFeedDynamicReplayOverlayViewModel .cxx_destruct] */

void FUN_107c7e45c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c7e4c8; end: 107c7e4e3; +[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder discoverFeedDynamicReplayOverlayViewModel] */

void FUN_107c7e4c8(void)

{
  _objc_alloc_init(PTR_PTR_1126c23d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c7e4e4; end: 107c7e80f; +[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder discoverFeedDynamicReplayOverlayViewModelFromExistingDiscoverFeedDynamicReplayOverlayViewModel:] */

void FUN_107c7e4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  
  puVar1 = PTR_PTR_1126c23d8;
  _objc_retain(param_4);
  func_0x00010bf81800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c112e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b5f80(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c112e80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b5fc0(puVar3,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c112ea0(param_4);
  puVar7 = puVar5;
  func_0x00010c2b5fe0(puVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c154f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b7d20(puVar7,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c154f80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2b7d40(puVar8,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c154fa0(param_4);
  puVar12 = puVar10;
  func_0x00010c2b7d60(puVar10,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c1315c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2b6e00(puVar12,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010c238860(param_4);
  puVar15 = puVar13;
  func_0x00010c2b8e40(puVar13,param_3,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010c0cd320(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c2b3f60(puVar15,param_3,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_4;
  func_0x00010c0bc200(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2b35c0(puVar16,param_3,uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43240(param_4);
  puVar19 = puVar18;
  func_0x00010c2aab20(puVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_4;
  func_0x00010bfe2cc0(param_4);
  puVar21 = puVar19;
  func_0x00010c2af7c0(puVar19,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c112e60(param_4);
  _objc_release(param_4);
  puVar22 = puVar21;
  func_0x00010c2b5fa0(param_1,puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar14);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 107c7e810; end: 107c7e877; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder build] */

void FUN_107c7e810(long param_1)

{
  _objc_alloc(PTR_PTR_1126d73d8);
  func_0x00010c039fe0(*(undefined4 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c7e878; end: 107c7e8af; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withPrimaryIconImage:] */

long FUN_107c7e878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7e8b0; end: 107c7e8e7; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withPrimaryIconSubtitle:] */

long FUN_107c7e8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7e8e8; end: 107c7e8ef; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withPrimaryIconSubtitleMaxLines:] */

void FUN_107c7e8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107c7e8f0; end: 107c7e927; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withSecondaryIconImage:] */

long FUN_107c7e8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7e928; end: 107c7e95f; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withSecondaryIconSubtitle:] */

long FUN_107c7e928(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7e960; end: 107c7e967; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withSecondaryIconSubtitleMaxLines:] */

void FUN_107c7e960(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107c7e968; end: 107c7e99f; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withReplayOverlayTitle:] */

long FUN_107c7e968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7e9a0; end: 107c7e9a7; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withShowMiddleSeparator:] */

void FUN_107c7e9a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 107c7e9a8; end: 107c7e9df; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withMiddleSeparatorColor:] */

long FUN_107c7e9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7e9e0; end: 107c7ea17; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withMaskOverlayColor:] */

long FUN_107c7e9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7ea18; end: 107c7ea1f; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withCompactLayoutMultiplier:] */

void FUN_107c7ea18(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 107c7ea20; end: 107c7ea27; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withHideUnderlyingLabels:] */

void FUN_107c7ea20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x5c) = param_3;
  return;
}



/* Entry: 107c7ea28; end: 107c7ea2f; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder withPrimaryIconSize:] */

void FUN_107c7ea28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 107c7ea30; end: 107c7ea9b; -[SCDiscoverFeedDynamicReplayOverlayViewModelBuilder .cxx_destruct] */

void FUN_107c7ea30(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c7ea9c; end: 107c7ed0b; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel initWithAvatarProfileImageURL:avatarBitmojiAvatarId:avatarBitmojiSelfieId:avatarUserId:avatarUseFallback:displayName:subtextString:officialBadgeType:isSubscribed:secondaryActionType:treatment:isPartialView:replayActionModel:subscribeActionModel:profileActionModel:maskOverlayColor:] */

undefined8 *
FUN_107c7ea9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_68 = PTR_PTR_1126fa478;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_11;
    puVar1[8] = param_10;
    puVar1[9] = param_13;
    puVar1[10] = param_14;
    *(undefined1 *)((long)puVar1 + 10) = param_15;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107c7ed0c; end: 107c7ed2f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel copyWithZone:] */

undefined8 FUN_107c7ed0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c7ed30; end: 107c7ee2f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel hash] */

undefined8 * FUN_107c7ed30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_a8;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107c7efd0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c7efdc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[8] == param_3[8])) &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
         ((puVar3[9] == param_3[9] && (puVar3[10] == param_3[10])))))) &&
       (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[0xb];
                  if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[0xc];
                    if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0xd];
                      if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = (undefined8 *)puVar3[0xe];
                        if (puVar6 != (undefined8 *)param_3[0xe]) {
                          func_0x00010c071c60();
                          goto LAB_107c7efdc;
                        }
                        goto LAB_107c7efd0;
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
    puVar6 = (undefined8 *)0x0;
  }
LAB_107c7efdc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107c7ee30; end: 107c7eff7; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel isEqual:] */

long FUN_107c7ee30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c7efd0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c7efdc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
       (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if (lVar3 != *(long *)(param_3 + 0x70)) {
                          func_0x00010c071c60();
                          goto LAB_107c7efdc;
                        }
                        goto LAB_107c7efd0;
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
    lVar3 = 0;
  }
LAB_107c7efdc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c7eff8; end: 107c7efff; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel avatarProfileImageURL] */

undefined8 FUN_107c7eff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c7f000; end: 107c7f007; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel avatarBitmojiAvatarId] */

undefined8 FUN_107c7f000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c7f008; end: 107c7f00f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel avatarBitmojiSelfieId] */

undefined8 FUN_107c7f008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c7f010; end: 107c7f017; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel avatarUserId] */

undefined8 FUN_107c7f010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c7f018; end: 107c7f01f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel avatarUseFallback] */

undefined1 FUN_107c7f018(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c7f020; end: 107c7f027; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel displayName] */

undefined8 FUN_107c7f020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107c7f028; end: 107c7f02f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel subtextString] */

undefined8 FUN_107c7f028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107c7f030; end: 107c7f037; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel officialBadgeType] */

undefined8 FUN_107c7f030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107c7f038; end: 107c7f03f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel isSubscribed] */

undefined1 FUN_107c7f038(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107c7f040; end: 107c7f047; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel secondaryActionType] */

undefined8 FUN_107c7f040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107c7f048; end: 107c7f04f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel treatment] */

undefined8 FUN_107c7f048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107c7f050; end: 107c7f057; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel isPartialView] */

undefined1 FUN_107c7f050(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107c7f058; end: 107c7f05f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel replayActionModel] */

undefined8 FUN_107c7f058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107c7f060; end: 107c7f067; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel subscribeActionModel] */

undefined8 FUN_107c7f060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107c7f068; end: 107c7f06f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel profileActionModel] */

undefined8 FUN_107c7f068(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107c7f070; end: 107c7f077; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel maskOverlayColor] */

undefined8 FUN_107c7f070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107c7f078; end: 107c7f107; -[SCDiscoverFeedEnhancedPostViewOverlayViewModel .cxx_destruct] */

void FUN_107c7f078(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c7f108; end: 107c7f123; +[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder discoverFeedEnhancedPostViewOverlayViewModel] */

void FUN_107c7f108(void)

{
  _objc_alloc_init(PTR_PTR_1126d7398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c7f124; end: 107c7f50b; +[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder discoverFeedEnhancedPostViewOverlayViewModelFromExistingDiscoverFeedEnhancedPostViewOverlayViewModel:] */

void FUN_107c7f124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  
  puVar1 = PTR_PTR_1126d7398;
  _objc_retain(param_3);
  func_0x00010bf81840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf130e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a8ee0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf12c60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2a8e40(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf12c80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2a8e60(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf13280();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a8fa0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf13260(param_3);
  puVar11 = puVar9;
  func_0x00010c2a8f80(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2ac7a0(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c260d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2ba940(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0e1a60(param_3);
  puVar16 = puVar14;
  func_0x00010c2b4b60(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c080120(param_3);
  puVar17 = puVar16;
  func_0x00010c2b17c0(puVar16,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c154d80(param_3);
  puVar18 = puVar17;
  func_0x00010c2b7ca0(puVar17,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c27b7e0(param_3);
  puVar19 = puVar18;
  func_0x00010c2bbbe0(puVar18,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c079980(param_3);
  puVar20 = puVar19;
  func_0x00010c2b10e0(puVar19,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c1313e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2b6de0(puVar20,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c25fd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2ba8e0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c116500(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2b6220(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c0bc200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar27 = puVar25;
  func_0x00010c2b35c0(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar15);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 107c7f50c; end: 107c7f57f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder build] */

void FUN_107c7f50c(void)

{
  _objc_alloc(PTR_PTR_1126d73e0);
  func_0x00010bff6200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c7f580; end: 107c7f5b7; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withAvatarProfileImageURL:] */

long FUN_107c7f580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f5b8; end: 107c7f5ef; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withAvatarBitmojiAvatarId:] */

long FUN_107c7f5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f5f0; end: 107c7f627; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withAvatarBitmojiSelfieId:] */

long FUN_107c7f5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f628; end: 107c7f65f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withAvatarUserId:] */

long FUN_107c7f628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f660; end: 107c7f667; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withAvatarUseFallback:] */

void FUN_107c7f660(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107c7f668; end: 107c7f69f; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withDisplayName:] */

long FUN_107c7f668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f6a0; end: 107c7f6d7; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withSubtextString:] */

long FUN_107c7f6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107c7f6d8; end: 107c7f6df; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withOfficialBadgeType:] */

void FUN_107c7f6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 107c7f6e0; end: 107c7f6e7; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withIsSubscribed:] */

void FUN_107c7f6e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107c7f6e8; end: 107c7f6ef; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withSecondaryActionType:] */

void FUN_107c7f6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107c7f6f0; end: 107c7f6f7; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withTreatment:] */

void FUN_107c7f6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107c7f6f8; end: 107c7f6ff; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withIsPartialView:] */

void FUN_107c7f6f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107c7f700; end: 107c7f737; -[SCDiscoverFeedEnhancedPostViewOverlayViewModelBuilder withReplayActionModel:] */

long FUN_107c7f700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}


