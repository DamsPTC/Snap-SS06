/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0008d270; end: 0008d32b;  */

void FUN_0008d270(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *unaff_x20;
  lVar2 = unaff_x20[2];
  lVar1 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  _swift_release(unaff_x20[5]);
  _swift_release(lVar3);
  _swift_release(lVar1);
  _swift_release(lVar2);
  lVar3 = *(long *)(*unaff_x20 + 0x78);
  uStack_58 = *(undefined8 *)(lVar4 + 0x58);
  uStack_60 = *(undefined8 *)(lVar4 + 0x50);
  uStack_48 = *(undefined8 *)(lVar4 + 0x68);
  uStack_50 = *(undefined8 *)(lVar4 + 0x60);
  lVar2 = 0;
  FUN_0008f320(0,&uStack_60);
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar3,lVar2);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)));
  return;
}



/* Entry: 0008d32c; end: 0008d34f;  */

void FUN_0008d32c(void)

{
  FUN_0008d270();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0008d350; end: 0008d35b;  */

void FUN_0008d350(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_0099ba28)(param_1,param_2,&UNK_0084128c);
  return;
}



/* Entry: 0008d35c; end: 0008d3d3;  */

void FUN_0008d35c(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  uStack_58 = *(undefined8 *)(param_2 + 0x68);
  uStack_60 = *(undefined8 *)(param_2 + 0x60);
  lVar1 = 0;
  FUN_0008f320(0,&uStack_70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2,lVar1);
  return;
}



/* Entry: 0008d3d4; end: 0008d413;  */

undefined1  [16] FUN_0008d3d4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_0008d414;
  return auVar2;
}



/* Entry: 0008d414; end: 0008d45f;  */

void FUN_0008d414(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_0099b9d0)();
  return;
}



/* Entry: 0008d460; end: 0008d69f;  */

void FUN_0008d460(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar11 + 0x50);
  uVar3 = *(undefined8 *)(lVar11 + 0x58);
  uVar2 = *(undefined8 *)(lVar11 + 0x60);
  uVar4 = *(undefined8 *)(lVar11 + 0x68);
  func_0x0008f638((long)unaff_x20 + *(long *)(lVar11 + 0x78),uVar1,uVar3,uVar2);
  lVar10 = *(long *)(*unaff_x20 + 0x80);
  lVar5 = 0;
  func_0x0009e3e0();
  _swift_allocObject();
  uVar6 = 0;
  __s11SwiftSCLock4LockCMa();
  uVar7 = uVar6;
  _swift_allocObject();
  func_0x001d45e0();
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
  *(undefined **)(lVar5 + 0x18) = puVar8;
  *(long *)((long)unaff_x20 + lVar10) = lVar5;
  lVar5 = *(long *)(*unaff_x20 + 0x88);
  _swift_allocObject(uVar6,0x18,7);
  func_0x001d45e0();
  *(undefined8 *)((long)unaff_x20 + lVar5) = uVar6;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  unaff_x20[4] = param_3;
  unaff_x20[5] = param_4;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)) = param_5;
  puVar8 = &UNK_007d41f8;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_007d41f8,&uStack_80);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_retain(param_5);
  puVar9 = &DAT_007d41d8;
  _swift_getWitnessTable(&DAT_007d41d8,lVar11);
  FUN_0008b9a4(param_1,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  puVar8 = &UNK_007d4218;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_007d4218,&uStack_80);
  FUN_0008b9a4(param_2,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  puVar8 = &UNK_007d4238;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_007d4238,&uStack_80);
  FUN_0008b9a4(param_3,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  puVar8 = &UNK_007d4258;
  uStack_80 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getKeyPath(&UNK_007d4258,&uStack_80);
  FUN_0008b9a4(param_4,puVar8,lVar11,puVar9);
  _swift_release(puVar8);
  return;
}



/* Entry: 0008d6a0; end: 0008d707;  */

void FUN_0008d6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  _swift_allocObject();
  FUN_0008d460(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 0008d708; end: 0008d70f;  */

void FUN_0008d708(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 0008d710; end: 0008d82b;  */

void FUN_0008d710(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  __sSqMa();
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_60,*(long *)(lVar1 + -8) + 0x40,&UNK_007d4298);
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    puStack_40 = auStack_60;
    __sSqMa();
    if (uVar2 < 0x40) {
      _swift_getTupleTypeLayout2(auStack_80,*(long *)(lVar1 + -8) + 0x40,&UNK_007d4298);
      uVar2 = *(ulong *)(param_1 + 0x20);
      lVar1 = 0x13f;
      puStack_38 = auStack_80;
      __sSqMa();
      if (uVar2 < 0x40) {
        _swift_getTupleTypeLayout2(auStack_a0,*(long *)(lVar1 + -8) + 0x40,&UNK_007d4298);
        uVar2 = *(ulong *)(param_1 + 0x28);
        lVar1 = 0x13f;
        puStack_30 = auStack_a0;
        __sSqMa();
        if (uVar2 < 0x40) {
          _swift_getTupleTypeLayout2(auStack_c0,*(long *)(lVar1 + -8) + 0x40,&UNK_007d4298);
          puStack_28 = auStack_c0;
          _swift_initStructMetadata(param_1,0,4,&puStack_40,param_1 + 0x30);
        }
      }
    }
  }
  return;
}



/* Entry: 0008d82c; end: 0008db97;  */

