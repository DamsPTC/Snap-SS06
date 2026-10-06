/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021462e0; end: 10214636b;  */

void FUN_1021462e0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10214636c; end: 102146377;  */

void FUN_10214636c(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102146378; end: 1021463e7;  */

ulong * FUN_102146378(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2 & 0x7fffffffffffffff);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1 & 0x7fffffffffffffff);
  return param_1;
}



/* Entry: 1021463e8; end: 10214663b;  */

int FUN_1021463e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10214663c; end: 10214667b;  */

void FUN_10214663c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da61394;
  func_0x000107c61520(&UNK_10da61394,&UNK_1104d1530);
  puRam0000000112e5b5b8 = puVar1;
  return;
}



/* Entry: 10214667c; end: 10214669b;  */

void FUN_10214667c(long param_1,long param_2)

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



/* Entry: 10214669c; end: 10214673b;  */

void FUN_10214669c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10214673c; end: 10214674b;  */

void FUN_10214673c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10214674c; end: 102146797;  */

void FUN_10214674c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102146798; end: 102146883;  */

void FUN_102146798(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    FUN_102146cf0();
    puVar1 = &UNK_1104d16f8;
    func_0x000107c613f8(&UNK_1104d16f8,param_2,0,0);
    uStack_50 = 1;
    puStack_58 = puVar1;
    func_0x000100087f6c(&puStack_58);
    func_0x000107c614ac(puVar1);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    FUN_102146884(param_3,param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102146884; end: 102146c3f;  */

void FUN_102146884(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x3a);
  func_0x000107c5fb78(0xd000000000000037,0x800000010f0652a0);
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar10);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c6142c(uStack_a0);
  func_0x0001000d224c(&puStack_a8);
  puVar10 = puStack_a8;
  if (puStack_a8 == (undefined *)0x0) {
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    FUN_102146d30();
    uVar12 = *(ulong *)(param_1 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001013851d4(0,uVar12,0);
      uVar11 = 0;
      lVar13 = param_1 + 0x30;
      do {
        puVar9 = puStack_78;
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102146c40);
          (*pcVar3)();
        }
        uVar5 = *(undefined8 *)(lVar13 + -0x10);
        uVar2 = *(undefined8 *)(lVar13 + -8);
        func_0x000107c61434(uVar2);
        uVar4 = uVar5;
        func_0x000107c5fadc(uVar5,uVar2);
        func_0x000107c5fadc(uVar5,uVar2);
        puVar6 = puVar10;
        func_0x000107c45094();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        pcStack_88 = FUN_102146f44;
        uStack_80 = 0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_102146f74;
        puStack_90 = &UNK_1104d1600;
        ppuVar7 = &puStack_a8;
        func_0x000107c60bc4(ppuVar7);
        puVar8 = puVar6;
        func_0x000107c4c280();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(puVar6);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puStack_78 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          func_0x0001013851d4(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_78 + uVar1 * 8 + 0x20) = puVar8;
        lVar13 = lVar13 + 0x18;
        puVar9 = puStack_78;
      } while (uVar12 != uVar11);
    }
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    uVar5 = 0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
    puVar8 = puVar9;
    func_0x000107c5fc48(puVar9,uVar5);
    func_0x000107c6142c(puVar9);
    func_0x000107c3db10(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    pcStack_88 = (code *)0x102147744;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1011b0640;
    puStack_90 = &UNK_1104d1628;
    ppuVar7 = &puStack_a8;
    uStack_80 = param_2;
    func_0x000107c60bc4(ppuVar7);
    uVar5 = uStack_80;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar5);
    func_0x000107c5dc64(puVar6);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar6);
    func_0x0001000b6d30(0);
    puVar9 = &UNK_1104d1660;
    func_0x000107c613fc(&UNK_1104d1660,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar10;
    *(long *)(puVar9 + 0x18) = param_1;
    func_0x000107c615f0(puVar10);
    func_0x000104885df0(FUN_10214777c,puVar9);
    func_0x000107c61574(puVar9);
    func_0x000107c615e8(puVar10);
  }
  return;
}



/* Entry: 102146c40; end: 102146ce7;  */

void FUN_102146c40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1104d15c0;
  func_0x000107c613fc(&UNK_1104d15c0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1104d15e8;
  func_0x000107c613fc(&UNK_1104d15e8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x0001000285a8(0x112e5b5a0,&UNK_10da61790);
  func_0x000107c613fc();
  func_0x000107c61434(param_1);
  func_0x0001000b64ac(FUN_102146ce8,puVar2);
  return;
}



/* Entry: 102146ce8; end: 102146cef;  */

void FUN_102146ce8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    FUN_102146cf0();
    puVar3 = &UNK_1104d16f8;
    func_0x000107c613f8(&UNK_1104d16f8,lVar2,0,0);
    uStack_50 = 1;
    puStack_58 = puVar3;
    func_0x000100087f6c(&puStack_58);
    func_0x000107c614ac(puVar3);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    FUN_102146884(uVar1,param_1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102146cf0; end: 102146d2f;  */

void FUN_102146cf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6152c;
  func_0x000107c61520(&UNK_10da6152c,&UNK_1104d16f8);
  puRam0000000112e5b670 = puVar1;
  return;
}



/* Entry: 102146d30; end: 102146f43;  */

undefined * FUN_102146d30(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar4;
  if (uVar10 != 0) {
    uVar7 = 0;
    puVar8 = puVar4;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102146ef0);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar7;
        FUN_1021478f8(uVar7,param_1,&PTR_PTR_1126ccc38,0x112e55eb0);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102146eec);
        (*pcVar2)();
      }
      uVar11 = uVar7 + 1;
      uStack_70 = uVar3;
      FUN_102147180(&lStack_78,&uStack_70,&uStack_68);
      func_0x000107c61170(uVar3);
      lVar1 = lStack_78;
      uVar3 = *(ulong *)(lStack_78 + 0x10);
      lVar9 = *(long *)(puVar8 + 0x10);
      if (SCARRY8(lVar9,uVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102146ef4);
        (*pcVar2)();
      }
      puVar4 = puVar8;
      func_0x000107c61558();
      if (((int)puVar4 == 0) ||
         (uVar6 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar6 < (long)(lVar9 + uVar3))) {
        FUN_1021477a8();
        uVar6 = *(ulong *)(puVar4 + 0x18) >> 1;
        puVar8 = puVar4;
        if (*(long *)(lVar1 + 0x10) == 0) goto LAB_102146d94;
LAB_102146e64:
        lVar9 = *(long *)(puVar4 + 0x10);
        if (uVar6 - lVar9 < uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102146efc);
          (*pcVar2)();
        }
        uVar5 = 0x112e5b678;
        func_0x0001000285a8(0x112e5b678,&UNK_10da61498);
        func_0x000107c6140c(puVar4 + lVar9 * 0x18 + 0x20,lVar1 + 0x20,uVar3,uVar5);
        func_0x000107c6142c(lVar1);
        if (uVar3 != 0) {
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102146f00);
            (*pcVar2)();
          }
          *(ulong *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + uVar3;
        }
      }
      else {
        puVar4 = puVar8;
        if (*(long *)(lVar1 + 0x10) != 0) goto LAB_102146e64;
LAB_102146d94:
        func_0x000107c6142c(lVar1);
        puVar4 = puVar8;
        if (uVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102146ef8);
          (*pcVar2)();
        }
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar4;
    } while (uVar11 != uVar10);
  }
  return puVar4;
}



/* Entry: 102146f44; end: 102146f73;  */

void FUN_102146f44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 102146f74; end: 102146ff7;  */

void FUN_102146f74(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102146ff8; end: 102147063;  */

void FUN_102146ff8(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_2 == 0) {
    lStack_30 = 0;
    uStack_28 = 0;
    func_0x000100087f6c(&lStack_30);
    func_0x000100c7f554();
  }
  else {
    uStack_28 = 1;
    lStack_30 = param_2;
    func_0x000107c614b0(param_2);
    func_0x000100087f6c(&lStack_30);
    func_0x000100c7f554();
    func_0x000107c614ac(param_2);
  }
  return;
}



/* Entry: 102147064; end: 10214717f;  */

