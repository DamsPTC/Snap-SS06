/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b7ada4; end: 101b7ae93;  */

int FUN_101b7ada4(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 101b7ae94; end: 101b7af0b;  */

void FUN_101b7ae94(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b7b340;
  plVar5[2] = lVar1;
  plVar5[3] = lVar2;
  func_0x000107c5faec(uVar3);
  plVar5[4] = lVar6;
  plVar4 = (long *)0x50;
  func_0x000107c61174(lVar2);
  func_0x000107c615b8();
  plVar5[5] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101b79424;
                    /* WARNING: Could not recover jumptable at 0x000101b79420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101b7aa28(uVar3,lVar6);
  return;
}



/* Entry: 101b7af0c; end: 101b7af83;  */

void FUN_101b7af0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b7b338;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101b7af84; end: 101b7b007;  */

void FUN_101b7af84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b7b33c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101b7b008; end: 101b7b03b;  */

void FUN_101b7b008(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b7b03c; end: 101b7b0b3;  */

void FUN_101b7b03c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101b7b0b4;
  plVar5[2] = lVar1;
  plVar5[3] = lVar2;
  func_0x000107c5fc54(lVar3,PTR___sSSN_11034da80);
  plVar5[4] = lVar3;
  plVar4 = (long *)0x90;
  func_0x000107c61174(lVar2);
  func_0x000107c615b8();
  plVar5[5] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101b790f0;
                    /* WARNING: Could not recover jumptable at 0x000101b790ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101b7a7ec(lVar3);
  return;
}



/* Entry: 101b7b0b4; end: 101b7b0ef;  */

void FUN_101b7b0b4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b7b0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b7b0f0; end: 101b7b167;  */

void FUN_101b7b0f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b7b344;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101b7b168; end: 101b7b193;  */

void FUN_101b7b168(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b7b194; end: 101b7b217;  */

void FUN_101b7b194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101b7b348;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101b7b218; end: 101b7b243;  */

void FUN_101b7b218(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b7b244; end: 101b7b25f;  */

void FUN_101b7b244(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b796fc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101b7b260; end: 101b7b267;  */

void FUN_101b7b260(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101b7b268; end: 101b7b32b;  */

void FUN_101b7b268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e060a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cd888;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e060a8 = puVar1;
  return;
}



/* Entry: 101b7b32c; end: 101b7b34b;  */

undefined8 * FUN_101b7b32c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101b7b34c; end: 101b7b393;  */

void FUN_101b7b34c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x0001002b6bc4(0);
  func_0x000107c610f8();
  func_0x000103b4a6a4(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 101b7b394; end: 101b7b3bb;  */

void FUN_101b7b394(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x0001002b6bc4(0);
  func_0x000107c610f8();
  func_0x000103b4a6a4(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101b7b3bc; end: 101b7b703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7b3bc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar2 = uStack_58;
  func_0x000107c4c43c(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&uStack_60);
  uVar3 = uStack_60;
  func_0x000107c421c8(uStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  func_0x000107c4d58c(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  lVar5 = lStack_70;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_70);
  if (lVar5 != 0) {
    func_0x000100083b20(&uStack_78);
    uVar6 = uStack_78;
    func_0x000107c5d9d8(uStack_78);
    func_0x000107c61180();
    func_0x000107c61170(uStack_78);
    func_0x000100083b20(&lStack_80);
    uVar7 = *(undefined8 *)(lStack_80 + _DAT_11302eac8);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lStack_80);
    puVar8 = PTR_PTR_1126a8b60;
    func_0x000107c610f8();
    func_0x000107c475ec();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7b578);
  (*pcVar1)();
}



/* Entry: 101b7b704; end: 101b7b79b;  */

void FUN_101b7b704(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lStack_40 = 0;
    func_0x000107c5fe0c(param_1,&lStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (lStack_40 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      *(long *)(param_2 + 0x28) = lStack_40;
      func_0x000107c61574(param_2);
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 101b7b79c; end: 101b7c677;  */

/* WARNING: Removing unreachable block (ram,0x000101b7c66c) */

undefined8 ****** FUN_101b7b79c(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  code *pcVar12;
  bool bVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *******pppppppuVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 ******ppppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 ******ppppppuVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  undefined8 *****pppppuVar34;
  undefined8 *******pppppppuVar35;
  long unaff_x20;
  ulong uVar36;
  long lVar37;
  undefined8 *****pppppuVar38;
  ulong *puVar39;
  undefined8 ******ppppppuVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 ******ppppppuVar43;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f0;
  undefined8 ******ppppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_78;
  ulong uStack_70;
  
  uVar14 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar14 == 0) {
    return (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar15 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar15 == (undefined *)0x0) {
LAB_101b7b890:
    func_0x000107c615e8(uVar14);
    return (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar16 = puVar15;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c615e8(puVar15);
  if (puVar16 == (undefined *)0x0) goto LAB_101b7b890;
  uVar17 = uVar14;
  func_0x000107c3db3c();
  func_0x000107c61180();
  uVar18 = uVar17;
  func_0x000107c5fe10();
  func_0x000107c61170(uVar17);
  puVar15 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (*(undefined **)(unaff_x20 + 0x28) != (undefined *)0x0) {
    puVar15 = *(undefined **)(unaff_x20 + 0x28);
  }
  func_0x000107c61434();
  puVar19 = puVar16;
  func_0x000107c5e2b0();
  func_0x000107c61180();
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar19 != (undefined *)0x0) {
    puVar20 = puVar19;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar19);
  }
  puVar19 = puVar20;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar20);
  puVar20 = puVar16;
  func_0x000107c3ea84();
  func_0x000107c61180();
  puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar20 != (undefined *)0x0) {
    puVar28 = puVar20;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar20);
  }
  puVar20 = puVar28;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar28);
  uVar17 = uVar14;
  func_0x000107c3e884();
  func_0x000107c61180();
  uVar41 = uVar17;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar17);
  uVar17 = uVar14;
  func_0x000107c4fa08(uVar14);
  func_0x000107c61180();
  uVar42 = uVar17;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar17);
  uStack_70 = uVar41;
  func_0x00010109a32c(uVar42);
  puVar28 = puVar16;
  func_0x000107c5aa6c();
  uVar17 = uStack_70;
  if (puVar28 == (undefined *)0x3) {
    puVar39 = (ulong *)(uStack_70 + 0x10);
    uVar41 = *puVar39;
    if (uVar41 == 0) {
      uVar41 = 0;
      uVar42 = 0;
    }
    else {
      uVar42 = 0;
      lVar37 = uStack_70 + 0x20;
      do {
        if (*(long *)(puVar20 + 0x10) != 0) {
          puVar1 = (ulong *)(lVar37 + uVar42 * 0x10);
          uVar31 = *puVar1;
          uVar32 = puVar1[1];
          func_0x000107c6068c(&ppppppuStack_c0,*(undefined8 *)(puVar20 + 0x28));
          func_0x000107c61434(uVar32);
          pppppppuVar22 = &ppppppuStack_c0;
          func_0x000107c5fb58(pppppppuVar22,uVar31,uVar32);
          func_0x000107c606a8();
          uVar30 = -1L << ((ulong)(byte)puVar20[0x20] & 0x3f);
          uVar36 = (ulong)pppppppuVar22 & (uVar30 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar20 + (uVar36 >> 6) * 8 + 0x38) >> (uVar36 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar20 + 0x30) + uVar36 * 0x10);
              uVar23 = *puVar1;
              uVar6 = puVar1[1];
              if ((uVar23 == uVar31 && uVar6 == uVar32) ||
                 (func_0x000107c605b8(uVar23,uVar6,uVar31,uVar32,0), (uVar23 & 1) != 0)) {
                func_0x000107c6142c(uVar32);
                uVar31 = *puVar39;
                uVar41 = uVar42;
                goto LAB_101b7baf0;
              }
              uVar36 = uVar36 + 1 & ~uVar30;
            } while ((*(ulong *)(puVar20 + (uVar36 >> 6) * 8 + 0x38) >> (uVar36 & 0x3f) & 1) != 0);
          }
          func_0x000107c6142c(uVar32);
        }
        uVar42 = uVar42 + 1;
      } while (uVar42 != uVar41);
      uVar41 = *puVar39;
      uVar42 = uVar41;
    }
    goto LAB_101b7bc98;
  }
  if (puVar28 == (undefined *)0x2) {
    puVar28 = puVar16;
    func_0x000107c5e2b0();
    func_0x000107c61180();
    puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar28 != (undefined *)0x0) {
      puVar21 = puVar28;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar28);
    }
    func_0x00010109a32c(puVar21);
  }
  goto LAB_101b7bcfc;
LAB_101b7baf0:
  uVar41 = uVar41 + 1;
  if (uVar41 == uVar31) goto LAB_101b7bc68;
  if (uVar31 <= uVar41) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c62c);
    (*pcVar12)();
  }
  puVar1 = (ulong *)(uVar17 + 0x20 + uVar41 * 0x10);
  if (*(long *)(puVar20 + 0x10) != 0) {
    uVar31 = *puVar1;
    uVar32 = puVar1[1];
    func_0x000107c6068c(&ppppppuStack_c0,*(undefined8 *)(puVar20 + 0x28));
    func_0x000107c61434(uVar32);
    pppppppuVar22 = &ppppppuStack_c0;
    func_0x000107c5fb58(pppppppuVar22,uVar31,uVar32);
    func_0x000107c606a8();
    uVar30 = -1L << ((ulong)(byte)puVar20[0x20] & 0x3f);
    uVar36 = (ulong)pppppppuVar22 & (uVar30 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar20 + (uVar36 >> 6) * 8 + 0x38) >> (uVar36 & 0x3f) & 1) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(puVar20 + 0x30) + uVar36 * 0x10);
        uVar23 = *puVar2;
        uVar6 = puVar2[1];
        if ((uVar23 == uVar31 && uVar6 == uVar32) ||
           (func_0x000107c605b8(uVar23,uVar6,uVar31,uVar32,0), (uVar23 & 1) != 0)) {
          func_0x000107c6142c(uVar32);
          goto LAB_101b7bae4;
        }
        uVar36 = uVar36 + 1 & ~uVar30;
      } while ((*(ulong *)(puVar20 + (uVar36 >> 6) * 8 + 0x38) >> (uVar36 & 0x3f) & 1) != 0);
    }
    func_0x000107c6142c(uVar32);
  }
  if (uVar42 != uVar41) {
    if ((long)uVar42 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c638);
      (*pcVar12)();
    }
    if (*puVar39 <= uVar42) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c63c);
      (*pcVar12)();
    }
    if ((long)*puVar39 <= (long)uVar41) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c640);
      (*pcVar12)();
    }
    puVar3 = (undefined8 *)(uVar17 + 0x20 + uVar42 * 0x10);
    uVar27 = *puVar3;
    uVar7 = puVar3[1];
    uVar31 = *puVar1;
    uVar32 = puVar1[1];
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar32);
    uVar30 = uVar17;
    func_0x000107c61558();
    if ((uVar30 & 1) == 0) {
      func_0x0001014c4f24();
    }
    puVar39 = (ulong *)(uVar17 + 0x20 + uVar42 * 0x10);
    uVar30 = puVar39[1];
    *puVar39 = uVar31;
    puVar39[1] = uVar32;
    func_0x000107c6142c(uVar30);
    if (*(long *)(uVar17 + 0x10) <= (long)uVar41) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c644);
      (*pcVar12)();
    }
    puVar3 = (undefined8 *)(uVar17 + 0x20 + uVar41 * 0x10);
    uVar24 = puVar3[1];
    *puVar3 = uVar27;
    puVar3[1] = uVar7;
    func_0x000107c6142c(uVar24);
  }
  bVar13 = SCARRY8(uVar42,1);
  uVar42 = uVar42 + 1;
  if (bVar13) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c630);
    (*pcVar12)();
  }
