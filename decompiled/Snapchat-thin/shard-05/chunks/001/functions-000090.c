/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b1541c; end: 103b1541f;  */

undefined8 FUN_103b1541c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 auStack_80 [3];
  undefined *puStack_68;
  undefined1 auStack_60 [32];
  
  FUN_103b15fb0();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0e9b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e9b8);
  puVar1 = PTR___sSbN_11034dd40;
  auStack_80[0] = CONCAT71(auStack_80[0]._1_7_,1);
  puStack_68 = PTR___sSbN_11034dd40;
  func_0x000100102924(auStack_80,auStack_60);
  uVar3 = param_1;
  func_0x000107c61558(param_1);
  auStack_80[0] = param_1;
  func_0x0001001029e8(auStack_60,ppuVar2,param_2,uVar3);
  func_0x000107c6142c(param_2);
  uVar3 = auStack_80[0];
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e8d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e8d8);
  auStack_80[0] = CONCAT71(auStack_80[0]._1_7_,1);
  puStack_68 = puVar1;
  func_0x000100102924(auStack_80,auStack_60);
  uVar5 = uVar3;
  func_0x000107c61558(uVar3);
  auStack_80[0] = uVar3;
  func_0x0001001029e8(auStack_60,ppuVar4,ppuVar2,uVar5);
  func_0x000107c6142c(ppuVar2);
  return auStack_80[0];
}



/* Entry: 103b15420; end: 103b1542b; +[SingleSnapPlayerOperaHelper addSingleSnapPlayerPropertiesTo:] */

void FUN_103b15420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  uVar4 = param_3;
  (*(code *)0x103b162cc)();
  func_0x000107c6142c(param_3);
  uVar5 = uVar4;
  func_0x000107c5f9dc(uVar4,puVar1,puVar3 + 8,puVar2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 103b1542c; end: 103b15503; +[SingleSnapPlayerOperaHelper addNeoPlayerPropertiesTo:] */

void FUN_103b1542c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 auStack_68 [3];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  uVar4 = param_3;
  func_0x000103b162cc();
  ppuVar5 = &PTR____CFConstantStringClassReference_110f0e9f8;
  uStack_48 = uVar4;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e9f8);
  puStack_50 = PTR___sSiN_11034deb0;
  auStack_68[0] = 1;
  func_0x000100102934(auStack_68,ppuVar5,puVar7);
  func_0x000107c6142c(param_3);
  uVar4 = uStack_48;
  uVar6 = uStack_48;
  func_0x000107c5f9dc(uStack_48,puVar1,puVar3 + 8,puVar2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 103b15504; end: 103b1550f; +[SingleSnapPlayerOperaHelper addOperaLayerWithPageProperties:] */

void FUN_103b15504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  uVar4 = param_3;
  FUN_103b15fb0();
  func_0x000107c6142c(param_3);
  uVar5 = uVar4;
  func_0x000107c5f9dc(uVar4,puVar1,puVar3 + 8,puVar2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 103b15510; end: 103b1559f;  */

void FUN_103b15510(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  uVar4 = param_3;
  (*param_4)();
  func_0x000107c6142c(param_3);
  uVar5 = uVar4;
  func_0x000107c5f9dc(uVar4,puVar1,puVar3 + 8,puVar2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 103b155a0; end: 103b15617; +[SingleSnapPlayerOperaHelper playerTypeForDirectSnapWithConfigProvider:] */

long FUN_103b155a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f19f120);
  uVar2 = param_3;
  func_0x000107c4980c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return (long)(int)uVar2;
}



/* Entry: 103b15618; end: 103b1568f; +[SingleSnapPlayerOperaHelper playerTypeForChatMediaWithConfigProvider:] */

long FUN_103b15618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f19f160);
  uVar2 = param_3;
  func_0x000107c4980c(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  return (long)(int)uVar2;
}



/* Entry: 103b15690; end: 103b157ab; +[SingleSnapPlayerOperaHelper attachPropertyForSingleSnapPlayerDataForLocalVideoWithUrl:contentType:contentViewSource:mediaContextType:properties:] */

void FUN_103b15690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long lVar7;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar6,param_3);
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(param_7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puVar5 = puVar6;
  FUN_103b163c8(puVar6,param_4,param_5,param_6,param_7);
  func_0x000107c6142c(param_7);
  (**(code **)(lVar7 + 8))(puVar6,lVar4);
  puVar6 = puVar5;
  func_0x000107c5f9dc(puVar5,puVar1,puVar3 + 8,puVar2);
  func_0x000107c6142c(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 103b157ac; end: 103b157e7; -[SingleSnapPlayerOperaHelper init] */

void FUN_103b157ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b157e8; end: 103b1581b;  */

void FUN_103b157e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b1581c; end: 103b158d7;  */

undefined8 FUN_103b1581c(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000103b159f4();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000103b15e00(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 103b158d8; end: 103b15b63;  */

void FUN_103b158d8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b159b0);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    FUN_103b15b64(lVar4,param_4 & 1);
    uVar7 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b15978);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103b159f4();
    lVar4 = *unaff_x20;
    goto joined_r0x000103b159c4;
  }
  lVar4 = *unaff_x20;
joined_r0x000103b159c4:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  FUN_103b22058();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103b15b64; end: 103b15faf;  */

void FUN_103b15b64(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112eb08a0;
  func_0x0001000285a8(0x112eb08a0,&UNK_10dac4ea8);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103b15dcc:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b15dfc);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103b15dcc;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b15e00);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103b15fb0; end: 103b163c7;  */

undefined ** FUN_103b15fb0(undefined **param_1,undefined **param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **appuStack_90 [3];
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined **ppuStack_48;
  
  uVar2 = 0;
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0e2b8;
  ppuVar7 = ppuVar9;
  ppuStack_48 = param_1;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
  ppuVar5 = param_2;
  if (param_1[2] == (undefined *)0x0) {
    uStack_68 = 0;
    puStack_70 = (undefined *)0x0;
    lStack_58 = 0;
    uStack_60 = 0;
    func_0x000107c61434(param_1);
LAB_103b16144:
    func_0x000107c6142c(param_2);
LAB_103b1614c:
    func_0x00010006e7f4(&puStack_70);
  }
  else {
    func_0x000107c61434(param_1);
    func_0x000100029284(ppuVar7);
    if (((ulong)ppuVar5 & 1) == 0) {
      uStack_68 = 0;
      puStack_70 = (undefined *)0x0;
      lStack_58 = 0;
      uStack_60 = 0;
      goto LAB_103b16144;
    }
    ppuVar5 = &puStack_70;
    func_0x0001000bb420(param_1[7] + (long)ppuVar7 * 0x20,ppuVar5);
    func_0x000107c6142c(param_2);
    if (lStack_58 == 0) goto LAB_103b1614c;
    lVar1 = 0x112daafe8;
    func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
    ppuVar5 = &puStack_70;
    func_0x000107c6147c(appuStack_90,ppuVar5,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined *)0x0;
      FUN_103b28bb4();
      lVar4 = 0x112fec2d0;
      func_0x0001000285a8(0x112fec2d0,&UNK_10dc55350);
      ppuVar5 = appuStack_90[0];
      puStack_70 = puVar3;
      lStack_58 = lVar4;
      func_0x000107c61558();
      ppuVar7 = appuStack_90[0];
      if (((ulong)ppuVar5 & 1) == 0) {
        ppuVar7 = (undefined **)0x0;
        func_0x000100f6a040(0,appuStack_90[0][2] + 1,1,appuStack_90[0]);
      }
      puVar3 = ppuVar7[2];
      ppuVar8 = ppuVar7;
      if ((undefined *)((ulong)ppuVar7[3] >> 1) <= puVar3) {
        ppuVar8 = (undefined **)(ulong)((undefined *)0x1 < ppuVar7[3]);
        func_0x000100f6a040(ppuVar8,puVar3 + 1,1,ppuVar7);
      }
      ppuVar8[2] = puVar3 + 1;
      ppuVar5 = ppuVar8 + (long)puVar3 * 4 + 4;
      func_0x000100102924(&puStack_70,ppuVar5);
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e2b8);
      appuStack_90[0] = ppuVar8;
      lStack_78 = lVar1;
      if (lVar1 == 0) {
        func_0x000107c61434(ppuVar8);
        func_0x00010006e7f4(appuStack_90);
        func_0x000100216878(&puStack_70,ppuVar9,ppuVar5);
        func_0x000107c6142c(ppuVar5);
        func_0x00010006e7f4(&puStack_70);
        func_0x000107c6142c(ppuVar8);
        return ppuStack_48;
      }
      func_0x000100102924(appuStack_90,&puStack_70);
      func_0x000107c61434(ppuVar8);
      ppuVar7 = ppuStack_48;
      ppuVar6 = ppuStack_48;
      func_0x000107c61558(ppuStack_48);
      appuStack_90[0] = ppuVar7;
      func_0x0001001029e8(&puStack_70,ppuVar9,ppuVar5,ppuVar6);
      func_0x000107c6142c(ppuVar8);
      goto LAB_103b161f0;
    }
  }
  func_0x000107c5faec();
  ppuVar7 = ppuVar9;
  FUN_103b220a0();
  func_0x000107c613fc();
  ppuVar7[3] = (undefined *)0x2;
  ppuVar7[2] = (undefined *)0x1;
  puVar3 = (undefined *)0x0;
  FUN_103b28bb4();
  ppuVar7[4] = puVar3;
  lVar1 = 0x112fec2c8;
  func_0x0001000285a8(0x112fec2c8,&UNK_10dc55340);
  appuStack_90[0] = ppuVar7;
  lStack_78 = lVar1;
  if (lVar1 == 0) {
    func_0x00010006e7f4(appuStack_90);
    func_0x000100216878(&puStack_70,ppuVar9,ppuVar5);
    func_0x000107c6142c(ppuVar5);
    func_0x00010006e7f4(&puStack_70);
    return ppuStack_48;
  }
  func_0x000100102924(appuStack_90,&puStack_70);
  ppuVar7 = param_1;
  func_0x000107c61558(param_1);
  appuStack_90[0] = param_1;
  func_0x0001001029e8(&puStack_70,ppuVar9,ppuVar5,ppuVar7);
LAB_103b161f0:
  func_0x000107c6142c(ppuVar5);
  return appuStack_90[0];
}



/* Entry: 103b163c8; end: 103b16597;  */

undefined *
FUN_103b163c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *apuStack_a0 [3];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126b2c80;
  uVar5 = param_2;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5ed70();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c5d81c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(uStack_78);
  uStack_80 = 0xd000000000000013;
  uStack_78 = 0x800000010f19f1a0;
  func_0x000107c5ed70();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  lVar3 = 0x112dfa2f0;
  func_0x0001000285a8(0x112dfa2f0,&UNK_10d9cc070);
  uVar7 = 0x58;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x20) = puVar1;
  *(undefined8 *)(lVar3 + 0x30) = 3;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e9d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e9d8);
  puVar1 = &UNK_1106d3b78;
  func_0x000107c613fc(&UNK_1106d3b78,0x42,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(long *)(puVar1 + 0x20) = lVar3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined2 *)(puVar1 + 0x40) = 0;
  puStack_88 = &UNK_1106d4aa0;
  apuStack_a0[0] = puVar1;
  func_0x000100102924(apuStack_a0,&uStack_80);
  puVar1 = param_5;
  func_0x000107c61434(param_5);
  func_0x000107c61558();
  apuStack_a0[0] = param_5;
  func_0x0001001029e8(&uStack_80,ppuVar4,uVar7,puVar1);
  func_0x000107c6142c(uVar7);
  return apuStack_a0[0];
}



/* Entry: 103b16598; end: 103b165b7;  */

void FUN_103b16598(void)

{
  func_0x000107c61168(&PTR_PTR_112929d28);
  return;
}



/* Entry: 103b165b8; end: 103b1664f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b165b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fec2d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b16650; end: 103b166d3; -[SingleSnapPlayerOperaLayerFactory supportedLayers] */

void FUN_103b16650(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112eff120;
  func_0x0001000285a8(0x112eff120,&UNK_10db32400);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 0;
  FUN_103b28bb4();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112eff150;
  func_0x0001000285a8(0x112eff150,&UNK_10db32440);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103b166d4; end: 103b16833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b166d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_78 [40];
  
  uVar1 = 0;
  FUN_103b28bb4(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 != 0) {
    func_0x000107c615f0(param_1);
    func_0x0001000d224c(auStack_a0);
    if (lStack_88 == 0) {
      func_0x000107c615e8(param_1);
      func_0x000101ad90ec(auStack_a0);
    }
    else {
      func_0x000101ad9134(auStack_a0,auStack_78);
      FUN_103b16834(auStack_78,auStack_a0);
      uVar1 = *(undefined8 *)(lVar2 + _DAT_112fec908);
      func_0x000103b1fb48(0);
      func_0x000107c610f8();
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_3);
      func_0x000107c61174(param_4);
      func_0x000107c615f0(param_5);
      FUN_103b22998(auStack_a0,uVar1,param_2,param_3,param_4,param_5);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c615e8(param_5);
      func_0x0001000834e4(auStack_78);
    }
  }
  return;
}



/* Entry: 103b16834; end: 103b16877;  */