void FUN_102147064(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    func_0x000100403514(0,lVar7,0);
    puVar8 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      uVar2 = *(ulong *)(puVar6 + 0x10);
      uVar4 = *(ulong *)(puVar6 + 0x18);
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        func_0x000100403514(1 < uVar4,uVar2 + 1,1);
      }
      puVar8 = puVar8 + 3;
      *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar6 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  puVar5 = puVar6;
  func_0x000100403a6c(puVar6);
  func_0x000107c6142c(puVar6);
  puVar6 = puVar5;
  func_0x000107c5fe08(puVar5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar5);
  func_0x000107c3f4dc(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 102147180; end: 102147613;  */

void FUN_102147180(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_a0;
  long *plStack_98;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar8 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = lVar11 - extraout_x12_02;
  lVar3 = *param_2;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = lVar3;
  func_0x000107c44fb4();
  func_0x000107c61180();
  if (lVar13 != 0) {
    plStack_98 = param_3;
    func_0x000107c5edb4(lVar11);
    func_0x000107c61170(lVar13);
    lVar13 = lVar10;
    (**(code **)(lVar12 + 0x20))(lVar10,lVar11,lVar2);
    func_0x000107c5ed70();
    puVar4 = (undefined *)0x0;
    FUN_1021477a8(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8,
                  PTR__swift_bridgeObjectRelease_11034f258);
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar6 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_1021477a8(puVar6,uVar1 + 1,1,puVar4,PTR__swift_bridgeObjectRelease_11034f258);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(long *)(puVar6 + uVar1 * 0x18 + 0x20) = lVar13;
    *(long *)(puVar6 + uVar1 * 0x18 + 0x28) = lVar11;
    *(undefined8 *)(puVar6 + uVar1 * 0x18 + 0x30) = 1;
    (**(code **)(lVar12 + 8))(lVar10,lVar2);
    *param_1 = puVar6;
    param_3 = plStack_98;
  }
  lVar13 = lVar3;
  func_0x000107c5c948();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c5edb4(lVar14);
    func_0x000107c61170(lVar13);
    lVar13 = lVar9;
    (**(code **)(lVar12 + 0x20))(lVar9,lVar14,lVar2);
    func_0x000107c5ed70();
    puVar4 = puVar6;
    func_0x000107c61558();
    puVar5 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_1021477a8(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6,PTR__swift_bridgeObjectRelease_11034f258
                   );
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_1021477a8(puVar6,uVar1 + 1,1,puVar5,PTR__swift_bridgeObjectRelease_11034f258);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(long *)(puVar6 + uVar1 * 0x18 + 0x20) = lVar13;
    *(long *)(puVar6 + uVar1 * 0x18 + 0x28) = lVar14;
    *(undefined8 *)(puVar6 + uVar1 * 0x18 + 0x30) = 0;
    (**(code **)(lVar12 + 8))(lVar9,lVar2);
    *param_1 = puVar6;
  }
  if (0 < *param_3) {
    func_0x000107c3dce8();
    func_0x000107c61180();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar3 != 0) {
      lVar13 = lVar3;
      func_0x000107c4512c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar13 != 0) {
        lVar3 = lVar13;
        func_0x000107c5fc54(lVar13,lVar2);
        func_0x000107c61170(lVar13);
        lVar13 = *(long *)(lVar3 + 0x10);
        if (lVar13 == 0) {
          func_0x000107c6142c(lVar3);
        }
        else {
          plStack_98 = param_3;
          FUN_102147784(0,lVar13,0);
          lVar11 = lVar3 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
          lVar14 = *(long *)(lVar12 + 0x48);
          pcVar7 = *(code **)(lVar12 + 0x10);
          lStack_a0 = lVar3;
          do {
            lVar3 = lVar8;
            lVar9 = lVar11;
            (*pcVar7)(lVar8,lVar11,lVar2);
            func_0x000107c5ed70();
            (**(code **)(lVar12 + 8))(lVar8,lVar2);
            uVar1 = *(ulong *)(puVar6 + 0x10);
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
              FUN_102147784(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
            }
            *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
            *(long *)(puVar6 + uVar1 * 0x18 + 0x20) = lVar3;
            *(long *)(puVar6 + uVar1 * 0x18 + 0x28) = lVar9;
            *(undefined8 *)(puVar6 + uVar1 * 0x18 + 0x30) = 0;
            lVar11 = lVar11 + lVar14;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          func_0x000107c6142c(lStack_a0);
          param_3 = plStack_98;
        }
      }
    }
    func_0x000107c61434(puVar6);
    FUN_102147614();
    lVar13 = *(long *)(puVar6 + 0x10);
    func_0x000107c6142c(puVar6);
    if (SBORROW8(*param_3,(ulong)(lVar13 != 0))) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102147614);
      (*pcVar7)();
    }
    *param_3 = *param_3 - (ulong)(lVar13 != 0);
  }
  return;
}



/* Entry: 102147614; end: 102147727;  */

void FUN_102147614(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10214771c);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_1021477a8();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102147720);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102147724);
      (*pcVar1)();
    }
    uVar3 = 0x112e5b678;
    func_0x0001000285a8(0x112e5b678,&UNK_10da61498);
    func_0x000107c6140c(lVar5 + lVar7 * 0x18 + 0x20,param_1 + 0x20,uVar6,uVar3);
    func_0x000107c6142c(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102147728);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 102147728; end: 10214774b;  */

void FUN_102147728(long param_1,long param_2)

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



/* Entry: 10214774c; end: 10214777b;  */

void FUN_10214774c(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10214777c; end: 102147783;  */

void FUN_10214777c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(lVar6 + 0x10);
  if (lVar9 != 0) {
    func_0x000100403514(0,lVar9,0);
    puVar10 = (undefined8 *)(lVar6 + 0x28);
    do {
      uVar1 = puVar10[-1];
      uVar4 = *puVar10;
      uVar2 = *(ulong *)(puVar8 + 0x10);
      uVar5 = *(ulong *)(puVar8 + 0x18);
      func_0x000107c61434(uVar4);
      if (uVar5 >> 1 <= uVar2) {
        func_0x000100403514(1 < uVar5,uVar2 + 1,1);
      }
      puVar10 = puVar10 + 3;
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x28) = uVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  puVar7 = puVar8;
  func_0x000100403a6c(puVar8);
  func_0x000107c6142c(puVar8);
  puVar8 = puVar7;
  func_0x000107c5fe08(puVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar7);
  func_0x000107c3f4dc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 102147784; end: 1021477a7;  */

void FUN_102147784(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1021477a8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1021477a8; end: 1021478f7;  */

undefined *
FUN_1021477a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021478f8);
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
    puVar3 = (undefined *)0x112e5b680;
    func_0x0001000285a8(0x112e5b680,&UNK_10da614a0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e5b678;
    func_0x0001000285a8(0x112e5b678,&UNK_10da61498);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1021478f8; end: 102147ab3;  */

ulong FUN_1021478f8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021479dc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021479e0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102147ab4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102147ab4);
  (*pcVar2)();
}



/* Entry: 102147ab4; end: 102147af3;  */

void FUN_102147ab4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102147af4; end: 102147be3;  */

uint FUN_102147af4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102147be4; end: 102147c23;  */

void FUN_102147be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da61504;
  func_0x000107c61520(&UNK_10da61504,&UNK_1104d16f8);
  puRam0000000112e5b688 = puVar1;
  return;
}



/* Entry: 102147c24; end: 102147c3f;  */

void FUN_102147c24(long param_1,long param_2)

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



/* Entry: 102147c40; end: 102147ceb;  */

void FUN_102147c40(void)

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



/* Entry: 102147cec; end: 102147d0b;  */

void FUN_102147cec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102147d0c; end: 102147d6b; -[_TtC22SCLensExplorerPrefetch32LensExplorerBackgroundPrefetcher init] */

void FUN_102147d0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensExplorerPrefetch.LensExplorerBackgroundPrefetcher",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102147d38);
  (*pcVar1)();
}



/* Entry: 102147d6c; end: 102147e27; -[_TtC22SCLensExplorerPrefetch32LensExplorerBackgroundPrefetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102147d6c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b690));
  func_0x0001000834e4(param_1 + _DAT_112e5b698);
  func_0x0001000834e4(param_1 + _DAT_112e5b6a0);
  func_0x0001000834e4(param_1 + _DAT_112e5b6a8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5b6b0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5b6b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b6c0));
  func_0x0001000834e4(param_1 + _DAT_112e5b6c8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5b6d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e5b6d8 + 8))
  ;
  return;
}



/* Entry: 102147e28; end: 102147e47;  */

void FUN_102147e28(void)

{
  func_0x000107c61168(&PTR_PTR_112820710);
  return;
}



/* Entry: 102147e48; end: 102147e73; -[_TtC22SCLensExplorerPrefetch32LensExplorerBackgroundPrefetcher dataSyncerIdentifier] */

void FUN_102147e48(void)

