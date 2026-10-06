/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e393d0; end: 106e3944b;  */

bool FUN_106e393d0(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c07b240();
  if (((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010bf977c0(), (int)uVar2 == 0x10)) {
    uVar3 = param_2;
    func_0x00010c247520(param_2);
    bVar1 = (int)uVar3 != 3;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106e3944c; end: 106e3945f;  */

void FUN_106e3944c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_11097ee20);
  return;
}



/* Entry: 106e39460; end: 106e394db;  */

long FUN_106e39460(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5228);
  lVar1 = param_2;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010b5fa088(param_2);
    func_0x00010b5fa4c8();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 106e394dc; end: 106e394ef;  */

void FUN_106e394dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithBlock__11261f308,
             &PTR___NSConcreteGlobalBlock_11097ee40);
  return;
}



/* Entry: 106e394f0; end: 106e39573;  */

uint FUN_106e394f0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5228);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b5fa088();
    uVar3 = 0;
    if (uVar2 < 0xd) {
      uVar3 = 0x1566 >> (ulong)((uint)uVar2 & 0x1f);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3 & 1;
}



/* Entry: 106e39574; end: 106e3958b;  */

undefined ** FUN_106e39574(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_111181358;
}



/* Entry: 106e3958c; end: 106e39607;  */

void FUN_106e3958c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126d2c30;
  _objc_opt_class(PTR_PTR_1126d2c30);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e87c98,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e39608; end: 106e397e7; -[SCMemoriesSnapCellViewModel initWithDiffId:snaps:entry:primarySnap:isCompatible:isBadgeViewHidden:videoDurationDisplay:isHighlighted:isForStoryEditor:featureIconType:isStreamingPrefetchEnabled:enableSnapDocDebugIcon:isStorageAtRisk:shouldShowAtRiskIcon:quotaThumbnailDecision:] */

undefined8 *
FUN_106e39608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

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
  _objc_retain(param_9);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f7188;
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
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xb) = param_10._1_1_;
    puVar1[7] = param_12;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xd) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_13._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_13._3_1_;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e397e8; end: 106e3980b; -[SCMemoriesSnapCellViewModel copyWithZone:] */

undefined8 FUN_106e397e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3980c; end: 106e398f7; -[SCMemoriesSnapCellViewModel hash] */

undefined8 * FUN_106e3980c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 8);
  uStack_78 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 10);
  uStack_60 = (ulong)*(byte *)(param_1 + 0xb);
  lVar6 = *(long *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  lStack_58 = -lVar6;
  if (-1 < lVar6) {
    lStack_58 = lVar6;
  }
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_50 = (ulong)uVar1 & 0xff;
  uStack_48 = uVar10 >> 0x10 & 0xff;
  uStack_40 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar8;
  uStack_70 = uVar2;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106e39a68:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e39a74;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(char *)((long)puVar4 + 8) == param_3[8] &&
            (*(char *)((long)puVar4 + 9) == param_3[9])) &&
           (*(char *)((long)puVar4 + 10) == param_3[10])) &&
          ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
           (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
        (*(char *)((long)puVar4 + 0xc) == param_3[0xc])) &&
       (((*(char *)((long)puVar4 + 0xd) == param_3[0xd] &&
         (*(char *)((long)puVar4 + 0xe) == param_3[0xe])) &&
        (*(char *)((long)puVar4 + 0xf) == param_3[0xf])))) {
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x18);
        if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x20);
          if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x28);
            if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x30);
              if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                puVar7 = *(undefined1 **)((long)puVar4 + 0x40);
                if (puVar7 != *(undefined1 **)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_106e39a74;
                }
                goto LAB_106e39a68;
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_106e39a74:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 106e398f8; end: 106e39a8f; -[SCMemoriesSnapCellViewModel isEqual:] */