long FUN_103b16834(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103b16878; end: 103b1694f; -[SingleSnapPlayerOperaLayerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_103b16878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b166d4(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b16950; end: 103b169af; -[SingleSnapPlayerOperaLayerFactory init] */

void FUN_103b16950(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerOperaLayer.SingleSnapPlayerOperaLayerFactory",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b1697c);
  (*pcVar1)();
}



/* Entry: 103b169b0; end: 103b169bf; -[SingleSnapPlayerOperaLayerFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b169b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fec2d8));
  return;
}



/* Entry: 103b169c0; end: 103b169df;  */

void FUN_103b169c0(void)

{
  func_0x000107c61168(&PTR_PTR_112929dd8);
  return;
}



/* Entry: 103b169e0; end: 103b169ff; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController loadingIndicatorDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b169e0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112fec308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b16a00; end: 103b16a13; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController setLoadingIndicatorDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b16a00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112fec308,param_3);
  return;
}



/* Entry: 103b16a14; end: 103b16a23; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController delegateViewForGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b16a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fec3e8));
  return;
}



/* Entry: 103b16a24; end: 103b16a57; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b16a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fec3e8);
  *(undefined8 *)(param_1 + _DAT_112fec3e8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b16a58; end: 103b16a7f; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController initWithCoder:] */

void FUN_103b16a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103b2310c();
  return;
}



/* Entry: 103b16a80; end: 103b16b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b16a80(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  code *pcVar4;
  
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  pcVar4 = *(code **)(lVar2 + 0x48);
  func_0x000107c615f0(uVar1);
  (*pcVar4)(uVar3,lVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b16b10; end: 103b16ba7; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b16b10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fec310);
  lVar2 = ((undefined8 *)(param_1 + _DAT_112fec310))[1];
  uVar4 = uVar1;
  func_0x000107c614f0(uVar1);
  pcVar5 = *(code **)(lVar2 + 0x48);
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  (*pcVar5)(uVar4,lVar2);
  func_0x000107c615e8(uVar1);
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b16ba8; end: 103b16cbf; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b16be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b16c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b16c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b16c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b16c48) */
/* WARNING: Removing unreachable block (ram,0x000103b16c18) */
/* WARNING: Removing unreachable block (ram,0x000103b16be8) */
/* WARNING: Removing unreachable block (ram,0x000103b16c98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b16ba8(long param_1)

{
  func_0x000100d66cc8(param_1 + _DAT_112fec308);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fec310));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fec318));
  return;
}



/* Entry: 103b16cc0; end: 103b16dd3;  */

/* WARNING: Possible PIC construction at 0x000103b16cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b16d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b16d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b16d60) */
/* WARNING: Removing unreachable block (ram,0x000103b16dcc) */
/* WARNING: Removing unreachable block (ram,0x000103b16d7c) */
/* WARNING: Removing unreachable block (ram,0x000103b16d00) */
/* WARNING: Removing unreachable block (ram,0x000103b16dc8) */
/* WARNING: Removing unreachable block (ram,0x000103b16d20) */
/* WARNING: Removing unreachable block (ram,0x000103b16d90) */
/* WARNING: Removing unreachable block (ram,0x000103b16dd0) */
/* WARNING: Removing unreachable block (ram,0x000103b16da4) */

void FUN_103b16cc0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103b16dd4; end: 103b16dfb; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController loadView] */

void FUN_103b16dd4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b16cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b16dfc; end: 103b1755b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b16dfc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *unaff_x20;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  code *pcVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 auStack_c0 [32];
  
  func_0x000107c614f0();
  puVar4 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x103b1752c);
    (*pcVar17)();
  }
  FUN_103b26fb4();
  func_0x000107c61170(puVar4);
  puVar4 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17530);
    (*pcVar17)();
  }
  func_0x000107c61170();
  puVar5 = PTR_PTR_1126b2640;
  func_0x000107c61168(PTR_PTR_1126b2640);
  dVar18 = param_1;
  func_0x000107c4abcc();
  func_0x000107c61180();
  puVar4 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(puVar4,auStack_c0,1,0);
  dVar20 = *(double *)(puVar4 + 0x50);
  *(double *)(puVar4 + 0x50) = param_1;
  lVar14 = *(long *)(unaff_x20 + _DAT_112fec318);
  func_0x000107c4ac1c();
  func_0x000107c61154(&stack0xffffffffffffff30,PTR_s_viewDidLayoutSubviews_112684cc8);
  if (dVar20 != param_1) goto LAB_103b17054;
  puVar4 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17534);
    (*pcVar17)();
  }
  lVar13 = *(long *)(puVar4 + _DAT_112fec938);
  lVar12 = lVar13;
  func_0x000107c61174();
  func_0x000107c61170(puVar4);
  if (lVar13 == 0) {
    puVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b1753c);
      (*pcVar17)();
    }
    func_0x000107c5a378();
    func_0x000107c61170(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
    lVar13 = *(long *)((long)(unaff_x20 + _DAT_112fec310) + 8);
    func_0x000107c614f0(uVar7);
    pcVar17 = *(code **)(lVar13 + 0x18);
    uVar10 = uVar7;
    (*pcVar17)();
    lVar12 = lVar14;
    func_0x000107c40510();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17540);
      (*pcVar17)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar12);
    func_0x000107c54b80(uVar10);
    func_0x000107c61170(uVar10);
    puVar4 = unaff_x20;
    func_0x000107c4dec0();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17544);
      (*pcVar17)();
    }
    uVar16 = *(ulong *)(puVar4 + _DAT_11307a248);
    uVar8 = uVar16;
    func_0x000107c61174();
    func_0x000107c61170(puVar4);
    if (uVar16 != 0) {
      uVar16 = uVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (uVar16 != 0) {
        uVar8 = uVar16;
        func_0x000107c425a4();
        func_0x000107c615e8(uVar16);
        if ((uVar8 & 1) != 0) goto LAB_103b17054;
      }
    }
    puVar4 = unaff_x20;
    func_0x000107c4abb8();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17548);
      (*pcVar17)();
    }
    cVar1 = puVar4[_DAT_113079d30];
    func_0x000107c61170();
    lVar12 = _DAT_112fec368;
    if (cVar1 != '\x01') goto LAB_103b17054;
    if (*(long *)(unaff_x20 + _DAT_112fec368) == 0) {
      puVar4 = PTR_PTR_1126c9d98;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar9 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x103b1755c);
        (*pcVar17)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170(puVar9);
      uVar10 = *(undefined8 *)(unaff_x20 + lVar12);
      *(undefined **)(unaff_x20 + lVar12) = puVar4;
      func_0x000107c61170(uVar10);
    }
    puVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b1754c);
      (*pcVar17)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(puVar4);
    lVar11 = *(long *)(unaff_x20 + lVar12);
    if (lVar11 != 0) {
      func_0x000107c407d8();
    }
    iVar2 = (int)lVar11;
    func_0x000107c609ac();
    if (iVar2 == 0) {
      uVar15 = 0;
    }
    else {
      puVar4 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17550);
        (*pcVar17)();
      }
      func_0x000107c3ec60();
      func_0x000107c61170(puVar4);
      func_0x000107c438d4(lVar14);
      func_0x000107c609d8();
      lVar11 = *(long *)(unaff_x20 + lVar12);
      if (lVar11 != 0) {
        func_0x000107c407d4();
      }
      uVar15 = (uint)lVar11;
      func_0x000107c609ac();
    }
    uVar10 = uVar7;
    (*pcVar17)(uVar7,lVar13);
    func_0x000107c3ec60();
    func_0x000107c61170(uVar10);
    lVar11 = *(long *)(unaff_x20 + lVar12);
    if (lVar11 != 0) {
      func_0x000107c3ec60();
    }
    uVar3 = (uint)lVar11;
    func_0x000107c609ac();
    if ((uVar3 & uVar15 & 1) != 0) goto LAB_103b17054;
    puVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17554);
      (*pcVar17)();
    }
    func_0x000107c3ec60();
    dVar20 = dVar18;
    uVar10 = param_2;
    uVar6 = param_3;
    uVar19 = param_4;
    func_0x000107c61170(puVar4);
    puVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17558);
      (*pcVar17)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(puVar4);
    func_0x000107c438d4(lVar14);
    func_0x000107c609d8();
    lVar12 = *(long *)(unaff_x20 + lVar12);
    if (lVar12 == 0) goto LAB_103b17054;
    func_0x000107c61174();
    (*pcVar17)(uVar7,lVar13);
    func_0x000107c3ec60();
    func_0x000107c61170(uVar7);
    func_0x000107c40110();
    func_0x000107c61180();
    if (unaff_x20 != (undefined *)0x0) {
      func_0x000107c61170();
    }
    func_0x000107c5d480(dVar20,uVar10,uVar6,uVar19,dVar18,param_2,param_3,param_4,lVar12);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
    lVar14 = *(long *)((long)(unaff_x20 + _DAT_112fec310) + 8);
    func_0x000107c614f0(uVar7);
    pcVar17 = *(code **)(lVar14 + 0x18);
    uVar10 = uVar7;
    (*pcVar17)();
    FUN_103b1755c(lVar12);
    func_0x000107c54b80(uVar10);
    func_0x000107c61170(uVar10);
    lVar13 = _DAT_113079de8;
    if (0.0 < *(double *)(lVar12 + _DAT_113079de8)) {
      uVar10 = uVar7;
      (*pcVar17)(uVar7,lVar14);
      uVar6 = uVar10;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c539d4(*(undefined8 *)(lVar12 + lVar13),uVar6);
      func_0x000107c61170(uVar6);
      (*pcVar17)(uVar7,lVar14);
      func_0x000107c534b0();
      func_0x000107c61170(uVar7);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x103b17538);
      (*pcVar17)();
    }
    func_0x000107c5a378();
    func_0x000107c61170(puVar5);
    puVar5 = unaff_x20;
  }
  func_0x000107c61170(lVar12);
LAB_103b17054:
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 103b1755c; end: 103b17893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103b1755c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dStack_68;
  
  pdVar1 = (double *)(param_5 + _DAT_113079dd8);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar10 = pdVar1[2];
  dVar11 = pdVar1[3];
  if (*(double *)(param_5 + _DAT_113079df0) <= 0.0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112fec318);
    func_0x000107c40510();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1788c);
      (*pcVar2)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    dStack_68 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar7 = dVar8;
    func_0x000107c609c4(dVar8,dVar9,dVar10,dVar11);
    dStack_68 = dStack_68 * dVar7;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c609c8(dVar8,dVar9,dVar10,dVar11);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c609cc(dVar8,dVar9,dVar10,dVar11);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
  }
  else {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b17888);
      (*pcVar2)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar3);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    lVar4 = *(long *)(unaff_x20 + _DAT_112fec318);
    dVar7 = param_1;
    func_0x000107c438d4(lVar4);
    func_0x000107c609c4();
    lVar3 = lVar4;
    dVar5 = dVar7;
    func_0x000107c40510();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b17890);
      (*pcVar2)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar3);
    func_0x000107c609c4(dVar5,param_2,param_3,param_4);
    func_0x000107c438d4(lVar4);
    func_0x000107c609c8();
    func_0x000107c40510();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b17894);
      (*pcVar2)();
    }
    dVar6 = dVar7 + dVar5;
    func_0x000107c438d4();
    func_0x000107c61170(lVar4);
    func_0x000107c609c8(dVar6,param_2,param_3,param_4);
    dVar6 = dVar8;
    func_0x000107c609c4(dVar8,dVar9,dVar10,dVar11);
    dStack_68 = param_1 * dVar6 - (dVar7 + dVar5);
    func_0x000107c609c8(dVar8,dVar9,dVar10,dVar11);
    func_0x000107c609cc(dVar8,dVar9,dVar10,dVar11);
  }
  func_0x000107c609b0(dVar8,dVar9,dVar10,dVar11);
  return dStack_68;
}



/* Entry: 103b17894; end: 103b178bb; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewDidLayoutSubviews] */

void FUN_103b17894(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b16dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b178bc; end: 103b17bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b178bc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [56];
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined2 uStack_b8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff50,PTR_s_updateViewWithPreviousLayer_curr_112680a50,
                      param_1,param_2);
  lVar9 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar9 == 0) {
    return;
  }
  puVar1 = (ulong *)(lVar9 + _DAT_112fec8e0);
  uVar17 = puVar1[1];
  if (uVar17 != 0) {
    uVar18 = *puVar1;
    puVar2 = (ulong *)(unaff_x20 + _DAT_112fec378);
    func_0x000107c61428(puVar2,auStack_138,1,0);
    uVar13 = puVar2[1];
    if (uVar13 == 0) {
      uStack_140 = 0;
    }
    else {
      uVar10 = *puVar2;
      if ((uVar10 == uVar18 && uVar17 == uVar13) ||
         (func_0x000107c605b8(uVar10,uVar13,uVar18,uVar17,0), (uVar10 & 1) != 0))
      goto LAB_103b179f0;
      uStack_140 = puVar2[1];
    }
    uVar3 = puVar1[1];
    uVar17 = puVar1[2];
    uVar16 = puVar1[3];
    uVar13 = puVar1[4];
    uVar4 = puVar1[5];
    uVar19 = *puVar2;
    uVar18 = puVar2[2];
    uVar5 = puVar2[3];
    uVar10 = puVar2[4];
    uVar6 = puVar2[5];
    uVar8 = puVar1[6];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar17;
    puVar2[3] = uVar16;
    puVar2[4] = uVar13;
    puVar2[5] = uVar4;
    uVar17 = puVar2[6];
    *(short *)(puVar2 + 6) = (short)uVar8;
    func_0x000101e595f0();
    func_0x000101ad91a0(uVar19,uStack_140,uVar18,uVar5,uVar10,uVar6,(short)uVar17);
  }