{
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0653e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102147e74; end: 102147e7b; -[_TtC22SCLensExplorerPrefetch32LensExplorerBackgroundPrefetcher submitOnRegister] */

undefined8 FUN_102147e74(void)

{
  return 1;
}



/* Entry: 102147e7c; end: 1021481e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102147e7c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  
  lVar11 = *(long *)(unaff_x20 + _DAT_112e5b6b0);
  lVar10 = lVar11;
  func_0x000107c3e5c0();
  func_0x000107c61180();
  lVar2 = lVar10;
  func_0x000107c4ed14();
  func_0x000107c61170(lVar10);
  func_0x000107c602fc(0x35);
  func_0x000107c5fb78(0xd000000000000032,0x800000010f0653a0);
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
  func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                      PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
  func_0x000107c6142c(0xe000000000000000);
  puVar3 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b7248;
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  lVar10 = (long)(int)lVar2 * 0x3c;
  iVar9 = (int)lVar10;
  if (lVar10 - iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021481d4);
    (*pcVar1)();
  }
  if (iVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021481d8);
    (*pcVar1)();
  }
  func_0x000107c57d34();
  func_0x000107c57c1c(puVar4);
  func_0x000107c55974(puVar3);
  puVar6 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar10 = lVar11;
  func_0x000107c3e5c0();
  func_0x000107c61180();
  func_0x000107c4a748();
  func_0x000107c61170(lVar10);
  func_0x000107c56a40(puVar6);
  lVar10 = lVar11;
  func_0x000107c3e5c0(lVar11);
  func_0x000107c61180();
  func_0x000107c49b3c();
  func_0x000107c61170(lVar10);
  func_0x000107c52c2c(puVar6);
  lVar10 = lVar11;
  func_0x000107c4ed2c();
  if ((lVar10 == 3) || (lVar10 = lVar11, func_0x000107c4ed2c(), lVar10 == 1)) {
    puVar7 = puVar6;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021481dc);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar7);
  }
  lVar10 = lVar11;
  func_0x000107c4ed2c();
  if ((lVar10 == 3) || (func_0x000107c4ed2c(), lVar11 == 2)) {
    puVar7 = puVar6;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021481e0);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021481e4);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021481e8);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
    func_0x000107c61170(puVar7);
  }
  uVar8 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0653e0);
  func_0x000107c57688(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c55958(puVar3);
  func_0x000107c54734(puVar3);
  uVar8 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0653e0);
  func_0x000107c5597c(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c55968(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  return puVar3;
}



/* Entry: 1021481e8; end: 10214821b; -[_TtC22SCLensExplorerPrefetch32LensExplorerBackgroundPrefetcher jobConfig] */

void FUN_1021481e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102147e7c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10214821c; end: 102148527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214821c(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  ulong uVar11;
  
  pcVar10 = param_1;
  FUN_102148528();
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112e5b6b0);
  uVar3 = uVar11;
  func_0x000107c4ed2c();
  if ((uVar3 != 0) && (FUN_102148528(), (uVar3 & 1) != 0)) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e5b6d8);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5b6d8))[1];
    func_0x0001000a8868(unaff_x20 + _DAT_112e5b6c8,
                        *(undefined8 *)(unaff_x20 + _DAT_112e5b6c8 + 0x18));
    func_0x000107c61434(uVar1);
    uVar4 = 0;
    FUN_10214c240(0);
    FUN_1021488d8();
    puVar8 = &UNK_1104d17a8;
    puVar5 = puVar8;
    func_0x000107c613fc(&UNK_1104d17a8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    uVar6 = 0x112e5b708;
    func_0x0001000285a8(0x112e5b708,&UNK_10da615c8);
    pcVar10 = FUN_102149a00;
    func_0x00010068b194(FUN_102149a00,puVar5,uVar6);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar5);
    plVar7 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(pcVar10);
    func_0x000107c613fc(&UNK_1104d17a8,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar5 = &UNK_1104d17d0;
    func_0x000107c613fc(&UNK_1104d17d0,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    *(undefined **)(puVar5 + 0x20) = puVar8;
    *(code **)(puVar5 + 0x28) = param_1;
    *(undefined8 *)(puVar5 + 0x30) = param_2;
    pcVar10 = *(code **)(*plVar7 + 0x60);
    FUN_10212d7c8(param_1,param_2);
    uVar6 = 0x102149a08;
    puVar8 = puVar5;
    (*pcVar10)(0x102149a08);
    func_0x000107c61574(plVar7);
    func_0x000107c61574(puVar5);
    uVar9 = uVar6;
    func_0x000107c614f0(uVar6);
    (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112e5b6d0),uVar9,puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c4ed2c();
  uVar6 = 0x65736c6166;
  if (uVar11 != 0) {
    uVar6 = 0x65757274;
  }
  uVar9 = 0xe500000000000000;
  if (uVar11 != 0) {
    uVar9 = 0xe400000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar9);
  func_0x000107c6142c(uVar9);
  uVar3 = 0;
  func_0x000107c5fb78(0xd000000000000012,0x800000010f065300);
  FUN_102148528();
  bVar2 = (uVar3 & 1) == 0;
  uVar6 = 0x65757274;
  if (bVar2) {
    uVar6 = 0x65736c6166;
  }
  uVar9 = 0xe400000000000000;
  if (bVar2) {
    uVar9 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(0x800000010f0652e0);
  func_0x0001000a8868(unaff_x20 + _DAT_112e5b6c8,*(undefined8 *)(unaff_x20 + _DAT_112e5b6c8 + 0x18))
  ;
  func_0x00010214c3dc(((uint)pcVar10 ^ 0xffffffff) & 1);
  if (param_1 != (code *)0x0) {
    (*param_1)(0,0);
  }
  return;
}



/* Entry: 102148528; end: 102148667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102148528(double param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  double dStack_50;
  long lStack_48;
  
  uVar4 = 0;
  func_0x000107a8d2e4();
  if ((param_2 & 1) == 0) {
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 != 0) {
      uVar2 = 0xd000000000000037;
      func_0x000107c5fadc(0xd000000000000037,0x800000010f065360);
      lVar3 = lStack_48;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (lVar3 != 0) {
        uVar2 = 0x112d373e8;
        func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
        func_0x000107c6147c(&dStack_50,&lStack_48,uVar2,PTR___sSdN_11034dd90,6);
        if (((uVar4 & 1) != 0) && (0.0 < dStack_50)) {
          func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112e5b6b8));
          uVar4 = *(ulong *)(unaff_x20 + _DAT_112e5b6b0);
          func_0x000107c4aac4();
          func_0x000107c61170(lStack_48);
          return (param_1 - dStack_50) / 60.0 <= (double)uVar4;
        }
      }
      func_0x000107c61170(lStack_48);
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 102148668; end: 102148843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102148668(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,code *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  ulong auStack_58 [3];
  
  puVar1 = &uStack_80;
  if ((char)param_1[1] == '\x01') {
    uVar4 = *param_1;
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c5fb78(0xd000000000000016,0x800000010f065320);
    auStack_58[0] = uVar4;
    func_0x000107c603d0(auStack_58,&uStack_80,&UNK_1104d1ad8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_78);
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    puVar2 = (ulong *)0x0;
    if (param_4 != 0) {
      FUN_102149a18(param_4 + _DAT_112e5b6c8,&uStack_80);
      func_0x000107c61170(param_4);
      func_0x0001000a8868(&uStack_80,uStack_68);
      FUN_10214c500((uint)(uVar4 >> 0x3e) | 0x100);
      func_0x0001000834e4();
      puVar2 = puVar1;
    }
    if (param_5 != (code *)0x0) {
      FUN_102149a5c();
      puVar3 = &UNK_1104d1ad8;
      func_0x000107c613f8(&UNK_1104d1ad8,puVar2,0,0);
      *puVar2 = uVar4;
      func_0x000107c614b0(uVar4 & 0x3fffffffffffffff);
      (*param_5)(2,puVar3);
      func_0x000107c614ac(puVar3);
    }
  }
  else {
    func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      FUN_102149a18(param_4 + _DAT_112e5b6c8,&uStack_80);
      func_0x000107c61170(param_4);
      func_0x0001000a8868(&uStack_80,uStack_68);
      FUN_10214c500(0);
      func_0x0001000834e4(&uStack_80);
    }
    if (param_5 != (code *)0x0) {
      (*param_5)(0,0);
    }
  }
  return;
}



/* Entry: 102148844; end: 1021488cf; -[_TtC22SCLensExplorerPrefetch32LensExplorerBackgroundPrefetcher onSync:] */

void FUN_102148844(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1104d1780;
    func_0x000107c613fc(&UNK_1104d1780,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_1021488d0;
  }
  func_0x000107c61174(param_1);
  FUN_10214821c(pcVar2,puVar1);
  FUN_10212d6a4(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021488d0; end: 1021488d7;  */

void FUN_1021488d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1021488d8; end: 102148af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021488d8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  long unaff_x20;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar8 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar5 = puStack_70;
  if (puStack_70 == (undefined1 *)0x0) {
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    puVar4 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000102149a9c();
    puVar6 = &UNK_1104d1a48;
    func_0x000107c613f8(&UNK_1104d1a48,puVar5,0,0);
    *puVar5 = 1;
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar6);
    func_0x000107c42d78();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puStack_70 = puVar4;
    func_0x000100854cb0(&puStack_70);
  }
  else {
    puVar6 = PTR_PTR_1126c8b38;
    func_0x000107c61168(PTR_PTR_1126c8b38);
    func_0x000107c4039c(*(undefined8 *)(unaff_x20 + _DAT_112e5b6b0));
    func_0x000107c4b62c(puVar6);
    func_0x000107c61180();
    func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
    func_0x000107c4b5a8(puStack_70);
    puVar1 = puStack_70;
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5066c();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    pcStack_50 = FUN_102149244;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_102149378;
    puStack_58 = &UNK_1104d1928;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puVar2;
    func_0x000107c43494(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(puVar2);
    puVar4 = puVar1;
    func_0x000107c5c6c0(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    ppuVar8 = (undefined1 **)puVar4;
    func_0x0001000b637c(puVar4);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puVar4);
  return (undefined1 *)ppuVar8;
}



/* Entry: 102148af8; end: 102148f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_102148af8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar13 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar8 = (undefined1 *)0x112e5b718;
    func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
    func_0x000102149a9c();
    puVar9 = &UNK_1104d1a48;
    func_0x000107c613f8(&UNK_1104d1a48,puVar8,0,0);
    *puVar8 = 0;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    pcVar10 = (code *)&puStack_b8;
    puStack_b8 = puVar9;
    func_0x000100854cb0(pcVar10);
    func_0x000107c614ac(puVar9);
  }
  else {
    puStack_88 = (undefined *)0x0;
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = &UNK_1104d17f8;
    func_0x000107c613fc(&UNK_1104d17f8,0x28,7);
    *(undefined ***)(puVar9 + 0x10) = &puStack_80;
    *(long *)(puVar9 + 0x18) = param_2;
    *(undefined ***)(puVar9 + 0x20) = &puStack_88;
    puVar4 = &UNK_1104d1820;
    func_0x000107c613fc(&UNK_1104d1820,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_102149adc;
    *(undefined **)(puVar4 + 0x18) = puVar9;
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_102149ae8;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = (undefined *)0x102149ff8;
    puStack_a0 = &UNK_1104d1838;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_1104d1870;
    func_0x000107c613fc(&UNK_1104d1870,0x18,7);
    *(undefined ***)(puVar4 + 0x10) = &puStack_88;
    puVar6 = &UNK_1104d1898;
    func_0x000107c613fc(&UNK_1104d1898,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_102149b24;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcStack_98 = (code *)0x102149fe8;
    puStack_b8 = puVar12;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100e27b38;
    puStack_a0 = &UNK_1104d18b0;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_90);
    func_0x000107c4c754(uVar13);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    puVar6 = puStack_88;
    if (puStack_88 == (undefined *)0x0) {
      puStack_b8 = (undefined *)0x0;
      uStack_b0 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_b0);
      puStack_b8 = (undefined *)0xd00000000000001b;
      uStack_b0 = 0x800000010f065340;
      if ((ulong)puStack_80 >> 0x3e != 0) {
        func_0x000107c60480();
      }
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(uStack_b0);
      puVar3 = puStack_80;
      func_0x0001000a8868(param_2 + _DAT_112e5b6c8,*(undefined8 *)(param_2 + _DAT_112e5b6c8 + 0x18))
      ;
      func_0x000107c61434(puVar3);
      FUN_10214c240(1);
      lVar1 = param_2 + _DAT_112e5b698;
      uVar13 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar13);
      puVar11 = puVar3;
      (**(code **)(lVar2 + 8))(puVar3,uVar13,lVar2);
      puVar6 = &UNK_1104d17a8;
      func_0x000107c613fc(&UNK_1104d17a8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar12 = &UNK_1104d18e8;
      func_0x000107c613fc(&UNK_1104d18e8,0x20,7);
      *(undefined **)(puVar12 + 0x10) = puVar6;
      *(undefined **)(puVar12 + 0x18) = puVar3;
      func_0x000107c61434(puVar3);
      uVar13 = 0x112e5b708;
      func_0x0001000285a8(0x112e5b708,&UNK_10da615c8);
      pcVar10 = FUN_102149b50;
      func_0x00010068b194(FUN_102149b50,puVar12,uVar13);
      func_0x000107c6142c(puVar3);
      func_0x000107c61170(param_2);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar12);
    }
    else {
      func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
      puStack_b8 = puVar6;
      uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
      func_0x000107c614b0(puVar6);
      pcVar10 = (code *)&puStack_b8;
      func_0x000100854cb0(pcVar10);
      func_0x000107c61170(param_2);
      func_0x000107c614ac(puVar6);
    }
    func_0x000107c614ac(puStack_88);
    puVar6 = puStack_80;
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar9);
    func_0x000107c6142c(puVar6);
  }
  return (undefined **)pcVar10;
}



/* Entry: 102148f18; end: 102149243;  */

/* WARNING: Possible PIC construction at 0x000102148f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102149090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021490e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102149094) */
/* WARNING: Removing unreachable block (ram,0x0001021490b4) */
/* WARNING: Removing unreachable block (ram,0x0001021490bc) */
/* WARNING: Removing unreachable block (ram,0x000102149098) */
/* WARNING: Removing unreachable block (ram,0x0001021490b0) */
/* WARNING: Removing unreachable block (ram,0x000102148f94) */
/* WARNING: Removing unreachable block (ram,0x000102149038) */
/* WARNING: Removing unreachable block (ram,0x000102148f98) */
/* WARNING: Removing unreachable block (ram,0x0001021491d8) */
/* WARNING: Removing unreachable block (ram,0x000102148fd4) */
/* WARNING: Removing unreachable block (ram,0x0001021491dc) */
/* WARNING: Removing unreachable block (ram,0x0001021491e8) */
/* WARNING: Removing unreachable block (ram,0x000102149240) */
/* WARNING: Removing unreachable block (ram,0x000102149204) */
/* WARNING: Removing unreachable block (ram,0x000102149208) */
/* WARNING: Removing unreachable block (ram,0x000102149210) */
/* WARNING: Removing unreachable block (ram,0x000102149218) */
/* WARNING: Removing unreachable block (ram,0x000102148fe0) */
/* WARNING: Removing unreachable block (ram,0x000102148fec) */
/* WARNING: Removing unreachable block (ram,0x000102148ff4) */
/* WARNING: Removing unreachable block (ram,0x00010214922c) */
/* WARNING: Removing unreachable block (ram,0x000102149000) */
/* WARNING: Removing unreachable block (ram,0x000102149088) */
/* WARNING: Removing unreachable block (ram,0x00010214900c) */
/* WARNING: Removing unreachable block (ram,0x000102149014) */
/* WARNING: Removing unreachable block (ram,0x000102149018) */
/* WARNING: Removing unreachable block (ram,0x000102149034) */
/* WARNING: Removing unreachable block (ram,0x00010214908c) */
/* WARNING: Removing unreachable block (ram,0x0001021490e4) */
/* WARNING: Removing unreachable block (ram,0x000102149114) */
/* WARNING: Removing unreachable block (ram,0x000102149138) */
/* WARNING: Removing unreachable block (ram,0x000102149148) */
/* WARNING: Removing unreachable block (ram,0x000102149230) */
/* WARNING: Removing unreachable block (ram,0x00010214915c) */
/* WARNING: Removing unreachable block (ram,0x000102149234) */
/* WARNING: Removing unreachable block (ram,0x000102149168) */
/* WARNING: Removing unreachable block (ram,0x000102149188) */
/* WARNING: Removing unreachable block (ram,0x000102149198) */
/* WARNING: Removing unreachable block (ram,0x0001021490e8) */
/* WARNING: Removing unreachable block (ram,0x0001021491a0) */

void FUN_102148f18(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined1 *)0x0) {
    func_0x000102149a9c();
    puVar4 = &UNK_1104d1a48;
    func_0x000107c613f8(&UNK_1104d1a48,param_1,0,0);
    *param_1 = 3;
    uVar2 = *param_4;
    *param_4 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(uVar2);
    return;
  }
  func_0x000107c61174();
  func_0x000107c4b56c();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_10209a708(0);
  puVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if ((ulong)puVar3 >> 0x3e != 0) {
    puVar1 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar3) {
      puVar1 = puVar3;
    }
    func_0x000107c60480(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
  return;
}



/* Entry: 102149244; end: 102149377;  */

undefined1 FUN_102149244(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  uStack_41 = 1;
  puVar4 = &UNK_1104d1960;
  func_0x000107c613fc(&UNK_1104d1960,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
  puVar5 = &UNK_1104d1988;
  func_0x000107c613fc(&UNK_1104d1988,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102149c88;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x102149fec;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x102149ff8;
  puStack_60 = &UNK_1104d19a0;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_41;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6b,200,0x29,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102149378);
  (*pcVar3)();
}



/* Entry: 102149378; end: 102149507;  */

uint FUN_102149378(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  return (uint)uVar3 & 1;
}



/* Entry: 102149508; end: 10214977b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102149508(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112e5b6c8 + 0x18);
  func_0x0001000a8868();
  FUN_10214c240(2);
  uVar14 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar12 = *(ulong *)(uVar14 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar12 = uVar14;
    if (0x7fffffffffffffff < param_1) {
      uVar12 = param_1;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar12 != 0) {
    uVar4 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar14 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102149694);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(param_1 + uVar4 * 8 + 0x20);
          func_0x000107c61174();
          uVar11 = uVar10;
        }
        else {
          uVar2 = uVar4;
          uVar11 = param_1;
          FUN_1020a4b3c();
        }
        if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102149690);
          (*pcVar1)();
        }
        uVar13 = uVar4 + 1;
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c5d2ac();
        func_0x000107c61180();
        if (uVar3 == 0) break;
        uVar4 = uVar3;
        func_0x000107c5faec();
        uVar10 = uVar11;
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar3);
        puVar5 = puVar7;
        func_0x000107c61558();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          uVar10 = *(long *)(puVar7 + 0x10) + 1;
          puVar6 = (undefined *)0x0;
          func_0x0001000d182c(0,uVar10,1,puVar7);
        }
        uVar3 = *(ulong *)(puVar6 + 0x10);
        uVar2 = uVar3 + 1;
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          uVar10 = uVar2;
          func_0x0001000d182c(puVar7,uVar2,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar2;
        *(ulong *)(puVar7 + uVar3 * 0x10 + 0x20) = uVar4;
        *(ulong *)(puVar7 + uVar3 * 0x10 + 0x28) = uVar11;
        uVar4 = uVar13;
        if (uVar13 == uVar12) goto LAB_1021496b0;
      }
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar2);
      uVar10 = uVar11;
      uVar4 = uVar4 + 1;
    } while (uVar13 != uVar12);
  }
LAB_1021496b0:
  func_0x0001000a8868(unaff_x20 + _DAT_112e5b6a0,*(undefined8 *)(unaff_x20 + _DAT_112e5b6a0 + 0x18))
  ;
  uVar8 = 0;
  func_0x00010214b3fc(0);
  puVar5 = puVar7;
  FUN_10214bd84(puVar7,uVar8,&PTR_DAT_1104d1d38);
  func_0x000107c6142c(puVar7);
  puVar7 = &UNK_1104d17a8;
  func_0x000107c613fc(&UNK_1104d17a8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  uVar8 = 0x112e5b708;
  func_0x0001000285a8(0x112e5b708,&UNK_10da615c8);
  uVar9 = 0x102149b58;
  func_0x00010068b194(0x102149b58,puVar7,uVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar7);
  return uVar9;
}



/* Entry: 10214977c; end: 1021498af;  */

ulong * FUN_10214977c(undefined8 *param_1,long param_2)

{
  char cVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar5 = (ulong *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar3 = (undefined1 *)0x112e5b718;
    func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
    func_0x000102149a9c();
    puVar4 = &UNK_1104d1a48;
    func_0x000107c613f8(&UNK_1104d1a48,puVar3,0,0);
    *puVar3 = 0;
    uStack_58 = (ulong)puVar4 | 0x8000000000000000;
    uStack_50 = 1;
    puVar5 = &uStack_58;
    func_0x000100854cb0(puVar5);
    func_0x000107c614ac(puVar4);
  }
  else if (cVar1 == '\x01') {
    func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
    uStack_58 = (ulong)puVar5 | 0x8000000000000000;
    uStack_50 = 1;
    func_0x000107c614b0(puVar5);
    puVar2 = &uStack_58;
    func_0x000100854cb0(puVar2);
    func_0x000107c61170(param_2);
    FUN_102146284(puVar5,1);
    puVar5 = puVar2;
  }
  else {
    FUN_1021498b0(puVar5);
    func_0x000107c61170(param_2);
  }
  return puVar5;
}



/* Entry: 1021498b0; end: 1021499ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021498b0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e5b6b0);
  func_0x000107c4ece8();
  if (iVar2 == 0) {
    func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000100854cb0(&uStack_50);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e5b6d8);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e5b6d8))[1];
    func_0x0001000a8868(unaff_x20 + _DAT_112e5b6c8,
                        *(undefined8 *)(unaff_x20 + _DAT_112e5b6c8 + 0x18));
    func_0x000107c61434(uVar1);
    FUN_10214c240(3);
    func_0x0001000a8868(unaff_x20 + _DAT_112e5b6a8,
                        *(undefined8 *)(unaff_x20 + _DAT_112e5b6a8 + 0x18));
    uVar3 = 0;
    func_0x00010214ad58(0);
    FUN_10214b0b4(param_1,uVar3,&PTR_DAT_1104d1bb8);
    puVar4 = &UNK_1104d1910;
    func_0x000107c613fc(&UNK_1104d1910,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar5;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    uVar5 = 0x112e5b708;
    func_0x0001000285a8(0x112e5b708,&UNK_10da615c8);
    func_0x0001000bfde0(FUN_102149b60,puVar4,uVar5);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 102149a00; end: 102149a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_102149a00(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar14 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    puVar9 = (undefined1 *)0x112e5b718;
    func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
    func_0x000102149a9c();
    puVar10 = &UNK_1104d1a48;
    func_0x000107c613f8(&UNK_1104d1a48,puVar9,0,0);
    *puVar9 = 0;
    uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
    pcVar11 = (code *)&puStack_b8;
    puStack_b8 = puVar10;
    func_0x000100854cb0(pcVar11);
    func_0x000107c614ac(puVar10);
  }
  else {
    puStack_88 = (undefined *)0x0;
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = &UNK_1104d17f8;
    func_0x000107c613fc(&UNK_1104d17f8,0x28,7);
    *(undefined ***)(puVar10 + 0x10) = &puStack_80;
    *(long *)(puVar10 + 0x18) = lVar4;
    *(undefined ***)(puVar10 + 0x20) = &puStack_88;
    puVar5 = &UNK_1104d1820;
    func_0x000107c613fc(&UNK_1104d1820,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_102149adc;
    *(undefined **)(puVar5 + 0x18) = puVar10;
    puVar13 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_102149ae8;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = (undefined *)0x102149ff8;
    puStack_a0 = &UNK_1104d1838;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1104d1870;
    func_0x000107c613fc(&UNK_1104d1870,0x18,7);
    *(undefined ***)(puVar5 + 0x10) = &puStack_88;
    puVar7 = &UNK_1104d1898;
    func_0x000107c613fc(&UNK_1104d1898,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_102149b24;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_98 = (code *)0x102149fe8;
    puStack_b8 = puVar13;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100e27b38;
    puStack_a0 = &UNK_1104d18b0;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_90);
    func_0x000107c4c754(uVar14);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    puVar7 = puStack_88;
    if (puStack_88 == (undefined *)0x0) {
      puStack_b8 = (undefined *)0x0;
      uStack_b0 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_b0);
      puStack_b8 = (undefined *)0xd00000000000001b;
      uStack_b0 = 0x800000010f065340;
      if ((ulong)puStack_80 >> 0x3e != 0) {
        func_0x000107c60480();
      }
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(uStack_b0);
      puVar3 = puStack_80;
      func_0x0001000a8868(lVar4 + _DAT_112e5b6c8,*(undefined8 *)(lVar4 + _DAT_112e5b6c8 + 0x18));
      func_0x000107c61434(puVar3);
      FUN_10214c240(1);
      lVar1 = lVar4 + _DAT_112e5b698;
      uVar14 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar14);
      puVar12 = puVar3;
      (**(code **)(lVar2 + 8))(puVar3,uVar14,lVar2);
      puVar7 = &UNK_1104d17a8;
      func_0x000107c613fc(&UNK_1104d17a8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar4);
      puVar13 = &UNK_1104d18e8;
      func_0x000107c613fc(&UNK_1104d18e8,0x20,7);
      *(undefined **)(puVar13 + 0x10) = puVar7;
      *(undefined **)(puVar13 + 0x18) = puVar3;
      func_0x000107c61434(puVar3);
      uVar14 = 0x112e5b708;
      func_0x0001000285a8(0x112e5b708,&UNK_10da615c8);
      pcVar11 = FUN_102149b50;
      func_0x00010068b194(FUN_102149b50,puVar13,uVar14);
      func_0x000107c6142c(puVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(puVar12);
      func_0x000107c61574(puVar13);
    }
    else {
      func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
      puStack_b8 = puVar7;
      uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
      func_0x000107c614b0(puVar7);
      pcVar11 = (code *)&puStack_b8;
      func_0x000100854cb0(pcVar11);
      func_0x000107c61170(lVar4);
      func_0x000107c614ac(puVar7);
    }
    func_0x000107c614ac(puStack_88);
    puVar7 = puStack_80;
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar10);
    func_0x000107c6142c(puVar7);
  }
  return (undefined **)pcVar11;
}



/* Entry: 102149a18; end: 102149a5b;  */

long FUN_102149a18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102149a5c; end: 102149adb;  */

void FUN_102149a5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da616ac;
  func_0x000107c61520(&UNK_10da616ac,&UNK_1104d1ad8);
  puRam0000000112e5b710 = puVar1;
  return;
}



/* Entry: 102149adc; end: 102149ae7;  */

/* WARNING: Possible PIC construction at 0x000102148f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102149090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021490e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102149094) */
/* WARNING: Removing unreachable block (ram,0x0001021490b4) */
/* WARNING: Removing unreachable block (ram,0x0001021490bc) */
/* WARNING: Removing unreachable block (ram,0x000102149098) */
/* WARNING: Removing unreachable block (ram,0x0001021490b0) */
/* WARNING: Removing unreachable block (ram,0x000102148f94) */
/* WARNING: Removing unreachable block (ram,0x000102149038) */
/* WARNING: Removing unreachable block (ram,0x000102148f98) */
/* WARNING: Removing unreachable block (ram,0x0001021491d8) */
/* WARNING: Removing unreachable block (ram,0x000102148fd4) */
/* WARNING: Removing unreachable block (ram,0x0001021491dc) */
/* WARNING: Removing unreachable block (ram,0x0001021491e8) */
/* WARNING: Removing unreachable block (ram,0x000102149240) */
/* WARNING: Removing unreachable block (ram,0x000102149204) */
/* WARNING: Removing unreachable block (ram,0x000102149208) */
/* WARNING: Removing unreachable block (ram,0x000102149210) */
/* WARNING: Removing unreachable block (ram,0x000102149218) */
/* WARNING: Removing unreachable block (ram,0x000102148fe0) */
/* WARNING: Removing unreachable block (ram,0x000102148fec) */
/* WARNING: Removing unreachable block (ram,0x000102148ff4) */
/* WARNING: Removing unreachable block (ram,0x00010214922c) */
/* WARNING: Removing unreachable block (ram,0x000102149000) */
/* WARNING: Removing unreachable block (ram,0x000102149088) */
/* WARNING: Removing unreachable block (ram,0x00010214900c) */
/* WARNING: Removing unreachable block (ram,0x000102149014) */
/* WARNING: Removing unreachable block (ram,0x000102149018) */
/* WARNING: Removing unreachable block (ram,0x000102149034) */
/* WARNING: Removing unreachable block (ram,0x00010214908c) */
/* WARNING: Removing unreachable block (ram,0x0001021490e4) */
/* WARNING: Removing unreachable block (ram,0x000102149114) */
/* WARNING: Removing unreachable block (ram,0x000102149138) */
/* WARNING: Removing unreachable block (ram,0x000102149148) */
/* WARNING: Removing unreachable block (ram,0x000102149230) */
/* WARNING: Removing unreachable block (ram,0x00010214915c) */
/* WARNING: Removing unreachable block (ram,0x000102149234) */
/* WARNING: Removing unreachable block (ram,0x000102149168) */
/* WARNING: Removing unreachable block (ram,0x000102149188) */
/* WARNING: Removing unreachable block (ram,0x000102149198) */
/* WARNING: Removing unreachable block (ram,0x0001021490e8) */
/* WARNING: Removing unreachable block (ram,0x0001021491a0) */

void FUN_102149adc(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0x20);
  if (param_1 == (undefined1 *)0x0) {
    func_0x000102149a9c();
    puVar4 = &UNK_1104d1a48;
    func_0x000107c613f8(&UNK_1104d1a48,param_1,0,0);
    *param_1 = 3;
    uVar2 = *puVar5;
    *puVar5 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(uVar2);
    return;
  }
  func_0x000107c61174(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4b56c();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_10209a708(0);
  puVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if ((ulong)puVar3 >> 0x3e != 0) {
    puVar1 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar3) {
      puVar1 = puVar3;
    }
    func_0x000107c60480(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar3);
  return;
}



/* Entry: 102149ae8; end: 102149b07;  */

void FUN_102149ae8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102149b08; end: 102149b23;  */

void FUN_102149b08(long param_1,long param_2)

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



/* Entry: 102149b24; end: 102149b4f;  */

void FUN_102149b24(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c614b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1);
  return;
}



/* Entry: 102149b50; end: 102149b5f;  */

ulong * FUN_102149b50(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(ulong **)(unaff_x20 + 0x18);
  uVar6 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puVar3 = (undefined1 *)0x112e5b718;
    func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
    func_0x000102149a9c();
    puVar4 = &UNK_1104d1a48;
    func_0x000107c613f8(&UNK_1104d1a48,puVar3,0,0);
    *puVar3 = 0;
    uStack_58 = (ulong)puVar4 | 0x4000000000000000;
    uStack_50 = 1;
    puVar5 = &uStack_58;
    func_0x000100854cb0(puVar5);
    func_0x000107c614ac(puVar4);
  }
  else if ((char)uVar1 == '\x01') {
    func_0x0001000285a8(0x112e5b718,&UNK_10da615d0);
    uStack_58 = uVar6 | 0x4000000000000000;
    uStack_50 = 1;
    func_0x000107c614b0(uVar6);
    puVar5 = &uStack_58;
    func_0x000100854cb0(puVar5);
    func_0x000107c61170(lVar2);
    func_0x000100fc38ac(uVar6,1);
  }
  else {
    FUN_102149508(puVar5);
    func_0x000107c61170(lVar2);
  }
  return puVar5;
}



/* Entry: 102149b60; end: 102149bab;  */

void FUN_102149b60(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  bVar1 = (char)param_2[1] != '\x01';
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *param_2 | 0xc000000000000000;
    func_0x000107c614b0();
  }
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = !bVar1;
  return;
}