LAB_101b7bae4:
  puVar39 = (ulong *)(uVar17 + 0x10);
  uVar31 = *puVar39;
  goto LAB_101b7baf0;
  while (uVar32 = uVar32 + 1 & ~uVar31,
        (*(ulong *)(puVar15 + (uVar32 >> 6) * 8 + 0x38) >> (uVar32 & 0x3f) & 1) != 0) {
LAB_101b7be64:
    puVar39 = (ulong *)(*(long *)(puVar15 + 0x30) + uVar32 * 0x10);
    pppppuVar34 = (undefined8 *****)*puVar39;
    pppppuVar9 = (undefined8 *****)puVar39[1];
    if ((pppppuVar34 == pppppuVar38 && pppppuVar9 == pppppuVar8) ||
       (func_0x000107c605b8(pppppuVar34,pppppuVar9,pppppuVar38,pppppuVar8,0),
       ((ulong)pppppuVar34 & 1) != 0)) goto LAB_101b7bd44;
  }
LAB_101b7bea8:
  func_0x000107c61434(pppppuVar8);
  pppppppuVar22 = &ppppppuStack_c0;
  func_0x000100403b00(pppppppuVar22,pppppuVar38,pppppuVar8);
  func_0x000107c6142c(uStack_b8);
  if (((ulong)pppppppuVar22 & 1) != 0) {
    puVar28 = puVar16;
    func_0x000107c443c8();
    if (((ulong)puVar28 & 1) != 0) goto LAB_101b7bee0;
    puVar28 = puVar16;
    func_0x000107c5aa6c();
    if (puVar28 == (undefined *)0x1) {
LAB_101b7bf84:
      ppppppuVar25 = (undefined8 ******)pppppuStack_100;
      func_0x000107c61558();
      if (((ulong)ppppppuVar25 & 1) == 0) {
        ppppppuVar25 = (undefined8 ******)0x0;
        func_0x000101b7d470(0,(long)pppppuStack_100[2] + 1,1,pppppuStack_100,
                            PTR__swift_bridgeObjectRelease_11034f258);
        pppppuStack_100 = ppppppuVar25;
      }
      pppppuVar9 = (undefined8 *****)pppppuStack_100[2];
      pppppuVar34 = (undefined8 *****)((long)pppppuVar9 + 1);
      if ((undefined8 *****)((ulong)pppppuStack_100[3] >> 1) <= pppppuVar9) {
        ppppppuVar25 = (undefined8 ******)(ulong)((undefined8 *****)0x1 < pppppuStack_100[3]);
        func_0x000101b7d470(ppppppuVar25,pppppuVar34,1,pppppuStack_100,
                            PTR__swift_bridgeObjectRelease_11034f258);
        pppppuStack_100 = ppppppuVar25;
      }
      pppppuStack_100[2] = pppppuVar34;
      pppppuStack_100[(long)pppppuVar9 * 2 + 4] = pppppuVar38;
      pppppuStack_100[(long)pppppuVar9 * 2 + 5] = pppppuVar8;
      lVar33 = *(long *)(puStack_f0 + 0x10);
      if (SCARRY8((long)pppppuVar34,lVar33)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c650);
        (*pcVar12)();
      }
      if (param_1 < (long)pppppuVar34 + lVar33) {
        if (lVar33 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c65c);
          (*pcVar12)();
        }
        puVar28 = puStack_f0;
        func_0x000107c61558();
        if (((ulong)puVar28 & 1) == 0) {
          func_0x0001014c4f24();
        }
        if (*(long *)(puStack_f0 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c660);
          (*pcVar12)();
        }
        lVar33 = *(long *)(puStack_f0 + 0x10) + -1;
        uVar27 = *(undefined8 *)(puStack_f0 + lVar33 * 0x10 + 0x28);
        *(long *)(puStack_f0 + 0x10) = lVar33;
        func_0x000107c6142c(uVar27);
        pppppuVar34 = (undefined8 *****)pppppuStack_100[2];
      }
      if (param_1 <= (long)pppppuVar34) goto LAB_101b7c0dc;
      goto LAB_101b7bd50;
    }
    if (puVar28 == (undefined *)0x2) {
      pppppuVar34 = pppppuVar38;
      func_0x0001000f66f0(pppppuVar38,pppppuVar8,puVar19);
      if (((ulong)pppppuVar34 & 1) != 0) goto LAB_101b7bf84;
    }
    else if ((puVar28 == (undefined *)0x3) &&
            (pppppuVar34 = pppppuVar38, func_0x0001000f66f0(pppppuVar38,pppppuVar8,puVar20),
            ((ulong)pppppuVar34 & 1) == 0)) goto LAB_101b7bf84;
LAB_101b7bee0:
    lVar33 = *(long *)(puStack_f0 + 0x10);
    if (SCARRY8((long)pppppuStack_100[2],lVar33)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c634);
      (*pcVar12)();
    }
    if ((long)pppppuStack_100[2] + lVar33 < param_1) {
      puVar28 = puStack_f0;
      func_0x000107c61558();
      if (((ulong)puVar28 & 1) == 0) {
        puVar28 = (undefined *)0x0;
        func_0x000101b7d470(0,lVar33 + 1,1,puStack_f0,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_f0 = puVar28;
      }
      uVar31 = *(ulong *)(puStack_f0 + 0x10);
      if (*(ulong *)(puStack_f0 + 0x18) >> 1 <= uVar31) {
        puVar28 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f0 + 0x18));
        func_0x000101b7d470(puVar28,uVar31 + 1,1,puStack_f0,PTR__swift_bridgeObjectRelease_11034f258
                           );
        puStack_f0 = puVar28;
      }
      *(ulong *)(puStack_f0 + 0x10) = uVar31 + 1;
      *(undefined8 ******)(puStack_f0 + uVar31 * 0x10 + 0x20) = pppppuVar38;
      *(undefined8 ******)(puStack_f0 + uVar31 * 0x10 + 0x28) = pppppuVar8;
      goto LAB_101b7bd50;
    }
  }
LAB_101b7bd44:
  func_0x000107c6142c(pppppuVar8);
LAB_101b7bd50:
  uVar42 = uVar42 + 1;
  if (uVar42 == uVar41) goto LAB_101b7c0dc;
  goto LAB_101b7bd5c;
  while (uVar42 = uVar42 + 1 & ~uVar41,
        (*(ulong *)(puVar15 + (uVar42 >> 6) * 8 + 0x38) >> (uVar42 & 0x3f) & 1) != 0) {
LAB_101b7c2d4:
    plVar4 = (long *)(*(long *)(puVar15 + 0x30) + uVar42 * 0x10);
    ppppppuVar29 = (undefined8 ******)*plVar4;
    ppppppuVar11 = (undefined8 ******)plVar4[1];
    if ((ppppppuVar29 == ppppppuVar5 && ppppppuVar11 == ppppppuVar10) ||
       (func_0x000107c605b8(ppppppuVar29,ppppppuVar11,ppppppuVar5,ppppppuVar10,0),
       ((ulong)ppppppuVar29 & 1) != 0)) goto LAB_101b7c1ac;
  }
LAB_101b7c31c:
  func_0x000107c61434(ppppppuVar10);
  pppppppuVar22 = &ppppppuStack_c0;
  func_0x000100403b00(pppppppuVar22,ppppppuVar5,ppppppuVar10);
  func_0x000107c6142c(uStack_b8);
  if (((ulong)pppppppuVar22 & 1) == 0) {
LAB_101b7c1ac:
    func_0x000107c6142c(ppppppuVar10);
    goto LAB_101b7c1b8;
  }
  puVar28 = puVar16;
  func_0x000107c443c8();
  if (((ulong)puVar28 & 1) != 0) goto LAB_101b7c358;
  puVar28 = puVar16;
  func_0x000107c5aa6c();
  if (puVar28 == (undefined *)0x1) {
LAB_101b7c408:
    ppppppuVar29 = (undefined8 ******)pppppuStack_100;
    func_0x000107c61558();
    if (((ulong)ppppppuVar29 & 1) == 0) {
      ppppppuVar29 = (undefined8 ******)0x0;
      func_0x000101b7d470(0,(long)pppppuStack_100[2] + 1,1,pppppuStack_100,
                          PTR__swift_bridgeObjectRelease_11034f258);
      pppppuStack_100 = ppppppuVar29;
    }
    pppppuVar8 = (undefined8 *****)pppppuStack_100[2];
    pppppuVar38 = (undefined8 *****)((long)pppppuVar8 + 1);
    if ((undefined8 *****)((ulong)pppppuStack_100[3] >> 1) <= pppppuVar8) {
      ppppppuVar29 = (undefined8 ******)(ulong)((undefined8 *****)0x1 < pppppuStack_100[3]);
      func_0x000101b7d470(ppppppuVar29,pppppuVar38,1,pppppuStack_100,
                          PTR__swift_bridgeObjectRelease_11034f258);
      pppppuStack_100 = ppppppuVar29;
    }
    pppppuStack_100[2] = pppppuVar38;
    pppppuStack_100[(long)pppppuVar8 * 2 + 4] = ppppppuVar5;
    pppppuStack_100[(long)pppppuVar8 * 2 + 5] = ppppppuVar10;
    lVar37 = *(long *)(puStack_f0 + 0x10);
    if (SCARRY8((long)pppppuVar38,lVar37)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c664);
      (*pcVar12)();
    }
    if (param_1 < (long)pppppuVar38 + lVar37) {
      if (lVar37 == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c668);
        (*pcVar12)();
      }
      puVar28 = puStack_f0;
      func_0x000107c61558();
      if (((ulong)puVar28 & 1) == 0) {
        func_0x0001014c4f24();
      }
      if (*(long *)(puStack_f0 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c66c);
        (*pcVar12)();
      }
      lVar37 = *(long *)(puStack_f0 + 0x10) + -1;
      uVar27 = *(undefined8 *)(puStack_f0 + lVar37 * 0x10 + 0x28);
      *(long *)(puStack_f0 + 0x10) = lVar37;
      func_0x000107c6142c(uVar27);
      pppppuVar38 = (undefined8 *****)pppppuStack_100[2];
    }
    if (param_1 <= (long)pppppuVar38) goto LAB_101b7c54c;
  }
  else {
    if (puVar28 == (undefined *)0x2) {
      ppppppuVar29 = ppppppuVar5;
      func_0x0001000f66f0(ppppppuVar5,ppppppuVar10,puVar19);
      if (((ulong)ppppppuVar29 & 1) != 0) goto LAB_101b7c408;
    }
    else if ((puVar28 == (undefined *)0x3) &&
            (ppppppuVar29 = ppppppuVar5, func_0x0001000f66f0(ppppppuVar5,ppppppuVar10,puVar20),
            ((ulong)ppppppuVar29 & 1) == 0)) goto LAB_101b7c408;
LAB_101b7c358:
    lVar37 = *(long *)(puStack_f0 + 0x10);
    if (SCARRY8((long)pppppuStack_100[2],lVar37)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c64c);
      (*pcVar12)();
    }
    if ((long)pppppuStack_100[2] + lVar37 < param_1) {
      puVar28 = puStack_f0;
      func_0x000107c61558();
      if (((ulong)puVar28 & 1) == 0) {
        puVar28 = (undefined *)0x0;
        func_0x000101b7d470(0,lVar37 + 1,1,puStack_f0,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_f0 = puVar28;
      }
      uVar41 = *(ulong *)(puStack_f0 + 0x10);
      if (*(ulong *)(puStack_f0 + 0x18) >> 1 <= uVar41) {
        puVar28 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f0 + 0x18));
        func_0x000101b7d470(puVar28,uVar41 + 1,1,puStack_f0,PTR__swift_bridgeObjectRelease_11034f258
                           );
        puStack_f0 = puVar28;
      }
      *(ulong *)(puStack_f0 + 0x10) = uVar41 + 1;
      *(undefined8 *******)(puStack_f0 + uVar41 * 0x10 + 0x20) = ppppppuVar5;
      *(undefined8 *******)(puStack_f0 + uVar41 * 0x10 + 0x28) = ppppppuVar10;
    }
    else {
      func_0x000107c6142c(ppppppuVar10);
    }
  }
LAB_101b7c1b8:
  ppppppuVar43 = (undefined8 ******)((long)ppppppuVar43 + 1);
  if (ppppppuVar43 == ppppppuVar40) goto LAB_101b7c54c;
  goto LAB_101b7c1c4;
LAB_101b7c54c:
  func_0x000107c6142c(puVar19);
  func_0x000107c6142c(puVar20);
  func_0x000107c61574(ppppppuVar25);
  goto LAB_101b7c58c;