LAB_103b179f0:
  lVar11 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar11 == 0) goto LAB_103b17bac;
  if (param_1 == 0) {
    lVar15 = *(long *)(lVar9 + _DAT_112fec950);
LAB_103b17a78:
    if (lVar15 != 0) {
LAB_103b17a7c:
      FUN_103b17bd8(lVar9);
    }
  }
  else {
    uVar17 = *(ulong *)(param_1 + _DAT_112fec950);
    lVar15 = *(long *)(lVar9 + _DAT_112fec950);
    if (uVar17 == 0) goto LAB_103b17a78;
    if (lVar15 == 0) goto LAB_103b17a7c;
    FUN_103baff10(0);
    func_0x000107c61174(lVar15);
    func_0x000107c61174();
    uVar13 = uVar17;
    func_0x000107c60118();
    func_0x000107c61170(uVar17);
    func_0x000107c61170(lVar15);
    if ((uVar13 & 1) == 0) goto LAB_103b17a7c;
  }
  if ((*(byte *)(unaff_x20 + _DAT_112fec3a0) & 1) == 0) {
    func_0x000103b23390();
  }
  else {
    uVar17 = puVar1[1];
    if (uVar17 != 0) {
      uVar13 = puVar1[4];
      uVar10 = puVar1[5];
      uVar18 = puVar1[2];
      uVar3 = puVar1[3];
      uVar16 = *puVar1;
      uVar7 = (undefined2)puVar1[6];
      bStack_70 = (byte)uVar7 & 1;
      bStack_6f = (byte)((ushort)uVar7 >> 8) & 1;
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
      lVar15 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
      uStack_a0 = uVar16;
      uStack_98 = uVar17;
      uStack_90 = uVar18;
      uStack_88 = uVar3;
      uStack_80 = uVar13;
      uStack_78 = uVar10;
      func_0x000107c614f0();
      pcVar14 = *(code **)(lVar15 + 0x28);
      uStack_e8 = uVar16;
      uStack_e0 = uVar17;
      uStack_d8 = uVar18;
      uStack_d0 = uVar3;
      uStack_c8 = uVar13;
      uStack_c0 = uVar10;
      uStack_b8 = uVar7;
      func_0x000101e3a290(&uStack_e8,auStack_120);
      (*pcVar14)(&uStack_a0,uVar12,lVar15);
      func_0x000101ad91a0(uVar16,uVar17,uVar18,uVar3,uVar13,uVar10,uVar7);
    }
  }
  uVar12 = *(undefined8 *)(lVar11 + _DAT_11307abc8);
  func_0x00010018cc3c(uVar12);
  func_0x000103b235ec();
  func_0x000107c6142c(uVar12);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x103b17bd8);
    (*pcVar14)();
  }
  func_0x000107c56a14();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar11);
  lVar9 = unaff_x20;
LAB_103b17bac:
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 103b17bd8; end: 103b17c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b17bd8(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_112fec950) != 0) {
    uVar1 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112fec310);
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
    func_0x000107c614f0();
    lVar3 = *(long *)(lVar3 + 8);
    (**(code **)(lVar3 + 8))();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fec908);
    FUN_103b23300(uVar2,param_1);
    if (((uint)uVar2 & 0xff) != (uVar1 & 0xff)) {
      (**(code **)(lVar3 + 0x10))();
    }
  }
  return;
}



/* Entry: 103b17c94; end: 103b18707;  */

undefined * FUN_103b17c94(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [32];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar6 = 0x112d4b5f8;
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    func_0x000107c60498(puVar11,uVar6);
    puVar12 = puVar11;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar13 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar13 << 6;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar8 * 0x10);
      uStack_e0 = *puVar2;
      uVar3 = puVar2[1];
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar8 * 8);
      uVar6 = 0;
      uStack_e8 = uVar14;
      uStack_d8 = uVar3;
      FUN_103b24500(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c61438(uVar3,2);
      func_0x000107c61174(uVar14);
      func_0x000107c61174();
      func_0x000107c6147c(auStack_d0,&uStack_e8,uVar6,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c61170(uVar14);
      func_0x000107c6142c(uVar3);
      if (uStack_d8 == 0) {
        func_0x000107c61574(param_1);
        func_0x000103b24540(&uStack_e0,0x112d74040,&UNK_10d934650);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b17f54);
        (*pcVar4)();
      }
      uVar15 = uVar15 - 1 & uVar15;
      uStack_b0 = uStack_e0;
      uStack_a8 = uStack_d8;
      func_0x000100102924(auStack_d0,auStack_a0);
      uVar8 = uStack_a8;
      uVar3 = uStack_b0;
      func_0x000100102924(auStack_a0,auStack_80);
      uVar7 = uVar3;
      uVar9 = uVar8;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b17f24);
          (*pcVar4)();
        }
        uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar12 + uVar9 + 0x40) =
             *(ulong *)(puVar12 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar8;
        func_0x000100102924(auStack_80,*(long *)(puVar12 + 0x38) + uVar7 * 0x20);
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b17f28);
          (*pcVar4)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x10);
        uVar9 = puVar2[1];
        *puVar2 = uVar3;
        puVar2[1] = uVar8;
        func_0x000107c6142c(uVar9);
        lVar1 = *(long *)(puVar12 + 0x38) + uVar7 * 0x20;
        FUN_103b245ac(lVar1);
        func_0x000100102924(auStack_80,lVar1);
      }
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103b17f20);
      (*pcVar4)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar13) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}



/* Entry: 103b18708; end: 103b18783; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Possible PIC construction at 0x000103b18760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b18764) */