/* Entry: 102149bac; end: 102149c87;  */

undefined * FUN_102149bac(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102149c88);
    (*pcVar2)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      FUN_1020a0e50();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar5 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar5 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar5 >> 3) << 1 | 1;
      puVar5 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102149c84);
      (*pcVar2)();
    }
    uVar4 = 0;
    FUN_10209a708(0);
    func_0x000107c6140c(puVar5 + 0x20,param_2 + param_3 * 8,lVar1,uVar4);
  }
  return puVar5;
}



/* Entry: 102149c88; end: 102149cbf;  */

void FUN_102149c88(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    func_0x000107c404f4();
    bVar1 = param_1 == 0;
  }
  *(bool *)uVar2 = bVar1;
  return;
}



/* Entry: 102149cc0; end: 102149e2f;  */

int FUN_102149cc0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102149d3c;
        goto LAB_102149d20;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102149d20:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102149d3c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102149e30; end: 102149e9f;  */

ulong * FUN_102149e30(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2 & 0x3fffffffffffffff);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1 & 0x3fffffffffffffff);
  return param_1;
}



/* Entry: 102149ea0; end: 102149f8f;  */

int FUN_102149ea0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7c < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7d;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7b < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102149f90; end: 102149fcf;  */

void FUN_102149f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da61644;
  func_0x000107c61520(&UNK_10da61644,&UNK_1104d1a48);
  puRam0000000112e5b728 = puVar1;
  return;
}