long FUN_106e398f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e39a68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e39a74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
        (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
       (((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
         (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
        (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))))) {
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
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_106e39a74;
                }
                goto LAB_106e39a68;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e39a74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e39a90; end: 106e39a97; -[SCMemoriesSnapCellViewModel diffId] */

undefined8 FUN_106e39a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e39a98; end: 106e39a9f; -[SCMemoriesSnapCellViewModel snaps] */

undefined8 FUN_106e39a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e39aa0; end: 106e39aa7; -[SCMemoriesSnapCellViewModel entry] */

undefined8 FUN_106e39aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e39aa8; end: 106e39aaf; -[SCMemoriesSnapCellViewModel primarySnap] */

undefined8 FUN_106e39aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e39ab0; end: 106e39ab7; -[SCMemoriesSnapCellViewModel isCompatible] */

undefined1 FUN_106e39ab0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e39ab8; end: 106e39abf; -[SCMemoriesSnapCellViewModel isBadgeViewHidden] */

undefined1 FUN_106e39ab8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e39ac0; end: 106e39ac7; -[SCMemoriesSnapCellViewModel videoDurationDisplay] */

undefined8 FUN_106e39ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e39ac8; end: 106e39acf; -[SCMemoriesSnapCellViewModel isHighlighted] */

undefined1 FUN_106e39ac8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e39ad0; end: 106e39ad7; -[SCMemoriesSnapCellViewModel isForStoryEditor] */

undefined1 FUN_106e39ad0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e39ad8; end: 106e39adf; -[SCMemoriesSnapCellViewModel featureIconType] */

undefined8 FUN_106e39ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e39ae0; end: 106e39ae7; -[SCMemoriesSnapCellViewModel isStreamingPrefetchEnabled] */

undefined1 FUN_106e39ae0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106e39ae8; end: 106e39aef; -[SCMemoriesSnapCellViewModel enableSnapDocDebugIcon] */

undefined1 FUN_106e39ae8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 106e39af0; end: 106e39af7; -[SCMemoriesSnapCellViewModel isStorageAtRisk] */

undefined1 FUN_106e39af0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 106e39af8; end: 106e39aff; -[SCMemoriesSnapCellViewModel shouldShowAtRiskIcon] */

undefined1 FUN_106e39af8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 106e39b00; end: 106e39b07; -[SCMemoriesSnapCellViewModel quotaThumbnailDecision] */

undefined8 FUN_106e39b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e39b08; end: 106e39b67; -[SCMemoriesSnapCellViewModel .cxx_destruct] */

void FUN_106e39b08(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e39b68; end: 106e39c1b; -[SCMemoriesSnapGroupViewModel initWithTitle:cellViewModels:kind:] */

undefined1 *
FUN_106e39b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7190;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e39c1c; end: 106e39c3f; -[SCMemoriesSnapGroupViewModel copyWithZone:] */

undefined8 FUN_106e39c1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e39c40; end: 106e39cbf; -[SCMemoriesSnapGroupViewModel hash] */

undefined8 * FUN_106e39c40(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e39d50:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e39d5c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e39d5c;
        }
        goto LAB_106e39d50;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e39d5c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e39cc0; end: 106e39d77; -[SCMemoriesSnapGroupViewModel isEqual:] */

long FUN_106e39cc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e39d50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e39d5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e39d5c;
        }
        goto LAB_106e39d50;
      }
    }
    lVar3 = 0;
  }
LAB_106e39d5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e39d78; end: 106e39d7f; -[SCMemoriesSnapGroupViewModel title] */

undefined8 FUN_106e39d78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e39d80; end: 106e39d87; -[SCMemoriesSnapGroupViewModel cellViewModels] */

undefined8 FUN_106e39d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e39d88; end: 106e39d8f; -[SCMemoriesSnapGroupViewModel kind] */

undefined8 FUN_106e39d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e39d90; end: 106e39dbf; -[SCMemoriesSnapGroupViewModel .cxx_destruct] */

void FUN_106e39d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e39dc0; end: 106e39eef; +[SCMemoriesSnapClusterSectionViewModel cameraRollSectionWithCellModels:displayedItemIdToIndex:fetchResult:fetchResultToExclude:count:diffableIdentifier:] */