void FUN_103b18708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b178bc(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b18784; end: 103b18e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_103b18784(void)

{
  long lVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  long lVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 **ppuVar16;
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined1 auStack_f8 [8];
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 **appuStack_d0 [3];
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 **ppuStack_70;
  
  pppuVar7 = *(undefined8 ****)(unaff_x20 + _DAT_112fec370);
  if (pppuVar7 != (undefined8 ***)0x0) {
    func_0x000107c41060();
    func_0x000107c61180();
    if (pppuVar7 != (undefined8 ***)0x0) {
      pppuVar8 = pppuVar7;
      func_0x000107c5f9e8();
      func_0x000107c61170();
      goto LAB_103b1880c;
    }
  }
  pppuVar7 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  pppuVar8 = pppuVar7;
LAB_103b1880c:
  FUN_103bb6df8();
  ppuVar2 = *pppuVar7;
  ppuVar9 = pppuVar7[1];
  lVar1 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar1,auStack_88,0,0);
  ppuVar16 = (undefined8 **)(*(double *)(lVar1 + 0x38) * 1000.0);
  puStack_b8 = PTR___sSdN_11034dd90;
  appuStack_d0[0] = ppuVar16;
  func_0x000100102924(appuStack_d0,&ppuStack_b0);
  func_0x000107c61434(ppuVar9);
  pppuVar7 = pppuVar8;
  func_0x000107c61558(pppuVar8);
  appuStack_d0[0] = pppuVar8;
  func_0x0001001029e8(&ppuStack_b0,ppuVar2,ppuVar9,pppuVar7);
  func_0x000107c6142c();
  ppuVar2 = appuStack_d0[0];
  ppuStack_70 = appuStack_d0[0];
  FUN_103bb7550();
  puVar3 = *ppuVar9;
  pppuVar7 = (undefined8 ***)ppuVar9[1];
  pppuVar8 = *(undefined8 ****)(unaff_x20 + _DAT_112fec310);
  lVar4 = ((long *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c614f0();
  pcVar15 = *(code **)(lVar4 + 0x20);
  func_0x000107c61434(pppuVar7);
  pppuVar10 = pppuVar8;
  (*pcVar15)(pppuVar8,lVar4);
  pppuVar11 = pppuVar10;
  func_0x000107c4e93c();
  func_0x000107c615e8(pppuVar10);
  lVar12 = 0;
  func_0x000102cbf1f4();
  appuStack_d0[0] = pppuVar11;
  puStack_b8 = (undefined *)lVar12;
  if (lVar12 == 0) {
    func_0x000103b24540(appuStack_d0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&ppuStack_b0,puVar3,pppuVar7);
    func_0x000107c6142c(pppuVar7);
    pppuVar7 = &ppuStack_b0;
    func_0x000103b24540(pppuVar7,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(appuStack_d0,&ppuStack_b0);
    pppuVar10 = (undefined8 ***)ppuVar2;
    func_0x000107c61558(ppuVar2);
    appuStack_d0[0] = ppuVar2;
    func_0x0001001029e8(&ppuStack_b0,puVar3,pppuVar7,pppuVar10);
    func_0x000107c6142c();
    ppuStack_70 = appuStack_d0[0];
  }
  FUN_103bb6e38();
  ppuVar2 = *pppuVar7;
  ppuVar9 = pppuVar7[1];
  lVar12 = *(long *)(unaff_x20 + _DAT_112fec350);
  cVar6 = *(char *)(lVar12 + 0x10);
  uVar14 = *(undefined8 *)(lVar12 + 0x18);
  func_0x000107c61434(ppuVar9);
  func_0x000107c3cf54(uVar14);
  if (cVar6 == '\x01') {
    ppuVar16 = (undefined8 **)((double)ppuVar16 - *(double *)(lVar12 + 0x20));
  }
  appuStack_d0[0] = (undefined8 **)((double)ppuVar16 * 1000.0);
  puStack_b8 = PTR___sSdN_11034dd90;
  func_0x000100102924(appuStack_d0,&ppuStack_b0);
  ppuVar16 = ppuStack_70;
  pppuVar7 = (undefined8 ***)ppuStack_70;
  func_0x000107c61558(ppuStack_70);
  appuStack_d0[0] = ppuVar16;
  func_0x0001001029e8(&ppuStack_b0,ppuVar2,ppuVar9,pppuVar7);
  func_0x000107c6142c(ppuVar9);
  ppuVar2 = appuStack_d0[0];
  ppuStack_70 = appuStack_d0[0];
  pppuVar7 = pppuVar8;
  (*pcVar15)(pppuVar8,lVar4);
  pppuVar10 = pppuVar7;
  func_0x000107c4e960();
  func_0x000107c61180();
  func_0x000107c615e8();
  if (pppuVar10 != (undefined8 ***)0x0) {
    FUN_103bb7624();
    ppuVar9 = *pppuVar7;
    pppuVar7 = (undefined8 ***)pppuVar7[1];
    puVar13 = (undefined *)0x112d74dc8;
    func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
    appuStack_d0[0] = pppuVar10;
    puStack_b8 = puVar13;
    if (puVar13 == (undefined *)0x0) {
      func_0x000107c61434(pppuVar7);
      func_0x000103b24540(appuStack_d0,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&ppuStack_b0,ppuVar9,pppuVar7);
      func_0x000107c6142c(pppuVar7);
      pppuVar7 = &ppuStack_b0;
      func_0x000103b24540(pppuVar7,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(appuStack_d0,&ppuStack_b0);
      func_0x000107c61434(pppuVar7);
      pppuVar10 = (undefined8 ***)ppuVar2;
      func_0x000107c61558(ppuVar2);
      appuStack_d0[0] = ppuVar2;
      func_0x0001001029e8(&ppuStack_b0,ppuVar9,pppuVar7,pppuVar10);
      func_0x000107c6142c();
      ppuStack_70 = appuStack_d0[0];
    }
  }
  if (*(char *)(unaff_x20 + _DAT_112fec408) == '\x01') {
    (*pcVar15)(pppuVar8,lVar4);
    pppuVar10 = pppuVar8;
    func_0x000107c5e050();
    func_0x000107c61180();
    func_0x000107c615e8();
    pppuVar7 = pppuVar8;
    if (pppuVar10 != (undefined8 ***)0x0) {
      FUN_103bb75ec();
      ppuVar2 = *pppuVar8;
      pppuVar7 = (undefined8 ***)pppuVar8[1];
      puVar13 = (undefined *)0x0;
      FUN_103b24500(0,0x112fec610,&PTR_PTR_1126a9698);
      appuStack_d0[0] = pppuVar10;
      puStack_b8 = puVar13;
      if (puVar13 == (undefined *)0x0) {
        func_0x000107c61434(pppuVar7);
        func_0x000103b24540(appuStack_d0,0x112d387f8,&UNK_10d902650);
        func_0x000100216878(&ppuStack_b0,ppuVar2,pppuVar7);
        func_0x000107c6142c(pppuVar7);
        pppuVar7 = &ppuStack_b0;
        func_0x000103b24540(pppuVar7,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(appuStack_d0,&ppuStack_b0);
        func_0x000107c61434(pppuVar7);
        ppuVar9 = ppuStack_70;
        pppuVar8 = (undefined8 ***)ppuStack_70;
        func_0x000107c61558(ppuStack_70);
        appuStack_d0[0] = ppuVar9;
        func_0x0001001029e8(&ppuStack_b0,ppuVar2,pppuVar7,pppuVar8);
        func_0x000107c6142c();
        ppuStack_70 = appuStack_d0[0];
      }
    }
  }
  FUN_103bb7444();
  ppuVar2 = *pppuVar7;
  pppuVar7 = (undefined8 ***)pppuVar7[1];
  if (*(long *)(lVar1 + 0x40) == 0) {
    uStack_a8 = 0;
    ppuStack_b0 = (undefined8 ***)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c614cc(*(long *)(lVar1 + 0x40),auStack_f8,auStack_110);
    lStack_98 = lStack_108;
    func_0x0001000a9d90(&ppuStack_b0);
    (**(code **)(*(long *)(lStack_108 + -8) + 0x10))();
  }
  uStack_e8 = uStack_a8;
  ppuStack_f0 = ppuStack_b0;
  lStack_d8 = lStack_98;
  uStack_e0 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000107c61434(pppuVar7);
    func_0x000103b24540(&ppuStack_f0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(appuStack_d0,ppuVar2,pppuVar7);
    func_0x000107c6142c(pppuVar7);
    pppuVar7 = appuStack_d0;
    func_0x000103b24540(pppuVar7,0x112d387f8,&UNK_10d902650);
    pppuVar8 = (undefined8 ***)ppuStack_70;
  }
  else {
    func_0x000100102924(&ppuStack_f0,appuStack_d0);
    func_0x000107c61434(pppuVar7);
    ppuVar9 = ppuStack_70;
    pppuVar8 = (undefined8 ***)ppuStack_70;
    func_0x000107c61558(ppuStack_70);
    ppuStack_f0 = ppuVar9;
    func_0x0001001029e8(appuStack_d0,ppuVar2,pppuVar7,pppuVar8);
    func_0x000107c6142c();
    pppuVar8 = (undefined8 ***)ppuStack_f0;
  }
  FUN_103bb7ce4();
  puVar13 = PTR___sSbN_11034dd40;
  ppuVar2 = *pppuVar7;
  ppuVar9 = pppuVar7[1];
  appuStack_d0[0] =
       (undefined8 **)CONCAT71(appuStack_d0[0]._1_7_,*(undefined1 *)(unaff_x20 + _DAT_112fec340));
  puStack_b8 = PTR___sSbN_11034dd40;
  func_0x000100102924(appuStack_d0,&ppuStack_b0);
  func_0x000107c61434(ppuVar9);
  pppuVar7 = pppuVar8;
  func_0x000107c61558(pppuVar8);
  appuStack_d0[0] = pppuVar8;
  func_0x0001001029e8(&ppuStack_b0,ppuVar2,ppuVar9,pppuVar7);
  func_0x000107c6142c();
  ppuVar2 = appuStack_d0[0];
  FUN_103bba210();
  puVar3 = *ppuVar9;
  puVar5 = ppuVar9[1];
  appuStack_d0[0] =
       (undefined8 **)CONCAT71(appuStack_d0[0]._1_7_,*(undefined1 *)(unaff_x20 + _DAT_112fec380));
  puStack_b8 = puVar13;
  func_0x000100102924(appuStack_d0,&ppuStack_b0);
  func_0x000107c61434(puVar5);
  pppuVar7 = (undefined8 ***)ppuVar2;
  func_0x000107c61558(ppuVar2);
  appuStack_d0[0] = ppuVar2;
  func_0x0001001029e8(&ppuStack_b0,puVar3,puVar5,pppuVar7);
  func_0x000107c6142c(puVar5);
  ppuVar2 = appuStack_d0[0];
  pppuVar7 = (undefined8 ***)appuStack_d0[0];
  func_0x00010018cc3c(appuStack_d0[0]);
  func_0x000107c6142c(ppuVar2);
  return pppuVar7;
}



/* Entry: 103b18e4c; end: 103b18eaf; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController currentViewParameters] */

void FUN_103b18e4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b18784();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b18eb0; end: 103b1942f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b18eb0(undefined8 param_1,double ****param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  double ****ppppdVar4;
  code *pcVar5;
  double ****ppppdVar6;
  double *****pppppdVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  double *****pppppdVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  double *****unaff_x20;
  double ****ppppdStack_b8;
  double ***pppdStack_b0;
  undefined1 auStack_a8 [40];
  double ***pppdStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c614f0();
  puVar3 = PTR___sypN_11034f1a8;
  ppppdVar6 = param_2;
  func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_didReceiveUpdateProperties__1125bbf00,ppppdVar6
                     );
  func_0x000107c61170(ppppdVar6);
  if (param_2[2] == (double ***)0x0) {
    return;
  }
  pppppdVar7 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (pppppdVar7 == (double *****)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103b19430);
    (*pcVar5)();
  }
  bVar2 = *(byte *)((long)pppppdVar7 + _DAT_112fec910);
  func_0x000107c61170();
  if ((bVar2 & 1) == 0) {
    func_0x00010442f69c();
    ppppdStack_b8 = *pppppdVar7;
    ppppdVar6 = pppppdVar7[1];
    pppdStack_b0 = (double ***)ppppdVar6;
    func_0x000107c61438(ppppdVar6,2);
    puVar12 = PTR___sSSN_11034da80;
    func_0x000107c602d4(auStack_a8,&ppppdStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (param_2[2] == (double ***)0x0) {
LAB_103b18fd8:
      param_1 = 0;
      uStack_78 = 0;
      pppdStack_80 = (double ***)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      puVar8 = auStack_a8;
      func_0x000100df95d0(puVar8);
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_103b18fd8;
      }
      func_0x0001000bb420(param_2[7] + (long)puVar8 * 4,&pppdStack_80);
      func_0x000107c6142c(ppppdVar6);
      ppppdVar6 = param_2;
    }
    func_0x000107c6142c(ppppdVar6);
    func_0x0001007bbff0(auStack_a8);
    if (lStack_68 == 0) {
      pppppdVar7 = (double *****)&pppdStack_80;
      func_0x000103b24540(pppppdVar7,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar9 = 0;
      FUN_103b24500(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppdVar7 = &ppppdStack_b8;
      func_0x000107c6147c(pppppdVar7,&pppdStack_80,puVar3 + 8,uVar9,6);
      pppppdVar10 = (double *****)ppppdStack_b8;
      if (((ulong)pppppdVar7 & 1) != 0) {
        func_0x000107c4223c(ppppdStack_b8);
        lVar1 = ((undefined8 *)((long)unaff_x20 + _DAT_112fec310))[1];
        func_0x000107c614f0(*(undefined8 *)((long)unaff_x20 + _DAT_112fec310));
        (**(code **)(*(long *)(lVar1 + 0x10) + 0x40))(param_1);
        func_0x000107c61170();
        pppppdVar7 = pppppdVar10;
      }
    }
    func_0x00010442f6d4();
    ppppdStack_b8 = *pppppdVar7;
    ppppdVar6 = pppppdVar7[1];
    pppdStack_b0 = (double ***)ppppdVar6;
    func_0x000107c61438(ppppdVar6,2);
    puVar12 = PTR___sSSN_11034da80;
    func_0x000107c602d4(auStack_a8,&ppppdStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (param_2[2] == (double ***)0x0) {
LAB_103b19104:
      param_1 = 0;
      uStack_78 = 0;
      pppdStack_80 = (double ***)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      puVar8 = auStack_a8;
      func_0x000100df95d0(puVar8);
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_103b19104;
      }
      func_0x0001000bb420(param_2[7] + (long)puVar8 * 4,&pppdStack_80);
      func_0x000107c6142c(ppppdVar6);
      ppppdVar6 = param_2;
    }
    func_0x000107c6142c(ppppdVar6);
    func_0x0001007bbff0(auStack_a8);
    if (lStack_68 == 0) {
      pppppdVar7 = (double *****)&pppdStack_80;
      func_0x000103b24540(pppppdVar7,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar9 = 0;
      FUN_103b24500(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppdVar7 = &ppppdStack_b8;
      func_0x000107c6147c(pppppdVar7,&pppdStack_80,puVar3 + 8,uVar9,6);
      pppppdVar10 = (double *****)ppppdStack_b8;
      if (((ulong)pppppdVar7 & 1) != 0) {
        func_0x000107c4223c(ppppdStack_b8);
        lVar1 = ((undefined8 *)((long)unaff_x20 + _DAT_112fec310))[1];
        func_0x000107c614f0(*(undefined8 *)((long)unaff_x20 + _DAT_112fec310));
        (**(code **)(*(long *)(lVar1 + 0x10) + 0x48))(param_1);
        func_0x000107c61170();
        pppppdVar7 = pppppdVar10;
      }
    }
  }
  func_0x00010442fa10();
  ppppdStack_b8 = *pppppdVar7;
  ppppdVar6 = pppppdVar7[1];
  pppdStack_b0 = (double ***)ppppdVar6;
  func_0x000107c61438(ppppdVar6,2);
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_a8,&ppppdStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_2[2] == (double ***)0x0) {
LAB_103b19230:
    uStack_78 = 0;
    pppdStack_80 = (double ***)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    puVar8 = auStack_a8;
    func_0x000100df95d0(puVar8);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_103b19230;
    }
    func_0x0001000bb420(param_2[7] + (long)puVar8 * 4,&pppdStack_80);
    func_0x000107c6142c(ppppdVar6);
    ppppdVar6 = param_2;
  }
  func_0x000107c6142c(ppppdVar6);
  func_0x0001007bbff0(auStack_a8);
  if (lStack_68 == 0) {
    ppppdVar6 = (double ****)0x112d387f8;
    func_0x000103b24540(&pppdStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    pppppdVar7 = &ppppdStack_b8;
    ppppdVar6 = &pppdStack_80;
    func_0x000107c6147c(pppppdVar7,ppppdVar6,puVar3 + 8,PTR___sSdN_11034dd90,6);
    ppppdVar4 = ppppdStack_b8;
    if (((ulong)pppppdVar7 & 1) != 0) {
      lVar1 = ((undefined8 *)((long)unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0(*(undefined8 *)((long)unaff_x20 + _DAT_112fec310));
      func_0x000107c600d0((double)ppppdVar4 / 1000.0,1);
      (**(code **)(*(long *)(lVar1 + 0x10) + 0x68))();
    }
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110f0c438;
  func_0x000107c5faec();
  ppppdStack_b8 = (double ****)ppuVar11;
  pppdStack_b0 = (double ***)ppppdVar6;
  func_0x000107c61434(ppppdVar6);
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_a8,&ppppdStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_2[2] != (double ***)0x0) {
    func_0x000107c61434(param_2);
    puVar8 = auStack_a8;
    func_0x000100df95d0(puVar8);
    if (((ulong)puVar12 & 1) != 0) {
      func_0x0001000bb420(param_2[7] + (long)puVar8 * 4,&pppdStack_80);
      func_0x000107c6142c(ppppdVar6);
      ppppdVar6 = param_2;
      goto LAB_103b19368;
    }
    func_0x000107c6142c(param_2);
  }
  uStack_78 = 0;
  pppdStack_80 = (double ***)0x0;
  lStack_68 = 0;
  uStack_70 = 0;
LAB_103b19368:
  func_0x000107c6142c(ppppdVar6);
  func_0x0001007bbff0(auStack_a8);
  if (lStack_68 == 0) {
    func_0x000103b24540(&pppdStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar9 = 0;
    FUN_103b24500(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pppppdVar7 = &ppppdStack_b8;
    func_0x000107c6147c(pppppdVar7,&pppdStack_80,puVar3 + 8,uVar9,6);
    ppppdVar6 = ppppdStack_b8;
    if (((ulong)pppppdVar7 & 1) != 0) {
      func_0x000107c436dc(ppppdStack_b8);
      FUN_103b19430(0xd00000000000001a,0x800000010f19f940);
      func_0x000107c61170(ppppdVar6);
    }
  }
  func_0x000103b235ec(param_2);
  return;
}



/* Entry: 103b19430; end: 103b19627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b19430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x2e);
  func_0x000107c5fb78(0xd000000000000022,0x800000010f19f960);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fe00(param_1,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206d6f7266202c78,0xe800000000000000);
  func_0x000107c5fb78(param_2,param_3);
  uVar3 = uStack_78;
  uVar4 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c6142c(uVar3);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar4);
  FUN_103bbb728(0);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x31);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f19f990);
  func_0x000107c5fe00(param_1,&uStack_80,puVar1,puVar2);
  func_0x000107c5fb78(0x3a78,0xe200000000000000);
  func_0x000107c5fb78(param_2,param_3);
  uVar3 = uStack_78;
  func_0x000103bbb224(uStack_80,uStack_78);
  func_0x000107c6142c(uVar3);
  lVar5 = unaff_x20 + _DAT_112fec3d8;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c4e94c((double)(float)param_1);
    func_0x000107c615e8(lVar5);
  }
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112fec310));
  (**(code **)(*(long *)(lVar5 + 0x10) + 0xb8))(param_1);
  return;
}



/* Entry: 103b19628; end: 103b19697; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController didReceiveUpdateProperties:] */

void FUN_103b19628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c61174(param_1);
  FUN_103b18eb0(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b19698; end: 103b197e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b19698(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_138 [56];
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined1 auStack_c8 [24];
  
  func_0x000107c614f0();
  if ((*(byte *)(unaff_x20 + _DAT_112fec398) & 1) == 0) {
    puVar8 = &stack0xffffffffffffff50;
    func_0x000107c61154(puVar8,PTR_s_mediaIsBeingPreparedForDisplay_11260ef10);
    uVar7 = (uint)puVar8;
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec378);
    func_0x000107c61428(puVar1,auStack_c8,0,0);
    if (((*(byte *)((long)puVar1 + 0x4d) & 1) == 0) && ((*(byte *)(puVar1 + 9) & 1) == 0)) {
      lVar10 = puVar1[1];
      if (lVar10 != 0) {
        uVar2 = puVar1[4];
        uVar4 = puVar1[5];
        uVar3 = puVar1[2];
        uVar5 = puVar1[3];
        uVar11 = *puVar1;
        uVar6 = *(undefined2 *)(puVar1 + 6);
        puVar9 = &uStack_100;
        uStack_100 = uVar11;
        lStack_f8 = lVar10;
        uStack_f0 = uVar3;
        uStack_e8 = uVar5;
        uStack_e0 = uVar2;
        uStack_d8 = uVar4;
        uStack_d0 = uVar6;
        func_0x000101e3a290(puVar9,auStack_138);
        FUN_103b24fe4();
        func_0x000101ad91a0(uVar11,lVar10,uVar3,uVar5,uVar2,uVar4,uVar6);
        if ((((ulong)puVar9 & 1) != 0) && ((*(byte *)(unaff_x20 + _DAT_112fec3d0) & 1) == 0)) {
          uVar7 = 1;
          goto LAB_103b19720;
        }
      }
      uVar7 = *(byte *)((long)puVar1 + 0x4c) ^ 1;
    }
    else {
      uVar7 = 0;
    }
  }
LAB_103b19720:
  return uVar7 & 1;
}



/* Entry: 103b197e8; end: 103b1981b; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController mediaIsBeingPreparedForDisplay] */

uint FUN_103b197e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b19698();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103b1981c; end: 103b19a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1981c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)&UNK_1106d3cf8;
  func_0x000107c613fc(&UNK_1106d3cf8,0x18,7);
  func_0x000107c61614(puVar4 + 2);
  lVar1 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(char *)(lVar1 + 0x4b) == '\x01') {
    puVar5 = puVar4;
    func_0x000107c6157c();
    FUN_103bb5c8c();
    uVar6 = *puVar5;
    uVar3 = puVar5[1];
    func_0x000107c61428(puVar4 + 2,auStack_70,0,0);
    puVar5 = puVar4 + 2;
    func_0x000107c61618();
    if (puVar5 != (undefined8 *)0x0) {
      func_0x000107c61434(uVar3);
      func_0x000107c5fadc(uVar6,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c3dd24(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61574(puVar4);
  }
  else {
    puVar7 = &UNK_1106d3d98;
    func_0x000107c613fc(&UNK_1106d3d98,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x103b244b4;
    *(undefined8 **)(puVar7 + 0x18) = puVar4;
    puVar8 = &UNK_1106d3dc0;
    func_0x000107c613fc(&UNK_1106d3dc0,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_103b244bc;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    func_0x000107c61428(lVar1,auStack_70,0x21,0);
    uVar11 = *(ulong *)(lVar1 + 0x70);
    func_0x000107c6157c(puVar4);
    uVar9 = uVar11;
    func_0x000107c61558();
    *(ulong *)(lVar1 + 0x70) = uVar11;
    uVar10 = uVar11;
    if ((uVar9 & 1) == 0) {
      uVar10 = 0;
      FUN_103b22184(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      *(ulong *)(lVar1 + 0x70) = uVar10;
    }
    uVar9 = *(ulong *)(uVar10 + 0x10);
    uVar11 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_103b22184(uVar11,uVar9 + 1,1,uVar10);
    }
    *(ulong *)(uVar11 + 0x10) = uVar9 + 1;
    lVar2 = uVar11 + uVar9 * 0x10;
    *(undefined8 *)(lVar2 + 0x20) = 0x103b245d8;
    *(undefined **)(lVar2 + 0x28) = puVar8;
    *(ulong *)(lVar1 + 0x70) = uVar11;
    func_0x000107c614a8(auStack_70);
  }
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 103b19a0c; end: 103b19a9f;  */

void FUN_103b19a0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = param_1;
  FUN_103bb5c8c();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  func_0x000107c61428(param_1 + 2,auStack_48,0,0);
  param_1 = param_1 + 2;
  func_0x000107c61618();
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c3dd24(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103b19aa0; end: 103b19b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b19aa0(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 uStack_59;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar1,auStack_58,1,0);
  lVar4 = *(long *)(lVar1 + 0x70);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    func_0x000107c61434(lVar4);
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    do {
      pcVar2 = (code *)puVar6[-1];
      uVar3 = *puVar6;
      func_0x000107c6157c(uVar3);
      (*pcVar2)(&uStack_59);
      func_0x000107c61574(uVar3);
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    func_0x000107c6142c(lVar4);
    lVar4 = *(long *)(lVar1 + 0x70);
  }
  *(undefined **)(lVar1 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 103b19b50; end: 103b19e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b19b50(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec378);
  func_0x000107c61428(puVar1,auStack_f0,1,0);
  if ((((*(byte *)((long)puVar1 + 0x4c) & 1) == 0) && (*(char *)((long)puVar1 + 0x4b) == '\x01')) &&
     (lVar12 = puVar1[1], lVar12 != 0)) {
    uVar13 = *puVar1;
    uVar11 = puVar1[2];
    uVar2 = puVar1[3];
    uVar8 = puVar1[4];
    uVar3 = puVar1[5];
    uVar5 = *(undefined2 *)(puVar1 + 6);
    bStack_70 = (byte)uVar5 & 1;
    bStack_6f = (byte)((ushort)uVar5 >> 8) & 1;
    uStack_d8 = uVar13;
    lStack_d0 = lVar12;
    uStack_c8 = uVar11;
    uStack_c0 = uVar2;
    uStack_b8 = uVar8;
    uStack_b0 = uVar3;
    uStack_a8 = uVar5;
    uStack_a0 = uVar13;
    lStack_98 = lVar12;
    uStack_90 = uVar11;
    uStack_88 = uVar2;
    uStack_80 = uVar8;
    uStack_78 = uVar3;
    if (((param_3 & 1) == 0) || (*(char *)(unaff_x20 + _DAT_112fec340) == '\x01')) {
      puVar6 = &uStack_d8;
      func_0x000101e3a290(puVar6,&uStack_128);
      uStack_140 = 1;
    }
    else {
      puVar6 = *(undefined8 **)(unaff_x20 + _DAT_112fec310);
      lVar9 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0();
      lVar9 = *(long *)(lVar9 + 0x10);
      pcVar10 = *(code **)(lVar9 + 8);
      func_0x000101e3a290(&uStack_d8,&uStack_128);
      (*pcVar10)(puVar6,lVar9);
      uStack_140 = (ulong)puVar6 & 0xffffffff;
    }
    FUN_103b24fe4();
    func_0x000101ad91a0(uVar13,lVar12,uVar11,uVar2,uVar8,uVar3,uVar5);
    if ((((ulong)puVar6 & 1) == 0) || ((uStack_140 & 1) == 0)) {
      lVar12 = puVar1[0xb];
      if (lVar12 == 0) {
        return;
      }
      uVar11 = puVar1[0xc];
      bVar4 = *(byte *)(puVar1 + 0xd);
      func_0x000107c61174();
      func_0x000107c61174(uVar11);
      FUN_103b19e8c(1);
      FUN_103b19f58(lVar12,uVar11,bVar4 & 1);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(lVar12);
    }
    else {
      lVar12 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112fec310));
      (**(code **)(*(long *)(lVar12 + 0x10) + 0x80))(&uStack_d8);
      puVar6 = &uStack_d8;
      FUN_103b1a410();
      puVar7 = puVar6;
      FUN_103bb69ec();
      uVar11 = *puVar7;
      uVar8 = puVar7[1];
      func_0x000107c61434(uVar8);
      func_0x000107c5fadc(uVar11,uVar8);
      func_0x000107c6142c(uVar8);
      puVar7 = puVar6;
      FUN_103b17c94(puVar6);
      func_0x000107c6142c(puVar6);
      puVar6 = puVar7;
      func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar7);
      func_0x000107c3dd28();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar6);
      func_0x000103b24540(&uStack_d8,0x112fec5f8,&UNK_10dc55430);
    }
    *(undefined1 *)((long)puVar1 + 0x4c) = 1;
    uStack_128 = 0;
    uStack_120 = 0xe000000000000000;
    func_0x000107c602fc(0x28);
    func_0x000107c6142c(uStack_120);
    uStack_128 = 0xd000000000000026;
    uStack_120 = 0x800000010f19f540;
    func_0x000107c5fb78(param_1,param_2);
    uVar11 = uStack_120;
    uVar8 = uStack_128;
    func_0x000107c5fadc(uStack_128,uStack_120);
    func_0x000107c6142c(uVar11);
    func_0x000107c3d7e8();
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103b19e8c; end: 103b19f57;  */

/* WARNING: Possible PIC construction at 0x000103b19f1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b19f20) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b19e8c(byte param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  if ((param_1 & 1) != *(byte *)(unaff_x20 + _DAT_112fec400)) {
    *(byte *)(unaff_x20 + _DAT_112fec400) = param_1 & 1;
    if (*(long *)(unaff_x20 + _DAT_112fec3e0) != 0) {
      func_0x000107c41a80(*(long *)(unaff_x20 + _DAT_112fec3e0),param_2,~param_1 & 1);
    }
    lVar1 = unaff_x20 + _DAT_112fec3d8;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4deec();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        func_0x000107c4a1d4(lVar1,param_2,unaff_x20,param_1 & 1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103b19f58; end: 103b1a11f;  */

void FUN_103b19f58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = param_1;
  FUN_103bb69b4();
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar1[3] = 6;
  puVar1[2] = 3;
  puVar3 = puVar1;
  FUN_103bb7314();
  uVar5 = puVar3[1];
  puVar1[4] = *puVar3;
  puVar1[5] = uVar5;
  func_0x000107c61434();
  func_0x000107c61174();
  puVar3 = param_1;
  func_0x000107c42784();
  puVar4 = (undefined8 *)0x0;
  FUN_103b153c4();
  puVar1[9] = puVar4;
  puVar1[6] = puVar3;
  FUN_103bb7a98();
  puVar3 = (undefined8 *)puVar4[1];
  puVar1[10] = *puVar4;
  puVar1[0xb] = puVar3;
  uVar5 = 0;
  FUN_103b24500(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar1[0xf] = uVar5;
  puVar1[0xc] = param_1;
  func_0x000107c61434();
  FUN_103bb7ac8();
  uVar5 = puVar3[1];
  puVar1[0x10] = *puVar3;
  puVar1[0x11] = uVar5;
  uVar6 = 0;
  FUN_103b24500(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  puVar1[0x15] = uVar6;
  puVar1[0x12] = param_2;
  func_0x000107c61434(uVar5);
  func_0x000107c61174(param_2);
  puVar3 = puVar1;
  func_0x000100214a84(puVar1);
  func_0x000107c61588(puVar1);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar1 + 4,3,uVar5);
  puVar1 = puVar3;
  func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar3);
  func_0x000107c3dd28();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 103b1a120; end: 103b1a40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1a120(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112fec378);
  func_0x000107c61428(puVar5,auStack_f0,1,0);
  if ((((*(byte *)((long)puVar5 + 0x4d) & 1) == 0) && (*(char *)((long)puVar5 + 0x4b) == '\x01')) &&
     (lVar11 = puVar5[1], lVar11 != 0)) {
    uVar12 = *puVar5;
    uVar7 = puVar5[2];
    uVar1 = puVar5[3];
    uVar10 = puVar5[4];
    uVar2 = puVar5[5];
    uVar3 = *(undefined2 *)(puVar5 + 6);
    bStack_70 = (byte)uVar3 & 1;
    bStack_6f = (byte)((ushort)uVar3 >> 8) & 1;
    uStack_d8 = uVar12;
    lStack_d0 = lVar11;
    uStack_c8 = uVar7;
    uStack_c0 = uVar1;
    uStack_b8 = uVar10;
    uStack_b0 = uVar2;
    uStack_a8 = uVar3;
    uStack_a0 = uVar12;
    lStack_98 = lVar11;
    uStack_90 = uVar7;
    uStack_88 = uVar1;
    uStack_80 = uVar10;
    uStack_78 = uVar2;
    if ((param_1 & 1) == 0) {
      puVar6 = &uStack_d8;
      func_0x000101e3a290(puVar6,&uStack_128);
      puVar14 = (undefined8 *)0x1;
    }
    else {
      puVar6 = *(undefined8 **)(unaff_x20 + _DAT_112fec310);
      lVar13 = ((long *)(unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0();
      lVar13 = *(long *)(lVar13 + 0x10);
      pcVar9 = *(code **)(lVar13 + 8);
      func_0x000101e3a290(&uStack_d8,&uStack_128);
      (*pcVar9)(puVar6,lVar13);
      puVar14 = puVar6;
    }
    FUN_103b24fe4();
    func_0x000101ad91a0(uVar12,lVar11,uVar7,uVar1,uVar10,uVar2,uVar3);
    if ((((ulong)puVar6 & 1) != 0) && (((ulong)puVar14 & 1) != 0)) {
      *(undefined1 *)((long)puVar5 + 0x4d) = 1;
      lVar11 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112fec310));
      (**(code **)(*(long *)(lVar11 + 0x10) + 0x80))(&uStack_d8);
      puVar5 = &uStack_d8;
      FUN_103b1a410(puVar5);
      puVar6 = &uStack_d8;
      func_0x000103b24540(puVar6,0x112fec5f8,&UNK_10dc55430);
      if (*(char *)(unaff_x20 + _DAT_112fec408) == '\x01') {
        puVar6 = *(undefined8 **)(unaff_x20 + _DAT_112fec370);
        if (puVar6 != (undefined8 *)0x0) {
          func_0x000107c41d4c();
        }
      }
      func_0x00010445132c();
      uStack_128 = *puVar6;
      uStack_120 = puVar6[1];
      func_0x000107c61434();
      puVar4 = PTR___sSSN_11034da80;
      puVar6 = &uStack_128;
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c5fbd4(puVar6,PTR___sSSN_11034da80,
                          PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,
                          PTR___sSSSTsWP_11034daa0);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar8);
      puVar14 = puVar5;
      FUN_103b17c94(puVar5);
      func_0x000107c6142c(puVar5);
      puVar5 = puVar14;
      func_0x000107c5f9dc(puVar14,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar14);
      func_0x000107c3dd28(unaff_x20);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      FUN_103b1a9ac();
    }
    func_0x000107c4e230();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11307abc8);
      func_0x000107c61434(uVar10);
      func_0x000107c61170(unaff_x20);
      uVar7 = uVar10;
      func_0x00010018cc3c(uVar10);
      func_0x000107c6142c(uVar10);
      func_0x000103b235ec(uVar7);
      func_0x000107c6142c(uVar7);
    }
  }
  return;
}



/* Entry: 103b1a410; end: 103b1a9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_103b1a410(double param_1,long *param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  double *pdVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar10 = *param_2;
  pdVar1 = (double *)(PTR__CGSizeZero_110347620 + 8);
  pdVar3 = (double *)PTR__CGSizeZero_110347620;
  if (lVar10 != 0) {
    pdVar1 = (double *)(param_2 + 6);
    pdVar3 = (double *)(param_2 + 5);
  }
  dVar14 = *pdVar1;
  dVar16 = *pdVar3;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  dVar12 = param_1;
  func_0x000107c61170(puVar4);
  func_0x000107c5ee58();
  puVar5 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103b239fc();
  puVar6 = puVar5;
  FUN_103bb747c();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  dVar17 = 0.0;
  dVar15 = 0.0;
  if (lVar10 != 0) {
    dVar15 = (double)param_2[1] * 1000.0;
  }
  puVar7 = puVar6;
  func_0x000107c61434(puVar6);
  func_0x000107c5fdd0(dVar15);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar7,uVar2,puVar6,puVar8);
  func_0x000107c6142c();
  FUN_103bb74b4();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  if (lVar10 != 0) {
    dVar17 = (double)param_2[2] * 1000.0;
  }
  puVar7 = puVar6;
  func_0x000107c61434(puVar6);
  func_0x000107c5fdd0(dVar17);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar7,uVar2,puVar6,puVar8);
  func_0x000107c6142c();
  FUN_103bb74ec();
  puVar7 = (undefined8 *)*puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  if (lVar10 == 0) {
    func_0x000107c61434(puVar6);
    FUN_103b1581c(puVar7,puVar6);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170();
  }
  else {
    func_0x000107c61434(puVar6);
    func_0x000107c4d444(lVar10);
    func_0x000107c61180();
    puVar8 = puVar5;
    func_0x000107c61558(puVar5);
    FUN_103b158d8(lVar10,puVar7,puVar6,puVar8);
    func_0x000107c6142c();
    puVar7 = puVar6;
  }
  FUN_103bb7198();
  uVar2 = *puVar7;
  puVar6 = (undefined8 *)puVar7[1];
  puVar7 = puVar6;
  func_0x000107c61434(puVar6);
  func_0x000107c5f06c(dVar16);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar7,uVar2,puVar6,puVar8);
  func_0x000107c6142c();
  FUN_103bb7168();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  puVar7 = puVar6;
  func_0x000107c61434(puVar6);
  func_0x000107c5f06c(dVar14);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar7,uVar2,puVar6,puVar8);
  func_0x000107c6142c();
  FUN_103bb7588();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  puVar7 = puVar6;
  func_0x000107c61434(puVar6);
  func_0x000107c5fdd0(dVar12 * 1000.0);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar7,uVar2,puVar6,puVar8);
  func_0x000107c6142c();
  FUN_103bb7b2c();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  puVar7 = puVar6;
  func_0x000107c61434(puVar6);
  func_0x000107c5f06c(dVar16 * param_1);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar7,uVar2,puVar6,puVar8);
  func_0x000107c6142c();
  FUN_103bb7b6c();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  puVar7 = puVar6;
  func_0x000107c61434(puVar6);
  func_0x000107c5f06c(dVar14 * param_1);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar7,uVar2,puVar6,puVar8);
  func_0x000107c6142c();
  FUN_103bb7bac();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  func_0x000107c61434(puVar6);
  lVar10 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x103b1a9a8);
    (*pcVar11)();
  }
  uVar13 = *(undefined8 *)(lVar10 + _DAT_112fec8e8);
  func_0x000107c61170();
  func_0x000107c5f06c(uVar13);
  puVar7 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(lVar10,uVar2,puVar6,puVar7);
  func_0x000107c6142c();
  FUN_103bb7be4();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  func_0x000107c61434(puVar6);
  lVar10 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x103b1a9ac);
    (*pcVar11)();
  }
  uVar13 = *(undefined8 *)(lVar10 + _DAT_112fec8e8 + 8);
  func_0x000107c61170();
  func_0x000107c5f06c(uVar13);
  puVar7 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(lVar10,uVar2,puVar6,puVar7);
  func_0x000107c6142c();
  FUN_103bb7550();
  uVar2 = *puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
  lVar10 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c614f0(uVar13);
  pcVar11 = *(code **)(lVar10 + 0x20);
  func_0x000107c61434(puVar6);
  (*pcVar11)(uVar13,lVar10);
  func_0x000107c4e93c();
  func_0x000107c615e8(uVar13);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar7 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(puVar4,uVar2,puVar6,puVar7);
  func_0x000107c6142c();
  FUN_103bb7ce4();
  uVar2 = *puVar6;
  uVar13 = puVar6[1];
  uVar9 = (ulong)*(byte *)(unaff_x20 + _DAT_112fec340);
  func_0x000107c61434(uVar13);
  func_0x000107c5fca0(uVar9);
  puVar6 = puVar5;
  func_0x000107c61558(puVar5);
  FUN_103b158d8(uVar9,uVar2,uVar13,puVar6);
  func_0x000107c6142c(uVar13);
  return puVar5;
}



/* Entry: 103b1a9ac; end: 103b1aecb;  */

/* WARNING: Possible PIC construction at 0x000103b1ab8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b1ad90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1ab90) */
/* WARNING: Removing unreachable block (ram,0x000103b1ab98) */
/* WARNING: Removing unreachable block (ram,0x000103b1aeb8) */
/* WARNING: Removing unreachable block (ram,0x000103b1ab9c) */
/* WARNING: Removing unreachable block (ram,0x000103b1aba0) */
/* WARNING: Removing unreachable block (ram,0x000103b1abac) */
/* WARNING: Removing unreachable block (ram,0x000103b1ad94) */
/* WARNING: Removing unreachable block (ram,0x000103b1ae0c) */
/* WARNING: Removing unreachable block (ram,0x000103b1adc0) */
/* WARNING: Removing unreachable block (ram,0x000103b1ae2c) */
/* WARNING: Removing unreachable block (ram,0x000103b1add4) */
/* WARNING: Removing unreachable block (ram,0x000103b1abb8) */
/* WARNING: Removing unreachable block (ram,0x000103b1abbc) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac0c) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac20) */
/* WARNING: Removing unreachable block (ram,0x000103b1abc4) */
/* WARNING: Removing unreachable block (ram,0x000103b1aeac) */
/* WARNING: Removing unreachable block (ram,0x000103b1abd0) */
/* WARNING: Removing unreachable block (ram,0x000103b1aea8) */
/* WARNING: Removing unreachable block (ram,0x000103b1abe4) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac24) */
/* WARNING: Removing unreachable block (ram,0x000103b1adf8) */
/* WARNING: Removing unreachable block (ram,0x000103b1adfc) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac64) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac68) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac88) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac98) */
/* WARNING: Removing unreachable block (ram,0x000103b1ad54) */
/* WARNING: Removing unreachable block (ram,0x000103b1ad68) */
/* WARNING: Removing unreachable block (ram,0x000103b1aca0) */
/* WARNING: Removing unreachable block (ram,0x000103b1aeb4) */
/* WARNING: Removing unreachable block (ram,0x000103b1acac) */
/* WARNING: Removing unreachable block (ram,0x000103b1aeb0) */
/* WARNING: Removing unreachable block (ram,0x000103b1acc0) */
/* WARNING: Removing unreachable block (ram,0x000103b1ad6c) */
/* WARNING: Removing unreachable block (ram,0x000103b1ad1c) */
/* WARNING: Removing unreachable block (ram,0x000103b1ad50) */
/* WARNING: Removing unreachable block (ram,0x000103b1ad8c) */
/* WARNING: Removing unreachable block (ram,0x000103b1abf8) */
/* WARNING: Removing unreachable block (ram,0x000103b1ac08) */
/* WARNING: Removing unreachable block (ram,0x000103b1adf4) */
/* WARNING: Removing unreachable block (ram,0x000103b1ae4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1a9ac(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar3 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1aecc);
      (*pcVar2)();
    }
    uVar7 = *(ulong *)(unaff_x20 + _DAT_112fec918);
    func_0x000107c61434(uVar7);
    func_0x000107c61170(unaff_x20);
    if (uVar7 != 0) {
      uVar9 = uVar7 & 0xffffffffffffff8;
      if (uVar7 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar8 = uVar7;
        if (-1 < (long)uVar7) {
          uVar8 = uVar9;
        }
        func_0x000107c60480();
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
      if (uVar8 != 0) {
        uVar6 = 0;
        do {
          while( true ) {
            if ((uVar7 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar9 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1ab68);
                (*pcVar2)();
              }
              uVar4 = *(ulong *)(uVar7 + uVar6 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar4 = uVar6;
              FUN_103b22688(uVar6,uVar7);
            }
            if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1ab64);
              (*pcVar2)();
            }
            uVar10 = uVar6 + 1;
            if (*(int *)(uVar4 + _DAT_113079da8) != 0) break;
            puVar5 = puVar1;
            func_0x000107c61558();
            if (((ulong)puVar5 & 1) == 0) {
              func_0x000103b22824(0,*(long *)(puVar1 + 0x10) + 1,1);
            }
            uVar6 = *(ulong *)(puVar1 + 0x10);
            if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar6) {
              func_0x000103b22824(1 < *(ulong *)(puVar1 + 0x18),uVar6 + 1,1);
            }
            *(ulong *)(puVar1 + 0x10) = uVar6 + 1;
            *(ulong *)(puVar1 + uVar6 * 8 + 0x20) = uVar4;
            uVar6 = uVar10;
            if (uVar10 == uVar8) goto LAB_103b1ab88;
          }
          func_0x000107c61170();
          uVar6 = uVar6 + 1;
        } while (uVar10 != uVar8);
      }
LAB_103b1ab88:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
      return;
    }
  }
  return;
}



/* Entry: 103b1aecc; end: 103b1b0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1aecc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar1,auStack_58,1,0);
  uVar6 = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  func_0x000107c614b0(param_1);
  func_0x000107c614ac(uVar6);
  uStack_70 = param_1;
  func_0x000107c614b0(param_1);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = &uStack_60;
  func_0x000107c6147c(puVar4,&uStack_70,uVar6,&UNK_1106e89a8,6);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x000103b24abc(0);
    uVar3 = uStack_60;
    FUN_103b2496c();
    func_0x000101e596c4(uStack_60);
    puVar4 = *(undefined8 **)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = uVar3;
    func_0x000107c614ac();
  }
  FUN_103b18784();
  puVar5 = puVar4;
  func_0x0001012254e8();
  func_0x000107c6142c();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_103bb6a24();
    uVar3 = *puVar4;
    uVar2 = puVar4[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar3,uVar2);
    func_0x000107c6142c(uVar2);
    puVar4 = puVar5;
    func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar5);
    func_0x000107c3dd28();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd000000000000010;
    uStack_68 = 0x800000010f19f570;
    uStack_60 = param_1;
    func_0x000107c614b0(param_1);
    func_0x000107c5fb18(&uStack_60,uVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
    uVar6 = uStack_68;
    uVar3 = uStack_70;
    func_0x000107c5fadc(uStack_70,uStack_68);
    func_0x000107c6142c(uVar6);
    func_0x000107c3d7e8();
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103b1b0d8; end: 103b1b2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b0d8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined1 auStack_f0 [136];
  undefined1 auStack_68 [24];
  
  lVar1 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar1,auStack_68,0,0);
  if (*(char *)(lVar1 + 0x4b) == '\x01') {
    puVar3 = (undefined8 *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    puVar3[3] = 4;
    puVar3[2] = 2;
    puVar4 = puVar3;
    FUN_103bb7c48();
    puVar5 = (undefined8 *)puVar4[1];
    puVar8 = puVar3 + 4;
    *puVar8 = *puVar4;
    puVar3[5] = puVar5;
    func_0x000107c614cc(param_1,auStack_f0,auStack_108);
    puVar3[9] = lStack_100;
    func_0x0001000a9d90(puVar3 + 6);
    (**(code **)(*(long *)(lStack_100 + -8) + 0x10))();
    func_0x000107c61434();
    FUN_103bb67c4();
    uVar7 = puVar5[1];
    puVar3[10] = *puVar5;
    puVar3[0xb] = uVar7;
    func_0x000107c61434();
    FUN_103b23bf8(param_1);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    uVar7 = 0;
    FUN_103b24500(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar3[0xf] = uVar7;
    puVar3[0xc] = puVar6;
    puVar5 = puVar3;
    func_0x000100214a84(puVar3);
    func_0x000107c61588(puVar3);
    uVar7 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408(puVar8,2,uVar7);
    FUN_103bb6610();
    uVar7 = *puVar8;
    uVar2 = puVar8[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c6142c(uVar2);
    puVar3 = puVar5;
    func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar5);
    func_0x000107c3dd28();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 103b1b2c0; end: 103b1b3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b2c0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_d8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff40,PTR_s_teardown_112678538);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112fec310));
  (**(code **)(lVar2 + 0x38))();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fec370);
  *(undefined8 *)(unaff_x20 + _DAT_112fec370) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec378);
  func_0x000107c61428(puVar1,auStack_d8,1,0);
  uStack_68 = puVar1[9];
  uStack_70 = puVar1[8];
  uStack_58 = puVar1[0xb];
  uStack_60 = puVar1[10];
  uStack_50 = puVar1[0xc];
  uStack_48 = (undefined2)puVar1[0xd];
  uStack_3e = *(undefined8 *)((long)puVar1 + 0x72);
  uStack_46 = (undefined6)*(undefined8 *)((long)puVar1 + 0x6a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)puVar1 + 0x6a) >> 0x30);
  uStack_a8 = puVar1[1];
  uStack_b0 = *puVar1;
  uStack_98 = puVar1[3];
  uStack_a0 = puVar1[2];
  uStack_88 = puVar1[5];
  uStack_90 = puVar1[4];
  uStack_78 = puVar1[7];
  uStack_80 = puVar1[6];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)((long)puVar1 + 0x2f) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((long)puVar1 + 0x46) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[10] = 0x3ffc71c71c71c71c;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined2 *)(puVar1 + 0xf) = 1;
  func_0x000103b24580(&uStack_b0);
  if (*(long *)(unaff_x20 + _DAT_112fec3e0) != 0) {
    func_0x000107c41a80();
  }
  return;
}



/* Entry: 103b1b3f4; end: 103b1b41b; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController teardown] */

void FUN_103b1b3f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b1b2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1b41c; end: 103b1b493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b41c(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_pause_11261b0e8);
  lVar1 = *(long *)(unaff_x20 + _DAT_112fec3f8);
  if ((lVar1 != 0) && (func_0x000107c5b9ec(), (int)lVar1 != 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112fec380) = 1;
  }
  FUN_103b1b494(0xd000000000000022,0x800000010f19f910);
  return;
}



/* Entry: 103b1b494; end: 103b1b5d7;  */

/* WARNING: Possible PIC construction at 0x000103b1b52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b19f1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1b530) */
/* WARNING: Removing unreachable block (ram,0x000103b19e8c) */
/* WARNING: Removing unreachable block (ram,0x000103b19eb4) */
/* WARNING: Removing unreachable block (ram,0x000103b19ecc) */
/* WARNING: Removing unreachable block (ram,0x000103b19ed8) */
/* WARNING: Removing unreachable block (ram,0x000103b19f34) */
/* WARNING: Removing unreachable block (ram,0x000103b19eec) */
/* WARNING: Removing unreachable block (ram,0x000103b19f44) */
/* WARNING: Removing unreachable block (ram,0x000103b19f04) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000103b19f20) */

void FUN_103b1b494(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f19f650);
  func_0x000107c6142c(0x800000010f19f650);
  func_0x000107c3d7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b1b5d8; end: 103b1b5ff; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController pause] */

void FUN_103b1b5d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b1b41c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1b600; end: 103b1b68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b600(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_resume_11262ce90);
  lVar1 = *(long *)(unaff_x20 + _DAT_112fec3f8);
  if ((lVar1 != 0) && (func_0x000107c5b9ec(), (int)lVar1 != 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112fec380) = 0;
  }
  FUN_103b1b68c(0xd000000000000023,0x800000010f19f8e0);
  if (*(long *)(unaff_x20 + _DAT_112fec3e0) != 0) {
    func_0x000107c41a80();
  }
  return;
}



/* Entry: 103b1b68c; end: 103b1b80b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b68c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112fec3f0) & 1) == 0) {
    uVar3 = unaff_x20;
    func_0x000107c4e2fc();
    func_0x000107c61180();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1b80c);
      (*pcVar2)();
    }
    uVar4 = uVar3;
    func_0x000107c4a180();
    func_0x000107c615e8(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x000107c602fc(0x1e);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_1,param_2);
      uVar5 = 0xd00000000000001c;
      func_0x000107c5fadc(0xd00000000000001c,0x800000010f19f430);
      func_0x000107c6142c(0x800000010f19f430);
      func_0x000107c3d7e8();
      func_0x000107c61170(uVar5);
      FUN_103bbb728(0);
      func_0x000107c602fc(0x24);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000103bbb224(0xd000000000000022,0x800000010f19f450);
      func_0x000107c6142c(0x800000010f19f450);
      lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112fec310));
      (**(code **)(*(long *)(lVar1 + 0x10) + 0x28))();
    }
  }
  return;
}



/* Entry: 103b1b80c; end: 103b1b833; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController resume] */

void FUN_103b1b80c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b1b600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1b834; end: 103b1b92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b834(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(0xe000000000000000);
  bVar3 = (param_1 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar3) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f19f8c0);
  func_0x000107c6142c(0x800000010f19f8c0);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c614f0(uVar4);
  (**(code **)(*(long *)(lVar2 + 0x10) + 0x90))(param_1,uVar4);
  return;
}



/* Entry: 103b1b930; end: 103b1b95f; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController setMuted:] */

void FUN_103b1b930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103b1b834(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1b960; end: 103b1b9eb; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController setVolume:] */

/* WARNING: Possible PIC construction at 0x000103b1b9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1b9a4) */
/* WARNING: Removing unreachable block (ram,0x000103b1b9a8) */
/* WARNING: Removing unreachable block (ram,0x000103b1b9d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b960(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61174();
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b1b9ec);
  (*pcVar1)();
}



/* Entry: 103b1b9ec; end: 103b1baaf; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController overridePlaybackToLastPositionForResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1b9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  puVar1 = (ulong *)(param_1 + _DAT_112fec310);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c614f0();
  lVar5 = *(long *)(uVar4 + 0x10);
  pcVar6 = *(code **)(lVar5 + 0x70);
  func_0x000107c61174(param_1);
  (*pcVar6)(uVar3,lVar5);
  uVar4 = uVar3;
  func_0x000107c600c4();
  if ((uVar4 & 1) != 0) {
    uVar4 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c614f0(uVar4);
    (**(code **)(*(long *)(uVar2 + 0x10) + 0x60))(uVar3,lVar5,param_3,0,0,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1bab0; end: 103b1c02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1bab0(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_88 [24];
  
  func_0x000107c614f0();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f19f850);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar3);
  FUN_103bbb728(0);
  func_0x000103bbb224(0xd00000000000002a,0x800000010f19f870);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewWillFullyAppear_112685468);
  lVar6 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar6,auStack_88,1,0);
  *(undefined1 *)(lVar6 + 0x79) = 1;
  lVar6 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar6 != 0) {
    FUN_103b17bd8();
    func_0x000107c61170(lVar6);
  }
  FUN_103b23390();
  if (*(char *)(unaff_x20 + _DAT_112fec3a8) == '\x01') {
    func_0x000103b1bda8(0xd000000000000013,0x800000010f19f8a0);
  }
  lVar6 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103b1bda0);
    (*pcVar7)();
  }
  plVar1 = (long *)(lVar6 + _DAT_112fec8f8);
  lVar10 = *plVar1;
  lVar11 = plVar1[2];
  lVar2 = plVar1[3];
  lVar9 = plVar1[4];
  func_0x000107c61434(lVar9);
  func_0x000107c61170(lVar6);
  if (lVar9 == 0) {
    return;
  }
  lVar6 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103b1bda4);
    (*pcVar7)();
  }
  lVar8 = *(long *)(lVar6 + _DAT_112fec900);
  func_0x000107c61434(lVar8);
  func_0x000107c61170(lVar6);
  if (lVar8 == 0) goto LAB_103b1bd74;
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103b1bda8);
    (*pcVar7)();
  }
  lVar4 = lVar6;
  func_0x000107c5c42c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar4 == 0) {
    func_0x000107c6142c(lVar9);
    lVar9 = lVar8;
    goto LAB_103b1bd74;
  }
  if (1 < lVar10) {
    if (lVar10 == 2) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
      lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0(uVar3);
      lVar6 = *(long *)(lVar6 + 0x10);
      pcVar7 = *(code **)(lVar6 + 0x50);
      lVar11 = 0;
      uVar5 = 0;
    }
    else {
      if (lVar10 != 3) goto LAB_103b1bd64;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
      lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
      func_0x000107c614f0(uVar3);
      lVar6 = *(long *)(lVar6 + 0x10);
      pcVar7 = *(code **)(lVar6 + 0x50);
      uVar5 = 1;
    }
    (*pcVar7)(lVar11,1,uVar5,1,lVar8,lVar4,lVar2,lVar9,uVar3,lVar6);
  }
LAB_103b1bd64:
  func_0x000107c6142c(lVar9);
  func_0x000107c61170(lVar4);
  lVar9 = lVar8;
LAB_103b1bd74:
  func_0x000107c6142c(lVar9);
  return;
}



/* Entry: 103b1c030; end: 103b1c057; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewWillFullyAppear] */

void FUN_103b1c030(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b1bab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1c058; end: 103b1c3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1c058(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined1 auStack_138 [56];
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fec378);
  func_0x000107c61428(puVar1,auStack_b8,1,0);
  if (((*(byte *)((long)puVar1 + 0x79) & 1) == 0) &&
     (*(char *)(unaff_x20 + _DAT_112fec3a0) == '\x01')) {
    FUN_103b1bab0();
  }
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f19f7e0);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar13);
  FUN_103bbb728(0);
  func_0x000103bbb224(0xd000000000000026,0x800000010f19f800);
  func_0x000107c61154(&stack0xffffffffffffff38,PTR_s_viewDidFullyAppear_112684c88);
  if (*(char *)(puVar1 + 0xf) == '\x01') {
    lVar14 = *(long *)(unaff_x20 + _DAT_112fec350);
    func_0x000107c3cf54(*(undefined8 *)(lVar14 + 0x18));
    *(undefined8 *)(lVar14 + 0x20) = param_1;
    lVar14 = puVar1[1];
  }
  else {
    *(undefined1 *)(puVar1 + 0xf) = 1;
    lVar14 = puVar1[1];
  }
  if (lVar14 != 0) {
    uVar15 = *puVar1;
    uVar13 = puVar1[2];
    uVar3 = puVar1[3];
    uVar2 = puVar1[4];
    uVar4 = puVar1[5];
    uVar5 = *(undefined2 *)(puVar1 + 6);
    bStack_70 = (byte)uVar5 & 1;
    bStack_6f = (byte)((ushort)uVar5 >> 8) & 1;
    puVar7 = &uStack_100;
    uStack_100 = uVar15;
    lStack_f8 = lVar14;
    uStack_f0 = uVar13;
    uStack_e8 = uVar3;
    uStack_e0 = uVar2;
    uStack_d8 = uVar4;
    uStack_d0 = uVar5;
    uStack_a0 = uVar15;
    lStack_98 = lVar14;
    uStack_90 = uVar13;
    uStack_88 = uVar3;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
    func_0x000101e3a290(puVar7,auStack_138);
    FUN_103b24fe4();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000101ad91a0(uVar15,lVar14,uVar13,uVar3,uVar2,uVar4,uVar5);
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fec320);
      func_0x000107c61174();
      lVar9 = unaff_x20;
      func_0x000107c4dec0();
      func_0x000107c61180();
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103b1c3b8);
        (*pcVar6)();
      }
      uVar10 = *(undefined8 *)(lVar9 + _DAT_11307a248);
      func_0x000107c61174(uVar10);
      func_0x000107c61170(lVar9);
      puVar11 = PTR_PTR_1126d2b60;
      func_0x000107c610f8();
      uVar12 = uVar15;
      func_0x000107c5fadc(uVar15,lVar14);
      func_0x000107c47f48(0);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar12);
      func_0x000101ad91a0(uVar15,lVar14,uVar13,uVar3,uVar2,uVar4,uVar5);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112fec370);
      *(undefined **)(unaff_x20 + _DAT_112fec370) = puVar11;
      func_0x000107c61170(uVar13);
    }
  }
  *(undefined1 *)((long)puVar1 + 0x4b) = 1;
  *(undefined1 *)((long)puVar1 + 0x49) = 1;
  func_0x000103b1bda8(0xd000000000000012,0x800000010f19f830);
  FUN_103b19aa0();
  FUN_103b19b50(0xd000000000000012,0x800000010f19f830,1);
  FUN_103b1a120(1);
  lVar14 = puVar1[8];
  if (lVar14 != 0) {
    func_0x000107c614b0(lVar14);
    FUN_103b1b0d8(lVar14);
    func_0x000107c614ac(lVar14);
  }
  lVar14 = *(long *)(unaff_x20 + _DAT_112fec310);
  func_0x000107c41054();
  func_0x000107c61180();
  if (lVar14 != 0) {
    FUN_103b1c3b8();
    func_0x000107c615e8(lVar14);
  }
  return;
}



