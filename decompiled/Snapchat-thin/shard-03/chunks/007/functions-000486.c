/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c1941c; end: 102c19453; -[_TtC22SCLensStoryOperaPlugin39LensStoryOperaSnapsLoadingStatesManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1941c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112effbe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112effbe8));
  return;
}



/* Entry: 102c19454; end: 102c19473;  */

void FUN_102c19454(void)

{
  func_0x000107c61168(&PTR_PTR_1128975e8);
  return;
}



/* Entry: 102c19474; end: 102c19b53;  */

void FUN_102c19474(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1954c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102c19df0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c19514);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102c1987c();
    lVar6 = *unaff_x20;
    goto joined_r0x000102c19560;
  }
  lVar6 = *unaff_x20;
joined_r0x000102c19560:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c195c4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102c19b54; end: 102c1a31f;  */

void FUN_102c19b54(long param_1,ulong param_2)

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
  uVar6 = 0x112effc28;
  func_0x0001000285a8(0x112effc28,&UNK_10db33130);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102c19dbc:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102c19dec);
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
          goto LAB_102c19dbc;
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
      func_0x000107c615f0(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102c19df0);
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



/* Entry: 102c1a320; end: 102c1a513;  */

undefined * FUN_102c1a320(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112effc20,&UNK_10db33128);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c1a41c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c1a420);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c1a514; end: 102c1a85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c1a514(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112effc30);
  uStack_78 = 0xd000000000000020;
  uStack_70 = 0x800000010f0ff320;
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_68,&uStack_78,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    puVar1 = auStack_68;
    func_0x000100df95d0(puVar1);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + (long)puVar1 * 0x20,&uStack_40);
      func_0x000107c6142c(lVar6);
      goto LAB_102c1a5b4;
    }
    func_0x000107c6142c(lVar6);
  }
  uStack_38 = 0;
  uStack_40 = 0;
  lStack_28 = 0;
  uStack_30 = 0;
LAB_102c1a5b4:
  func_0x0001007bbff0(auStack_68);
  if (lStack_28 == 0) {
    func_0x00010006e7f4(&uStack_40);
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar3 = &uStack_78;
    func_0x000107c6147c(puVar3,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_78;
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = uStack_78;
      func_0x000107c5d388(uStack_78);
      func_0x000107c61170(uVar2);
      return uVar4;
    }
  }
  return 0;
}



/* Entry: 102c1a85c; end: 102c1a8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c1a85c(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11307abc8);
  uVar1 = uVar3;
  func_0x000107c61434();
  func_0x00010018cc3c();
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112effc30) = uVar1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102c1a8f4; end: 102c1a997; -[_TtC21SCLensStoryOperaLayer19LensStoryOperaLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c1a8f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar4 = *(undefined8 *)(param_3 + _DAT_11307abc8);
  func_0x000107c61174(param_3);
  uVar2 = uVar4;
  func_0x000107c61434();
  func_0x00010018cc3c();
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(param_1 + _DAT_112effc30) = uVar2;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 102c1a998; end: 102c1a99f; -[_TtC21SCLensStoryOperaLayer19LensStoryOperaLayer type] */

undefined8 FUN_102c1a998(void)

{
  return 0x19;
}



/* Entry: 102c1a9a0; end: 102c1a9ff; -[_TtC21SCLensStoryOperaLayer19LensStoryOperaLayer init] */

void FUN_102c1a9a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaLayer.LensStoryOperaLayer",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1a9cc);
  (*pcVar1)();
}



/* Entry: 102c1aa00; end: 102c1aa0f; -[_TtC21SCLensStoryOperaLayer19LensStoryOperaLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1aa00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112effc30));
  return;
}



/* Entry: 102c1aa10; end: 102c1aa2f;  */

void FUN_102c1aa10(void)

{
  func_0x000107c61168(&PTR_PTR_1128976f0);
  return;
}



/* Entry: 102c1aa30; end: 102c1aa57;  */

undefined * FUN_102c1aa30(void)

{
  return &UNK_1105b29b8;
}



/* Entry: 102c1aa58; end: 102c1ab4b;  */

void FUN_102c1aa58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff030,&UNK_10db32270);
  puVar1 = &UNK_1105b2aa0;
  func_0x000107c613fc(&UNK_1105b2aa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102c1aad8,puVar1);
  return;
}



/* Entry: 102c1ab4c; end: 102c1ab5b;  */

undefined1  [16] FUN_102c1ab4c(void)

{
  return ZEXT816(0x1105b2ac8);
}



/* Entry: 102c1ab5c; end: 102c1ab5f; -[_TtC26ContentDeliveryOperaPlugin30ContentDeliveryOperaPluginImpl setPlaylistItemController:] */

void FUN_102c1ab5c(void)

{
  return;
}



/* Entry: 102c1ab60; end: 102c1ab63; -[_TtC26ContentDeliveryOperaPlugin30ContentDeliveryOperaPluginImpl setOperaControlling:] */

void FUN_102c1ab60(void)

{
  return;
}



/* Entry: 102c1ab64; end: 102c1abdb; -[_TtC26ContentDeliveryOperaPlugin30ContentDeliveryOperaPluginImpl registeredEventsForOperaSession] */