LAB_101b7bc68:
  if ((long)uVar41 < (long)uVar42) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c654);
    (*pcVar12)();
  }
  if ((long)uVar42 < 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7bc78);
    (*pcVar12)();
  }
LAB_101b7bc98:
  if (SCARRY8(uVar41,uVar42 - uVar41)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c658);
    (*pcVar12)();
  }
  uVar31 = uVar17;
  func_0x000107c61558();
  if (((int)uVar31 == 0) ||
     ((long)(*(ulong *)(uVar17 + 0x18) >> 1) < (long)(uVar41 + (uVar42 - uVar41)))) {
    uStack_70 = uVar17;
    func_0x000101b7d470();
    uVar17 = uVar31;
  }
  uStack_70 = uVar17;
  FUN_101755ed8(uVar42,uVar41,0);
  uStack_70 = uVar17;
LAB_101b7bcfc:
  uVar17 = uStack_70;
  puStack_78 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar41 = *(ulong *)(uStack_70 + 0x10);
  if (uVar41 != 0) {
    uVar42 = 0;
    lVar37 = uStack_70 + 0x20;
    pppppuStack_100 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101b7bd5c:
    if (*(ulong *)(uVar17 + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c624);
      (*pcVar12)();
    }
    if (*(long *)(uVar18 + 0x10) != 0) {
      puVar39 = (ulong *)(lVar37 + uVar42 * 0x10);
      pppppuVar38 = (undefined8 *****)*puVar39;
      pppppuVar8 = (undefined8 *****)puVar39[1];
      func_0x000107c6068c(&ppppppuStack_c0,*(undefined8 *)(uVar18 + 0x28));
      func_0x000107c61434(pppppuVar8);
      pppppppuVar22 = &ppppppuStack_c0;
      func_0x000107c5fb58(pppppppuVar22,pppppuVar38,pppppuVar8);
      func_0x000107c606a8();
      uVar31 = -1L << ((ulong)*(byte *)(uVar18 + 0x20) & 0x3f);
      uVar32 = (ulong)pppppppuVar22 & (uVar31 ^ 0xffffffffffffffff);
      if ((*(ulong *)(uVar18 + 0x38 + (uVar32 >> 6) * 8) >> (uVar32 & 0x3f) & 1) != 0) {
        do {
          puVar39 = (ulong *)(*(long *)(uVar18 + 0x30) + uVar32 * 0x10);
          pppppuVar34 = (undefined8 *****)*puVar39;
          pppppuVar9 = (undefined8 *****)puVar39[1];
          if ((pppppuVar34 == pppppuVar38 && pppppuVar9 == pppppuVar8) ||
             (func_0x000107c605b8(pppppuVar34,pppppuVar9,pppppuVar38,pppppuVar8,0),
             ((ulong)pppppuVar34 & 1) != 0)) {
            if (*(long *)(puVar15 + 0x10) == 0) goto LAB_101b7bea8;
            func_0x000107c6068c(&ppppppuStack_c0,*(undefined8 *)(puVar15 + 0x28));
            pppppppuVar22 = &ppppppuStack_c0;
            func_0x000107c5fb58(pppppppuVar22,pppppuVar38,pppppuVar8);
            func_0x000107c606a8();
            uVar31 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
            uVar32 = (ulong)pppppppuVar22 & (uVar31 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar15 + (uVar32 >> 6) * 8 + 0x38) >> (uVar32 & 0x3f) & 1) == 0)
            goto LAB_101b7bea8;
            goto LAB_101b7be64;
          }
          uVar32 = uVar32 + 1 & ~uVar31;
        } while ((*(ulong *)(uVar18 + 0x38 + (uVar32 >> 6) * 8) >> (uVar32 & 0x3f) & 1) != 0);
      }
      goto LAB_101b7bd44;
    }
    goto LAB_101b7bd50;
  }
  pppppuStack_100 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101b7c0dc:
  if (SCARRY8((long)pppppuStack_100[2],*(long *)(puStack_f0 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c648);
    (*pcVar12)();
  }
  if ((long)pppppuStack_100[2] + *(long *)(puStack_f0 + 0x10) < param_1) {
    pppppppuVar35 = *(undefined8 ********)(uVar18 + 0x10);
    pppppppuVar22 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar35 != (undefined8 *******)0x0) {
      func_0x000107c61434(uVar18);
      pppppppuVar22 = pppppppuVar35;
      func_0x00010109b448(pppppppuVar35,0);
      pppppppuVar26 = &ppppppuStack_c0;
      func_0x00010109b930(pppppppuVar26,pppppppuVar22 + 4,pppppppuVar35,uVar18);
      func_0x00010109bac0(ppppppuStack_c0,uStack_b8,uStack_b0,uStack_a8,uStack_a0);
      if (pppppppuVar26 != pppppppuVar35) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c158);
        (*pcVar12)();
      }
    }
    ppppppuStack_c0 = pppppppuVar22;
    FUN_101b7c750(&ppppppuStack_c0);
    ppppppuVar25 = ppppppuStack_c0;
    ppppppuVar40 = (undefined8 ******)ppppppuStack_c0[2];
    if (ppppppuVar40 != (undefined8 ******)0x0) {
      ppppppuVar43 = (undefined8 ******)0x0;
LAB_101b7c1c4:
      if (ppppppuVar25[2] <= ppppppuVar43) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x101b7c628);
        (*pcVar12)();
      }
      if (*(long *)(uVar18 + 0x10) != 0) {
        ppppppuVar5 = (undefined8 ******)ppppppuVar25[(long)ppppppuVar43 * 2 + 4];
        ppppppuVar10 = (undefined8 ******)(ppppppuVar25 + (long)ppppppuVar43 * 2 + 4)[1];
        func_0x000107c6068c(&ppppppuStack_c0,*(undefined8 *)(uVar18 + 0x28));
        func_0x000107c61434(ppppppuVar10);
        pppppppuVar22 = &ppppppuStack_c0;
        func_0x000107c5fb58(pppppppuVar22,ppppppuVar5,ppppppuVar10);
        func_0x000107c606a8();
        uVar41 = -1L << ((ulong)*(byte *)(uVar18 + 0x20) & 0x3f);
        uVar42 = (ulong)pppppppuVar22 & (uVar41 ^ 0xffffffffffffffff);
        if ((*(ulong *)(uVar18 + 0x38 + (uVar42 >> 6) * 8) >> (uVar42 & 0x3f) & 1) != 0) {
          do {
            plVar4 = (long *)(*(long *)(uVar18 + 0x30) + uVar42 * 0x10);
            ppppppuVar29 = (undefined8 ******)*plVar4;
            ppppppuVar11 = (undefined8 ******)plVar4[1];
            if ((ppppppuVar29 == ppppppuVar5 && ppppppuVar11 == ppppppuVar10) ||
               (func_0x000107c605b8(ppppppuVar29,ppppppuVar11,ppppppuVar5,ppppppuVar10,0),
               ((ulong)ppppppuVar29 & 1) != 0)) {
              if (*(long *)(puVar15 + 0x10) == 0) goto LAB_101b7c31c;
              func_0x000107c6068c(&ppppppuStack_c0,*(undefined8 *)(puVar15 + 0x28));
              pppppppuVar22 = &ppppppuStack_c0;
              func_0x000107c5fb58(pppppppuVar22,ppppppuVar5,ppppppuVar10);
              func_0x000107c606a8();
              uVar41 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
              uVar42 = (ulong)pppppppuVar22 & (uVar41 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar15 + (uVar42 >> 6) * 8 + 0x38) >> (uVar42 & 0x3f) & 1) == 0)
              goto LAB_101b7c31c;
              goto LAB_101b7c2d4;
            }
            uVar42 = uVar42 + 1 & ~uVar41;
          } while ((*(ulong *)(uVar18 + 0x38 + (uVar42 >> 6) * 8) >> (uVar42 & 0x3f) & 1) != 0);
        }
        goto LAB_101b7c1ac;
      }
      goto LAB_101b7c1b8;
    }
    func_0x000107c6142c(puVar19);
    func_0x000107c6142c(puVar20);
    func_0x000107c61574(ppppppuVar25);
  }
  else {
    func_0x000107c6142c(puVar19);
    func_0x000107c6142c(puVar20);
  }
LAB_101b7c58c:
  func_0x000107c6142c(uVar18);
  func_0x000107c6142c(puVar15);
  ppppppuStack_c0 = (undefined8 ******)pppppuStack_100;
  func_0x000107c61434(pppppuStack_100);
  func_0x000107c61434(puStack_f0);
  func_0x00010109a32c();
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(puVar16);
  puVar15 = puStack_78;
  func_0x000107c6142c(uVar17);
  func_0x000107c6142c(pppppuStack_100);
  func_0x000107c6142c(puStack_f0);
  func_0x000107c6142c(puVar15);
  return ppppppuStack_c0;
}



/* Entry: 101b7c678; end: 101b7c6d3;  */

void FUN_101b7c678(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b7c6d4; end: 101b7c6f3;  */

void FUN_101b7c6d4(void)

{
  FUN_101b7b79c();
  return;
}



/* Entry: 101b7c6f4; end: 101b7c74f;  */

void FUN_101b7c6f4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000103a29a98();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e06188;
  plVar5 = (long *)&UNK_10d9d97e8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101b7c750; end: 101b7c84b;  */

void FUN_101b7c750(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1016bcd1c();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,PTR___sSSN_11034da80);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_101b7c84c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_101b7cc60(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 101b7c84c; end: 101b7cc5f;  */

void FUN_101b7c84c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long unaff_x21;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar21 = param_3[1];
  if (0 < lVar21) {
    lVar12 = 0;
    do {
      lVar20 = lVar12 + 1;
      if (lVar20 < lVar21) {
        lVar17 = *param_3;
        puVar18 = (ulong *)(lVar17 + lVar20 * 0x10);
        uVar19 = *puVar18;
        puVar16 = (ulong *)(lVar17 + lVar12 * 0x10);
        if (uVar19 == *puVar16 && puVar18[1] == puVar16[1]) {
          uVar19 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar15 = lVar12 + 2;
        lVar20 = lVar15;
        if (lVar15 < lVar21) {
          puVar18 = puVar16 + 3;
          do {
            uVar14 = puVar18[1];
            if (uVar14 == puVar18[-1] && puVar18[2] == *puVar18) {
              if ((uVar19 & 1) != 0) goto LAB_101b7c944;
            }
            else {
              func_0x000107c605b8();
              lVar20 = lVar15;
              if ((((uint)uVar19 ^ (uint)uVar14) & 1) != 0) break;
            }
            lVar15 = lVar15 + 1;
            puVar18 = puVar18 + 2;
            lVar20 = lVar21;
          } while (lVar21 != lVar15);
        }
        lVar15 = lVar20;
        if ((uVar19 & 1) != 0) {
LAB_101b7c944:
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc34);
            (*pcVar6)();
          }
          lVar20 = lVar15;
          if (lVar12 < lVar15) {
            lVar11 = lVar15 << 4;
            lVar13 = lVar12 << 4;
            lVar21 = lVar12;
            do {
              lVar15 = lVar15 + -1;
              if (lVar21 != lVar15) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc54);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar17 + lVar13);
                lVar2 = lVar17 + lVar11;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar22 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar22;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar21 = lVar21 + 1;
              lVar11 = lVar11 + -0x10;
              lVar13 = lVar13 + 0x10;
            } while (lVar21 < lVar15);
          }
        }
      }
      lVar21 = param_3[1];
      lVar17 = lVar20;
      if (lVar20 < lVar21) {
        if (SBORROW8(lVar20,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc30);
          (*pcVar6)();
        }
        if (lVar20 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc38);
            (*pcVar6)();
          }
          lVar15 = lVar12 + param_4;
          if (lVar21 <= lVar12 + param_4) {
            lVar15 = lVar21;
          }
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc3c);
            (*pcVar6)();
          }
          if (lVar20 != lVar15) {
            lVar13 = *param_3;
            puVar18 = (ulong *)(lVar13 + lVar20 * 0x10);
            lVar21 = lVar12 - lVar20;
            do {
              puVar16 = (ulong *)(lVar13 + lVar20 * 0x10);
              uVar19 = *puVar16;
              uVar14 = puVar16[1];
              puVar16 = puVar18;
              lVar17 = lVar21;
              do {
                if ((uVar19 == puVar16[-2] && uVar14 == puVar16[-1]) ||
                   (func_0x000107c605b8(), (uVar19 & 1) == 0)) break;
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc40);
                  (*pcVar6)();
                }
                uVar19 = *puVar16;
                uVar14 = puVar16[1];
                puVar16[1] = puVar16[-1];
                *puVar16 = puVar16[-2];
                puVar16[-1] = uVar14;
                puVar16 = puVar16 + -2;
                *puVar16 = uVar19;
                bVar7 = lVar17 != -1;
                lVar17 = lVar17 + 1;
              } while (bVar7);
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 2;
              lVar21 = lVar21 + -1;
              lVar17 = lVar15;
            } while (lVar20 != lVar15);
          }
        }
      }
      puVar10 = puStack_58;
      if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc20);
        (*pcVar6)();
      }
      puVar8 = puStack_58;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar19 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000a91e0(puVar10,uVar19 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar19 + 1;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc58);
        (*pcVar6)();
      }
      FUN_101b7cd2c(&puStack_58,*param_1,param_3);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101b7cbf0;
      lVar21 = param_3[1];
      lVar12 = lVar17;
    } while (lVar17 < lVar21);
  }
  puVar10 = puStack_58;
  lVar21 = *param_1;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc60);
    (*pcVar6)();
  }
  puVar8 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar18 = (ulong *)(puVar10 + 0x10);
  uVar19 = *puVar18;
  while( true ) {
    if (uVar19 < 2) {
      func_0x000107c6142c(puVar10);
      return;
    }
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc5c);
      (*pcVar6)();
    }
    plVar3 = (long *)(puVar10 + uVar19 * 0x10);
    lVar20 = *plVar3;
    puVar16 = puVar18 + uVar19 * 2;
    uVar14 = puVar16[1];
    FUN_101b7cf94(lVar12 + lVar20 * 0x10,lVar12 + *puVar16 * 0x10,lVar12 + uVar14 * 0x10,lVar21);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc24);
      (*pcVar6)();
    }
    if (*puVar18 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc28);
      (*pcVar6)();
    }
    *plVar3 = lVar20;
    plVar3[1] = uVar14;
    uVar14 = *puVar18;
    lVar12 = uVar14 - uVar19;
    if (uVar14 < uVar19) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7cc2c);
      (*pcVar6)();
    }
    uVar19 = uVar14 - 1;
    func_0x000107c610b8(puVar16,puVar16 + 2,lVar12 * 0x10);
    *puVar18 = uVar19;
  }