long * FUN_0008d82c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  
  lVar18 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(param_3 + 0x18);
  lVar24 = *(long *)(lVar18 + -8);
  lVar13 = *(long *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  lVar22 = *(long *)(lVar6 + -8);
  iVar3 = *(int *)(lVar22 + 0x54);
  uVar14 = (ulong)*(uint *)(lVar22 + 0x50) & 0xff;
  uVar11 = lVar13 + uVar14 + 1;
  lVar19 = *(long *)(lVar22 + 0x40);
  lVar2 = lVar19;
  if (iVar3 == 0) {
    lVar2 = lVar19 + 1;
  }
  lVar5 = *(long *)(param_3 + 0x20);
  lVar7 = *(long *)(param_3 + 0x28);
  lVar17 = *(long *)(lVar5 + -8);
  iVar4 = *(int *)(lVar17 + 0x54);
  uVar20 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  uVar12 = *(ulong *)(lVar17 + 0x40);
  uVar21 = uVar12;
  if (iVar4 == 0) {
    uVar21 = uVar12 + 1;
  }
  lVar16 = *(long *)(lVar7 + -8);
  uVar9 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  lVar15 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  uVar8 = *(uint *)(lVar22 + 0x50) | *(uint *)(lVar24 + 0x50) |
          *(uint *)(lVar17 + 0x50) | *(uint *)(lVar16 + 0x50);
  uVar1 = uVar8 & 0xff;
  if ((uVar1 < 8 &&
      lVar15 - ((((-2 - (lVar2 + uVar20)) - (uVar11 & (uVar14 ^ 0xffffffffffffffff)) | uVar20) +
                ~uVar21) - uVar9 | uVar9) < 0x19) && (uVar8 & 0x100000) == 0) {
    plVar10 = param_2;
    (**(code **)(lVar24 + 0x30))(param_2,1,lVar18);
    if ((int)plVar10 == 0) {
      (**(code **)(lVar24 + 0x10))(param_1,param_2,lVar18);
      (**(code **)(lVar24 + 0x38))(param_1,0,1,lVar18);
    }
    else {
      _memcpy(param_1,param_2,lVar13);
    }
    *(undefined1 *)(lVar13 + (long)param_1) = *(undefined1 *)(lVar13 + (long)param_2);
    lVar13 = lVar19 + 1;
    uVar23 = uVar11 + (long)param_1 & ~uVar14;
    uVar14 = uVar11 + (long)param_2 & ~uVar14;
    uVar11 = uVar14;
    (**(code **)(lVar22 + 0x30))(uVar14,1,lVar6);
    if ((int)uVar11 == 0) {
      (**(code **)(lVar22 + 0x10))(uVar23,uVar14,lVar6);
      (**(code **)(lVar22 + 0x38))(uVar23,0,1,lVar6);
    }
    else {
      _memcpy(uVar23,uVar14,lVar2);
    }
    if (iVar3 == 0) {
      *(undefined1 *)(uVar23 + lVar13) = *(undefined1 *)(uVar14 + lVar13);
      lVar13 = lVar19 + 2;
    }
    else {
      *(undefined1 *)(uVar23 + lVar19) = *(undefined1 *)(uVar14 + lVar19);
    }
    lVar18 = uVar12 + 1;
    uVar23 = uVar23 + uVar20 + lVar13 & ~uVar20;
    uVar14 = uVar14 + uVar20 + lVar13 & ~uVar20;
    uVar11 = uVar14;
    (**(code **)(lVar17 + 0x30))(uVar14,1,lVar5);
    if ((int)uVar11 == 0) {
      (**(code **)(lVar17 + 0x10))(uVar23,uVar14,lVar5);
      (**(code **)(lVar17 + 0x38))(uVar23,0,1,lVar5);
    }
    else {
      _memcpy(uVar23,uVar14,uVar21);
    }
    if (iVar4 == 0) {
      *(undefined1 *)(uVar23 + lVar18) = *(undefined1 *)(uVar14 + lVar18);
      lVar18 = uVar12 + 2;
    }
    else {
      *(undefined1 *)(uVar23 + uVar12) = *(undefined1 *)(uVar14 + uVar12);
    }
    uVar21 = uVar23 + uVar9 + lVar18 & ~uVar9;
    uVar14 = uVar14 + uVar9 + lVar18 & ~uVar9;
    uVar11 = uVar14;
    (**(code **)(lVar16 + 0x30))(uVar14,1,lVar7);
    if ((int)uVar11 == 0) {
      (**(code **)(lVar16 + 0x10))(uVar21,uVar14,lVar7);
      (**(code **)(lVar16 + 0x38))(uVar21,0,1,lVar7);
    }
    else {
      _memcpy(uVar21,uVar14,lVar15);
    }
    *(undefined1 *)(uVar21 + lVar15) = *(undefined1 *)(uVar14 + lVar15);
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    param_1 = (long *)(lVar13 + ((ulong)uVar1 + 0x10 & ((ulong)uVar1 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 0008db98; end: 0008dcef;  */

void FUN_0008db98(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar3 + -8);
  lVar4 = param_1;
  (**(code **)(lVar5 + 0x30))(param_1,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1,lVar3);
  }
  lVar4 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar4 + -8);
  param_1 = param_1 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  uVar2 = param_1 + (ulong)*(byte *)(lVar3 + 0x50) + 1 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar7 = uVar2;
  (**(code **)(lVar3 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar3 + 8))(uVar2,lVar4);
  }
  lVar5 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(lVar5 + -8);
  lVar4 = uVar2 + *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar2 = lVar4 + (ulong)*(byte *)(lVar6 + 0x50) + 1 &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  uVar7 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar5);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar6 + 8))(uVar2,lVar5);
  }
  lVar3 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar4 = uVar2 + *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar2 = lVar4 + uVar7 + 1;
  uVar1 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x30))(uVar1,1,lVar3);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0008dcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 0008dcf0; end: 0008df8b;  */