void FUN_102c1ab64(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb69b4();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102c1abdc; end: 102c1ae23;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c1abdc(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long alStack_68 [5];
  
  if (param_1 == 0) {
    alStack_68[2] = 0;
    alStack_68[1] = 0;
    alStack_68[4] = 0;
    alStack_68[3] = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + _DAT_11307abc8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0bc18;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc18);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      uVar5 = param_2;
      func_0x000100029284(ppuVar1);
      if ((uVar5 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar6 + 0x38) + (long)ppuVar1 * 0x20,alStack_68 + 1);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar6);
        if (alStack_68[4] != 0) {
          uVar2 = 0;
          func_0x000102c1b1a8(0);
          plVar3 = alStack_68;
          func_0x000107c6147c(plVar3,alStack_68 + 1,PTR___sypN_11034f1a8 + 8,uVar2,6);
          if (((ulong)plVar3 & 1) == 0) {
            return 0;
          }
          lVar6 = alStack_68[0];
          func_0x000107c4e15c();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar4 = *(long *)(unaff_x20 + _DAT_112effc60);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar4 != 0) {
              func_0x000107c4baa0();
              func_0x000107c615e8(lVar4);
            }
            func_0x000107c61170(lVar6);
          }
          lVar6 = alStack_68[0];
          func_0x000107c4360c();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar4 = *(long *)(unaff_x20 + _DAT_112effc60);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar4 != 0) {
              func_0x000107c4baa0();
              func_0x000107c615e8(lVar4);
            }
            func_0x000107c61170(lVar6);
          }
          lVar6 = alStack_68[0];
          func_0x000107c3e694();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(alStack_68[0]);
            return 0;
          }
          lVar4 = *(long *)(unaff_x20 + _DAT_112effc60);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar4 == 0) {
            func_0x000107c61170(alStack_68[0]);
            func_0x000107c61170(lVar6);
            return 1;
          }
          func_0x000107c4baa0();
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(alStack_68[0]);
          func_0x000107c61170(lVar6);
          return 1;
        }
        goto LAB_102c1add8;
      }
      func_0x000107c6142c(lVar6);
    }
    alStack_68[2] = 0;
    alStack_68[1] = 0;
    alStack_68[4] = 0;
    alStack_68[3] = 0;
    func_0x000107c6142c(param_2);
  }
LAB_102c1add8:
  func_0x00010006e7f4(alStack_68 + 1);
  return 0;
}



/* Entry: 102c1ae24; end: 102c1aeb3; -[_TtC26ContentDeliveryOperaPlugin30ContentDeliveryOperaPluginImpl operaViewDidSendEvent:page:params:] */

void FUN_102c1ae24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c1af44(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 102c1aeb4; end: 102c1af13; -[_TtC26ContentDeliveryOperaPlugin30ContentDeliveryOperaPluginImpl init] */

void FUN_102c1aeb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentDeliveryOperaPlugin.ContentDeliveryOperaPluginImpl",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1aee0);
  (*pcVar1)();
}



/* Entry: 102c1af14; end: 102c1af23; -[_TtC26ContentDeliveryOperaPlugin30ContentDeliveryOperaPluginImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1af14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112effc60));
  return;
}



/* Entry: 102c1af24; end: 102c1af43;  */

void FUN_102c1af24(void)

{
  func_0x000107c61168(&PTR_PTR_1128977b0);
  return;
}



/* Entry: 102c1af44; end: 102c1b157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1af44(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_68;
  ulong auStack_60 [4];
  
  uVar4 = param_1;
  FUN_102c1abdc();
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_1 == 0) {
    auStack_60[1] = 0;
    auStack_60[0] = 0;
    auStack_60[3] = 0;
    auStack_60[2] = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + _DAT_11307abc8);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcadf8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcadf8);
    if (*(long *)(lVar8 + 0x10) != 0) {
      func_0x000107c61434(lVar8);
      uVar4 = param_2;
      func_0x000100029284(ppuVar2);
      if ((uVar4 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + (long)ppuVar2 * 0x20,auStack_60);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar8);
        if (auStack_60[3] != 0) {
          uVar3 = 0;
          func_0x0001044b8ee8(0);
          ppuVar2 = &puStack_68;
          func_0x000107c6147c(ppuVar2,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
          if (((ulong)ppuVar2 & 1) == 0) {
            return;
          }
          uVar4 = *(ulong *)(puStack_68 + _DAT_11307f538);
          if (uVar4 != 0) {
            func_0x000107c61174();
            uVar5 = uVar4;
            func_0x000107c3ef0c();
            func_0x000107c61180();
            if (uVar5 != 0) {
              uVar6 = uVar4;
              func_0x000107c5c080();
              if (3 < uVar6) {
                func_0x000107c61170(uVar5);
                FUN_102c1b158(0);
                auStack_60[0] = uVar6;
                func_0x000107c60614();
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1b158);
                (*pcVar1)();
              }
              puVar7 = PTR_PTR_1126b08b8;
              func_0x000107c610f8(PTR_PTR_1126b08b8);
              func_0x000107c4766c();
              func_0x000107c61170(uVar5);
              lVar8 = *(long *)(unaff_x20 + _DAT_112effc60);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar8 != 0) {
                func_0x000107c4baa0();
                func_0x000107c615e8(lVar8);
              }
              func_0x000107c61170(puStack_68);
              puStack_68 = puVar7;
            }
            func_0x000107c61170(puStack_68);
            func_0x000107c61170(uVar4);
            return;
          }
          func_0x000107c61170(puStack_68);
          return;
        }
        goto LAB_102c1b0e8;
      }
      func_0x000107c6142c(lVar8);
    }
    auStack_60[1] = 0;
    auStack_60[0] = 0;
    auStack_60[3] = 0;
    auStack_60[2] = 0;
    func_0x000107c6142c(param_2);
  }
LAB_102c1b0e8:
  func_0x00010006e7f4(auStack_60);
  return;
}



/* Entry: 102c1b158; end: 102c1b1eb;  */

void FUN_102c1b158(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112effc98 != 0) {
    return;
  }
  puVar1 = &UNK_1105b2b90;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112effc98 = param_1;
  return;
}



/* Entry: 102c1b1ec; end: 102c1b2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1b1ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112effca0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112effca8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c1b2b4; end: 102c1b32f; -[_TtC26ContentDeliveryOperaPlugin37ContentDeliveryOperaPluginRegistrator registerPlaylistPluginsWithContext:] */