/* Entry: 103b1c3b8; end: 103b1c557;  */

/* WARNING: Possible PIC construction at 0x000103b1c428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b1c470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b1c490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b1c4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b1c514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1c494) */
/* WARNING: Removing unreachable block (ram,0x000103b1c474) */
/* WARNING: Removing unreachable block (ram,0x000103b1c530) */
/* WARNING: Removing unreachable block (ram,0x000103b1c478) */
/* WARNING: Removing unreachable block (ram,0x000103b1c42c) */
/* WARNING: Removing unreachable block (ram,0x000103b1c430) */
/* WARNING: Removing unreachable block (ram,0x000103b1c554) */
/* WARNING: Removing unreachable block (ram,0x000103b1c450) */
/* WARNING: Removing unreachable block (ram,0x000103b1c4f0) */
/* WARNING: Removing unreachable block (ram,0x000103b1c538) */
/* WARNING: Removing unreachable block (ram,0x000103b1c53c) */

void FUN_103b1c3b8(int param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000109128f34();
  if (param_1 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c4deec();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4e2fc();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar2 = unaff_x20;
        func_0x000107c4e260();
        if ((int)lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(unaff_x20);
          return;
        }
        func_0x000107c4fd44(unaff_x20,param_2,lVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103b1c558; end: 103b1c57f; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewDidFullyAppear] */

void FUN_103b1c558(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b1c058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1c580; end: 103b1c7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1c580(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f19f7c0);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillFullyDisappear_112685470);
  if (*(long *)(unaff_x20 + _DAT_112fec370) != 0) {
    func_0x000107c41b90();
  }
  lVar1 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar1,auStack_58,1,0);
  *(undefined2 *)(lVar1 + 0x4b) = 0;
  *(undefined1 *)(lVar1 + 0x79) = 0;
  *(undefined1 *)(lVar1 + 0x4d) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x20))();
  uVar3 = uVar2;
  func_0x000107c4ca74();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  FUN_103b24500(0,0x112e32da8,&PTR_PTR_1126a9668);
  uVar4 = uVar3;
  func_0x000107c5fc54(uVar3,uVar2);
  func_0x000107c61170(uVar3);
  puVar5 = (undefined8 *)0x112fec620;
  func_0x0001000285a8(0x112fec620,&UNK_10dc55458);
  func_0x000107c61534();
  puVar5[3] = 2;
  puVar5[2] = 1;
  puVar6 = puVar5;
  FUN_103bb7cac();
  uVar2 = puVar6[1];
  puVar7 = puVar5 + 4;
  *puVar7 = *puVar6;
  puVar5[5] = uVar2;
  puVar5[6] = uVar4;
  func_0x000107c61434();
  puVar6 = puVar5;
  func_0x000103b23afc(puVar5);
  func_0x000107c61588(puVar5);
  func_0x000103b24540(puVar7,0x112fec628,&UNK_10dc55460);
  FUN_103bba034();
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  func_0x000107c61434(uVar3);
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  puVar5 = puVar6;
  func_0x000103b17f54(puVar6);
  func_0x000107c6142c(puVar6);
  puVar6 = puVar5;
  func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar5);
  func_0x000107c3dd28();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 103b1c7ac; end: 103b1c7d3; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewWillFullyDisappear] */