long FUN_0008dcf0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + param_1) = *(undefined1 *)(lVar7 + param_2);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  return param_1;
}



/* Entry: 0008df8c; end: 0008e33b;  */

long FUN_0008df8c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar2 = param_1;
  (*pcVar9)(param_1,1,lVar5);
  lVar7 = param_2;
  (*pcVar9)(param_2,1,lVar5);
  if ((int)lVar2 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
      goto LAB_0008e028;
    }
    (**(code **)(lVar8 + 0x18))(param_1,param_2,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar5);
  }
  else {
LAB_0008e028:
    lVar2 = *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(param_1,param_2,lVar2);
  }
  lVar2 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + param_1) = *(undefined1 *)(lVar2 + param_2);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_0008e0f4;
    }
    (**(code **)(lVar5 + 0x18))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_0008e0f4:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_0008e1c0;
    }
    (**(code **)(lVar5 + 0x18))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_0008e1c0:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x28);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 == 0) {
      (**(code **)(lVar5 + 0x18))(uVar6,uVar4,lVar7);
      goto LAB_0008e2a8;
    }
    (**(code **)(lVar5 + 8))(uVar6,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x10))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
    goto LAB_0008e2a8;
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  _memcpy(uVar6,uVar4,lVar2);
LAB_0008e2a8:
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  return param_1;
}



/* Entry: 0008e33c; end: 0008e5d7;  */

long FUN_0008e33c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(param_1,param_2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + param_1) = *(undefined1 *)(lVar7 + param_2);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x20))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    _memcpy(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  return param_1;
}



/* Entry: 0008e5d8; end: 0008e987;  */

long FUN_0008e5d8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar2 = param_1;
  (*pcVar9)(param_1,1,lVar5);
  lVar7 = param_2;
  (*pcVar9)(param_2,1,lVar5);
  if ((int)lVar2 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar5);
      goto LAB_0008e674;
    }
    (**(code **)(lVar8 + 0x28))(param_1,param_2,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar5);
  }
  else {
LAB_0008e674:
    lVar2 = *(long *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(param_1,param_2,lVar2);
  }
  lVar2 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + param_1) = *(undefined1 *)(lVar2 + param_2);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_0008e740;
    }
    (**(code **)(lVar5 + 0x28))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_0008e740:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x20);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 != 0) {
      (**(code **)(lVar5 + 8))(uVar6,lVar7);
      goto LAB_0008e80c;
    }
    (**(code **)(lVar5 + 0x28))(uVar6,uVar4,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
  }
  else {
LAB_0008e80c:
    lVar2 = *(long *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      lVar2 = lVar2 + 1;
    }
    _memcpy(uVar6,uVar4,lVar2);
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  lVar7 = *(long *)(param_3 + 0x28);
  lVar5 = *(long *)(lVar7 + -8);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar2 = lVar2 + uVar3 + 1;
  uVar6 = lVar2 + uVar6 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = lVar2 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  pcVar9 = *(code **)(lVar5 + 0x30);
  uVar3 = uVar6;
  (*pcVar9)(uVar6,1,lVar7);
  uVar1 = uVar4;
  (*pcVar9)(uVar4,1,lVar7);
  if ((int)uVar3 == 0) {
    if ((int)uVar1 == 0) {
      (**(code **)(lVar5 + 0x28))(uVar6,uVar4,lVar7);
      goto LAB_0008e8f4;
    }
    (**(code **)(lVar5 + 8))(uVar6,lVar7);
  }
  else if ((int)uVar1 == 0) {
    (**(code **)(lVar5 + 0x20))(uVar6,uVar4,lVar7);
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,lVar7);
    goto LAB_0008e8f4;
  }
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  _memcpy(uVar6,uVar4,lVar2);
LAB_0008e8f4:
  lVar2 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  *(undefined1 *)(lVar2 + uVar6) = *(undefined1 *)(lVar2 + uVar4);
  return param_1;
}



/* Entry: 0008e988; end: 0008f31f;  */