LAB_101b7cbf0:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 101b7cc60; end: 101b7cd2b;  */

void FUN_101b7cc60(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (ulong *)(lVar5 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      puVar8 = (ulong *)(lVar5 + param_3 * 0x10);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      lVar7 = param_1;
      puVar8 = puVar6;
      do {
        if ((uVar3 == puVar8[-2] && uVar4 == puVar8[-1]) ||
           (func_0x000107c605b8(), (uVar3 & 1) == 0)) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7cd2c);
          (*pcVar1)();
        }
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        puVar8[1] = puVar8[-1];
        *puVar8 = puVar8[-2];
        puVar8[-1] = uVar4;
        puVar8 = puVar8 + -2;
        *puVar8 = uVar3;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101b7cd2c; end: 101b7cf93;  */

undefined8 FUN_101b7cd2c(ulong *param_1,undefined8 param_2,long *param_3)

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
          goto LAB_101b7ce00;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf7c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101b7ce64:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf6c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf74);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf54);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf58);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf60);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf68);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101b7ce00:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf5c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf64);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf70);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf78);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101b7ce64;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf80);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf48);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf94);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101b7cf94(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf4c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b7cf50);
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



/* Entry: 101b7cf94; end: 101b7d1cf;  */

undefined8 FUN_101b7cf94(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar1 = lVar8 + 0xf;
  if (-1 < lVar8) {
    lVar1 = lVar8;
  }
  lVar1 = lVar1 >> 4;
  lVar10 = (long)param_3 - (long)param_2;
  lVar3 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 4;
  if (lVar1 < lVar3) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 << 4);
    }
    puVar7 = param_4 + lVar1 * 2;
    puVar4 = param_1;
    if (0xf < lVar8) {
      do {
        if (param_3 <= param_2) break;
        uVar11 = *param_2;
        if ((uVar11 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar11 & 1) == 0)) {
          puVar5 = param_4 + 2;
          puVar6 = param_4;
        }
        else {
          puVar5 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar5;
        if (puVar4 != puVar6) {
          uVar11 = *puVar6;
          puVar4[1] = puVar6[1];
          *puVar4 = uVar11;
        }
        puVar4 = puVar4 + 2;
      } while (param_4 < puVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar3 * 2 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar3 << 4);
    }
    puVar6 = param_4 + lVar3 * 2;
    puVar4 = param_2;
    puVar7 = puVar6;
    if ((param_1 < param_2) && (0xf < lVar10)) {
      do {
        puVar9 = param_2 + -2;
        puVar5 = param_3;
        while( true ) {
          param_3 = puVar5 + -2;
          puVar7 = puVar6 + -2;
          uVar11 = *puVar7;
          if ((uVar11 != param_2[-2] || puVar6[-1] != param_2[-1]) &&
             (func_0x000107c605b8(), (uVar11 & 1) != 0)) break;
          if (puVar5 != puVar6) {
            uVar11 = *puVar7;
            puVar5[-1] = puVar6[-1];
            *param_3 = uVar11;
          }
          puVar4 = param_2;
          puVar6 = puVar7;
          puVar5 = param_3;
          if (puVar7 <= param_4) goto LAB_101b7d174;
        }
        if (puVar5 != param_2) {
          uVar11 = *puVar9;
          puVar5[-1] = param_2[-1];
          *param_3 = uVar11;
        }
        puVar4 = puVar9;
        puVar7 = puVar6;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar6));
    }
  }
LAB_101b7d174:
  uVar2 = (long)puVar7 - (long)param_4;
  uVar11 = uVar2 + 0xf;
  if (-1 < (long)uVar2) {
    uVar11 = uVar2;
  }
  if ((puVar4 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xfffffffffffffff0)) <= puVar4)) {
    func_0x000107c610b8(puVar4,param_4,((long)uVar11 >> 4) << 4);
  }
  return 1;
}



/* Entry: 101b7d1d0; end: 101b7d2f7;  */