void FUN_103b1c7ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b1c580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1c7d4; end: 103b1ca3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1c7d4(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f19f750);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar4);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidFullyDisappear_112684ca8);
  lVar3 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar3,auStack_58,1,0);
  *(undefined1 *)(lVar3 + 0x4b) = 0;
  *(undefined1 *)(lVar3 + 0x79) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fec3f0) = 0;
  lVar3 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1ca34);
    (*pcVar2)();
  }
  cVar1 = *(char *)(lVar3 + _DAT_112fec930);
  func_0x000107c61170();
  if (((*(byte *)(unaff_x20 + _DAT_112fec380) & 1) == 0) && (cVar1 == '\0')) {
    FUN_103bbb728(0);
    func_0x000103bbb224(0xd000000000000026,0x800000010f19f770);
    lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112fec310));
    (**(code **)(*(long *)(lVar3 + 0x10) + 0x38))();
    FUN_103b19e8c(0);
  }
  else {
    FUN_103b1b494(0xd000000000000015,0x800000010f19f7a0);
  }
  lVar3 = unaff_x20;
  func_0x000107c4dec0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + _DAT_11307a280);
    func_0x000107c615f0(lVar5);
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c4d15c(lVar5);
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      func_0x000107c3fa9c(lVar3);
      func_0x000107c615e8(lVar3);
    }
    lVar3 = unaff_x20;
    func_0x000107c4dec0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + _DAT_11307a280);
      func_0x000107c615f0(lVar5);
      func_0x000107c61170(lVar3);
      if (lVar5 != 0) {
        lVar3 = lVar5;
        func_0x000107c4d15c(lVar5);
        func_0x000107c61180();
        func_0x000107c615e8(lVar5);
        func_0x000107c3fa9c(lVar3);
        func_0x000107c615e8(lVar3);
      }
      lVar3 = _DAT_112fec410;
      uVar4 = 0;
      if (*(long *)(unaff_x20 + _DAT_112fec410) != 0) {
        func_0x000107c498f8();
        uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
      }
      *(undefined8 *)(unaff_x20 + lVar3) = 0;
      func_0x000107c61170(uVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1ca3c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b1ca38);
  (*pcVar2)();
}