int FUN_0008e988(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  code *pcVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  
  lVar28 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar13 = *(int *)(lVar28 + 0x54);
  uVar18 = 0;
  if (iVar13 != 0) {
    uVar18 = iVar13 - 1;
  }
  uVar25 = uVar18;
  if (uVar18 < 0xff) {
    uVar25 = 0xfe;
  }
  lVar27 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  iVar9 = *(int *)(lVar27 + 0x54);
  uVar4 = 0;
  if (iVar9 != 0) {
    uVar4 = iVar9 - 1;
  }
  uVar5 = uVar4;
  if (uVar4 < 0xff) {
    uVar5 = 0xfe;
  }
  uVar8 = uVar5;
  if (uVar5 <= uVar25) {
    uVar8 = uVar25;
  }
  lVar15 = *(long *)(param_3 + 0x28);
  lVar16 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  iVar10 = *(int *)(lVar16 + 0x54);
  uVar6 = 0;
  if (iVar10 != 0) {
    uVar6 = iVar10 - 1;
  }
  uVar7 = uVar6;
  if (uVar6 < 0xff) {
    uVar7 = 0xfe;
  }
  uVar12 = uVar7;
  if (uVar7 <= uVar8) {
    uVar12 = uVar8;
  }
  lVar17 = *(long *)(lVar15 + -8);
  iVar14 = *(int *)(lVar17 + 0x54);
  uVar8 = 0;
  if (iVar14 != 0) {
    uVar8 = iVar14 - 1;
  }
  uVar19 = uVar8;
  if (uVar8 <= uVar12) {
    uVar19 = uVar12;
  }
  if (uVar19 < 0xff) {
    uVar19 = 0xfe;
  }
  lVar20 = *(long *)(lVar28 + 0x40);
  if (iVar13 == 0) {
    lVar20 = lVar20 + 1;
  }
  lVar21 = *(long *)(lVar27 + 0x40);
  if (iVar9 == 0) {
    lVar21 = lVar21 + 1;
  }
  lVar22 = *(long *)(lVar16 + 0x40);
  if (iVar10 == 0) {
    lVar22 = lVar22 + 1;
  }
  lVar23 = *(long *)(lVar17 + 0x40);
  if (iVar14 == 0) {
    lVar23 = lVar23 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar31 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar1 = lVar20 + uVar31 + 1;
  uVar32 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar30 = (ulong)*(byte *)(lVar17 + 0x50);
  lVar2 = lVar22 + uVar30 + 1;
  if (param_2 < uVar19 || param_2 - uVar19 == 0) goto LAB_0008eba4;
  lVar3 = lVar23 + (lVar2 + (lVar21 + 1 + uVar32 + (uVar1 & (uVar31 ^ 0xffffffffffffffff)) &
                            (uVar32 ^ 0xffffffffffffffff)) & (uVar30 ^ 0xffffffffffffffff)) + 1;
  uVar26 = (uint)lVar3;
  uVar12 = uVar26 << 3;
  if (uVar26 < 4) {
    uVar29 = ((param_2 - uVar19) + ~(-1 << (ulong)(uVar12 & 0x1f)) >> (ulong)(uVar12 & 0x1f)) + 1;
    if (uVar29 < 0x100) {
      if (uVar29 < 2) goto LAB_0008eba4;
      goto LAB_0008eae4;
    }
    if (uVar29 >> 0x10 == 0) {
      uVar29 = (uint)*(ushort *)((long)param_1 + lVar3);
      if (uVar29 == 0) goto LAB_0008eba4;
      goto LAB_0008eb3c;
    }
    uVar29 = *(uint *)((long)param_1 + lVar3);
    if (uVar29 != 0) goto LAB_0008eb3c;
LAB_0008eba4:
    if (uVar25 == uVar19) {
      if (uVar18 < 0xfe) {
        bVar11 = *(byte *)(lVar20 + (long)param_1);
joined_r0x0008ec44:
        uVar18 = (uint)bVar11;
        if (bVar11 < 2) {
          return 0;
        }
LAB_0008ec48:
        uVar19 = uVar18 + 0x7ffffffe & 0x7fffffff;
        goto LAB_0008ecc4;
      }
      pcVar24 = *(code **)(lVar28 + 0x30);
      lVar15 = *(long *)(param_3 + 0x10);
      iVar14 = iVar13;
    }
    else {
      param_1 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar31);
      if (uVar5 == uVar19) {
        if (uVar4 < 0xfe) {
          bVar11 = *(byte *)((long)param_1 + lVar21);
          goto joined_r0x0008ec44;
        }
        pcVar24 = *(code **)(lVar27 + 0x30);
        lVar15 = *(long *)(param_3 + 0x18);
        iVar14 = iVar9;
      }
      else {
        param_1 = (uint *)((ulong)((long)param_1 + uVar32 + lVar21 + 1) & ~uVar32);
        if (uVar7 == uVar19) {
          if (uVar6 < 0xfe) {
            bVar11 = *(byte *)((long)param_1 + lVar22);
joined_r0x0008eca8:
            uVar18 = (uint)bVar11;
            if (uVar18 < 2) {
              return 0;
            }
            goto LAB_0008ec48;
          }
          pcVar24 = *(code **)(lVar16 + 0x30);
          lVar15 = *(long *)(param_3 + 0x20);
          iVar14 = iVar10;
        }
        else {
          param_1 = (uint *)((ulong)(lVar2 + (long)param_1) & ~uVar30);
          if (uVar8 < 0xfe) {
            bVar11 = *(byte *)((long)param_1 + lVar23);
            goto joined_r0x0008eca8;
          }
          pcVar24 = *(code **)(lVar17 + 0x30);
        }
      }
    }
    (*pcVar24)(param_1,iVar14,lVar15);
    iVar13 = 0;
    if ((int)param_1 != 0) {
      iVar13 = (int)param_1 + -1;
    }
  }
  else {
LAB_0008eae4:
    uVar29 = (uint)*(byte *)((long)param_1 + lVar3);
    if (*(byte *)((long)param_1 + lVar3) == 0) goto LAB_0008eba4;
LAB_0008eb3c:
    uVar18 = 0;
    if (uVar26 < 4) {
      uVar18 = uVar29 - 1 << (ulong)(uVar12 & 0x1f);
    }
    if (uVar26 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = 4;
      if (uVar26 < 4) {
        uVar25 = uVar26;
      }
      if ((int)uVar25 < 3) {
        if (uVar25 == 1) {
          uVar25 = (uint)(byte)*param_1;
        }
        else {
          uVar25 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar25 == 3) {
        uVar25 = (uint)(uint3)*param_1;
      }
      else {
        uVar25 = *param_1;
      }
    }
    uVar19 = uVar19 + (uVar25 | uVar18);
LAB_0008ecc4:
    iVar13 = uVar19 + 1;
  }
  return iVar13;
}



/* Entry: 0008f320; end: 0008f32b;  */

void FUN_0008f320(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_0099ba28)(param_1,param_2,&DAT_008412dc);
  return;
}