/* Entry: 102149fd0; end: 102149ffb;  */

void FUN_102149fd0(long param_1,long param_2)

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



/* Entry: 102149ffc; end: 10214a8df;  */

void FUN_102149ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104d1b58;
  func_0x000107c613fc(&UNK_1104d1b58,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10214a8e0,puVar1);
  return;
}



/* Entry: 10214a8e0; end: 10214a903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10214a8e0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar17;
  long *plVar18;
  long unaff_x20;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *apuStack_200 [3];
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 *puStack_1c8;
  code *pcStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 auStack_180 [3];
  long lStack_168;
  undefined **ppuStack_160;
  undefined8 auStack_158 [3];
  long lStack_140;
  undefined **ppuStack_138;
  undefined8 auStack_130 [3];
  long lStack_118;
  undefined **ppuStack_110;
  long alStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000100083b20(alStack_90,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = alStack_90[0];
  lVar2 = alStack_90[0];
  func_0x000107c4b100();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  plVar18 = (long *)0x0;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c4b0e0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    lVar3 = lVar2;
    func_0x000107c4ed2c();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
      plVar18 = (long *)0x0;
    }
    else {
      lStack_1a8 = uVar4;
      func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
      func_0x000100083b20(alStack_90);
      lVar3 = alStack_90[0];
      lVar5 = alStack_90[0];
      func_0x000107c4c974(alStack_90[0]);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar5;
      func_0x0001000bda74(lVar5);
      func_0x000107c61170(lVar5);
      uVar4 = 0x112e5b738;
      func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
      pcVar1 = FUN_10214a904;
      func_0x0001000cb480(FUN_10214a904,0,uVar4);
      func_0x000107c61574(lVar3);
      func_0x000107c6157c(pcVar1);
      lVar3 = lVar2;
      func_0x000107c4ed18();
      if (lVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10214a8e0);
        (*pcVar1)();
      }
      lVar5 = 0;
      func_0x000102146778();
      puStack_1c8 = (undefined1 *)lVar5;
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x20) = 0xd00000000000001f;
      *(undefined8 *)(lVar5 + 0x28) = 0x800000010f065450;
      *(code **)(lVar5 + 0x10) = pcVar1;
      *(long *)(lVar5 + 0x18) = lVar3;
      puStack_1d0 = (undefined *)lVar2;
      lStack_198 = lVar5;
      func_0x000100083b20(alStack_90);
      lVar3 = alStack_90[0];
      func_0x000107c3f770();
      func_0x000107c61180();
      func_0x000107c61170(alStack_90[0]);
      puVar6 = &UNK_1104d1ba0;
      func_0x000107c613fc(&UNK_1104d1ba0,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar3;
      func_0x0001000285a8(0x112d53a98,&UNK_10d91a6a0);
      func_0x000107c613fc();
      func_0x000107c61174();
      pcVar7 = FUN_10214ac10;
      lStack_1b8 = lVar3;
      func_0x0001000bdd8c(FUN_10214ac10,puVar6);
      lVar8 = 0;
      func_0x00010214b3fc();
      lVar5 = lVar8;
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 0xd000000000000021;
      *(undefined8 *)(lVar5 + 0x20) = 0x800000010f065470;
      *(code **)(lVar5 + 0x10) = pcVar7;
      func_0x0001000285a8(0x112e5b740,&UNK_10da61730);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar10);
      uVar4 = 0x10214ac18;
      func_0x0001000bdd8c(0x10214ac18,uVar10);
      lVar9 = 0;
      func_0x00010214ad58();
      lVar3 = lVar9;
      plStack_1b0 = param_1;
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      lStack_1a0 = lVar3;
      func_0x0001000285a8(0x112dd07d0,&UNK_10d991cb0);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar13);
      uVar10 = 0x10214ac20;
      func_0x0001000bdd8c(0x10214ac20,uVar13);
      puVar6 = PTR_PTR_1126aeea8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar11 = 0;
      pcStack_1c0 = pcVar1;
      func_0x00010214c220();
      lVar12 = lVar11;
      func_0x000107c613fc();
      uVar13 = 0;
      func_0x00010006a340();
      func_0x000107c613fc();
      func_0x00010006a360();
      *(undefined8 *)(lVar12 + 0x20) = uVar13;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined1 *)(lVar12 + 0x30) = 1;
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
      *(undefined **)(lVar12 + 0x18) = puVar6;
      func_0x0001000285a8(0x112e5b748,&UNK_10da61740);
      func_0x000107c613fc();
      lVar3 = lStack_1a8;
      func_0x000107c6157c(lStack_1a8);
      uVar13 = 0x10214ac28;
      func_0x0001000bdd8c(0x10214ac28,lVar3);
      puVar6 = PTR_PTR_1126aeea8;
      uStack_1d8 = uVar13;
      func_0x000107c610f8();
      lVar2 = lStack_198;
      func_0x000107c61580(lStack_198,2);
      func_0x000107c61580(lVar5,2);
      lVar3 = lStack_1a0;
      func_0x000107c61580(lStack_1a0,2);
      func_0x000107c61174();
      lStack_1a8 = (long)puStack_1d0;
      func_0x000107c453e4();
      puStack_1d0 = puVar6;
      func_0x0001000285a8(0x112e5b750,&UNK_10da61748);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar16);
      uVar13 = 0x10214ac30;
      func_0x0001000bdd8c(0x10214ac30,uVar16);
      lStack_78 = (long)puStack_1c8;
      ppuStack_70 = &PTR_DAT_1104d15a0;
      alStack_90[0] = lVar2;
      ppuStack_98 = &PTR_DAT_1104d1d38;
      ppuStack_c0 = &PTR_DAT_1104d1bb8;
      alStack_e0[0] = lVar3;
      ppuStack_e8 = &PTR_DAT_1104d2050;
      lVar14 = 0;
      uStack_1e0 = uVar13;
      alStack_108[0] = lVar12;
      lStack_f0 = lVar11;
      lStack_c8 = lVar9;
      alStack_b8[0] = lVar5;
      lStack_a0 = lVar8;
      FUN_102147e28();
      lStack_1e8 = lVar14;
      func_0x000107c610f8();
      func_0x0001000c6518(alStack_b8,lVar8);
      puStack_1c8 = (undefined1 *)apuStack_200;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
      puVar17 = (undefined8 *)((long)apuStack_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar17);
      func_0x0001000c6518(alStack_e0,lVar9);
      apuStack_200[2] = puVar17;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      puVar20 = (undefined8 *)((long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_00 + 0x10))(puVar20);
      func_0x0001000c6518(alStack_108,lVar11);
      apuStack_200[1] = puVar20;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      puVar19 = (undefined8 *)((long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_01 + 0x10))(puVar19);
      param_1 = plStack_1b0;
      lVar3 = _DAT_112e5b6d0;
      auStack_130[0] = *puVar17;
      auStack_158[0] = *puVar20;
      auStack_180[0] = *puVar19;
      ppuStack_110 = &PTR_DAT_1104d1d38;
      ppuStack_138 = &PTR_DAT_1104d1bb8;
      ppuStack_160 = &PTR_DAT_1104d2050;
      lStack_168 = lVar11;
      lStack_140 = lVar9;
      lStack_118 = lVar8;
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      lVar2 = lVar12;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(long *)(lVar14 + lVar3) = lVar2;
      puVar17 = (undefined8 *)(lVar14 + _DAT_112e5b6d8);
      *puVar17 = 0xd00000000000001a;
      puVar17[1] = 0x800000010f0654a0;
      *(undefined8 *)(lVar14 + _DAT_112e5b690) = uStack_1d8;
      FUN_10214ac38(alStack_90,lVar14 + _DAT_112e5b698);
      FUN_10214ac38(auStack_130,lVar14 + _DAT_112e5b6a0);
      FUN_10214ac38(auStack_158,lVar14 + _DAT_112e5b6a8);
      *(long *)(lVar14 + _DAT_112e5b6b0) = lStack_1a8;
      *(undefined **)(lVar14 + _DAT_112e5b6b8) = puStack_1d0;
      *(undefined8 *)(lVar14 + _DAT_112e5b6c0) = uStack_1e0;
      FUN_10214ac38(auStack_180,lVar14 + _DAT_112e5b6c8);
      lStack_188 = lStack_1e8;
      plVar15 = &lStack_190;
      lStack_190 = lVar14;
      func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
      func_0x0001000834e4(alStack_90);
      func_0x0001000834e4(auStack_180);
      func_0x0001000834e4(auStack_158);
      func_0x0001000834e4(auStack_130);
      func_0x0001000834e4(alStack_108);
      func_0x0001000834e4(alStack_e0);
      func_0x0001000834e4(alStack_b8);
      lVar2 = lStack_198;
      func_0x000107c61574(lStack_198);
      func_0x000107c61574(lVar5);
      lVar3 = lStack_1a0;
      func_0x000107c61574(lStack_1a0);
      func_0x0001000a0a8c(0);
      func_0x000107c61174();
      plVar18 = plVar15;
      func_0x000104494b00();
      func_0x000107c61170(plVar15);
      func_0x000107c61170(plVar15);
      func_0x000107c61574(lVar12);
      func_0x000107c61170(lStack_1a8);
      func_0x000107c61574(lVar3);
      func_0x000107c61574(lVar5);
      func_0x000107c61574(lVar2);
      func_0x000107c61170(lStack_1b8);
      func_0x000107c61574(pcStack_1c0);
    }
  }
  *param_1 = (long)plVar18;
  return;
}



/* Entry: 10214a904; end: 10214a93f;  */