void FUN_106e39dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b26a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  *(undefined8 *)(puVar2 + 0x48) = param_8;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e39ef0; end: 106e39f53; +[SCMemoriesSnapClusterSectionViewModel headerSectionWithTitle:] */

void FUN_106e39ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b26a0;
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



/* Entry: 106e39f54; end: 106e39fbf; +[SCMemoriesSnapClusterSectionViewModel snapsSectionWithSnapGroupViewModel:] */

void FUN_106e39f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b26a0;
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



/* Entry: 106e39fc0; end: 106e39fe3; -[SCMemoriesSnapClusterSectionViewModel copyWithZone:] */

undefined8 FUN_106e39fc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e39fe4; end: 106e3a0a3; -[SCMemoriesSnapClusterSectionViewModel hash] */

void FUN_106e39fe4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126f7198;
  puStack_a0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e3a0a4; end: 106e3a0e7; -[SCMemoriesSnapClusterSectionViewModel internalInit] */

void FUN_106e3a0a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e3a0e8; end: 106e3a227; -[SCMemoriesSnapClusterSectionViewModel isEqual:] */

long FUN_106e3a0e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3a200:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3a20c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
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
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_106e3a20c;
                  }
                  goto LAB_106e3a200;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e3a20c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3a228; end: 106e3a2e3; -[SCMemoriesSnapClusterSectionViewModel matchHeaderSection:snapsSection:cameraRollSection:] */

void FUN_106e3a228(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_106e3a2c0;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_106e3a2c0;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_106e3a2c0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e3a2e4; end: 106e3a34f; -[SCMemoriesSnapClusterSectionViewModel .cxx_destruct] */

void FUN_106e3a2e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106e3a350; end: 106e3a3fb; -[SCMemoriesSnapClusterViewModel initWithIdentifier:sectionViewModel:] */

undefined1 *
FUN_106e3a350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f71a0;
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



/* Entry: 106e3a3fc; end: 106e3a41f; -[SCMemoriesSnapClusterViewModel copyWithZone:] */

undefined8 FUN_106e3a3fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3a420; end: 106e3a493; -[SCMemoriesSnapClusterViewModel hash] */

undefined8 * FUN_106e3a420(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106e3a514:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e3a520;
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
          goto LAB_106e3a520;
        }
        goto LAB_106e3a514;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e3a520:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e3a494; end: 106e3a53b; -[SCMemoriesSnapClusterViewModel isEqual:] */

long FUN_106e3a494(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3a514:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3a520;
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
          goto LAB_106e3a520;
        }
        goto LAB_106e3a514;
      }
    }
    lVar3 = 0;
  }
LAB_106e3a520:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3a53c; end: 106e3a543; -[SCMemoriesSnapClusterViewModel identifier] */

undefined8 FUN_106e3a53c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3a544; end: 106e3a54b; -[SCMemoriesSnapClusterViewModel sectionViewModel] */

undefined8 FUN_106e3a544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3a54c; end: 106e3a57b; -[SCMemoriesSnapClusterViewModel .cxx_destruct] */

void FUN_106e3a54c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3a57c; end: 106e3a67f; -[SCGalleryCRItemCellViewModel initWithAsset:overlayString:diffId:roundedCorners:cellsInSection:tapActionType:batchSelectable:] */

undefined1 *
FUN_106e3a57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f71a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3a680; end: 106e3a6a3; -[SCGalleryCRItemCellViewModel copyWithZone:] */

undefined8 FUN_106e3a680(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3a6a4; end: 106e3a73b; -[SCGalleryCRItemCellViewModel hash] */

undefined8 * FUN_106e3a6a4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e3a814:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e3a820;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
         (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) &&
       (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106e3a820;
          }
          goto LAB_106e3a814;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e3a820:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e3a73c; end: 106e3a83b; -[SCGalleryCRItemCellViewModel isEqual:] */

long FUN_106e3a73c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3a814:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3a820;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) &&
       (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106e3a820;
          }
          goto LAB_106e3a814;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e3a820:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3a83c; end: 106e3a843; -[SCGalleryCRItemCellViewModel asset] */