/* Entry: 0008f32c; end: 000904ab;  */

char FUN_0008f32c(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  char acStack_c0 [8];
  long lStack_b8;
  char *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  puStack_78 = *(undefined **)(param_1 + 0x28);
  lVar4 = 0xff;
  __sSqMa();
  puVar1 = PTR___sSbN_0099b220;
  lVar5 = 0;
  lStack_a0 = lVar4;
  _swift_getTupleTypeMetadata2(0,lVar4,PTR___sSbN_0099b220,"value completed ",0);
  lStack_b8 = *(long *)(lVar5 + -8);
  lStack_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_70 = *(undefined **)(param_1 + 0x20);
  lVar4 = 0xff;
  pcStack_b0 = acStack_c0 + -extraout_x8;
  __sSqMa();
  lVar5 = 0;
  lStack_80 = lVar4;
  _swift_getTupleTypeMetadata2(0,lVar4,puVar1,"value completed ",0);
  lStack_98 = *(long *)(lVar5 + -8);
  lStack_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(acStack_c0 + -extraout_x8) - extraout_x8_00;
  puVar10 = *(undefined **)(param_1 + 0x18);
  lVar4 = 0xff;
  lStack_90 = lVar8;
  __sSqMa(0xff,puVar10);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,puVar1,"value completed ",0);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_01;
  puVar11 = *(undefined **)(param_1 + 0x10);
  lVar6 = 0xff;
  __sSqMa(0xff,puVar11);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,puVar1,"value completed ",0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar8 - extraout_x12;
  if (puVar11 == PTR___ss5NeverON_0099b788) {
LAB_0008f520:
    puVar1 = PTR___ss5NeverON_0099b788;
    if (puVar10 != PTR___ss5NeverON_0099b788) {
      (**(code **)(lVar12 + 0x10))(lVar8,unaff_x20 + *(int *)(param_1 + 0x34),lVar5);
      cVar3 = *(char *)(lVar8 + *(int *)(lVar5 + 0x30));
      (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar8,lVar4);
      if (cVar3 != '\x01') goto LAB_0008f60c;
    }
    lVar5 = lStack_88;
    lVar4 = lStack_90;
    if (puStack_70 != puVar1) {
      (**(code **)(lStack_98 + 0x10))(lStack_90,unaff_x20 + *(int *)(param_1 + 0x38),lStack_88);
      cVar3 = *(char *)(lVar4 + *(int *)(lVar5 + 0x30));
      (**(code **)(*(long *)(lStack_80 + -8) + 8))(lVar4);
      if (cVar3 != '\x01') goto LAB_0008f60c;
    }
    lVar4 = lStack_a8;
    pcVar2 = pcStack_b0;
    if (puStack_78 == puVar1) {
      cVar3 = '\x01';
    }
    else {
      (**(code **)(lStack_b8 + 0x10))(pcStack_b0,unaff_x20 + *(int *)(param_1 + 0x3c),lStack_a8);
      cVar3 = pcVar2[*(int *)(lVar4 + 0x30)];
      (**(code **)(*(long *)(lStack_a0 + -8) + 8))(pcVar2);
    }
  }
  else {
    (**(code **)(extraout_x8_02 + 0x10))(lVar9,unaff_x20,lVar7);
    cVar3 = *(char *)(lVar9 + *(int *)(lVar7 + 0x30));
    (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar9,lVar6);
    if (cVar3 == '\x01') goto LAB_0008f520;
LAB_0008f60c:
    cVar3 = '\0';
  }
  return cVar3;
}



/* Entry: 000904ac; end: 000904f7;  */

void FUN_000904ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_00092368(param_1);
  return;
}



/* Entry: 000904f8; end: 000905cf;  */

undefined1  [16] FUN_000904f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_0009093c(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_000a0834(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_000906ec(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_007d4350;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_007d4350,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 000905d0; end: 000905d7;  */

void FUN_000905d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 000905d8; end: 0009060b;  */

void FUN_000905d8(long param_1)

{
  FUN_00092370();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 0009060c; end: 0009061b;  */

void FUN_0009060c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_0084130c);
  return;
}



/* Entry: 0009061c; end: 0009065f;  */

void FUN_0009061c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_0099b8e8 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 00090660; end: 00090663;  */

void FUN_00090660(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00090664; end: 000906eb;  */

void FUN_00090664(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_28 = PTR___syycWV_0099b8e8 + 0x40;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 000906ec; end: 0009075b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_000906ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64838);
  *(undefined8 *)(unaff_x20 + _DAT_00ae9f40) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae9f48);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return unaff_x20;
}



/* Entry: 0009075c; end: 0009088b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009075c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(*unaff_x20 + 0x58);
  lVar1 = 0;
  __sSqMa(0,lVar4);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = puVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)((long)unaff_x20 + _DAT_00ae9f48))(puVar5,param_1);
  puVar2 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar4);
  if ((int)puVar2 == 1) {
    pcVar3 = *(code **)(lVar8 + 8);
    puVar6 = puVar5;
    lVar4 = lVar1;
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar6,puVar5,lVar4);
    FUN_000a08b0(puVar6);
    pcVar3 = *(code **)(lVar7 + 8);
  }
  (*pcVar3)(puVar6,lVar4);
  return;
}



/* Entry: 0009088c; end: 00090917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009088c(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 00090918; end: 0009093b;  */

void FUN_00090918(void)

{
  func_0x000908b4();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0009093c; end: 00090947;  */

void FUN_0009093c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841378);
  return;
}



/* Entry: 00090948; end: 00090993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090948(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64838;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00090990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00090994; end: 000909d3;  */