/* Entry: 103b1ca3c; end: 103b1ca63; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewDidFullyDisappear] */

void FUN_103b1ca3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b1c7d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1ca64; end: 103b1cb87; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewWillBeginTransitionIn:] */

/* WARNING: Possible PIC construction at 0x000103b1cab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1cab8) */
/* WARNING: Removing unreachable block (ram,0x000103b1cac8) */
/* WARNING: Removing unreachable block (ram,0x000103b1cadc) */

void FUN_103b1ca64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f19f6e0);
  func_0x000107c3d7e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b1cb88; end: 103b1cbaf; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewWillBeginTransitionOut] */

void FUN_103b1cb88(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103b1caf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1cbb0; end: 103b1cc27; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewDidCancelTransitionOut:] */

/* WARNING: Possible PIC construction at 0x000103b1cc00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1cc04) */

void FUN_103b1cbb0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f19f6a0);
  func_0x000107c3d7e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b1cc28; end: 103b1cc97; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController viewDidCancelTransitionIn] */

/* WARNING: Possible PIC construction at 0x000103b1cc70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b1cc74) */

void FUN_103b1cc28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f19f630);
  func_0x000107c3d7e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b1cc98; end: 103b1cdb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1cc98(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar1 = _DAT_112fec380;
  cVar3 = *(char *)(unaff_x20 + _DAT_112fec380);
  *(byte *)(unaff_x20 + _DAT_112fec380) = param_1;
  uStack_58 = 0;
  uStack_50 = 0xe000000000000000;
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(uStack_50);
  uStack_58 = 0xd000000000000017;
  uStack_50 = 0x800000010f19f610;
  bVar4 = (param_1 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar4) {
    uVar2 = 0x65736c6166;
  }
  uVar5 = 0xe400000000000000;
  if (bVar4) {
    uVar5 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  uVar2 = uStack_50;
  uVar5 = uStack_58;
  func_0x000107c5fadc(uStack_58,uStack_50);
  func_0x000107c6142c(uVar2);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar5);
  if ((cVar3 == '\x01') && ((*(byte *)(unaff_x20 + lVar1) & 1) == 0)) {
    lVar1 = unaff_x20 + _DAT_112fec378;
    func_0x000107c61428(lVar1,&uStack_58,1,0);
    *(undefined1 *)(lVar1 + 0x78) = 0;
  }
  return;
}