void FUN_102c1b2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_102c1b3c8();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fe08(uVar1,PTR___ss11AnyHashableVN_11034e448,PTR___ss11AnyHashableVSHsWP_11034e450)
  ;
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c1b330; end: 102c1b38f; -[_TtC26ContentDeliveryOperaPlugin37ContentDeliveryOperaPluginRegistrator init] */

void FUN_102c1b330(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentDeliveryOperaPlugin.ContentDeliveryOperaPluginRegistrator",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1b35c);
  (*pcVar1)();
}



/* Entry: 102c1b390; end: 102c1b3c7; -[_TtC26ContentDeliveryOperaPlugin37ContentDeliveryOperaPluginRegistrator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c1b3ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1b3b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1b390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112effca0));
  return;
}



/* Entry: 102c1b3c8; end: 102c1b4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c1b3c8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *aplStack_90 [10];
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112effca8);
  lVar1 = 0;
  FUN_102c1af24();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x000107c40430();
  func_0x000107c61180();
  *(undefined8 *)(lVar2 + _DAT_112effc60) = uVar5;
  plVar3 = &lStack_40;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  lVar2 = 0x112d6aae0;
  func_0x0001000285a8(0x112d6aae0,&UNK_10d92e060);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  lVar4 = lVar2;
  aplStack_90[0] = plVar3;
  func_0x000102c1b4e4();
  func_0x000107c61174(plVar3);
  func_0x000107c602d4(lVar2 + 0x20,aplStack_90,lVar1,lVar4);
  lVar4 = lVar2;
  func_0x00010090a6c0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x0001007bbff0(lVar2 + 0x20);
  func_0x000107c61170(plVar3);
  return lVar4;
}



/* Entry: 102c1b4c4; end: 102c1b527;  */

void FUN_102c1b4c4(void)

{
  func_0x000107c61168(&PTR_PTR_112897870);
  return;
}



/* Entry: 102c1b528; end: 102c1b573;  */

void FUN_102c1b528(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c1b574,param_1);
  return;
}



/* Entry: 102c1b574; end: 102c1b5eb;  */

void FUN_102c1b574(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4df3c(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126ac188;
  func_0x000107c610f8();
  func_0x000107c47c7c();
  func_0x000107c615e8(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102c1b5ec; end: 102c1b5fb;  */

undefined1  [16] FUN_102c1b5ec(void)

{
  return ZEXT816(0x1105b2c58);
}



/* Entry: 102c1b5fc; end: 102c1b6fb;  */

void FUN_102c1b5fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff030,&UNK_10db32270);
  puVar1 = &UNK_1105b2d20;
  func_0x000107c613fc(&UNK_1105b2d20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102c1b67c,puVar1);
  return;
}



/* Entry: 102c1b6fc; end: 102c1b70b;  */

undefined1  [16] FUN_102c1b6fc(void)

{
  return ZEXT816(0x1105b2d48);
}



/* Entry: 102c1b70c; end: 102c1b757;  */

void FUN_102c1b70c(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c1b758,param_1);
  return;
}



/* Entry: 102c1b758; end: 102c1b84f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1b758(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_38;
  
  func_0x000100083b20(&puStack_38);
  cVar1 = *(char *)(*(long *)(puStack_38 + _DAT_113059cd0) + _DAT_11307ce50);
  func_0x000107c61170();
  if (cVar1 == '\x02') {
    lVar2 = -0x2fffffffffffffd7;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f0ff450);
    lVar3 = lVar2;
    func_0x000107c60af0();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c614ec();
      uVar4 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c61488(lVar3,uVar4);
      lVar2 = lVar3;
      if (lVar3 == 0) goto LAB_102c1b838;
      func_0x000107c614e8();
      func_0x000107c610f8();
      func_0x000107c453e4();
      puStack_38 = PTR_DAT_1126a1eb8;
      lVar2 = lVar3;
      func_0x000107c61494();
      if (lVar2 != 0) goto LAB_102c1b838;
      func_0x000107c61170(lVar3);
    }
  }
  lVar2 = 0;
LAB_102c1b838:
  *param_1 = lVar2;
  return;
}



/* Entry: 102c1b850; end: 102c1b85f;  */

undefined1  [16] FUN_102c1b850(void)

{
  return ZEXT816(0x1105b2e18);
}



/* Entry: 102c1b860; end: 102c1b8df;  */

void FUN_102c1b860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  puVar1 = &UNK_1105b2ee0;
  func_0x000107c613fc(&UNK_1105b2ee0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102c1b8e0,puVar1);
  return;
}



/* Entry: 102c1b8e0; end: 102c1bac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1b8e0(long *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puStack_48;
  
  func_0x000100083b20(&puStack_48);
  cVar1 = *(char *)(*(long *)(puStack_48 + _DAT_113059cd0) + _DAT_11307ce50);
  func_0x000107c61170();
  if (cVar1 == '\x02') {
    pcVar7 = (code *)0xd000000000000032;
    func_0x000107c5fadc(0xd000000000000032,0x800000010f0ff480);
    pcVar2 = pcVar7;
    func_0x000107c60af0();
    func_0x000107c61170(pcVar7);
    if (pcVar2 != (code *)0x0) {
      pcVar7 = pcVar2;
      func_0x000107c614ec();
      uVar3 = 0x636f6c6c61;
      func_0x000107c5fadc(0x636f6c6c61,0xe500000000000000);
      func_0x000107c60b08();
      func_0x000107c61170(uVar3);
      uVar3 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c61488(pcVar7,uVar3);
      if (pcVar7 == (code *)0x0) goto LAB_102c1baa8;
      func_0x000107c614e8();
      pcVar4 = pcVar7;
      func_0x000107c4e5b8();
      func_0x000107c61104(pcVar7);
      if (pcVar4 != (code *)0x0) {
        uVar5 = 0xd000000000000015;
        func_0x000107c5fadc(0xd000000000000015,0x800000010f0ff4c0);
        uVar3 = uVar5;
        func_0x000107c60b08();
        func_0x000107c61170(uVar5);
        func_0x000107c60ef4(pcVar2,uVar3);
        if (pcVar2 != (code *)0x0) {
          func_0x000107c610cc();
          func_0x000100083b20(&puStack_48);
          puVar6 = puStack_48;
          func_0x000107c52030(puStack_48);
          func_0x000107c61180();
          func_0x000107c61170(puStack_48);
          (*pcVar2)(pcVar4,uVar3,puVar6);
          func_0x000107c61170(puVar6);
          if (pcVar4 == (code *)0x0) goto LAB_102c1baa4;
          puStack_48 = PTR_DAT_1126a1eb8;
          pcVar7 = pcVar4;
          func_0x000107c61494(pcVar4,1,&puStack_48);
          if (pcVar7 != (code *)0x0) goto LAB_102c1baa8;
        }
        func_0x000107c615e8(pcVar4);
      }
    }
  }
LAB_102c1baa4:
  pcVar7 = (code *)0x0;
LAB_102c1baa8:
  *param_1 = (long)pcVar7;
  return;
}



/* Entry: 102c1bac4; end: 102c1bad3;  */