void FUN_00090994(void)

{
  FUN_0009075c();
  return;
}



/* Entry: 000909d4; end: 00090a2b;  */

void FUN_000909d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  FUN_00092368(param_2);
  return;
}



/* Entry: 00090a2c; end: 00090b0f;  */

undefined1  [16] FUN_00090a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x20;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_000912ec(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar7 = unaff_x20[4];
  lVar4 = unaff_x20[3];
  _swift_unknownObjectRetain(lVar4);
  FUN_00090c54(lVar7,param_2,lVar4);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar2 = &DAT_007d4468;
  uStack_58 = param_2;
  _swift_getWitnessTable(&DAT_007d4468,uVar1);
  puVar3 = &uStack_58;
  (*pcVar5)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = puVar3;
  return auVar8;
}



/* Entry: 00090b10; end: 00090b17;  */

void FUN_00090b10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00090b18; end: 00090b4b;  */

void FUN_00090b18(long param_1)

{
  FUN_00092370();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00090b4c; end: 00090b5b;  */

void FUN_00090b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008413c8);
  return;
}



/* Entry: 00090b5c; end: 00090ba7;  */

void FUN_00090b5c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_20 = &UNK_007d4398;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 00090ba8; end: 00090bab;  */

void FUN_00090ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00090bac; end: 00090c53;  */

void FUN_00090bac(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_40 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_48 = &UNK_007d43f8;
    puStack_30 = &UNK_007d4410;
    puStack_28 = &UNK_007d4428;
    puStack_38 = puStack_50;
    _swift_initClassMetadata2(param_1,0,7,&lStack_58,param_1 + 0x58);
  }
  return;
}



/* Entry: 00090c54; end: 00090caf;  */

undefined8 FUN_00090c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00090cb0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 00090cb0; end: 00090d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64840);
  lVar1 = _DAT_00aea090;
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  func_0x001d45e0();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_00aea098) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_00aea0a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00aea078) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00aea088) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00aea080) = param_3;
  return;
}



/* Entry: 00090d68; end: 000910a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090d68(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long *unaff_x20;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar11 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  puStack_b8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0;
  lStack_b0 = lVar9;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lVar11 + 0x50);
  lVar14 = *(long *)(lVar15 + -8);
  lVar17 = *(long *)(lVar14 + 0x40);
  lStack_c8 = lVar9;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar9 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  uStack_c0 = *(undefined8 *)((long)unaff_x20 + _DAT_00aea090);
  __s11SwiftSCLock4LockC4lockyyF();
  lVar2 = _DAT_00aea098;
  lVar11 = *(long *)((long)unaff_x20 + _DAT_00aea098);
  if (lVar11 != 0) {
    _swift_retain(lVar11);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar11);
  }
  puVar4 = &UNK_009a5330;
  _swift_allocObject(&UNK_009a5330,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  (**(code **)(lVar14 + 0x10))(lVar9,param_1,lVar15);
  uVar10 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar16 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &UNK_009a5358;
  _swift_allocObject(&UNK_009a5358,uVar16 + lVar17,uVar10 | 7);
  *(long *)(puVar5 + 0x10) = lVar15;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  (**(code **)(lVar14 + 0x20))(puVar5 + uVar16,lVar9,lVar15);
  pcStack_70 = FUN_00091410;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_0001d1e4;
  puStack_78 = &UNK_009a5370;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  puStack_98 = PTR___swiftEmptyArrayStorage_0099b8f0;
  ppuVar7 = ppuVar6;
  FUN_00088e34();
  _swift_retain(puVar4);
  uVar12 = 0xae97a8;
  func_0x000115a8(0xae97a8,&UNK_007d4680);
  uVar8 = uVar12;
  func_0x00088e78();
  lVar9 = lStack_c8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lStack_c8,&puStack_98,uVar12,uVar8,lVar3,ppuVar7);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC5flags5blockAcA0abC5FlagsV_yyXBtcfc(lVar9,ppuVar6);
  puVar5 = puStack_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar12 = *(undefined8 *)((long)unaff_x20 + lVar2);
  *(long *)((long)unaff_x20 + lVar2) = lVar9;
  _swift_retain(lVar9);
  _swift_release(uVar12);
  uVar12 = *(undefined8 *)((long)unaff_x20 + _DAT_00aea080);
  _swift_getObjectType(uVar12);
  FUN_000a4eac();
  puVar1 = puStack_b8;
  __s8Dispatch0A4TimeV3nowACyFZ(puStack_b8);
  lVar2 = lStack_b0;
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF
            (lStack_b0,*(undefined8 *)((long)unaff_x20 + _DAT_00aea088),puVar1);
  lVar3 = lStack_a0;
  pcVar13 = *(code **)(lStack_a8 + 8);
  (*pcVar13)(puVar1,lStack_a0);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar2,lVar9);
  _objc_release(uVar12);
  (*pcVar13)(lVar2,lVar3);
  func_0x001d46c8();
  _swift_release(lVar9);
  return;
}



/* Entry: 000910a8; end: 00091103;  */

void FUN_000910a8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_00091104(param_2);
    _swift_release(param_1);
  }
  return;
}



/* Entry: 00091104; end: 000911f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091104(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  __s11SwiftSCLock4LockC4lockyyF();
  FUN_000a08b0(param_1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00aea098);
  *(undefined8 *)(unaff_x20 + _DAT_00aea098) = 0;
  _swift_release(uVar1);
  func_0x001d46c8();
  return;
}



/* Entry: 000911f4; end: 000912c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000911f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_00aea098);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    __s8Dispatch0A8WorkItemC7performyyFTj();
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar1);
  }
  FUN_000a08f8();
  return;
}



/* Entry: 000912c8; end: 000912eb;  */