void FUN_10214a904(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c40a84(lVar1,param_3,0,0xe);
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10214a940; end: 10214ac0f;  */

void FUN_10214a940(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar1 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f0654c0);
    lVar2 = param_2;
    func_0x000107c3f76c();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    func_0x000107c61170(uVar1);
    if (lVar2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 10214ac10; end: 10214ac37;  */

void FUN_10214ac10(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar1 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f0654c0);
    lVar2 = lVar3;
    func_0x000107c3f76c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 10214ac38; end: 10214ac7b;  */

long FUN_10214ac38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10214ac7c; end: 10214ac83;  */

undefined8 FUN_10214ac7c(void)

{
  return 1;
}



/* Entry: 10214ac84; end: 10214ad23;  */

void FUN_10214ac84(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10214ad24; end: 10214ad33;  */

void FUN_10214ad24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10214ad34; end: 10214ad77;  */

void FUN_10214ad34(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10214ad78; end: 10214ae5b;  */

void FUN_10214ad78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    FUN_10214b164();
    puVar1 = &UNK_1104d1cc0;
    func_0x000107c613f8(&UNK_1104d1cc0,param_2,0,0);
    uStack_50 = 1;
    puStack_58 = puVar1;
    func_0x000100087f6c(&puStack_58);
    func_0x000107c614ac(puVar1);
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    FUN_10214ae5c(param_3,param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10214ae5c; end: 10214afc3;  */

undefined1  [16] FUN_10214ae5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    uVar1 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c5fc48(param_1,uVar1);
    lVar2 = lStack_48;
    func_0x000107c43164(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
    uStack_58 = 0x10214b1ac;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_101286f34;
    puStack_60 = &UNK_1104d1c18;
    ppuVar3 = &puStack_78;
    uStack_50 = param_2;
    func_0x000107c60bc4(ppuVar3);
    uVar1 = uStack_50;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    func_0x000107c5dc64(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000b6d30(0);
  puVar4 = &UNK_1104d1bd8;
  func_0x000107c613fc(&UNK_1104d1bd8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcVar5 = FUN_10214b1a4;
  func_0x000104885df0(FUN_10214b1a4,puVar4);
  func_0x000107c61574(puVar4);
  auVar6._8_8_ = &PTR_DAT_1107aaa40;
  auVar6._0_8_ = pcVar5;
  return auVar6;
}



/* Entry: 10214afc4; end: 10214b0b3;  */

void FUN_10214afc4(undefined8 param_1,long param_2)

{
  long lStack_30;
  undefined1 uStack_28;
  
  if (param_2 == 0) {
    lStack_30 = 0;
    uStack_28 = 0;
    func_0x000100087f6c(&lStack_30);
    func_0x000100c7f554();
  }
  else {
    uStack_28 = 1;
    lStack_30 = param_2;
    func_0x000107c614b0(param_2);
    func_0x000100087f6c(&lStack_30);
    func_0x000100c7f554();
    func_0x000107c614ac(param_2);
  }
  return;
}



/* Entry: 10214b0b4; end: 10214b15b;  */

void FUN_10214b0b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1104d1bd8;
  func_0x000107c613fc(&UNK_1104d1bd8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1104d1c00;
  func_0x000107c613fc(&UNK_1104d1c00,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x0001000285a8(0x112e5b5a0,&UNK_10da61790);
  func_0x000107c613fc();
  func_0x000107c61434(param_1);
  func_0x0001000b64ac(FUN_10214b15c,puVar2);
  return;
}



/* Entry: 10214b15c; end: 10214b163;  */

void FUN_10214b15c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    FUN_10214b164();
    puVar3 = &UNK_1104d1cc0;
    func_0x000107c613f8(&UNK_1104d1cc0,lVar2,0,0);
    uStack_50 = 1;
    puStack_58 = puVar3;
    func_0x000100087f6c(&puStack_58);
    func_0x000107c614ac(puVar3);
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    FUN_10214ae5c(uVar1,param_1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10214b164; end: 10214b1a3;  */

void FUN_10214b164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6181c;
  func_0x000107c61520(&UNK_10da6181c,&UNK_1104d1cc0);
  puRam0000000112e5b7f8 = puVar1;
  return;
}



/* Entry: 10214b1a4; end: 10214b2bf;  */

void FUN_10214b1a4(void)

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
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(&lStack_40);
    func_0x000107c61574(uVar2);
    if (lStack_40 != 0) {
      func_0x000107c3f49c(lStack_40);
      func_0x000107c615e8(lStack_40);
    }
  }
  return;
}



/* Entry: 10214b2c0; end: 10214b2ff;  */

void FUN_10214b2c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da617f4;
  func_0x000107c61520(&UNK_10da617f4,&UNK_1104d1cc0);
  puRam0000000112e5b800 = puVar1;
  return;
}



/* Entry: 10214b300; end: 10214b313;  */

bool FUN_10214b300(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10214b314; end: 10214b3bf;  */

void FUN_10214b314(void)

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



/* Entry: 10214b3c0; end: 10214b3cf;  */

void FUN_10214b3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10214b3d0; end: 10214b41b;  */

void FUN_10214b3d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10214b41c; end: 10214b503;  */

void FUN_10214b41c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  puVar1 = (undefined1 *)(param_2 + 0x10);
  func_0x000107c61648();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_10214be34();
    puVar2 = &UNK_1104d1f58;
    func_0x000107c613f8(&UNK_1104d1f58,puVar1,0,0);
    *puVar1 = 0;
    uStack_50 = 1;
    puStack_58 = puVar2;
    func_0x000100087f6c(&puStack_58);
    func_0x000100c7f554();
    func_0x000107c614ac(puVar2);
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    FUN_10214b504(param_3,param_1);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 10214b504; end: 10214b6f7;  */

void FUN_10214b504(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x27);
  func_0x000107c6142c(uStack_70);
  puStack_78 = (undefined *)0xd00000000000001d;
  uStack_70 = 0x800000010f0654e0;
  lStack_48 = *(long *)(param_1 + 0x10);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x2e7365736e656c20,0xe800000000000000);
  func_0x000107c6142c(uStack_70);
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
    lVar2 = lVar1;
    func_0x000107c4b264(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
    puVar3 = &UNK_1104d1d58;
    func_0x000107c613fc(&UNK_1104d1d58,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_1104d1da8;
    func_0x000107c613fc(&UNK_1104d1da8,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_58 = FUN_10214beac;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100bcda3c;
    puStack_60 = &UNK_1104d1dc0;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_50;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c5dc64(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10214b6f8; end: 10214bc63;  */

void FUN_10214b6f8(undefined1 *param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  if (param_1 != (undefined1 *)0x0) {
    puStack_b0 = (undefined *)0x0;
    uVar3 = 0;
    func_0x0001012190e4(0);
    func_0x000107c5fc50(param_1,&puStack_b0,uVar3);
    puVar12 = puStack_b0;
    if (puStack_b0 != (undefined *)0x0) {
      if (param_2 == (undefined *)0x0) {
        puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar11 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff8);
        if ((ulong)puStack_b0 >> 0x3e == 0) {
          puStack_d8 = *(undefined **)(puVar11 + 0x10);
        }
        else {
          puStack_d8 = puStack_b0;
          if (-1 < (long)puStack_b0) {
            puStack_d8 = puVar11;
          }
          func_0x000107c60480();
        }
        puVar13 = (undefined *)0x0;
        do {
          if (puStack_d8 == puVar13) {
            func_0x000107c6142c(puVar12);
            if (*(long *)(puStack_80 + 0x10) == 0) {
              puStack_b0 = puStack_78;
              uStack_a8 = uStack_a8 & 0xffffffffffffff00;
              func_0x000100087f6c(&puStack_b0);
              func_0x000100c7f554();
            }
            else {
              puVar12 = *(undefined **)(puStack_80 + 0x20);
              func_0x000107c61428(param_4 + 0x10,&puStack_b0,0,0);
              param_4 = param_4 + 0x10;
              func_0x000107c61648();
              func_0x000107c614b0(puVar12);
              if (param_4 != 0) {
                func_0x000107c61574();
                puStack_c0 = (undefined *)0x0;
                uStack_b8 = 0xe000000000000000;
                func_0x000107c602fc(0x20);
                func_0x000107c5fb78(0xd00000000000001e,0x800000010f065500);
                uVar3 = 0x112d393f0;
                puStack_c8 = puVar12;
                func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                func_0x000107c603d0(&puStack_c8,&puStack_c0,uVar3,
                                    PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                    PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                                   );
                func_0x000107c6142c(uStack_b8);
              }
              uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
              puStack_c0 = puVar12;
              func_0x000107c614b0(puVar12);
              func_0x000100087f6c(&puStack_c0);
              func_0x000100c7f554();
              func_0x000107c614ac(puVar12);
              func_0x000107c614ac(puVar12);
            }
            func_0x000107c6142c(puStack_80);
            func_0x000107c6142c(puStack_78);
            return;
          }
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar11 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc44);
              (*pcVar2)();
            }
            puVar4 = *(undefined **)(puVar12 + (long)puVar13 * 8 + 0x20);
            func_0x000107c61174(puVar4);
          }
          else {
            puVar4 = puVar13;
            func_0x00010121c198(puVar13,puVar12);
          }
          if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc40);
            (*pcVar2)();
          }
          puVar5 = &UNK_1104d1df8;
          func_0x000107c613fc(&UNK_1104d1df8,0x18,7);
          *(undefined ***)(puVar5 + 0x10) = &puStack_78;
          puVar6 = &UNK_1104d1e20;
          func_0x000107c613fc(&UNK_1104d1e20,0x20,7);
          *(undefined8 *)(puVar6 + 0x10) = 0x10214bed0;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_90 = FUN_10214bed8;
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_100fe2610;
          puStack_98 = &UNK_1104d1e38;
          ppuVar7 = &puStack_b0;
          puStack_88 = puVar6;
          func_0x000107c60bc4(ppuVar7);
          puVar8 = puStack_88;
          func_0x000107c6157c(puVar6);
          func_0x000107c61574(puVar8);
          puVar8 = &UNK_1104d1e70;
          func_0x000107c613fc(&UNK_1104d1e70,0x18,7);
          *(undefined ***)(puVar8 + 0x10) = &puStack_80;
          puVar9 = &UNK_1104d1e98;
          func_0x000107c613fc(&UNK_1104d1e98,0x20,7);
          *(code **)(puVar9 + 0x10) = FUN_10214bef8;
          *(undefined **)(puVar9 + 0x18) = puVar8;
          pcStack_90 = FUN_10214bf00;
          puStack_b0 = puVar1;
          uStack_a8 = 0x42000000;
          puStack_a0 = &UNK_100fe2654;
          puStack_98 = &UNK_1104d1eb0;
          ppuVar10 = &puStack_b0;
          puStack_88 = puVar9;
          func_0x000107c60bc4(ppuVar10);
          puVar1 = puStack_88;
          func_0x000107c6157c(puVar9);
          func_0x000107c61574(puVar1);
          func_0x000107c4c744(puVar4);
          func_0x000107c61170(puVar4);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61574(puVar5);
          puVar4 = puVar6;
          func_0x000107c61544(puVar6,"",0x6b,0x32,0x15,1);
          func_0x000107c61574(puVar8);
          func_0x000107c61574(puVar6);
          if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc48);
            (*pcVar2)();
          }
          puVar4 = puVar9;
          func_0x000107c61544(puVar9,"",0x6b,0x36,0x1c,1);
          func_0x000107c61574(puVar9);
          puVar13 = puVar13 + 1;
        } while (((ulong)puVar4 & 1) == 0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10214bc4c);
        (*pcVar2)();
      }
      func_0x000107c614b0(param_2);
      func_0x000107c6142c(puVar12);
      func_0x000107c61428(param_4 + 0x10,&puStack_b0,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61648();
      if (param_4 != 0) {
        func_0x000107c61574();
        puStack_c0 = (undefined *)0x0;
        uStack_b8 = 0xe000000000000000;
        func_0x000107c602fc(0x20);
        func_0x000107c5fb78(0xd00000000000001e,0x800000010f065500);
        uVar3 = 0x112d393f0;
        puStack_78 = param_2;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c603d0(&puStack_78,&puStack_c0,uVar3,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c6142c(uStack_b8);
      }
      uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
      puStack_c0 = param_2;
      func_0x000107c614b0(param_2);
      func_0x000100087f6c(&puStack_c0);
      func_0x000100c7f554();
      func_0x000107c614ac(param_2);
      goto LAB_10214b888;
    }
  }
  FUN_10214be34();
  param_2 = &UNK_1104d1f58;
  func_0x000107c613f8(&UNK_1104d1f58,param_1,0,0);
  *param_1 = 1;
  uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
  puStack_b0 = param_2;
  func_0x000100087f6c(&puStack_b0);
  func_0x000100c7f554();
LAB_10214b888:
  func_0x000107c614ac(param_2);
  return;
}



/* Entry: 10214bc64; end: 10214bcd7;  */

void FUN_10214bc64(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_1019d4c2c();
  uVar2 = *param_3 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar2 + 0x10);
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x000100fe2a60(uVar2,uVar1 + 1,1);
    *param_3 = uVar2;
    uVar2 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar2 + uVar1 * 8 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10214bcd8; end: 10214bd83;  */

void FUN_10214bcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_4;
  uVar1 = uVar3;
  func_0x000107c61558();
  *param_4 = uVar3;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_101bf282c(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    *param_4 = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_101bf282c(uVar3,uVar1 + 1,1,uVar2);
    *param_4 = uVar3;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_11034f320)(param_3);
  return;
}



/* Entry: 10214bd84; end: 10214be2b;  */

void FUN_10214bd84(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1104d1d58;
  func_0x000107c613fc(&UNK_1104d1d58,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_1104d1d80;
  func_0x000107c613fc(&UNK_1104d1d80,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x0001000285a8(0x112e5b8b0,&UNK_10da618b8);
  func_0x000107c613fc();
  func_0x000107c61434(param_1);
  func_0x0001000b64ac(FUN_10214be2c,puVar2);
  return;
}



/* Entry: 10214be2c; end: 10214be33;  */

void FUN_10214be2c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  puVar3 = (undefined1 *)(lVar1 + 0x10);
  func_0x000107c61648();
  if (puVar3 == (undefined1 *)0x0) {
    FUN_10214be34();
    puVar4 = &UNK_1104d1f58;
    func_0x000107c613f8(&UNK_1104d1f58,puVar3,0,0);
    *puVar3 = 0;
    uStack_50 = 1;
    puStack_58 = puVar4;
    func_0x000100087f6c(&puStack_58);
    func_0x000100c7f554();
    func_0x000107c614ac(puVar4);
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    FUN_10214b504(uVar2,param_1);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 10214be34; end: 10214be73;  */

void FUN_10214be34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5b8b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da61940;
  func_0x000107c61520(&UNK_10da61940,&UNK_1104d1f58);
  puRam0000000112e5b8b8 = puVar1;
  return;
}



/* Entry: 10214be74; end: 10214beab;  */

void FUN_10214be74(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