ulong FUN_101b7d1d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7d2f8);
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
  FUN_101b7d2f8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7d2f4);
      (*pcVar1)();
    }
    FUN_101b7d378(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101b7d2f8; end: 101b7d377;  */

undefined * FUN_101b7d2f8(undefined *param_1,undefined *param_2)

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
    FUN_101b7c6f4();
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



/* Entry: 101b7d378; end: 101b7d583;  */

long FUN_101b7d378(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b7d46c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b7d470);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103a29a98(0);
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
      func_0x000103a29a98(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b7d468);
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



/* Entry: 101b7d584; end: 101b7d5a7;  */

void FUN_101b7d584(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lStack_40 = 0;
    func_0x000107c5fe0c(param_1,&lStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (lStack_40 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      *(long *)(lVar1 + 0x28) = lStack_40;
      func_0x000107c61574(lVar1);
      func_0x000107c6142c(uVar2);
    }
  }
  return;
}



/* Entry: 101b7d5a8; end: 101b7d63f;  */

void FUN_101b7d5a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lStack_40 = 0;
    func_0x000107c5fe0c(param_1,&lStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (lStack_40 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      *(long *)(param_2 + 0x48) = lStack_40;
      func_0x000107c61574(param_2);
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 101b7d640; end: 101b7e923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b7d640(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *****pppppuVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined *puVar18;
  undefined8 *****pppppuVar19;
  undefined8 *****pppppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ******ppppppuVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined8 *****pppppuVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lVar32;
  long unaff_x20;
  ulong uVar33;
  ulong uVar34;
  undefined8 ******ppppppuVar35;
  undefined8 ******ppppppuVar36;
  undefined8 *****pppppuVar37;
  long lVar38;
  ulong uVar39;
  undefined *puStack_130;
  undefined8 *****pppppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined *puStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 *****pppppuStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 ****ppppuStack_70;
  
  ppppppuVar9 = *(undefined8 *******)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppppppuVar9 != (undefined8 ******)0x0) {
    ppppppuVar10 = *(undefined8 *******)(unaff_x20 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (ppppppuVar10 != (undefined8 ******)0x0) {
      ppppppuVar11 = *(undefined8 *******)(unaff_x20 + 0x20);
      func_0x000107c4c3ac();
      func_0x000107c61180();
      ppppppuVar12 = ppppppuVar11;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(ppppppuVar11);
      if (ppppppuVar12 != (undefined8 ******)0x0) {
        ppppppuVar11 = ppppppuVar9;
        func_0x000107c4ec80();
        func_0x000107c61180();
        if (ppppppuVar11 != (undefined8 ******)0x0) {
          ppppppuVar13 = ppppppuVar11;
          func_0x000107c5e2b0();
          func_0x000107c61180();
          ppppppuVar14 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
          if (ppppppuVar13 != (undefined8 ******)0x0) {
            ppppppuVar14 = ppppppuVar13;
            func_0x000107c5fc54();
            func_0x000107c61170(ppppppuVar13);
          }
          ppppppuVar13 = ppppppuVar14;
          func_0x000100403a6c();
          func_0x000107c6142c(ppppppuVar14);
          puStack_98 = PTR___swiftEmptySetSingleton_11034f1d8;
          ppppppuVar14 = ppppppuVar12;
          func_0x000107c3db8c();
          func_0x000107c61180();
          ppppppuVar15 = (undefined8 ******)0x0;
          func_0x000101b7ea04();
          func_0x000101158e5c();
          ppppppuVar16 = ppppppuVar14;
          func_0x000107c5fe10(ppppppuVar14,ppppppuVar15);
          func_0x000107c61170(ppppppuVar14);
          ppppppuVar14 = ppppppuVar10;
          func_0x000107c3e884();
          func_0x000107c61180();
          ppppppuVar17 = ppppppuVar14;
          func_0x000107c5fc54();
          func_0x000107c61170(ppppppuVar14);
          pppppuVar27 = ppppppuVar17[2];
          puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (pppppuVar27 != (undefined8 *****)0x0) {
            pppppuVar37 = (undefined8 *****)0x0;
LAB_101b7d838:
            puVar30 = puStack_98;
            puVar31 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff8);
            puVar26 = puVar31;
            if ((undefined *)0x7fffffffffffffff < puStack_130) {
              puVar26 = puStack_130;
            }
            uVar28 = (ulong)puStack_130 >> 0x3e;
            do {
              if (ppppppuVar17[2] <= pppppuVar37) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101b7e564);
                (*pcVar8)();
              }
              pppppuVar20 = ppppppuVar17[(long)pppppuVar37 * 2 + 4];
              pppppuVar21 = (ppppppuVar17 + (long)pppppuVar37 * 2 + 4)[1];
              if (uVar28 == 0) {
                puVar18 = *(undefined **)(puVar31 + 0x10);
              }
              else {
                puVar18 = puVar26;
                func_0x000107c60480();
              }
              if (0x13 < (long)puVar18) {
                func_0x000107c6142c(puVar30);
                func_0x000107c6142c(ppppppuVar13);
                func_0x000107c6142c(ppppppuVar16);
                func_0x000107c615e8(ppppppuVar9);
                func_0x000107c615e8(ppppppuVar12);
                func_0x000107c615e8(ppppppuVar10);
                func_0x000107c61170(ppppppuVar11);
                goto LAB_101b7df80;
              }
              pppppuVar37 = (undefined8 *****)((long)pppppuVar37 + 1);
              if (ppppppuVar13[2] == (undefined8 *****)0x0) {
                func_0x000107c61434(pppppuVar21);
              }
              else {
                func_0x000107c6068c(&pppppuStack_e0,ppppppuVar13[5]);
                func_0x000107c61434(pppppuVar21);
                ppppppuVar14 = &pppppuStack_e0;
                func_0x000107c5fb58(ppppppuVar14,pppppuVar20,pppppuVar21);
                func_0x000107c606a8();
                uVar29 = -1L << ((ulong)*(byte *)(ppppppuVar13 + 4) & 0x3f);
                uVar33 = (ulong)ppppppuVar14 & (uVar29 ^ 0xffffffffffffffff);
                if (((ulong)ppppppuVar13[(uVar33 >> 6) + 7] >> (uVar33 & 0x3f) & 1) != 0) {
                  do {
                    pppppuVar19 = (undefined8 *****)ppppppuVar13[6][uVar33 * 2];
                    pppppuVar5 = (undefined8 *****)(ppppppuVar13[6] + uVar33 * 2)[1];
                    if ((pppppuVar19 == pppppuVar20 && pppppuVar5 == pppppuVar21) ||
                       (func_0x000107c605b8(pppppuVar19,pppppuVar5,pppppuVar20,pppppuVar21,0),
                       ((ulong)pppppuVar19 & 1) != 0)) goto LAB_101b7da34;
                    uVar33 = uVar33 + 1 & ~uVar29;
                  } while (((ulong)ppppppuVar13[(uVar33 >> 6) + 7] >> (uVar33 & 0x3f) & 1) != 0);
                }
              }
              func_0x000101b7e56c(pppppuVar20,pppppuVar21,2,ppppppuVar16);
              func_0x000107c6142c(pppppuVar21);
              lVar38 = _DAT_112fcd0e8;
              if (pppppuVar20 != (undefined8 *****)0x0) {
                if (*(long *)(puVar30 + 0x10) == 0) goto LAB_101b7da70;
                puVar1 = (ulong *)(*(long *)((long)pppppuVar20 + _DAT_112fcd0e8) + _DAT_112fcd610);
                uVar29 = *puVar1;
                pppppuVar21 = (undefined8 *****)puVar1[1];
                func_0x000107c6068c(&pppppuStack_e0,*(undefined8 *)(puVar30 + 0x28));
                func_0x000107c61434(pppppuVar21);
                ppppppuVar14 = &pppppuStack_e0;
                func_0x000107c5fb58(ppppppuVar14,uVar29,pppppuVar21);
                func_0x000107c606a8();
                uVar33 = -1L << ((ulong)(byte)puVar30[0x20] & 0x3f);
                uVar34 = (ulong)ppppppuVar14 & (uVar33 ^ 0xffffffffffffffff);
                if ((*(ulong *)(puVar30 + (uVar34 >> 6) * 8 + 0x38) >> (uVar34 & 0x3f) & 1) == 0)
                goto LAB_101b7da64;
                while( true ) {
                  puVar1 = (ulong *)(*(long *)(puVar30 + 0x30) + uVar34 * 0x10);
                  uVar39 = *puVar1;
                  pppppuVar19 = (undefined8 *****)puVar1[1];
                  if ((uVar39 == uVar29 && pppppuVar19 == pppppuVar21) ||
                     (func_0x000107c605b8(uVar39,pppppuVar19,uVar29,pppppuVar21,0),
                     (uVar39 & 1) != 0)) break;
                  uVar34 = uVar34 + 1 & ~uVar33;
                  if ((*(ulong *)(puVar30 + (uVar34 >> 6) * 8 + 0x38) >> (uVar34 & 0x3f) & 1) == 0)
                  goto LAB_101b7da64;
                }
                func_0x000107c61170(pppppuVar20);
LAB_101b7da34:
                func_0x000107c6142c(pppppuVar21);
              }
              if (pppppuVar37 == pppppuVar27) break;
            } while( true );
          }
LAB_101b7dbc0:
          func_0x000107c6142c(ppppppuVar17);
          ppppppuVar22 = ppppppuVar10;
          func_0x000107c4fa08();
          func_0x000107c61180();
          ppppppuVar17 = ppppppuVar22;
          ppppppuVar14 = (undefined8 ******)PTR___sSSN_11034da80;
          func_0x000107c5fc54();
          func_0x000107c61170(ppppppuVar22);
          pppppuVar27 = ppppppuVar17[2];
          if (pppppuVar27 == (undefined8 *****)0x0) {
LAB_101b7df90:
            func_0x000107c6142c(ppppppuVar17);
            if (((ulong)ppppppuVar16 & 0xc000000000000001) == 0) {
              uVar33 = -1L << ((ulong)*(byte *)(ppppppuVar16 + 4) & 0x3f);
              ppppppuVar17 = ppppppuVar16 + 7;
              uVar29 = ~uVar33;
              uVar33 = -uVar33;
              uVar28 = 0xffffffffffffffff;
              if (uVar33 < 0x40) {
                uVar28 = ~(-1L << (uVar33 & 0x3f));
              }
              pppppuVar27 = (undefined8 *****)(uVar28 & (ulong)*ppppppuVar17);
              ppppppuVar22 = ppppppuVar16;
              func_0x000107c61434();
              lVar38 = 0;
              ppppppuVar35 = ppppppuVar16;
            }
            else {
              ppppppuVar22 = (undefined8 ******)((ulong)ppppppuVar16 & 0xffffffffffffff8);
              if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar16) {
                ppppppuVar22 = ppppppuVar16;
              }
              func_0x000107c61434(ppppppuVar16);
              func_0x000107c60288();
              ppppppuVar14 = ppppppuVar15;
              func_0x000107c5fe30(&pppppuStack_90);
              uVar29 = uStack_80;
              ppppppuVar17 = (undefined8 ******)pppppuStack_88;
              pppppuVar27 = (undefined8 *****)ppppuStack_70;
              ppppppuVar35 = (undefined8 ******)pppppuStack_90;
              lVar38 = lStack_78;
            }
LAB_101b7e044:
            puVar30 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff8);
            puVar26 = puVar30;
            if ((undefined *)0x7fffffffffffffff < puStack_130) {
              puVar26 = puStack_130;
            }
            uVar28 = (ulong)puStack_130 >> 0x3e;
            lVar7 = lVar38;
            pppppuVar37 = pppppuVar27;
            if ((long)ppppppuVar35 < 0) goto LAB_101b7e0c4;
joined_r0x000101b7e074:
            do {
              if (pppppuVar27 != (undefined8 *****)0x0) {
                uVar33 = ((ulong)pppppuVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         ((ulong)pppppuVar27 & 0x5555555555555555) << 1;
                uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
                pppppuVar27 = (undefined8 *****)((long)pppppuVar27 - 1U & (ulong)pppppuVar27);
                ppppppuVar36 = (undefined8 ******)
                               ppppppuVar35[6]
                               [LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) + lVar7 * 0x40];
                func_0x000107c61174(ppppppuVar36);
                lVar32 = lVar38;
                if (ppppppuVar36 != (undefined8 ******)0x0) {
                  do {
                    lVar38 = lVar7;
                    if (uVar28 == 0) {
                      puVar31 = *(undefined **)(puVar30 + 0x10);
                      ppppppuVar22 = ppppppuVar14;
                    }
                    else {
                      puVar31 = puVar26;
                      func_0x000107c60480();
                      ppppppuVar22 = ppppppuVar14;
                    }
                    if (0x13 < (long)puVar31) {
                      FUN_101b7ea48(ppppppuVar35,ppppppuVar17,uVar29,lVar32,pppppuVar37);
                      func_0x000107c6142c(ppppppuVar13);
                      func_0x000107c6142c(ppppppuVar16);
                      func_0x000107c615e8(ppppppuVar9);
                      func_0x000107c615e8(ppppppuVar12);
                      func_0x000107c615e8(ppppppuVar10);
                      func_0x000107c61170(ppppppuVar36);
                      goto LAB_101b7e4f4;
                    }
                    ppppppuVar14 = ppppppuVar36;
                    func_0x000107c5d984();
                    func_0x000107c61180();
                    ppppppuVar23 = ppppppuVar14;
                    func_0x000107c5faec();
                    ppppppuVar24 = ppppppuVar22;
                    func_0x000107c61170(ppppppuVar14);
                    if (ppppppuVar13[2] != (undefined8 *****)0x0) {
                      func_0x000107c6068c(&pppppuStack_e0,ppppppuVar13[5]);
                      ppppppuVar14 = &pppppuStack_e0;
                      ppppppuVar24 = ppppppuVar23;
                      func_0x000107c5fb58(ppppppuVar14,ppppppuVar23,ppppppuVar22);
                      func_0x000107c606a8();
                      uVar33 = -1L << ((ulong)*(byte *)(ppppppuVar13 + 4) & 0x3f);
                      uVar34 = (ulong)ppppppuVar14 & (uVar33 ^ 0xffffffffffffffff);
                      if (((ulong)ppppppuVar13[(uVar34 >> 6) + 7] >> (uVar34 & 0x3f) & 1) != 0) {
                        do {
                          ppppppuVar24 = (undefined8 ******)ppppppuVar13[6][uVar34 * 2];
                          ppppppuVar14 = (undefined8 ******)(ppppppuVar13[6] + uVar34 * 2)[1];
                          if ((ppppppuVar24 == ppppppuVar23 && ppppppuVar14 == ppppppuVar22) ||
                             (func_0x000107c605b8(ppppppuVar24,ppppppuVar14,ppppppuVar23,
                                                  ppppppuVar22,0), ((ulong)ppppppuVar24 & 1) != 0))
                          {
                            func_0x000107c61170(ppppppuVar36);
                            func_0x000107c6142c();
                            goto LAB_101b7e374;
                          }
                          uVar34 = uVar34 + 1 & ~uVar33;
                          ppppppuVar24 = ppppppuVar14;
                        } while (((ulong)ppppppuVar13[(uVar34 >> 6) + 7] >> (uVar34 & 0x3f) & 1) !=
                                 0);
                      }
                    }
                    func_0x000107c6142c(ppppppuVar22);
                    ppppppuVar14 = ppppppuVar36;
                    func_0x000107c5d984();
                    func_0x000107c61180();
                    ppppppuVar22 = ppppppuVar14;
                    func_0x000107c5faec();
                    func_0x000107c61170(ppppppuVar14);
                    ppppppuVar14 = ppppppuVar24;
                    func_0x000101b7e56c(ppppppuVar22,ppppppuVar24,0,ppppppuVar16);
                    func_0x000107c6142c(ppppppuVar24);
                    puVar31 = puStack_98;
                    lVar7 = _DAT_112fcd0e8;
                    if (ppppppuVar22 != (undefined8 ******)0x0) {
                      if (*(long *)(puStack_98 + 0x10) != 0) {
                        puVar1 = (ulong *)(*(long *)((long)ppppppuVar22 + _DAT_112fcd0e8) +
                                          _DAT_112fcd610);
                        uVar33 = *puVar1;
                        ppppppuVar23 = (undefined8 ******)puVar1[1];
                        func_0x000107c6068c(&pppppuStack_e0,*(undefined8 *)(puStack_98 + 0x28));
                        func_0x000107c61434(ppppppuVar23);
                        ppppppuVar14 = &pppppuStack_e0;
                        func_0x000107c5fb58(ppppppuVar14,uVar33,ppppppuVar23);
                        func_0x000107c606a8();
                        uVar34 = -1L << ((ulong)(byte)puVar31[0x20] & 0x3f);
                        uVar39 = (ulong)ppppppuVar14 & (uVar34 ^ 0xffffffffffffffff);
                        if ((*(ulong *)(puVar31 + (uVar39 >> 6) * 8 + 0x38) >> (uVar39 & 0x3f) & 1)
                            != 0) {
                          while( true ) {
                            puVar1 = (ulong *)(*(long *)(puVar31 + 0x30) + uVar39 * 0x10);
                            uVar25 = *puVar1;
                            ppppppuVar14 = (undefined8 ******)puVar1[1];
                            if ((uVar25 == uVar33 && ppppppuVar14 == ppppppuVar23) ||
                               (func_0x000107c605b8(uVar25,ppppppuVar14,uVar33,ppppppuVar23,0),
                               (uVar25 & 1) != 0)) break;
                            uVar39 = uVar39 + 1 & ~uVar34;
                            if ((*(ulong *)(puVar31 + (uVar39 >> 6) * 8 + 0x38) >> (uVar39 & 0x3f) &
                                1) == 0) goto LAB_101b7e39c;
                          }
                          func_0x000107c61170(ppppppuVar22);
                          func_0x000107c6142c(ppppppuVar23);
                          func_0x000107c61170();
                          ppppppuVar22 = ppppppuVar36;
                          goto LAB_101b7e374;
                        }
LAB_101b7e39c:
                        func_0x000107c6142c(ppppppuVar23);
                      }
                      ppppppuVar23 = ppppppuVar22;
                      func_0x000107c61174();
                      puVar31 = puStack_130;
                      func_0x000107c61550();
                      if ((uVar28 != 0) || (puVar18 = puStack_130, ((ulong)puVar31 & 1) == 0)) {
                        if (uVar28 == 0) {
                          puVar26 = *(undefined **)(puVar30 + 0x10);
                        }
                        else {
                          func_0x000107c60480(puVar26);
                        }
                        puVar18 = (undefined *)0x0;
                        FUN_101b7d1d0(0,puVar26 + 1,1,puStack_130);
                        puVar30 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
                      }
                      uVar28 = *(ulong *)(puVar30 + 0x10);
                      puStack_130 = puVar18;
                      if (*(ulong *)(puVar30 + 0x18) >> 1 <= uVar28) {
                        puStack_130 = (undefined *)(ulong)(1 < *(ulong *)(puVar30 + 0x18));
                        FUN_101b7d1d0(puStack_130,uVar28 + 1,1,puVar18);
                        puVar30 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff8);
                      }
                      *(ulong *)(puVar30 + 0x10) = uVar28 + 1;
                      *(undefined8 *******)(puVar30 + uVar28 * 8 + 0x20) = ppppppuVar23;
                      plVar3 = (long *)(*(long *)((long)ppppppuVar22 + lVar7) + _DAT_112fcd610);
                      ppppppuVar14 = (undefined8 ******)*plVar3;
                      lVar7 = plVar3[1];
                      func_0x000107c61434(lVar7);
                      func_0x000100403b00(&pppppuStack_e0,ppppppuVar14,lVar7);
                      func_0x000107c61170(ppppppuVar36);
                      ppppppuVar22 = (undefined8 ******)pppppuStack_d8;
                      func_0x000107c61170(ppppppuVar23);
                      func_0x000107c6142c();
                      goto LAB_101b7e044;
                    }
                    func_0x000107c61170();
                    ppppppuVar22 = ppppppuVar36;
LAB_101b7e374:
                    lVar7 = lVar38;
                    pppppuVar37 = pppppuVar27;
                    if (-1 < (long)ppppppuVar35) goto joined_r0x000101b7e074;
LAB_101b7e0c4:
                    func_0x000107c602ac();
                    pppppuVar37 = pppppuVar27;
                    if (ppppppuVar22 == (undefined8 ******)0x0) break;
                    ppppppuVar14 = &pppppuStack_e8;
                    pppppuStack_e8 = ppppppuVar22;
                    func_0x000107c6147c(&pppppuStack_e0,ppppppuVar14,PTR___syXlN_11034f1a0 + 8,
                                        ppppppuVar15,7);
                    lVar32 = lVar38;
                    ppppppuVar36 = (undefined8 ******)pppppuStack_e0;
                    lVar7 = lVar38;
                    if ((undefined8 ******)pppppuStack_e0 == (undefined8 ******)0x0) break;
                  } while( true );
                }
LAB_101b7e4b4:
                FUN_101b7ea48(ppppppuVar35,ppppppuVar17,uVar29,lVar38,pppppuVar37);
                func_0x000107c6142c(ppppppuVar13);
                func_0x000107c6142c(ppppppuVar16);
                func_0x000107c615e8(ppppppuVar9);
                func_0x000107c615e8(ppppppuVar12);
                func_0x000107c615e8(ppppppuVar10);
LAB_101b7e4f4:
                func_0x000107c61170(ppppppuVar11);
                func_0x000107c6142c(puStack_98);
                return puStack_130;
              }
              lVar32 = lVar7 + 1;
              if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101b7e568);
                (*pcVar8)();
              }
              if ((long)(uVar29 + 0x40 >> 6) <= lVar32) {
                pppppuVar37 = (undefined8 *****)0x0;
                goto LAB_101b7e4b4;
              }
              pppppuVar27 = ppppppuVar17[lVar32];
              lVar7 = lVar32;
            } while( true );
          }
          pppppuVar37 = (undefined8 *****)0x0;