void FUN_000912c8(void)

{
  func_0x00091248();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000912ec; end: 000912f7;  */

void FUN_000912ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841434);
  return;
}



/* Entry: 000912f8; end: 00091343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000912f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64840;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00091340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00091344; end: 00091383;  */

void FUN_00091344(void)

{
  FUN_00090d68();
  return;
}



/* Entry: 00091384; end: 0009138b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091384(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_00aea098);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    __s8Dispatch0A8WorkItemC7performyyFTj();
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar1);
  }
  FUN_000a08f8();
  return;
}



/* Entry: 0009138c; end: 000913af;  */

void FUN_0009138c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000913b0; end: 0009140f;  */

void FUN_000913b0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00091410; end: 00091447;  */

void FUN_00091410(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_00091104(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 00091448; end: 00091497;  */

void FUN_00091448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  FUN_00091630(param_2,unaff_x20 + 0x18);
  FUN_00092368(param_1);
  return;
}



/* Entry: 00091498; end: 0009155f;  */

undefined1  [16] FUN_00091498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 auStack_68 [5];
  
  plVar3 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_00091a40(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  FUN_000a0834(param_2,param_3);
  FUN_000915a8(unaff_x20 + 3,auStack_68);
  FUN_00091648(param_2,auStack_68);
  puVar2 = auStack_68;
  auStack_68[0] = param_2;
  (**(code **)(*plVar3 + 0x58))(puVar2,uVar1,&PTR_DAT_00aea260);
  _swift_release(param_2);
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 00091560; end: 00091567;  */

void FUN_00091560(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x30) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00091568; end: 0009159b;  */

void FUN_00091568(long param_1)

{
  FUN_00092370();
  FUN_00011670(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x40,7);
  return;
}



/* Entry: 0009159c; end: 000915a7;  */

void FUN_0009159c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841484);
  return;
}



/* Entry: 000915a8; end: 000915eb;  */

long FUN_000915a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 000915ec; end: 000915ef;  */

void FUN_000915ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000915f0; end: 0009162f;  */

void FUN_000915f0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_007d44b8;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 00091630; end: 00091647;  */

undefined8 * FUN_00091630(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 00091648; end: 000916b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00091648(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64848);
  *(undefined8 *)(unaff_x20 + _DAT_00aea1d0) = param_1;
  FUN_00091630(param_2,unaff_x20 + _DAT_00aea1d8);
  return unaff_x20;
}



/* Entry: 000916b8; end: 00091857;  */

/* WARNING: Removing unreachable block (ram,0x000917ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000916b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  
  lVar8 = *unaff_x20;
  lVar5 = *(long *)(lVar8 + 0x50);
  lVar3 = 0;
  __sSqMa(0,lVar5);
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lStack_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  lVar4 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)unaff_x20 + _DAT_00aea1d8;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  FUN_0001393c(lVar3,uVar1);
  (**(code **)(lVar2 + 8))
            (lVar7,lVar5,param_1,param_2,lVar5,*(undefined8 *)(lVar8 + 0x58),uVar1,lVar2);
  (**(code **)(lVar4 + 0x10))(puVar6,lVar7,lVar5);
  (**(code **)(lVar4 + 0x38))(puVar6,0,1,lVar5);
  FUN_000a08b0(puVar6);
  (**(code **)(lStack_78 + 8))(puVar6,lStack_70);
  (**(code **)(lVar4 + 8))(lVar7,lVar5);
  return;
}



/* Entry: 00091858; end: 000918df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091858(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 000918e0; end: 00091903;  */

void FUN_000918e0(void)

{
  func_0x00091880();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00091904; end: 0009194f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091904(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64848;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x0009194c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00091950; end: 00091997;  */

void FUN_00091950(undefined8 *param_1)

{
  FUN_000916b8(*param_1,param_1[1]);
  return;
}



/* Entry: 00091998; end: 000919b7;  */

void FUN_00091998(void)

{
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj();
  return;
}



/* Entry: 000919b8; end: 000919bb;  */

void FUN_000919b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 000919bc; end: 00091a3f;  */

void FUN_000919bc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_28 = &UNK_007d4528;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 00091a40; end: 00091a4b;  */

void FUN_00091a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008414fc);
  return;
}



/* Entry: 00091a4c; end: 00091aa3;  */

void FUN_00091a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  FUN_00092368(param_2);
  return;
}



/* Entry: 00091aa4; end: 00091b87;  */

undefined1  [16] FUN_00091aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x20;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_000921b0(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_000a0834(param_2,param_3);
  lVar7 = unaff_x20[4];
  lVar4 = unaff_x20[3];
  _swift_unknownObjectRetain(lVar4);
  FUN_00091cb4(lVar7,param_2,lVar4);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar2 = &DAT_007d4660;
  uStack_58 = param_2;
  _swift_getWitnessTable(&DAT_007d4660,uVar1);
  puVar3 = &uStack_58;
  (*pcVar5)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = puVar3;
  return auVar8;
}



/* Entry: 00091b88; end: 00091b8f;  */

void FUN_00091b88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_0099bb78)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00091b90; end: 00091bc3;  */

void FUN_00091b90(long param_1)

{
  FUN_00092370();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x28,7);
  return;
}



/* Entry: 00091bc4; end: 00091bd3;  */

void FUN_00091bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_00841578);
  return;
}



/* Entry: 00091bd4; end: 00091c1f;  */