undefined8 FUN_106e3a83c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3a844; end: 106e3a84b; -[SCGalleryCRItemCellViewModel overlayString] */

undefined8 FUN_106e3a844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e3a84c; end: 106e3a853; -[SCGalleryCRItemCellViewModel diffId] */

undefined8 FUN_106e3a84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e3a854; end: 106e3a85b; -[SCGalleryCRItemCellViewModel roundedCorners] */

undefined8 FUN_106e3a854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e3a85c; end: 106e3a863; -[SCGalleryCRItemCellViewModel cellsInSection] */

undefined8 FUN_106e3a85c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e3a864; end: 106e3a86b; -[SCGalleryCRItemCellViewModel tapActionType] */

undefined8 FUN_106e3a864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e3a86c; end: 106e3a873; -[SCGalleryCRItemCellViewModel batchSelectable] */

undefined1 FUN_106e3a86c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e3a874; end: 106e3a8af; -[SCGalleryCRItemCellViewModel .cxx_destruct] */

void FUN_106e3a874(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e3a8b0; end: 106e3a963; -[SCMemoriesDirectorModeDraftsCellViewModel initWithDiffId:latestDraftSnap:draftsCount:] */

undefined1 *
FUN_106e3a8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f71b0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3a964; end: 106e3a987; -[SCMemoriesDirectorModeDraftsCellViewModel copyWithZone:] */

undefined8 FUN_106e3a964(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3a988; end: 106e3aa07; -[SCMemoriesDirectorModeDraftsCellViewModel hash] */

undefined8 * FUN_106e3a988(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e3aa98:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e3aaa4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e3aaa4;
        }
        goto LAB_106e3aa98;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e3aaa4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e3aa08; end: 106e3aabf; -[SCMemoriesDirectorModeDraftsCellViewModel isEqual:] */

long FUN_106e3aa08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3aa98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3aaa4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e3aaa4;
        }
        goto LAB_106e3aa98;
      }
    }
    lVar3 = 0;
  }
LAB_106e3aaa4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3aac0; end: 106e3aac7; -[SCMemoriesDirectorModeDraftsCellViewModel diffId] */

undefined8 FUN_106e3aac0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3aac8; end: 106e3aacf; -[SCMemoriesDirectorModeDraftsCellViewModel latestDraftSnap] */

undefined8 FUN_106e3aac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3aad0; end: 106e3aad7; -[SCMemoriesDirectorModeDraftsCellViewModel draftsCount] */

undefined8 FUN_106e3aad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e3aad8; end: 106e3ab07; -[SCMemoriesDirectorModeDraftsCellViewModel .cxx_destruct] */

void FUN_106e3aad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3ab08; end: 106e3ab73; +[SCMemoriesSnapSectionCellViewModel draftsCellWithDraftsCellViewModel:] */

void FUN_106e3ab08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cfc28;
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



/* Entry: 106e3ab74; end: 106e3abd7; +[SCMemoriesSnapSectionCellViewModel snapCellWithSnapCellViewModel:] */

void FUN_106e3ab74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cfc28;
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



/* Entry: 106e3abd8; end: 106e3abfb; -[SCMemoriesSnapSectionCellViewModel copyWithZone:] */

undefined8 FUN_106e3abd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3abfc; end: 106e3ac73; -[SCMemoriesSnapSectionCellViewModel hash] */

void FUN_106e3abfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f71b8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e3ac74; end: 106e3acb7; -[SCMemoriesSnapSectionCellViewModel internalInit] */

void FUN_106e3ac74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f71b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e3acb8; end: 106e3ad6f; -[SCMemoriesSnapSectionCellViewModel isEqual:] */

long FUN_106e3acb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3ad48:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3ad54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106e3ad54;
        }
        goto LAB_106e3ad48;
      }
    }
    lVar3 = 0;
  }
LAB_106e3ad54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3ad70; end: 106e3adf3; -[SCMemoriesSnapSectionCellViewModel matchSnapCell:draftsCell:] */