LAB_101b7dc10:
          puVar30 = puStack_98;
          puVar31 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff8);
          puVar26 = puVar31;
          if ((undefined *)0x7fffffffffffffff < puStack_130) {
            puVar26 = puStack_130;
          }
          uVar28 = (ulong)puStack_130 >> 0x3e;
          do {
            if (ppppppuVar17[2] <= pppppuVar37) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101b7e56c);
              (*pcVar8)();
            }
            pppppuVar20 = ppppppuVar17[(long)pppppuVar37 * 2 + 4];
            ppppppuVar22 = (undefined8 ******)(ppppppuVar17 + (long)pppppuVar37 * 2 + 4)[1];
            if (uVar28 == 0) {
              puVar18 = *(undefined **)(puVar31 + 0x10);
            }
            else {
              puVar18 = puVar26;
              func_0x000107c60480();
            }
            if (0x13 < (long)puVar18) {
              func_0x000107c6142c(puVar30);
              func_0x000107c6142c(ppppppuVar13);
              func_0x000107c6142c(ppppppuVar16);
              func_0x000107c615e8(ppppppuVar9);
              func_0x000107c615e8(ppppppuVar12);
              func_0x000107c615e8(ppppppuVar10);
              func_0x000107c61170(ppppppuVar11);
LAB_101b7df80:
              func_0x000107c6142c(ppppppuVar17);
              return puStack_130;
            }
            pppppuVar37 = (undefined8 *****)((long)pppppuVar37 + 1);
            if (ppppppuVar13[2] == (undefined8 *****)0x0) {
              func_0x000107c61434(ppppppuVar22);
            }
            else {
              func_0x000107c6068c(&pppppuStack_e0,ppppppuVar13[5]);
              func_0x000107c61434(ppppppuVar22);
              ppppppuVar14 = &pppppuStack_e0;
              func_0x000107c5fb58(ppppppuVar14,pppppuVar20,ppppppuVar22);
              func_0x000107c606a8();
              uVar29 = -1L << ((ulong)*(byte *)(ppppppuVar13 + 4) & 0x3f);
              uVar33 = (ulong)ppppppuVar14 & (uVar29 ^ 0xffffffffffffffff);
              if (((ulong)ppppppuVar13[(uVar33 >> 6) + 7] >> (uVar33 & 0x3f) & 1) != 0) {
                do {
                  pppppuVar21 = (undefined8 *****)ppppppuVar13[6][uVar33 * 2];
                  ppppppuVar14 = (undefined8 ******)(ppppppuVar13[6] + uVar33 * 2)[1];
                  if ((pppppuVar21 == pppppuVar20 && ppppppuVar14 == ppppppuVar22) ||
                     (func_0x000107c605b8(pppppuVar21,ppppppuVar14,pppppuVar20,ppppppuVar22,0),
                     ((ulong)pppppuVar21 & 1) != 0)) goto LAB_101b7de0c;
                  uVar33 = uVar33 + 1 & ~uVar29;
                } while (((ulong)ppppppuVar13[(uVar33 >> 6) + 7] >> (uVar33 & 0x3f) & 1) != 0);
              }
            }
            ppppppuVar14 = ppppppuVar22;
            func_0x000101b7e56c(pppppuVar20,ppppppuVar22,1,ppppppuVar16);
            func_0x000107c6142c(ppppppuVar22);
            lVar38 = _DAT_112fcd0e8;
            if (pppppuVar20 != (undefined8 *****)0x0) {
              if (*(long *)(puVar30 + 0x10) == 0) goto LAB_101b7de48;
              puVar1 = (ulong *)(*(long *)((long)pppppuVar20 + _DAT_112fcd0e8) + _DAT_112fcd610);
              uVar29 = *puVar1;
              ppppppuVar22 = (undefined8 ******)puVar1[1];
              func_0x000107c6068c(&pppppuStack_e0,*(undefined8 *)(puVar30 + 0x28));
              func_0x000107c61434(ppppppuVar22);
              ppppppuVar14 = &pppppuStack_e0;
              func_0x000107c5fb58(ppppppuVar14,uVar29,ppppppuVar22);
              func_0x000107c606a8();
              uVar33 = -1L << ((ulong)(byte)puVar30[0x20] & 0x3f);
              uVar34 = (ulong)ppppppuVar14 & (uVar33 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar30 + (uVar34 >> 6) * 8 + 0x38) >> (uVar34 & 0x3f) & 1) == 0)
              goto LAB_101b7de3c;
              while( true ) {
                puVar1 = (ulong *)(*(long *)(puVar30 + 0x30) + uVar34 * 0x10);
                uVar39 = *puVar1;
                ppppppuVar14 = (undefined8 ******)puVar1[1];
                if ((uVar39 == uVar29 && ppppppuVar14 == ppppppuVar22) ||
                   (func_0x000107c605b8(uVar39,ppppppuVar14,uVar29,ppppppuVar22,0),
                   (uVar39 & 1) != 0)) break;
                uVar34 = uVar34 + 1 & ~uVar33;
                if ((*(ulong *)(puVar30 + (uVar34 >> 6) * 8 + 0x38) >> (uVar34 & 0x3f) & 1) == 0)
                goto LAB_101b7de3c;
              }
              func_0x000107c61170(pppppuVar20);
LAB_101b7de0c:
              func_0x000107c6142c(ppppppuVar22);
            }
            if (pppppuVar37 == pppppuVar27) goto LAB_101b7df90;
          } while( true );
        }
        func_0x000107c615e8(ppppppuVar9);
        ppppppuVar9 = ppppppuVar12;
      }
      func_0x000107c615e8(ppppppuVar9);
      ppppppuVar9 = ppppppuVar10;
    }
    func_0x000107c615e8(ppppppuVar9);
  }
  return PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101b7da64:
  func_0x000107c6142c(pppppuVar21);
LAB_101b7da70:
  pppppuVar21 = pppppuVar20;
  func_0x000107c61174();
  puVar30 = puStack_130;
  func_0x000107c61550();
  if ((uVar28 != 0) || (puVar18 = puStack_130, ((ulong)puVar30 & 1) == 0)) {
    if (uVar28 == 0) {
      puVar26 = *(undefined **)(puVar31 + 0x10);
    }
    else {
      func_0x000107c60480(puVar26);
    }
    puVar18 = (undefined *)0x0;
    FUN_101b7d1d0(0,puVar26 + 1,1,puStack_130);
    puVar31 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
  }
  uVar28 = *(ulong *)(puVar31 + 0x10);
  puStack_130 = puVar18;
  if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar28) {
    puStack_130 = (undefined *)(ulong)(1 < *(ulong *)(puVar31 + 0x18));
    FUN_101b7d1d0(puStack_130,uVar28 + 1,1,puVar18);
    puVar31 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff8);
  }
  *(ulong *)(puVar31 + 0x10) = uVar28 + 1;
  *(undefined8 ******)(puVar31 + uVar28 * 8 + 0x20) = pppppuVar21;
  puVar2 = (undefined8 *)(*(long *)((long)pppppuVar20 + lVar38) + _DAT_112fcd610);
  uVar4 = *puVar2;
  uVar6 = puVar2[1];
  func_0x000107c61434(uVar6);
  func_0x000100403b00(&pppppuStack_e0,uVar4,uVar6);
  pppppuVar20 = pppppuStack_d8;
  func_0x000107c61170(pppppuVar21);
  func_0x000107c6142c(pppppuVar20);
  if (pppppuVar37 == pppppuVar27) goto LAB_101b7dbc0;
  goto LAB_101b7d838;
LAB_101b7de3c:
  func_0x000107c6142c(ppppppuVar22);