void FUN_00091bd4(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_0099ae80 + 0x40;
  puStack_20 = &UNK_007d45c8;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 00091c20; end: 00091c23;  */

void FUN_00091c20(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_0099b930)();
  return;
}



/* Entry: 00091c24; end: 00091cb3;  */

void FUN_00091c24(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_0099ae88 + 0x40;
    puStack_28 = PTR___sBi64_WV_0099ae80 + 0x40;
    puStack_30 = &UNK_007d4620;
    _swift_initClassMetadata2(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 00091cb4; end: 00091d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00091cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_00b64850);
  *(undefined8 *)(unaff_x20 + _DAT_00aea308) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00aea318) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00aea310) = param_3;
  return unaff_x20;
}



/* Entry: 00091d34; end: 00092103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091d34(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  long extraout_x12;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar6 = *unaff_x20;
  lVar1 = 0;
  uStack_b8 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_c8 = *(long *)(lVar1 + -8);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar11 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_d0 = lVar11;
  __s8Dispatch0A3QoSVMa();
  lStack_e0 = *(long *)(lVar1 + -8);
  lStack_d8 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(lVar6 + 0x50);
  lVar12 = *(long *)(lVar14 + -8);
  lVar15 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar11 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar6 - extraout_x12;
  dVar16 = *(double *)((long)unaff_x20 + _DAT_00aea318);
  uVar7 = *(undefined8 *)((long)unaff_x20 + _DAT_00aea310);
  if (dVar16 <= 0.0) {
    (**(code **)(lVar12 + 0x10))(lVar10,uStack_b8,lVar14);
    uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_009a56f8;
    _swift_allocObject(&UNK_009a56f8,uVar8 + lVar15,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = lVar14;
    *(long **)(puVar3 + 0x18) = unaff_x20;
    (**(code **)(lVar12 + 0x20))(puVar3 + uVar8,lVar10,lVar14);
    pcStack_88 = (code *)0x9231c;
    puStack_a8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_0001d1e4;
    puStack_90 = &UNK_009a5710;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    __Block_copy(ppuVar4);
    puVar3 = puStack_80;
    _swift_retain();
    _swift_release(puVar3);
    FUN_00620e88(uVar7,ppuVar4);
    __Block_release(ppuVar4);
  }
  else {
    lStack_100 = lVar11;
    lStack_e8 = lVar1;
    _swift_getObjectType();
    FUN_000a4eac();
    uStack_f8 = uVar7;
    __s8Dispatch0A4TimeV3nowACyFZ(lVar6);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar13,dVar16,lVar6);
    pcStack_f0 = *(code **)(lVar9 + 8);
    (*pcStack_f0)(lVar6,lVar1);
    (**(code **)(lVar12 + 0x10))(lVar10,uStack_b8,lVar14);
    uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_009a5748;
    _swift_allocObject(&UNK_009a5748,uVar8 + lVar15,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = lVar14;
    *(long **)(puVar3 + 0x18) = unaff_x20;
    (**(code **)(lVar12 + 0x20))(puVar3 + uVar8,lVar10,lVar14);
    pcStack_88 = FUN_000922c8;
    puStack_a8 = PTR___NSConcreteStackBlock_00999f30;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)0x563e4;
    puStack_90 = &UNK_009a5760;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    __Block_copy(ppuVar4);
    _swift_retain();
    lVar1 = lStack_100;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_100);
    puStack_b0 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00088e34();
    uVar7 = 0xae97a8;
    func_0x000115a8(0xae97a8,&UNK_007d4680);
    uVar2 = uVar7;
    func_0x00088e78();
    lVar6 = lStack_c0;
    lVar11 = lStack_d0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lStack_d0,&puStack_b0,uVar7,uVar2,lStack_c0,unaff_x20);
    uVar7 = uStack_f8;
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar13,lVar1,lVar11,ppuVar4);
    __Block_release(ppuVar4);
    _objc_release(uVar7);
    (**(code **)(lStack_c8 + 8))(lVar11,lVar6);
    (**(code **)(lStack_e0 + 8))(lVar1,lStack_d8);
    (*pcStack_f0)(lVar13,lStack_e8);
    _swift_release(puStack_80);
  }
  return;
}



/* Entry: 00092104; end: 0009218b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092104(void)

{
  FUN_000a08f8();
  return;
}



/* Entry: 0009218c; end: 000921af;  */

void FUN_0009218c(void)

{
  func_0x0009212c();
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000921b0; end: 000921bb;  */

void FUN_000921b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008415e4);
  return;
}



/* Entry: 000921bc; end: 00092207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000921bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_00b64850;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00092204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 00092208; end: 00092247;  */

void FUN_00092208(void)

{
  FUN_00091d34();
  return;
}



/* Entry: 00092248; end: 00092267;  */

void FUN_00092248(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00092268; end: 000922c7;  */

void FUN_00092268(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000922c8; end: 000922cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000922c8(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_000a08b0(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_00aea308),
               unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 000922cc; end: 0009230f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000922cc(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_000a08b0(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_00aea308),
               unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 00092310; end: 00092323;  */

void FUN_00092310(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 00092324; end: 00092367;  */

void FUN_00092324(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_0099ae88 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x98);
  return;
}



/* Entry: 00092368; end: 0009236f;  */

void FUN_00092368(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 00092370; end: 0009239b;  */

long FUN_00092370(long param_1)

{
  func_0x0009ea4c();
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 0009239c; end: 000923a3;  */

void FUN_0009239c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 000923a4; end: 000923d7;  */

void FUN_000923a4(long param_1)

{
  func_0x0009ea4c();
  _swift_release(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)(param_1,0x18,7);
  return;
}