void FUN_106e3ad70(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_106e3add8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106e3add8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106e3add8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e3adf4; end: 106e3ae23; -[SCMemoriesSnapSectionCellViewModel .cxx_destruct] */

void FUN_106e3adf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e3ae24; end: 106e3af07; -[SCMemoriesPlaybackStreamingServiceProvider provide] */

void FUN_106e3ae24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2c38;
  _objc_alloc(PTR_PTR_1126d2c38);
  func_0x00010c02afc0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e3af08; end: 106e3af47;  */

void FUN_106e3af08(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e3af48; end: 106e3b1fb; -[SCMemoriesPlaybackStreamingServiceProvider _memoriesStreamingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3af48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126d2c40;
  _objc_alloc();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11275f6bc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11275f6c4;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar12;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11275f6c0;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar13;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11275f6c8;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar14;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11275f6cc;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar15;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11275f6d4;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar16;
  func_0x00010c0d82c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_11275f6d0;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11275f6d8;
    _objc_loadWeakRetained();
  }
  lVar9 = param_1;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe420(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e3b1fc; end: 106e3b287; -[SCMemoriesPlaybackStreamingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e3b1fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275f6d8);
  _objc_destroyWeak(param_1 + _DAT_11275f6d4);
  _objc_destroyWeak(param_1 + _DAT_11275f6d0);
  _objc_destroyWeak(param_1 + _DAT_11275f6cc);
  _objc_destroyWeak(param_1 + _DAT_11275f6c8);
  _objc_destroyWeak(param_1 + _DAT_11275f6c4);
  _objc_destroyWeak(param_1 + _DAT_11275f6c0);
  _objc_destroyWeak(param_1 + _DAT_11275f6bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275f6b8);
  return;
}



/* Entry: 106e3b288; end: 106e3b3ab; -[SCGalleryStreamingSnapPackageFetcher initWithPerformer:circumstanceEngine:cloudFS:networker:dataObjectContext:] */

undefined1 *
FUN_106e3b288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f71c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3b3ac; end: 106e3b56b; -[SCGalleryStreamingSnapPackageFetcher fetchStreamingPackageForSnap:snapDetail:completionQueue:completion:] */

void FUN_106e3b3ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106e3b56c;
  puStack_88 = &UNK_11097ee90;
  _objc_retain(param_6);
  uStack_78 = param_6;
  _objc_retain(param_5);
  ppuVar1 = &puStack_a0;
  uStack_80 = param_5;
  _objc_retainBlock();
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  uStack_b8 = 0x106e3b670;
  uStack_b0 = 0x106e3b680;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = param_4;
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3b56c; end: 106e3b65b;  */

void FUN_106e3b56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106e3b65c;
      puStack_50 = &UNK_11084a9e8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_48 = param_2;
      _objc_retain(param_3);
      uStack_40 = param_3;
      func_0x00010007380c(lVar1,&puStack_68);
      _objc_release(uStack_40);
      _objc_release(uStack_48);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106e3b65c; end: 106e3b69f;  */

void FUN_106e3b65c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e3b66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106e3b6a0; end: 106e3b9d7; -[SCGalleryStreamingSnapPackageFetcher _fetchOverlayIfNeededForSnap:snapDetail:completion:] */

void FUN_106e3b6a0(long param_1,undefined8 param_2,ulong param_3,undefined **param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e87cb8;
LAB_106e3b730:
    FUN_106e3c640(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,ppuVar3,0);
  }
  else {
    uVar2 = param_3;
    func_0x00010b5fa088();
    if ((0xc < uVar2) || ((1L << (uVar2 & 0x3f) & 0x1566U) == 0)) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e87cd8;
      goto LAB_106e3b730;
    }
    uVar2 = param_3;
    func_0x00010b5fa088();
    if (uVar2 == 8) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e87cf8;
      goto LAB_106e3b730;
    }
    if ((param_4 != (undefined **)0x0) &&
       (uVar2 = param_3, FUN_106e3c65c(param_3,param_4), (uVar2 & 1) == 0)) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e87d18;
      goto LAB_106e3b730;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf1f440();
    if (iVar1 == 0) {
LAB_106e3b810:
      uVar2 = param_3;
      func_0x00010bfd9dc0();
      if ((uVar2 & 1) == 0) {
        func_0x00010be12800(param_1);
        goto LAB_106e3b75c;
      }
      ppuVar3 = *(undefined ***)(param_1 + 0x10);
      func_0x00010c13ada0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_58,param_1);
      puVar4 = PTR_PTR_1126bf788;
      _objc_alloc(PTR_PTR_1126bf788);
      func_0x00010c017ba0();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_5);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(ppuVar3);
      func_0x00010bf89240(ppuVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(ppuVar3);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else {
      _objc_retain(param_4);
      ppuVar3 = param_4;
      if (param_4 == (undefined **)0x0) {
        ppuVar3 = (undefined **)PTR_PTR_1126bc7b8;
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 != (undefined **)0x0) goto LAB_106e3b7f8;
LAB_106e3b808:
        _objc_release(ppuVar3);
        goto LAB_106e3b810;
      }
LAB_106e3b7f8:
      uVar2 = param_3;
      FUN_106e3c65c(param_3,ppuVar3);
      if ((uVar2 & 1) != 0) goto LAB_106e3b808;
      ppuVar6 = &PTR____CFConstantStringClassReference_110e87d38;
      FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87d38);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,ppuVar6,0);
      _objc_release(ppuVar6);
    }
  }
  _objc_release(ppuVar3);