undefined1  [16] FUN_102c1bac4(void)

{
  return ZEXT816(0x1105b2f08);
}



/* Entry: 102c1bad4; end: 102c1bb43;  */

void FUN_102c1bad4(void)

{
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  func_0x0001000823a8(0x102c1bb14,0);
  return;
}



/* Entry: 102c1bb44; end: 102c1bb53;  */

undefined1  [16] FUN_102c1bb44(void)

{
  return ZEXT816(0x1105b2fd0);
}



/* Entry: 102c1bb54; end: 102c1bbeb;  */

void FUN_102c1bb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  puVar1 = &UNK_1105b3098;
  func_0x000107c613fc(&UNK_1105b3098,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102c1bbec,puVar1);
  return;
}



/* Entry: 102c1bbec; end: 102c1bda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1bbec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_80 [3];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(alStack_80);
  lVar2 = alStack_80[0];
  lVar1 = *(long *)(alStack_80[0] + _DAT_11307a8d8);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000100083b20(alStack_80);
    lVar1 = *(long *)(alStack_80[0] + _DAT_113078cc8);
    func_0x000107c61174();
    func_0x000107c61170(alStack_80[0]);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_113078d88);
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5dddc();
    func_0x000107c61180();
    if (lVar1 == 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = *(undefined8 *)(lVar1 + _DAT_11307a988);
      func_0x000107c61170();
    }
    lVar1 = lVar2;
    func_0x000107c5b9f8(lVar2);
    func_0x000100083b20(&lStack_58);
    func_0x000100bf4c30(lStack_58 + _DAT_112fec990,alStack_80);
    func_0x000107c61170(lStack_58);
    func_0x0001000a8868(alStack_80,uStack_68);
    (**(code **)(lStack_60 + 8))(uVar4,uVar3,lVar1,uStack_68,lStack_60);
    func_0x0001000834e4(alStack_80);
    uVar3 = 0;
    func_0x000103b169c0(0);
    func_0x000107c610f8();
    func_0x000103b16604(uVar4,uVar3);
    func_0x000107c615e8(lVar2);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102c1bda4; end: 102c1bdb3;  */

undefined1  [16] FUN_102c1bda4(void)

{
  return ZEXT816(0x1105b30c0);
}



/* Entry: 102c1bdb4; end: 102c1beeb;  */

void FUN_102c1bdb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  puVar1 = &UNK_1105b3190;
  func_0x000107c613fc(&UNK_1105b3190,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102c1be34,puVar1);
  return;
}



/* Entry: 102c1beec; end: 102c1befb;  */

undefined1  [16] FUN_102c1beec(void)

{
  return ZEXT816(0x1105b31b8);
}



/* Entry: 102c1befc; end: 102c1bf73;  */

undefined * FUN_102c1befc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x0001000285a8(0x112ec5370,&UNK_10dae54b0);
  func_0x000107c610f8();
  uVar1 = uStack_28;
  func_0x00010017da58(uStack_28);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8(PTR_PTR_1126a73e0);
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 102c1bf74; end: 102c1bfab; -[SCWAnalyzerBridge markRevealedForMediaID:] */

void FUN_102c1bf74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614f0();
  func_0x000107c5faec(param_3);
  func_0x00010402e178();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c1bfac; end: 102c1bffb;  */

void FUN_102c1bfac(void)

{
  func_0x00010402e2b4();
  return;
}



/* Entry: 102c1bffc; end: 102c1c0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1bffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effce0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effce8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c1c0f4; end: 102c1c177; -[_TtC33SensitiveContentWarningOperaLayer46SensitiveContentWarningOperaLayerFactoryPlugin supportedLayers] */

void FUN_102c1c0f4(void)

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
  FUN_102c1eb74();
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



/* Entry: 102c1c178; end: 102c1c26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c1c178(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = 0;
  FUN_102c1eb74(0);
  func_0x000107c61480(param_1,uVar2);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    FUN_102c1e46c();
    func_0x000107c610f8();
    func_0x000107c45ff8();
    uVar2 = *(undefined8 *)(lVar3 + _DAT_112effd48);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112effce0);
    puVar1 = (undefined8 *)(lVar3 + _DAT_112effd48);
    puVar1[1] = ((undefined8 *)(unaff_x20 + _DAT_112effce0))[1];
    *puVar1 = uVar4;
    func_0x000107c615f0(uVar4);
    func_0x000107c615e8();
    if (*(code **)(unaff_x20 + _DAT_112effce8) == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(unaff_x20 + _DAT_112effce8))();
    }
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112effd18);
    *(undefined8 *)(lVar3 + _DAT_112effd18) = uVar2;
    func_0x000107c61170(uVar4);
  }
  return lVar3;
}



/* Entry: 102c1c26c; end: 102c1c343; -[_TtC33SensitiveContentWarningOperaLayer46SensitiveContentWarningOperaLayerFactoryPlugin layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_102c1c26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_102c1c178(param_3,param_4,param_5,param_6,param_7);
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



/* Entry: 102c1c344; end: 102c1c3a3; -[_TtC33SensitiveContentWarningOperaLayer46SensitiveContentWarningOperaLayerFactoryPlugin init] */