LAB_101b7de48:
  pppppuVar21 = pppppuVar20;
  func_0x000107c61174();
  puVar30 = puStack_130;
  func_0x000107c61550();
  if ((uVar28 != 0) || (puVar18 = puStack_130, ((ulong)puVar30 & 1) == 0)) {
    if (uVar28 == 0) {
      puVar26 = *(undefined **)(puVar31 + 0x10);
    }
    else {
      func_0x000107c60480(puVar26);
    }
    puVar18 = (undefined *)0x0;
    FUN_101b7d1d0(0,puVar26 + 1,1,puStack_130);
    puVar31 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
  }
  uVar28 = *(ulong *)(puVar31 + 0x10);
  puStack_130 = puVar18;
  if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar28) {
    puStack_130 = (undefined *)(ulong)(1 < *(ulong *)(puVar31 + 0x18));
    FUN_101b7d1d0(puStack_130,uVar28 + 1,1,puVar18);
    puVar31 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff8);
  }
  *(ulong *)(puVar31 + 0x10) = uVar28 + 1;
  *(undefined8 ******)(puVar31 + uVar28 * 8 + 0x20) = pppppuVar21;
  plVar3 = (long *)(*(long *)((long)pppppuVar20 + lVar38) + _DAT_112fcd610);
  ppppppuVar14 = (undefined8 ******)*plVar3;
  lVar38 = plVar3[1];
  func_0x000107c61434(lVar38);
  func_0x000100403b00(&pppppuStack_e0,ppppppuVar14,lVar38);
  pppppuVar20 = pppppuStack_d8;
  func_0x000107c61170(pppppuVar21);
  func_0x000107c6142c(pppppuVar20);
  if (pppppuVar37 == pppppuVar27) goto LAB_101b7df90;
  goto LAB_101b7dc10;
}



/* Entry: 101b7e924; end: 101b7e977; -[_TtC35MapQuickShareServicesImplementation21MapQuickShareProvider quickShareInfoList] */

void FUN_101b7e924(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101b7d640();
  func_0x000107c61574(param_1);
  uVar2 = 0;
  func_0x000103a29a98(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101b7e978; end: 101b7ea47;  */

void FUN_101b7e978(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101b7ea48; end: 101b7ea4f;  */

void FUN_101b7ea48(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101b7ea50; end: 101b7ea97;  */

void FUN_101b7ea50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x0001002d1db8(0);
  func_0x000107c610f8();
  func_0x000103a297a4(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 101b7ea98; end: 101b7ea9f;  */

void FUN_101b7ea98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x0001002d1db8(0);
  func_0x000107c610f8();
  func_0x000103a297a4(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101b7eaa0; end: 101b7ed7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7eaa0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar2 = *(undefined8 *)(lStack_70 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&lStack_80);
  lVar3 = *(long *)(lStack_80 + _DAT_112fcd348);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&lStack_88);
  uVar4 = *(undefined8 *)(lStack_88 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  uVar5 = uVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  lVar6 = 0;
  func_0x000101b7e9e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(undefined8 *)(lVar6 + 0x20) = uStack_78;
  *(long *)(lVar6 + 0x28) = lVar3;
  *(undefined8 *)(lVar6 + 0x30) = uVar4;
  *(undefined8 *)(lVar6 + 0x38) = param_3;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c453e4();
  *(undefined **)(lVar6 + 0x40) = puVar7;
  lVar8 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar9 = lVar8;
    func_0x000107c4d30c();
    func_0x000107c61180();
    puVar7 = &UNK_11044e150;
    func_0x000107c613fc(&UNK_11044e150,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,lVar6);
    uStack_98 = 0x101b7eecc;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_101114e88;
    puStack_a0 = &UNK_11044e168;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_90);
    lVar11 = lVar9;
    func_0x000107c5c320(lVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar9);
    uVar4 = *(undefined8 *)(lVar6 + 0x40);
    func_0x000107c61174(uVar4);
    func_0x000107c3e924(lVar11);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar3);
  *param_1 = lVar6;
  return;
}



/* Entry: 101b7ed7c; end: 101b7ed8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7ed7c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar7,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = uStack_68;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&lStack_70);
  uVar2 = *(undefined8 *)(lStack_70 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&lStack_80);
  lVar3 = *(long *)(lStack_80 + _DAT_112fcd348);
  func_0x000107c61174();
  func_0x000107c61170(lStack_80);
  func_0x000100083b20(&lStack_88);
  uVar4 = *(undefined8 *)(lStack_88 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  uVar12 = uVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  lVar5 = 0;
  func_0x000101b7e9e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uStack_78;
  *(long *)(lVar5 + 0x28) = lVar3;
  *(undefined8 *)(lVar5 + 0x30) = uVar4;
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  uVar7 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c453e4();
  *(undefined **)(lVar5 + 0x40) = puVar6;
  lVar8 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar9 = lVar8;
    func_0x000107c4d30c();
    func_0x000107c61180();
    puVar6 = &UNK_11044e150;
    func_0x000107c613fc(&UNK_11044e150,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,lVar5);
    uStack_98 = 0x101b7eecc;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_101114e88;
    puStack_a0 = &UNK_11044e168;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_90);
    lVar11 = lVar9;
    func_0x000107c5c320(lVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar9);
    uVar12 = *(undefined8 *)(lVar5 + 0x40);
    func_0x000107c61174(uVar12);
    func_0x000107c3e924(lVar11);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar12);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar3);
  *param_1 = lVar5;
  return;
}



/* Entry: 101b7ed8c; end: 101b7ee8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7ed8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_112fcd5d8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  func_0x000100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_112fcd348);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_58);
  uVar4 = 0;
  func_0x000101b7c6b4();
  func_0x000107c613fc();
  func_0x000101b7b578(uVar1,uVar2,uVar3);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_11044e028;
  *param_1 = uVar1;
  return;
}



/* Entry: 101b7ee90; end: 101b7eeef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7ee90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = uStack_48;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar2 = *(undefined8 *)(lStack_50 + _DAT_112fcd5d8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_50);
  func_0x000100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_112fcd348);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_58);
  uVar4 = 0;
  func_0x000101b7c6b4();
  func_0x000107c613fc();
  func_0x000101b7b578(uVar1,uVar2,uVar3);
  param_1[3] = uVar4;
  param_1[4] = &PTR_DAT_11044e028;
  *param_1 = uVar1;
  return;
}



/* Entry: 101b7eef0; end: 101b7efab;  */

/* WARNING: Possible PIC construction at 0x000101b7ef88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b7ef8c) */

void FUN_101b7eef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11044e268;
  func_0x000107c613fc(&UNK_11044e268,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e06280;
  func_0x0001000285a8(0x112e06280,&UNK_10d9d9990);
  func_0x000107c613fc();
  pcVar4 = FUN_101b7eff0;
  func_0x0001000841fc(FUN_101b7eff0,puVar2,uVar3);
  func_0x000100084214(&UNK_10d9d9950,0x38,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101b7efac; end: 101b7efbb;  */

undefined1  [16] FUN_101b7efac(void)

{
  return ZEXT816(0x11044e248);
}



/* Entry: 101b7efbc; end: 101b7efef;  */

void FUN_101b7efbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b7eff0; end: 101b7f093;  */

void FUN_101b7eff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *param_2;
  func_0x0001000285a8(0x112e06288,&UNK_10d9d9998);
  puVar2 = &uStack_48;
  uStack_48 = uVar5;
  func_0x0001000838ec(puVar2);
  FUN_101b7f27c(uVar3,uVar1,puVar2,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000100082720("MapStateComplianceTakeoverPresenterEntryPointProvider",0x35,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101b7f094; end: 101b7f0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7f094(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b7f25c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e06298) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b7f100; end: 101b7f107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7f100(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b7f25c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e06298) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 101b7f108; end: 101b7f153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7f108(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e06298) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b7f154; end: 101b7f1db; -[_TtC42SCMapStateComplianceTakeoverImplementation33MapStateComplianceTakeoverBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7f154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 101b7f1dc; end: 101b7f23b; -[_TtC42SCMapStateComplianceTakeoverImplementation33MapStateComplianceTakeoverBuilder init] */

void FUN_101b7f1dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapStateComplianceTakeoverImplementation.MapStateComplianceTakeoverBuilder"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7f208);
  (*pcVar1)();
}



/* Entry: 101b7f23c; end: 101b7f25b; -[_TtC42SCMapStateComplianceTakeoverImplementation33MapStateComplianceTakeoverBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7f23c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e06298));
  return;
}



/* Entry: 101b7f25c; end: 101b7f27b;  */

void FUN_101b7f25c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb0f0);
  return;
}



/* Entry: 101b7f27c; end: 101b7f3bf;  */

void FUN_101b7f27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e062c8,&UNK_10d9d9a50);
  puVar1 = &UNK_11044e330;
  func_0x000107c613fc(&UNK_11044e330,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_101b7f3c0,puVar1);
  return;
}



/* Entry: 101b7f3c0; end: 101b7f3cb;  */

void FUN_101b7f3c0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_101b7f93c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x28) = uStack_60;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 101b7f3cc; end: 101b7f41f;  */

void FUN_101b7f3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 101b7f420; end: 101b7f5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7f420(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f001050);
    uVar9 = 0xd000000000000064;
    uVar6 = 0x800000010f001080;
    func_0x000107c5fadc(0xd000000000000064);
    lVar10 = lVar2;
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar9);
    lVar4 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
    FUN_101b813e0(0);
    lVar2 = _DAT_112fccf80;
    lVar10 = *(long *)(unaff_x20 + 0x10);
    puVar7 = auStack_78;
    func_0x000107c61428(lVar10 + _DAT_112fccf80,puVar7,0,0);
    uVar11 = *(undefined8 *)(lVar10 + lVar2);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c615f0(uVar11);
    func_0x000107c5dbd4(uVar12);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c61174(uVar5);
    uVar9 = uVar5;
    FUN_101b7fc5c();
    uVar3 = uVar9;
    puVar8 = puVar7;
    func_0x000101b7fd28();
    func_0x000107c615f0();
    func_0x000101b80284(uVar11,uVar12,uVar5,uVar9,puVar7,uVar3,puVar8,lVar4,uVar6);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = uVar11;
    func_0x000107c61170(uVar9);
    lVar2 = *(long *)(unaff_x20 + 0x30);
    if (lVar2 != 0) {
      func_0x000107c61174();
      FUN_101b805c8();
      func_0x000107c61170(lVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7f5ec);
  (*pcVar1)();
}



/* Entry: 101b7f5ec; end: 101b7f613; -[_TtC42SCMapStateComplianceTakeoverImplementation35MapStateComplianceTakeoverPresenter present] */

void FUN_101b7f5ec(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_101b7f420();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101b7f614; end: 101b7f67f;  */

void FUN_101b7f614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7f680,uVar1,uVar2);
  return;
}



/* Entry: 101b7f680; end: 101b7f6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7f680(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar1 = _DAT_112fccf88;
  lVar2 = *(long *)(lVar2 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112fccf88,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4c480();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101b7f6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2 == 0);
  return;
}



/* Entry: 101b7f700; end: 101b7f743;  */