LAB_106e3b75c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3b9d8; end: 106e3ba6b;  */

void FUN_106e3b9d8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_3 == 0)) {
      func_0x00010be12800(lVar1);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x38);
      ppuVar2 = &PTR____CFConstantStringClassReference_110e87d58;
      FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87d58);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2,0);
      _objc_release(ppuVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e3ba6c; end: 106e3ba77; -[SCGalleryStreamingSnapPackageFetcher _fetchMediaURLIfNeededForSnap:snapDetail:overlayFile:completion:] */

void FUN_106e3ba6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be127f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMediaURLIfNeededForSnap_sn_112562398);
  return;
}



/* Entry: 106e3ba78; end: 106e3bf93; -[SCGalleryStreamingSnapPackageFetcher _fetchMediaURLIfNeededForSnap:snapDetail:overlayFile:allowCodecRenewal:completion:] */

void FUN_106e3ba78(long param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
                  undefined8 param_5,int param_6,long param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_4 == (undefined *)0x0) {
    puVar15 = PTR_PTR_1126bc7b8;
    func_0x00010bfa7160();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 != (undefined *)0x0) goto LAB_106e3bb24;
    bVar1 = false;
LAB_106e3bb6c:
    ppuVar12 = param_3;
    func_0x00010c0c6140();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar12 = param_3;
      func_0x00010c0c4ae0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar12 != (undefined **)0x0) {
        _objc_release();
        goto joined_r0x000106e3bba4;
      }
    }
    else {
      _objc_release();
joined_r0x000106e3bba4:
      if ((bVar1) &&
         (((param_6 == 0 ||
           (ppuVar12 = param_3, func_0x00010b5fb6c8(), ppuVar12 != (undefined **)0x0)) ||
          (puVar2 = PTR_PTR_1126ba150, func_0x00010bf88960(), ((ulong)puVar2 & 1) == 0)))) {
        ppuVar13 = param_3;
        FUN_106e3c6cc(param_3,puVar15,param_5);
        _objc_retainAutoreleasedReturnValue();
        pcVar14 = *(code **)(param_7 + 0x10);
        ppuVar12 = (undefined **)0x0;
        ppuVar6 = ppuVar13;
        goto LAB_106e3bc6c;
      }
    }
    ppuVar12 = param_3;
    func_0x00010b5f7718(param_3,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c7520();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126d2c48;
      _objc_alloc();
      func_0x00010c010420();
      puStack_90 = puVar4;
    }
    else {
      puVar4 = puVar2;
      func_0x00010c0c7520();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = puVar4;
    }
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_98 = ppuVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010c0ef4a0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_3;
    func_0x00010c15e1a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = param_3;
    func_0x00010b5fa088(param_3);
    puVar7 = puVar3;
    func_0x00010801e908(puVar3,1,0,0,puVar4 == (undefined *)0x0,0,ppuVar6 == (undefined **)0x0,
                        ppuVar13 == (undefined **)0x8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_initWeak(auStack_a0,param_1);
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = PTR_PTR_1126bbf20;
    func_0x00010bdc1920(PTR_PTR_1126bbf20);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_106e3bf94;
    puStack_d0 = &UNK_11097eef0;
    ppuVar6 = &puStack_e8;
    _objc_copyWeak(auStack_a8,auStack_a0);
    _objc_retain(param_7);
    lStack_b0 = param_7;
    _objc_retain(ppuVar12);
    ppuStack_c8 = ppuVar12;
    _objc_retain(param_3);
    ppuStack_c0 = param_3;
    _objc_retain(param_5);
    uStack_b8 = param_5;
    _objc_retain(param_7);
    ppuVar13 = &PTR____CFConstantStringClassReference_110e87d78;
    func_0x00010c25f400(uVar16);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(param_7);
    _objc_release(uStack_b8);
    _objc_release(ppuStack_c0);
    _objc_release(ppuStack_c8);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(ppuVar12);
  }
  else {
    _objc_retain(param_4);
    puVar15 = param_4;
LAB_106e3bb24:
    ppuVar12 = param_3;
    FUN_106e3c65c(param_3,puVar15);
    if (((ulong)ppuVar12 & 1) != 0) {
      bVar1 = true;
      goto LAB_106e3bb6c;
    }
    ppuVar12 = &PTR____CFConstantStringClassReference_110e87d18;
    FUN_106e3c640();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = *(code **)(param_7 + 0x10);
    ppuVar13 = (undefined **)0x0;
    ppuVar6 = ppuVar12;
LAB_106e3bc6c:
    (*pcVar14)(param_7,ppuVar12,ppuVar13);
    _objc_release(ppuVar6);
  }
  _objc_release(puVar15);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar6 + 8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(ppuVar13);
  ppuVar12 = param_3 + 8;
  _objc_loadWeakRetained();
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar6 = (undefined **)PTR_PTR_1126d2c50;
    _objc_alloc();
    func_0x00010c0206e0();
    ppuVar9 = ppuVar6;
    func_0x00010c15f8a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010c067fc0();
    _objc_release(ppuVar9);
    if (ppuVar10 == (undefined **)0x7d0) {
      ppuVar10 = ppuVar6;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      ppuVar10 = ppuVar9;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010c0720c0();
      _objc_release(ppuVar10);
      if (((ulong)ppuVar11 & 1) == 0) {
        puVar15 = param_3[7];
        ppuVar10 = &PTR____CFConstantStringClassReference_110e87db8;
        FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87db8);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar15 + 0x10))(puVar15,ppuVar10,0);
        _objc_release(ppuVar10);
      }
      else {
        func_0x00010be81140(ppuVar12);
      }
    }
    else {
      puVar15 = param_3[7];
      ppuVar9 = &PTR____CFConstantStringClassReference_110e87d98;
      FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87d98);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(puVar15 + 0x10))(puVar15,ppuVar9,0);
    }
    _objc_release(ppuVar9);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
  return;
}