void FUN_102c1c344(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SensitiveContentWarningOperaLayer.SensitiveContentWarningOperaLayerFactoryPlugin"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1c370);
  (*pcVar1)();
}



/* Entry: 102c1c3a4; end: 102c1c3df; -[_TtC33SensitiveContentWarningOperaLayer46SensitiveContentWarningOperaLayerFactoryPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1c3a4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112effce0));
  if (*(long *)(param_1 + _DAT_112effce8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112effce8))[1]);
    return;
  }
  return;
}



/* Entry: 102c1c3e0; end: 102c1c3ff;  */

void FUN_102c1c3e0(void)

{
  func_0x000107c61168(&PTR_PTR_112897938);
  return;
}



/* Entry: 102c1c400; end: 102c1c40f;  */

void FUN_102c1c400(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102c1c410; end: 102c1c4b3; -[SensitiveContentWarningOperaLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

undefined8
FUN_102c1c410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar1 = param_3;
  FUN_102c1e210(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return uVar1;
}



/* Entry: 102c1c4b4; end: 102c1c4db; -[SensitiveContentWarningOperaLayerViewController initWithCoder:] */

void FUN_102c1c4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102c1e340();
  return;
}



/* Entry: 102c1c4dc; end: 102c1c58f; -[SensitiveContentWarningOperaLayerViewController loadView] */

/* WARNING: Possible PIC construction at 0x000102c1c544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1c570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1c548) */
/* WARNING: Removing unreachable block (ram,0x000102c1c574) */

void FUN_102c1c4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102c1c590; end: 102c1ce5f;  */

/* WARNING: Possible PIC construction at 0x000102c1c838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1ca24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1cac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1cbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1cc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1cc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1d0ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1d280) */
/* WARNING: Removing unreachable block (ram,0x000102c1d288) */
/* WARNING: Removing unreachable block (ram,0x000102c1d648) */
/* WARNING: Removing unreachable block (ram,0x000102c1d608) */
/* WARNING: Removing unreachable block (ram,0x000102c1d5e8) */
/* WARNING: Removing unreachable block (ram,0x000102c1d5a4) */
/* WARNING: Removing unreachable block (ram,0x000102c1d67c) */
/* WARNING: Removing unreachable block (ram,0x000102c1d5b8) */
/* WARNING: Removing unreachable block (ram,0x000102c1d57c) */
/* WARNING: Removing unreachable block (ram,0x000102c1d55c) */
/* WARNING: Removing unreachable block (ram,0x000102c1d50c) */
/* WARNING: Removing unreachable block (ram,0x000102c1d678) */
/* WARNING: Removing unreachable block (ram,0x000102c1d540) */
/* WARNING: Removing unreachable block (ram,0x000102c1d4ec) */
/* WARNING: Removing unreachable block (ram,0x000102c1d49c) */
/* WARNING: Removing unreachable block (ram,0x000102c1d674) */
/* WARNING: Removing unreachable block (ram,0x000102c1d4d0) */
/* WARNING: Removing unreachable block (ram,0x000102c1d47c) */
/* WARNING: Removing unreachable block (ram,0x000102c1d408) */
/* WARNING: Removing unreachable block (ram,0x000102c1d670) */
/* WARNING: Removing unreachable block (ram,0x000102c1d460) */
/* WARNING: Removing unreachable block (ram,0x000102c1cbdc) */
/* WARNING: Removing unreachable block (ram,0x000102c1cacc) */
/* WARNING: Removing unreachable block (ram,0x000102c1ce34) */
/* WARNING: Removing unreachable block (ram,0x000102c1cc58) */
/* WARNING: Removing unreachable block (ram,0x000102c1cae4) */
/* WARNING: Removing unreachable block (ram,0x000102c1ca28) */
/* WARNING: Removing unreachable block (ram,0x000102c1cd18) */
/* WARNING: Removing unreachable block (ram,0x000102c1ca6c) */
/* WARNING: Removing unreachable block (ram,0x000102c1ce5c) */
/* WARNING: Removing unreachable block (ram,0x000102c1caa4) */
/* WARNING: Removing unreachable block (ram,0x000102c1c83c) */
/* WARNING: Removing unreachable block (ram,0x000102c1c8b0) */
/* WARNING: Removing unreachable block (ram,0x000102c1c840) */
/* WARNING: Removing unreachable block (ram,0x000102c1c8d0) */
/* WARNING: Removing unreachable block (ram,0x000102c1c978) */
/* WARNING: Removing unreachable block (ram,0x000102c1cc7c) */
/* WARNING: Removing unreachable block (ram,0x000102c1cd10) */
/* WARNING: Removing unreachable block (ram,0x000102c1c99c) */
/* WARNING: Removing unreachable block (ram,0x000102c1c924) */
/* WARNING: Removing unreachable block (ram,0x000102c1c9c8) */
/* WARNING: Removing unreachable block (ram,0x000102c1c9e4) */
/* WARNING: Removing unreachable block (ram,0x000102c1c954) */
/* WARNING: Removing unreachable block (ram,0x000102c1c9e8) */
/* WARNING: Removing unreachable block (ram,0x000102c1cbf8) */
/* WARNING: Removing unreachable block (ram,0x000102c1cc10) */
/* WARNING: Removing unreachable block (ram,0x000102c1cc04) */
/* WARNING: Removing unreachable block (ram,0x000102c1ca1c) */
/* WARNING: Removing unreachable block (ram,0x000102c1d0b0) */
/* WARNING: Removing unreachable block (ram,0x000102c1d0bc) */
/* WARNING: Removing unreachable block (ram,0x000102c1d0d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1c590(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  undefined8 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar7 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = puVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = (long)(puVar7 + (-extraout_x8_00 - extraout_x12)) -
          (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd50);
  lVar3 = puVar1[1];
  if ((lVar3 != 0) &&
     (((puVar4 = (undefined1 *)*puVar1, puVar4 == param_1 && lVar3 == param_2 ||
       (func_0x000107c605b8(puVar4,lVar3,param_1,param_2,0), ((ulong)puVar4 & 1) != 0)) &&
      (*(long *)(unaff_x20 + _DAT_112effd30) != 0)))) {
    return;
  }
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112effd20))[1];
  if ((lVar3 == 0) ||
     ((((puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112effd20), puVar4 != param_1 ||
        (lVar3 != param_2)) &&
       (puStack_b8 = puVar7 + (-extraout_x8_00 - extraout_x12),
       func_0x000107c605b8(puVar4,lVar3,param_1,param_2,0), ((ulong)puVar4 & 1) == 0)) ||
      ((char)((ulong *)(unaff_x20 + _DAT_112effd28))[1] == '\x01')))) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112effd48);
    if (lVar3 == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112effd30);
      if (lVar3 == 0) {
        func_0x000104038a08();
        func_0x000104038750();
        func_0x000107c61180();
        func_0x000107c5a050();
        func_0x0001040378d8(0);
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1d670);
          (*pcVar2)();
        }
        func_0x000107c3d89c();
        lVar3 = unaff_x20;
      }
      else {
        func_0x000107c61174();
        func_0x0001040378d8(0);
      }
    }
    else {
      lStack_d0 = ((long *)(unaff_x20 + _DAT_112effd48))[1];
      puStack_e0 = puVar1;
      lStack_d8 = lVar3;
      lStack_c8 = param_2;
      lStack_c0 = ((lVar8 - extraout_x12_00) - extraout_x12_01) - extraout_x12_02;
      puStack_b8 = param_1;
      func_0x000107c615f0();
      func_0x000107c4aba4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c1ce5c);
        (*pcVar2)();
      }
      FUN_102c1e48c(*(undefined8 *)(unaff_x20 + _DAT_112effe58),
                    ((undefined8 *)(unaff_x20 + _DAT_112effe58))[1]);
      lVar3 = unaff_x20;
    }
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112effd28);
    if ((uVar5 < 2) || (uVar5 != 2)) {
      *(long *)(unaff_x20 + _DAT_112effd60) = *(long *)(unaff_x20 + _DAT_112effd60) + 1;
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd50);
      uVar6 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c6142c(uVar6,param_1,param_2);
      lVar8 = _DAT_112effd30;
      if (*(long *)(unaff_x20 + _DAT_112effd30) == 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + _DAT_112effd38) = 1;
      lVar3 = unaff_x20 + _DAT_112effd40;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c3eb38();
        func_0x000107c615e8(lVar3);
      }
      lVar3 = 0;
      if (*(long *)(unaff_x20 + lVar8) != 0) {
        func_0x000107c4ff34();
        lVar3 = *(long *)(unaff_x20 + lVar8);
      }
      *(undefined8 *)(unaff_x20 + lVar8) = 0;
    }
    else {
      lVar3 = *(long *)(unaff_x20 + _DAT_112effd30);
      if (lVar3 == 0) {
        return;
      }
      func_0x000107c61174();
      func_0x0001040378d8(1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102c1ce60; end: 102c1d00f; -[SensitiveContentWarningOperaLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1ce60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar5 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewWillAppear__1126853f0;
  lStack_40 = param_1;
  lStack_38 = lVar5;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3,param_3);
  lVar5 = param_1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(lVar5 + _DAT_112effe48);
    uVar2 = ((undefined8 *)(lVar5 + _DAT_112effe48))[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61170(lVar5);
    FUN_102c1c590(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102c1cf18);
  (*pcVar4)();
}



/* Entry: 102c1d010; end: 102c1d0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1d010(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  *(long *)(unaff_x20 + _DAT_112effd60) = *(long *)(unaff_x20 + _DAT_112effd60) + 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd50);
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar4);
  lVar3 = _DAT_112effd38;
  lVar2 = _DAT_112effd30;
  if (*(long *)(unaff_x20 + _DAT_112effd30) != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112effd38) = 1;
    lVar6 = _DAT_112effd40;
    lVar5 = unaff_x20 + _DAT_112effd40;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c3eb38();
      func_0x000107c615e8(lVar5);
    }
    uVar4 = 0;
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x000107c4ff34();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar4);
    lVar6 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000107c3eb3c();
      func_0x000107c615e8(lVar6);
    }
    *(undefined1 *)(unaff_x20 + lVar3) = 0;
  }
  return;
}



/* Entry: 102c1d0e8; end: 102c1d163; -[SensitiveContentWarningOperaLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Possible PIC construction at 0x000102c1d140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1d144) */

void FUN_102c1d0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000102c1cf18(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c1d164; end: 102c1d1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1d164(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_teardown_112678538);
  if (*(long *)(unaff_x20 + _DAT_112effd18) != 0) {
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  FUN_102c1d010();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd20);
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}



/* Entry: 102c1d1ec; end: 102c1d213; -[SensitiveContentWarningOperaLayerViewController teardown] */

void FUN_102c1d1ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c1d164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c1d214; end: 102c1d21b; -[SensitiveContentWarningOperaLayerViewController layerViewContainerOption] */

undefined8 FUN_102c1d214(void)

{
  return 2;
}



/* Entry: 102c1d21c; end: 102c1d67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1d21c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar9 = _DAT_112effd30;
  if ((1 < param_1) && (param_1 == 2)) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112effd30);
    if (lVar6 != 0) {
      func_0x000107c61174();
      func_0x0001040378d8(1);
      func_0x000107c61170(lVar6);
      lVar9 = *(long *)(unaff_x20 + lVar9);
      if (lVar9 != 0) {
        puVar7 = &UNK_1105b32b0;
        func_0x000107c613fc(&UNK_1105b32b0,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        puVar8 = &UNK_1105b3350;
        func_0x000107c613fc(&UNK_1105b3350,0x28,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(undefined8 *)(puVar8 + 0x18) = param_2;
        *(undefined8 *)(puVar8 + 0x20) = param_3;
        puVar1 = (undefined8 *)(lVar9 + _DAT_11304a3a0);
        func_0x000107c61428(puVar1,auStack_68,1,0);
        uVar3 = *puVar1;
        uVar2 = puVar1[1];
        *puVar1 = FUN_102c1e524;
        puVar1[1] = puVar8;
        func_0x000107c61174(lVar9);
        func_0x000107c6157c(puVar7);
        func_0x000107c61434(param_3);
        func_0x000100d1f82c(uVar3,uVar2);
        func_0x000107c61574(puVar7);
        func_0x000107c61170(lVar9);
      }
    }
    return;
  }
  *(long *)(unaff_x20 + _DAT_112effd60) = *(long *)(unaff_x20 + _DAT_112effd60) + 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd50);
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c6142c(uVar3);
  lVar6 = _DAT_112effd38;
  lVar9 = _DAT_112effd30;
  if (*(long *)(unaff_x20 + _DAT_112effd30) != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112effd38) = 1;
    lVar5 = _DAT_112effd40;
    lVar4 = unaff_x20 + _DAT_112effd40;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c3eb38();
      func_0x000107c615e8(lVar4);
    }
    uVar3 = 0;
    if (*(long *)(unaff_x20 + lVar9) != 0) {
      func_0x000107c4ff34();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar9);
    }
    *(undefined8 *)(unaff_x20 + lVar9) = 0;
    func_0x000107c61170(uVar3);
    lVar5 = unaff_x20 + lVar5;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c3eb3c();
      func_0x000107c615e8(lVar5);
    }
    *(undefined1 *)(unaff_x20 + lVar6) = 0;
  }
  return;
}



/* Entry: 102c1d680; end: 102c1d9c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1d680(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar4 = &puStack_c0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112effd58);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1105b32b0;
    func_0x000107c613fc(&UNK_1105b32b0,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618(param_2);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    func_0x000107c61170(param_2);
    puVar3 = &UNK_1105b33c8;
    func_0x000107c613fc(&UNK_1105b33c8,0x48,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_5;
    *(undefined8 *)(puVar3 + 0x30) = param_1;
    *(undefined8 *)(puVar3 + 0x38) = param_6;
    *(undefined8 *)(puVar3 + 0x40) = param_7;
    uStack_a0 = 0x102c1e548;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_1105b33e0;
    puStack_98 = puVar3;
    func_0x000107c60bc4(&puStack_c0);
    puVar2 = puStack_98;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_6);
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e590(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102c1d9c8; end: 102c1dae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1d9c8(undefined8 param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_2 + _DAT_112effd60) == param_3) {
      puVar1 = (ulong *)(param_2 + _DAT_112effd50);
      uVar4 = puVar1[1];
      if ((uVar4 != 0) &&
         ((uVar3 = *puVar1, uVar3 == param_4 && uVar4 == param_5 ||
          (func_0x000107c605b8(uVar3,uVar4,param_4,param_5,0), (uVar3 & 1) != 0)))) {
        *puVar1 = 0;
        puVar1[1] = 0;
        func_0x000107c6142c(uVar4);
        puVar1 = (ulong *)(param_2 + _DAT_112effd20);
        uVar4 = puVar1[1];
        *puVar1 = param_4;
        puVar1[1] = param_5;
        func_0x000107c6142c(uVar4);
        puVar2 = (undefined8 *)(param_2 + _DAT_112effd28);
        *puVar2 = param_1;
        *(undefined1 *)(puVar2 + 1) = 0;
        func_0x000107c61434(param_5);
        FUN_102c1d21c(param_1,param_4,param_5);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c1dae8; end: 102c1db57;  */

void FUN_102c1dae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102c1db58(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102c1db58; end: 102c1de1f;  */

/* WARNING: Possible PIC construction at 0x000102c1dbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1dd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1dd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1ddb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1dd94) */
/* WARNING: Removing unreachable block (ram,0x000102c1dd98) */
/* WARNING: Removing unreachable block (ram,0x000102c1dd18) */
/* WARNING: Removing unreachable block (ram,0x000102c1dbd8) */
/* WARNING: Removing unreachable block (ram,0x000102c1ddbc) */
/* WARNING: Removing unreachable block (ram,0x000102c1ddfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1db58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112effd48);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112effd18);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar1);
    func_0x000107c61174(lVar2);
    func_0x000107c4ffe8();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  func_0x000107c615f0(lVar1);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c504ac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c1de20; end: 102c1dfcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1de20(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (*(long *)(param_3 + _DAT_112effd60) == param_4) {
      puVar1 = (undefined8 *)(param_3 + _DAT_112effd20);
      uVar2 = puVar1[1];
      *puVar1 = param_1;
      puVar1[1] = param_2;
      func_0x000107c6142c(uVar2);
      puVar1 = (undefined8 *)(param_3 + _DAT_112effd28);
      *puVar1 = 1;
      *(undefined1 *)(puVar1 + 1) = 0;
      func_0x000107c61434(param_2);
      FUN_102c1d010();
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102c1dfcc; end: 102c1e063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1dfcc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112effd18);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(param_1);
      lVar1 = lVar2;
      func_0x000107c4ffe8(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102c1e064; end: 102c1e08b; -[SensitiveContentWarningOperaLayerViewController shouldBlockOtherLayersFromDisplayingWithCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_102c1e064(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + _DAT_112effd30) != 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112effd38) ^ 1;
  }
  return bVar1 & 1;
}



/* Entry: 102c1e08c; end: 102c1e0df; -[SensitiveContentWarningOperaLayerViewController isBeingDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c1e08c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_1 + _DAT_112effd38) & 1) != 0) {
    return (undefined1 *)0x1;
  }
  plVar2 = &lStack_30;
  lVar1 = param_1;
  func_0x000107c614f0();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_isBeingDismissed_1125f8e78);
  return (undefined1 *)plVar2;
}



/* Entry: 102c1e0e0; end: 102c1e0e3; -[SensitiveContentWarningOperaLayerViewController didTryPagingWhenPagingDisabled:] */

void FUN_102c1e0e0(void)

{
  return;
}



/* Entry: 102c1e0e4; end: 102c1e103; -[SensitiveContentWarningOperaLayerViewController blockingViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e0e4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112effd40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c1e104; end: 102c1e117; -[SensitiveContentWarningOperaLayerViewController setBlockingViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e104(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112effd40,param_3);
  return;
}



/* Entry: 102c1e118; end: 102c1e11f; -[SensitiveContentWarningOperaLayerViewController actionBarContentViewForConfiguration:] */

void FUN_102c1e118(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102c1e120; end: 102c1e17f; -[SensitiveContentWarningOperaLayerViewController initWithNibName:bundle:] */

void FUN_102c1e120(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SensitiveContentWarningOperaLayer.SensitiveContentWarningOperaLayerViewController"
                      ,0x51,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c1e14c);
  (*pcVar1)();
}



/* Entry: 102c1e180; end: 102c1e20f; -[SensitiveContentWarningOperaLayerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c1e19c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1e1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112effd48));
  return;
}



/* Entry: 102c1e210; end: 102c1e33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112effd30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112effd18) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112effd40,0);
  *(undefined1 *)(unaff_x20 + _DAT_112effd38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112effd60) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_112effd58;
  puVar4 = &UNK_10db33520;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithConfiguration_layerViewC_1125de030,
                      param_1,param_2,param_3,param_4);
  if (puVar5 != (undefined1 *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102c1e340);
  (*pcVar3)();
}



/* Entry: 102c1e340; end: 102c1e46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e340(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112effd30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112effd18) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112effd40,0);
  *(undefined1 *)(unaff_x20 + _DAT_112effd38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112effd60) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd50);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112effd28);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_112effd58;
  puVar4 = &UNK_10db33520;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SensitiveContentWarningOperaLayer/SensitiveContentWarningOperaLayerViewController.swift"
                      ,0x57,2,0x8a,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102c1e448);
  (*pcVar3)();
}



/* Entry: 102c1e46c; end: 102c1e48b;  */

void FUN_102c1e46c(void)

{
  func_0x000107c61168(&PTR_PTR_112effda8);
  return;
}



/* Entry: 102c1e48c; end: 102c1e49b;  */

void FUN_102c1e48c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102c1e49c; end: 102c1e4db;  */

undefined8 FUN_102c1e49c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c1e4dc; end: 102c1e507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e4dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  ppuVar10 = &puStack_c0;
  func_0x000107c61428(lVar8 + 0x10,auStack_78,0,0);
  lVar6 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uVar11 = *(undefined8 *)(lVar6 + _DAT_112effd58);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(lVar6);
    puVar7 = &UNK_1105b32b0;
    func_0x000107c613fc(&UNK_1105b32b0,0x18,7);
    func_0x000107c61428(lVar8 + 0x10,auStack_90,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618(lVar8);
    func_0x000107c61614(puVar7 + 0x10,lVar8);
    func_0x000107c61170(lVar8);
    puVar9 = &UNK_1105b33c8;
    func_0x000107c613fc(&UNK_1105b33c8,0x48,7);
    *(undefined **)(puVar9 + 0x10) = puVar7;
    *(undefined8 *)(puVar9 + 0x18) = uVar3;
    *(undefined8 *)(puVar9 + 0x20) = uVar1;
    *(undefined8 *)(puVar9 + 0x28) = uVar4;
    *(undefined8 *)(puVar9 + 0x30) = param_1;
    *(undefined8 *)(puVar9 + 0x38) = uVar2;
    *(undefined8 *)(puVar9 + 0x40) = uVar5;
    uStack_a0 = 0x102c1e548;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_1105b33e0;
    puStack_98 = puVar9;
    func_0x000107c60bc4(&puStack_c0);
    puVar7 = puStack_98;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(uVar2);
    func_0x000107c61434(uVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c4e590(uVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c615e8(uVar11);
  }
  return;
}



/* Entry: 102c1e508; end: 102c1e523;  */

void FUN_102c1e508(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102c1d9c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102c1e524; end: 102c1e55b;  */

void FUN_102c1e524(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102c1db58(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102c1e55c; end: 102c1e587;  */

void FUN_102c1e55c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c1e588; end: 102c1e58f;  */

void FUN_102c1e588(long param_1,long param_2)

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



/* Entry: 102c1e590; end: 102c1e593; -[SensitiveContentWarningOperaLayerViewController shouldHideActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c1e590(long param_1)

{
  return *(long *)(param_1 + _DAT_112effd30) != 0;
}



/* Entry: 102c1e594; end: 102c1e59b; -[SensitiveContentWarningOperaLayerViewController isBlocking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c1e594(long param_1)

{
  return *(long *)(param_1 + _DAT_112effd30) != 0;
}



/* Entry: 102c1e59c; end: 102c1e5a7; -[SensitiveContentWarningOperaLayer mediaID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e59c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112effe48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112effe48))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c1e5a8; end: 102c1e5b3; -[SensitiveContentWarningOperaLayer imageKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1e5a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112effe50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112effe50))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c1e5b4; end: 102c1e5fb;  */

void FUN_102c1e5b4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