/* Entry: 103b1cdb4; end: 103b1cde3; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController setPausedForAttachment:] */

void FUN_103b1cdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103b1cc98(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1cde4; end: 103b1cdf7; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController overridePauseStateToPause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1cde4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112fec3f0) = 1;
  return;
}



/* Entry: 103b1cdf8; end: 103b1ce07; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController overridePauseStateToResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1cdf8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112fec3f0) = 0;
  return;
}



/* Entry: 103b1ce08; end: 103b1cf73; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1ce08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  func_0x000107c61604(param_1 + _DAT_112fec3d8,param_3);
  if (param_3 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fec310);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fec310))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x20);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c504f0();
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1cf74; end: 103b1cfcf; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

void FUN_103b1cf74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000103b1ceb0(param_3,param_4);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1cfd0; end: 103b1d02b; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController mediaHeightToWidthAspectRatio] */

undefined8 FUN_103b1cfd0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_2);
    FUN_103b26fb4();
    func_0x000107c61170(lVar2);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b1d02c);
  (*pcVar1)();
}



/* Entry: 103b1d02c; end: 103b1d0d7; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b1d02c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112fec310);
  lVar1 = ((undefined8 *)(param_2 + _DAT_112fec310))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x18);
  func_0x000107c61174(param_2);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c438d4();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 103b1d0d8; end: 103b1d0e7; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController mediaViewContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1d0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fec318));
  return;
}



/* Entry: 103b1d0e8; end: 103b1d0ef; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController isOverlay] */

undefined8 FUN_103b1d0e8(void)

{
  return 0;
}



/* Entry: 103b1d0f0; end: 103b1d173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1d0f0(double param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112fec310);
  uVar2 = ((ulong *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c614f0();
  lVar4 = *(long *)(uVar2 + 0x10);
  uVar2 = uVar1;
  (**(code **)(lVar4 + 8))();
  if (param_1 == 0.0) {
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = 0x28;
  }
  else {
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = 0x30;
  }
  (**(code **)(lVar4 + lVar3))(uVar1,lVar4);
  return;
}



/* Entry: 103b1d174; end: 103b1d1ab; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_103b1d174(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103b242f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103b1d1ac; end: 103b1d1e3; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController didScrollHorizontallyWithOffset:] */

void FUN_103b1d1ac(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103b1d0f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103b1d1e4; end: 103b1d20b; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController preloadVideoPlayer] */

void FUN_103b1d1e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b23390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1d20c; end: 103b1d30f; -[_TtC26SingleSnapPlayerOperaLayer40SingleSnapPlayerOperaLayerViewController releaseVideoPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b1d20c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fec310);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fec310))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x58);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b1d310; end: 103b1d4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b1d310(double param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [24];
  
  cVar3 = *(char *)(unaff_x20 + _DAT_112fec3c8);
  lVar5 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103b1d4ec);
    (*pcVar4)();
  }
  dVar7 = *(double *)(lVar5 + _DAT_112fec920);
  cVar2 = *(char *)((double *)(lVar5 + _DAT_112fec920) + 1);
  func_0x000107c61170();
  lVar5 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103b1d4f0);
    (*pcVar4)();
  }
  dVar8 = *(double *)(lVar5 + _DAT_112fec928);
  func_0x000107c61170();
  lVar5 = unaff_x20 + _DAT_112fec378;
  func_0x000107c61428(lVar5,auStack_78,1,0);
  cVar1 = '\0';
  if (cVar2 != '\x01') {
    cVar1 = cVar3;
  }
  if (cVar1 != '\x01') {
    return 0;
  }
  if (dVar7 <= 0.0) {
    return 0;
  }
  param_1 = param_1 - dVar8;
  if (*(char *)(lVar5 + 0x4a) == '\x01') {
    if (param_1 < dVar7) {
      *(undefined1 *)(lVar5 + 0x4a) = 0;
      return 0;
    }
    if (param_1 < dVar7 + 1.0) {
      return 1;
    }
  }
  else if (param_1 < dVar7) {
    return 0;
  }
  *(undefined1 *)(lVar5 + 0x4a) = 1;
  uVar6 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f19f480);
  func_0x000107c3d7e8();
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fec310);
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112fec310))[1];
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c614f0(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fec928);
    func_0x000107c61170(unaff_x20);
    func_0x000107c600d0(uVar6,600);
    (**(code **)(*(long *)(lVar5 + 0x10) + 0x60))();
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103b1d4f4);
  (*pcVar4)();
}