void FUN_101b7f700(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101b7f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101b7f744; end: 101b7f787;  */

void FUN_101b7f744(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b7f788; end: 101b7f78b; -[_TtC42SCMapStateComplianceTakeoverImplementation35MapStateComplianceTakeoverPresenter handleTakeoverDisplayed] */

void FUN_101b7f788(void)

{
  return;
}



/* Entry: 101b7f78c; end: 101b7f7a7; -[_TtC42SCMapStateComplianceTakeoverImplementation35MapStateComplianceTakeoverPresenter handleOkButtonTapped] */

/* WARNING: Possible PIC construction at 0x000101b7f888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b7f88c) */

void FUN_101b7f78c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11044e3f0;
  func_0x000107c613fc(&UNK_11044e3f0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d9d9b18;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d9d9b20,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b7f7a8; end: 101b7f7ab; -[_TtC42SCMapStateComplianceTakeoverImplementation35MapStateComplianceTakeoverPresenter handleLearnMoreButtonTapped] */

void FUN_101b7f7a8(void)

{
  return;
}



/* Entry: 101b7f7ac; end: 101b7f7c7; -[_TtC42SCMapStateComplianceTakeoverImplementation35MapStateComplianceTakeoverPresenter handleTakeoverDismissed] */

/* WARNING: Possible PIC construction at 0x000101b7f888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b7f88c) */

void FUN_101b7f7ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11044e3c8;
  func_0x000107c613fc(&UNK_11044e3c8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d9d9b08;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d9d9b10,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b7f7c8; end: 101b7f7e3; -[_TtC42SCMapStateComplianceTakeoverImplementation35MapStateComplianceTakeoverPresenter handleTakeoverOutsideTapped] */

/* WARNING: Possible PIC construction at 0x000101b7f888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b7f88c) */

void FUN_101b7f7c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11044e3a0;
  func_0x000107c613fc(&UNK_11044e3a0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d9d9af8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d9d9b00,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b7f7e4; end: 101b7f7ff; -[_TtC42SCMapStateComplianceTakeoverImplementation35MapStateComplianceTakeoverPresenter handleLearnMoreBrowserDismissed] */

/* WARNING: Possible PIC construction at 0x000101b7f888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b7f88c) */

void FUN_101b7f7e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11044e378;
  func_0x000107c613fc(&UNK_11044e378,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d9d9ae8;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d9d9af0,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b7f800; end: 101b7f8ab;  */

/* WARNING: Possible PIC construction at 0x000101b7f888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b7f88c) */

void FUN_101b7f800(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  uVar1 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,param_5,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101b7f8ac; end: 101b7f92b;  */

void FUN_101b7f8ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b7f8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b7f92c; end: 101b7f93b;  */

undefined1  [16] FUN_101b7f92c(void)

{
  return ZEXT816(0x11044e358);
}



/* Entry: 101b7f93c; end: 101b7f9a3;  */

void FUN_101b7f93c(void)

{
  func_0x000107c61168(&PTR_PTR_112e06310);
  return;
}



/* Entry: 101b7f9a4; end: 101b7fa13;  */

void FUN_101b7f9a4(undefined8 param_1)

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
  plVar3[1] = 0x101b7fc4c;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101b7fa14; end: 101b7fa5b;  */

void FUN_101b7fa14(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b7fc40;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7f680,lVar1,lVar2);
  return;
}



/* Entry: 101b7fa5c; end: 101b7facb;  */

void FUN_101b7fa5c(undefined8 param_1)

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
  plVar3[1] = 0x101b7fc50;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101b7facc; end: 101b7fb13;  */

void FUN_101b7facc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b7fc44;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7f680,lVar1,lVar2);
  return;
}



/* Entry: 101b7fb14; end: 101b7fb83;  */

void FUN_101b7fb14(undefined8 param_1)

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
  plVar3[1] = 0x101b7fc54;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101b7fb84; end: 101b7fbcb;  */

void FUN_101b7fb84(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b7fc48;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7f680,lVar1,lVar2);
  return;
}



/* Entry: 101b7fbcc; end: 101b7fc3b;  */

void FUN_101b7fbcc(undefined8 param_1)

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
  plVar3[1] = 0x101b7fc58;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101b7fc3c; end: 101b7fc5b;  */

void FUN_101b7fc3c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b7f928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101b7fc5c; end: 101b7fe57;  */

undefined1  [16] FUN_101b7fc5c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f001130);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f001110);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7fd28);
  (*pcVar1)();
}



/* Entry: 101b7fe58; end: 101b7ffcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b7fe58(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  plVar8 = &lStack_60;
  uVar9 = *(undefined8 *)(param_1 + _DAT_112e063a8);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112e063c0);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112e063c0))[1];
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e063c8);
  uVar4 = ((undefined8 *)(param_1 + _DAT_112e063c8))[1];
  lVar5 = 0;
  FUN_101b81f1c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar7 = lVar6 + _DAT_112e06408;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  *(undefined8 *)(lVar6 + _DAT_112e06428) = 1;
  *(undefined8 *)(lVar6 + _DAT_112e06400) = uVar9;
  *(undefined ***)(lVar7 + 8) = &PTR_DAT_11044e488;
  func_0x000107c61604();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112e06410);
  *puVar1 = uVar10;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112e06418);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174();
  func_0x000107c30a3c();
  func_0x000107c61180();
  *(undefined8 *)(lVar6 + _DAT_112e06420) = uVar9;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61154(&lStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  uVar10 = *(undefined8 *)((long)plVar8 + _DAT_112e06420);
  func_0x000107c61174();
  func_0x000107c53224(uVar10);
  func_0x000107c5a048(plVar8);
  func_0x000107c5677c(plVar8);
  func_0x000107c61170(plVar8);
  return (undefined1 *)plVar8;
}



/* Entry: 101b7ffcc; end: 101b8015f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101b7ffcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112e06390;
  func_0x000107c61614(unaff_x20 + _DAT_112e06390,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e06398) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e063a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e063a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e063b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e063b8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e063c0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e063c8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e063d0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  func_0x000107c61604(unaff_x20 + lVar3,param_11);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_11);
  return puVar4;
}



/* Entry: 101b80160; end: 101b804d7; -[SCLegalComplianceTakeoverPresenter initWithUiContainer:valdiRuntimeProvider:webBrowsingScopeExposer:webBrowsingScopeServices:title:subTitle:learnMoreUrl:delegate:] */

undefined8
FUN_101b80160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_7 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_78 = param_2;
    uStack_70 = param_7;
  }
  func_0x000107c5faec(param_8);
  uVar3 = param_2;
  func_0x000107c5faec();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_10);
  uVar2 = param_3;
  FUN_101b81158(param_3,param_4,param_5,param_6,uStack_70,uStack_78,param_8,param_2,param_9,uVar3,
                param_10);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_10);
  return uVar2;
}



/* Entry: 101b804d8; end: 101b805c7; -[SCLegalComplianceTakeoverPresenter initWithUiContainer:valdiRuntimeProvider:webBrowsingScopeExposer:title:subTitle:learnMoreUrl:delegate:] */

void FUN_101b804d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_6 == 0) {
    param_6 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar2 = param_2;
  }
  func_0x000107c5faec(param_7);
  uVar1 = param_2;
  func_0x000107c5faec(param_8);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_9);
  func_0x000101b803bc(param_3,param_4,param_5,param_6,uVar2,param_7,param_2,param_8,uVar1,param_9);
  return;
}



/* Entry: 101b805c8; end: 101b80603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b805c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e063a0);
  func_0x000101b7fdf4();
  func_0x000107c3e2c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b80604; end: 101b80657; -[SCLegalComplianceTakeoverPresenter launchTakeover] */

/* WARNING: Possible PIC construction at 0x000101b80640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b80644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b80604(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e063a0);
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000101b7fdf4();
  func_0x000107c3e2c0(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b80658; end: 101b806b7; -[SCLegalComplianceTakeoverPresenter init] */

void FUN_101b80658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLegalComplianceTakeover.LegalComplianceTakeoverPresenter",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b80684);
  (*pcVar1)();
}



/* Entry: 101b806b8; end: 101b8076b; -[SCLegalComplianceTakeoverPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b806e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b80704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b806e8) */
/* WARNING: Removing unreachable block (ram,0x000101b80708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b806b8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e063a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e063a8));
  return;
}



/* Entry: 101b8076c; end: 101b80953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8076c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "handleOkButtonTapped()";
  func_0x0001000c10c0("handleOkButtonTapped()");
  func_0x000107c61180();
  puVar2 = &UNK_11044e608;
  func_0x000107c613fc(&UNK_11044e608,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  uStack_40 = 0x101b814d4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11044e620;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar4 = unaff_x20 + _DAT_112e06390;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c44618();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 101b80954; end: 101b80e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b80954(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long extraout_x8_01;
  ulong uVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar11;
  long unaff_x20;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long alStack_100 [7];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&puStack_c0 - extraout_x8;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar10 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar10 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  lVar19 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar14 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_00;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar20 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar20 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar15 - extraout_x12_03;
  func_0x000107c5edd0(lVar13,*(undefined8 *)(unaff_x20 + _DAT_112e063d0),
                      ((undefined8 *)(unaff_x20 + _DAT_112e063d0))[1]);
  func_0x000100029394(lVar13,lVar15);
  lVar1 = lVar15;
  (**(code **)(lVar11 + 0x30))(lVar15,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar13);
    lVar13 = lVar15;
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(lVar8,lVar15,lVar2);
    pcVar16 = *(code **)(lVar11 + 0x38);
    (*pcVar16)(lVar17,1,1,lVar2);
    (*pcVar16)(lVar20,1,1,lVar2);
    lVar1 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar18,1,1,lVar1);
    *(undefined1 *)(lVar13 + -8) = 0;
    *(undefined8 *)(lVar13 + -0x10) = 0;
    *(undefined8 *)(lVar13 + -0x18) = 0;
    *(undefined8 *)(lVar13 + -0x20) = 0;
    *(undefined8 *)(lVar13 + -0x28) = 0;
    *(undefined8 *)(lVar13 + -0x30) = 0;
    *(undefined8 *)(lVar13 + -0x38) = 0;
    *(long *)(lVar13 + -0x40) = lVar18;
    lStack_b8 = lVar14;
    func_0x000104638e24(lVar14,2,lVar17,0,lVar20,0,0,0,0);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puStack_c0 = puVar3;
    func_0x000107c43bf4();
    func_0x000107c61180();
    (**(code **)(lVar11 + 0x10))(lVar7,lVar8,lVar2);
    uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar21 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
    puVar4 = &UNK_11044e5b8;
    func_0x000107c613fc(&UNK_11044e5b8,uVar21 + lVar19,uVar9 | 7);
    (*pcVar12)(puVar4 + uVar21,lVar7,lVar2);
    pcStack_70 = FUN_101b81454;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100e38b5c;
    puStack_78 = &UNK_11044e5d0;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_68);
    pcVar6 = "openLearnMorePage()";
    func_0x0001000c10c0("openLearnMorePage()");
    func_0x000107c61180();
    func_0x000107c5dc68(puVar3);
    func_0x000107c615e8(pcVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar3);
    func_0x000101b7fdf4();
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000107c61170(puVar3);
    lVar7 = *(long *)(unaff_x20 + _DAT_112e063b8);
    lVar1 = lVar7;
    if (lVar7 == 0) {
      lVar1 = 0;
      func_0x0001000956f0(0);
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    lVar14 = lStack_b8;
    func_0x000100e39298(lStack_b8,lVar10);
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar7);
    func_0x000104651d90(lVar10);
    func_0x000107c61174(puVar4);
    puVar3 = puStack_c0;
    lVar7 = lVar10;
    func_0x000103c5d254(lVar10,puStack_c0,puVar4,unaff_x20,0,0,0,0);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar4);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112e063b0));
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar7);
    func_0x000100e392dc(lVar14);
    (**(code **)(lVar11 + 8))(lVar8,lVar2);
  }
  func_0x0001000293e4(lVar13);
  return;
}



/* Entry: 101b80e54; end: 101b8103b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b80e54(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "handleTakeoverDismissed()";
  func_0x0001000c10c0("handleTakeoverDismissed()");
  func_0x000107c61180();
  puVar2 = &UNK_11044e4c8;
  func_0x000107c613fc(&UNK_11044e4c8,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  uStack_40 = 0x101b814d0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11044e4e0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  lVar4 = unaff_x20 + _DAT_112e06390;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c44664();
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 101b8103c; end: 101b81113;  */

void FUN_101b8103c(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0();
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101b81114; end: 101b81157; -[SCLegalComplianceTakeoverPresenter webBrowserDidDismiss:] */

void FUN_101b81114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101b812c4();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b81158; end: 101b8129f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b81158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar3 = _DAT_112e06390;
  func_0x000107c61614(unaff_x20 + _DAT_112e06390,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e06398) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e063a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e063a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e063b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e063b8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e063c0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e063c8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e063d0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  func_0x000107c61604(unaff_x20 + lVar3,param_11);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar2);
  return;
}



/* Entry: 101b812a0; end: 101b812c3;  */

undefined8 FUN_101b812a0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101b812c4; end: 101b813df;  */

/* WARNING: Possible PIC construction at 0x000101b81380: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b812c4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e063b0);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c41864(*(undefined8 *)(unaff_x20 + _DAT_112e063a0));
    lVar1 = unaff_x20 + _DAT_112e06390;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c44600();
  }
  else {
    puVar2 = &UNK_11044e658;
    func_0x000107c613fc(&UNK_11044e658,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_101b814a0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11044e670;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c5e2a4(lVar1);
    func_0x000107c60bd0(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 101b813e0; end: 101b813ff;  */

void FUN_101b813e0(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb1b0);
  return;
}



/* Entry: 101b81400; end: 101b81433;  */

void FUN_101b81400(long param_1,long param_2)

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