/* Entry: 106e3bf94; end: 106e3c11b;  */

void FUN_106e3bf94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    ppuVar2 = (undefined **)PTR_PTR_1126d2c50;
    _objc_alloc();
    func_0x00010c0206e0();
    ppuVar3 = ppuVar2;
    func_0x00010c15f8a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c067fc0();
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x7d0) {
      ppuVar4 = ppuVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      ppuVar4 = ppuVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c0720c0();
      _objc_release(ppuVar4);
      if (((ulong)ppuVar5 & 1) == 0) {
        lVar6 = *(long *)(param_1 + 0x38);
        ppuVar4 = &PTR____CFConstantStringClassReference_110e87db8;
        FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87db8);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar6 + 0x10))(lVar6,ppuVar4,0);
        _objc_release(ppuVar4);
      }
      else {
        func_0x00010be81140(lVar1);
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x38);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e87d98;
      FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87d98);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,ppuVar3,0);
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e3c11c; end: 106e3c167;  */

void FUN_106e3c11c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e87d98;
  FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87d98);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,ppuVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106e3c168; end: 106e3c30f; -[SCGalleryStreamingSnapPackageFetcher _processFetchMediaURLWithServerSnap:snap:overlayFile:completion:] */

void FUN_106e3c168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010801eb18();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106e3c310;
  puStack_90 = &UNK_110848ba8;
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = param_4;
  uStack_80 = param_3;
  uStack_78 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x106e3c494;
  puStack_d0 = &UNK_11097e290;
  uStack_c8 = param_4;
  lStack_c0 = param_1;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f8520(uVar3,param_2,&puStack_a8,uVar4,&puStack_e8);
  _objc_release(uVar4);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_c8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3c310; end: 106e3c5eb;  */

void FUN_106e3c310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c273740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216ee0(puVar1);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar3 = PTR_PTR_1126bf8e8;
    func_0x00010bf5a9e0(PTR_PTR_1126bf8e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7460();
    puVar4 = puVar3;
    func_0x00010c0fd8e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c15e1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c15e1a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcca0(puVar1);
    _objc_release(uVar2);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c0c41a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c41a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4140(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c6160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c50c0(puVar1);
  _objc_release(uVar2);
  func_0x00010801ec68(puVar1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e3c5ec; end: 106e3c63f; -[SCGalleryStreamingSnapPackageFetcher .cxx_destruct] */

void FUN_106e3c5ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3c640; end: 106e3c65b;  */

void FUN_106e3c640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110e87e38,param_1,200);
  return;
}



/* Entry: 106e3c65c; end: 106e3c6cb;  */

uint FUN_106e3c65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bfb98;
  _objc_retain();
  func_0x00010c0ef4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137480(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  return (uint)puVar1 ^ 1;
}



/* Entry: 106e3c6cc; end: 106e3c9fb;  */

void FUN_106e3c6cc(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = param_1;
  func_0x00010bfd9dc0();
  if (((param_3 == (undefined *)0x0) && (((ulong)puVar8 & 1) != 0)) ||
     (puVar8 = param_1, FUN_106e3c65c(param_1,param_2), (int)puVar8 == 0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x00010b5fb6c8();
    puVar8 = param_1;
    func_0x00010c0c4ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = param_1;
    puVar5 = param_1;
    if (puVar8 == (undefined *)0x0) {
      puVar8 = PTR_PTR_1126d2c60;
      func_0x00010c2b1d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010c0c6140(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010c1e9340();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126d2c58;
      _objc_alloc();
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f9b9c(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x000108016a44(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
      puVar2 = param_3;
      func_0x00010bfad280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047d60(puVar8);
      _objc_release(puVar7);
    }
    else {
      puVar8 = PTR_PTR_1126d2c58;
      _objc_alloc(PTR_PTR_1126d2c58);
      puVar3 = param_1;
      func_0x00010c241220(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f9b9c(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010c0c4ae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      puVar6 = param_3;
      func_0x00010bfad280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047d60(puVar8);
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106e3c9fc; end: 106e3cac3;  */

uint FUN_106e3c9fc(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010b5fa088();
    uVar4 = 0;
    if ((uVar1 < 0xd) && ((1L << (uVar1 & 0x3f) & 0x1566U) != 0)) {
      uVar1 = param_1;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar4 = 0;
      if ((param_2 != 0) && (uVar1 != 0)) {
        lVar2 = param_2;
        func_0x00010c13a8c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c06cde0();
        uVar4 = (uint)lVar3 ^ 1;
        _objc_release(lVar2);
      }
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}


