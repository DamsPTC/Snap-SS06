/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026ca468; end: 1026ca49f;  */

void FUN_1026ca468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb6630 == (undefined *)0x0 || ((ulong)puRam0000000112eb6630 & 1) != 0) {
    puVar1 = &UNK_10e91b106;
    func_0x000107c61518(&UNK_10e91b106,0x29,0,0);
    puRam0000000112eb6630 = puVar1;
  }
  return;
}



/* Entry: 1026ca4a0; end: 1026ca627;  */

void FUN_1026ca4a0(long param_1,code *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  uVar6 = 0xd000000000000010;
  lVar5 = -0x2ffffffffffffff0;
  func_0x0001026c9f40(0);
  pcVar7 = "footsteps_onboard";
  if (param_1 < 2) {
    if (param_1 != 0) {
      pcVar3 = pcVar7;
      if (param_1 != 1) {
LAB_1026ca60c:
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ca628);
        (*pcVar1)();
      }
      goto LAB_1026ca540;
    }
    pcVar3 = "footsteps_onboard";
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_1026ca60c;
      pcVar3 = "ntation.SoundTopicModalWorkflow";
      goto LAB_1026ca540;
    }
    pcVar3 = "share_back_banner";
  }
  lVar5 = -0x2fffffffffffffef;
  pcVar3 = pcVar3 + -0x20;
LAB_1026ca540:
  func_0x000107c5fb5c(lVar5,(ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
  if (lVar5 < 0x40) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    pcVar3 = "ntation.SoundTopicModalWorkflow";
    uVar2 = uVar6;
    if (param_1 == 2) {
      pcVar3 = "music_onboarding";
      uVar2 = 0xd000000000000011;
    }
    if (param_1 == 0) {
      uVar6 = 0xd000000000000011;
      pcVar7 = "VC:mapFriendLoad";
    }
    if (param_1 < 2) {
      pcVar3 = pcVar7;
      uVar2 = uVar6;
    }
    func_0x000107c5fadc(uVar2,(ulong)pcVar3 | 0x8000000000000000);
    func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
    (*param_2)(uVar4,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1026ca628; end: 1026ca66b;  */

void FUN_1026ca628(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026ca66c; end: 1026ca827;  */

/* WARNING: Removing unreachable block (ram,0x0001026ca81c) */

ulong FUN_1026ca66c(void)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  pppuVar9 = *(undefined8 ****)(lVar7 + 0x10);
  if (pppuVar9 != (undefined8 ***)0x0) {
    func_0x000107c61438(lVar7,2);
    pppuVar4 = pppuVar9;
    func_0x0001026ca2c4(pppuVar9,0);
    pppuVar5 = &ppuStack_90;
    FUN_1026cb9b0(pppuVar5,pppuVar4 + 4,pppuVar9,lVar7);
    func_0x0001026cbaa4(ppuStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    if (pppuVar5 != pppuVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026ca81c);
      (*pcVar2)();
    }
    ppuStack_90 = pppuVar4;
    FUN_1026cade0(&ppuStack_90);
    func_0x000107c6142c(lVar7);
    ppuVar1 = ppuStack_90;
    ppuVar11 = (undefined8 **)ppuStack_90[2];
    if (ppuVar11 != (undefined8 **)0x0) {
      ppuVar12 = (undefined8 **)0x0;
      do {
        if (ppuVar1[2] <= ppuVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026ca818);
          (*pcVar2)();
        }
        ppuVar10 = (undefined8 **)ppuVar1[(long)ppuVar12 + 4];
        pppuVar9 = &ppuStack_90;
        func_0x000107c61428(unaff_x20 + 0x10,pppuVar9,0x21,0);
        FUN_1026cc230();
        if (((ulong)pppuVar9 & 1) == 0) {
          func_0x000107c614a8(&ppuStack_90);
        }
        else {
          iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x10);
          func_0x000107c61558();
          lVar7 = *(long *)(unaff_x20 + 0x10);
          *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
          if (iVar3 == 0) {
            FUN_1026ca86c();
          }
          uVar8 = *(ulong *)(*(long *)(lVar7 + 0x38) + (long)ppuVar10 * 8);
          func_0x0001026cac4c(ppuVar10,lVar7);
          *(long *)(unaff_x20 + 0x10) = lVar7;
          func_0x000107c614a8(&ppuStack_90);
          uVar6 = uVar8;
          func_0x000107c5e0c0();
          if ((uVar6 & 1) != 0) {
            func_0x000107c61574(ppuVar1);
            return uVar8;
          }
          func_0x000107c615e8(uVar8);
        }
        ppuVar12 = (undefined8 **)((long)ppuVar12 + 1);
      } while (ppuVar11 != ppuVar12);
    }
    func_0x000107c61574(ppuVar1);
  }
  return 0;
}



/* Entry: 1026ca828; end: 1026ca86b;  */

void FUN_1026ca828(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026ca86c; end: 1026ca9c7;  */

void FUN_1026ca86c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112eb6780,&UNK_10dacce18);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_1026ca948;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c615f0();
        if (uVar6 != 0) break;
LAB_1026ca948:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ca9c8);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1026ca9a0;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1026ca9a0:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1026ca9c8; end: 1026caddf;  */

void FUN_1026ca9c8(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar14 = 0x112eb6780;
  func_0x0001000285a8(0x112eb6780,&UNK_10dacce18);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1026cac18:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1026cac48);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_1026cac18;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c615f0(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1026cac4c);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 1026cade0; end: 1026caf17;  */

void FUN_1026cade0(ulong *param_1)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  ulong *puStack_50;
  ulong uStack_48;
  
  uVar12 = *param_1;
  uVar6 = uVar12;
  func_0x000107c61558();
  if ((uVar6 & 1) == 0) {
    FUN_1026cb89c();
  }
  uVar13 = *(ulong *)(uVar12 + 0x10);
  puVar1 = (ulong *)(uVar12 + 0x20);
  uVar6 = uVar13;
  puStack_50 = puVar1;
  uStack_48 = uVar13;
  func_0x000107c60574();
  if ((long)uVar6 < (long)uVar13) {
    puVar14 = (undefined *)(uVar13 >> 1);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar13) {
      uVar3 = 0;
      func_0x0001026c9f40(0);
      puVar4 = puVar14;
      func_0x000107c60380(puVar14,uVar3);
      *(undefined **)(puVar4 + 0x10) = puVar14;
    }
    puStack_68 = puVar4 + 0x20;
    puStack_60 = puVar14;
    FUN_1026cb0bc(&puStack_68,auStack_58,&puStack_50,uVar6);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    func_0x000107c61574(puVar4);
  }
  else if ((uVar13 != 0) && (uVar13 != 1)) {
    lVar5 = -1;
    uVar6 = 1;
    puVar7 = puVar1;
    do {
      uVar8 = puVar1[uVar6];
      lVar9 = lVar5;
      puVar10 = puVar7;
      do {
        uVar11 = *puVar10;
        if (uVar11 <= uVar8) break;
        *puVar10 = uVar8;
        puVar10[1] = uVar11;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar10 = puVar10 + -1;
      } while (bVar2);
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar6 != uVar13);
  }
  *param_1 = uVar12;
  return;
}



/* Entry: 1026caf18; end: 1026cb0bb;  */

ulong FUN_1026caf18(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026caff0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026caff4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001c,0x800000010f0b6250);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb0bc);
  (*pcVar2)();
}



/* Entry: 1026cb0bc; end: 1026cb423;  */

void FUN_1026cb0bc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long unaff_x21;
  long lVar19;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar8 = 0;
    do {
      puVar6 = puStack_58;
      lVar19 = lVar8 + 1;
      if (lVar19 < lVar7) {
        lVar9 = *param_3;
        uVar10 = *(ulong *)(lVar9 + lVar19 * 8);
        uVar13 = *(ulong *)(lVar9 + lVar8 * 8);
        lVar11 = lVar8 + 2;
        uVar16 = uVar10;
        do {
          lVar15 = lVar11;
          lVar19 = lVar7;
          if (lVar7 == lVar15) break;
          uVar17 = *(ulong *)(lVar9 + lVar15 * 8);
          bVar3 = uVar16 <= uVar17;
          lVar11 = lVar15 + 1;
          uVar16 = uVar17;
          lVar19 = lVar15;
        } while (uVar10 < uVar13 != bVar3);
        if (uVar10 < uVar13) {
          if (lVar19 < lVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb3f8);
            (*pcVar2)();
          }
          lVar11 = lVar8;
          lVar15 = lVar19;
          if (lVar8 < lVar19) {
            do {
              lVar15 = lVar15 + -1;
              if (lVar11 != lVar15) {
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb418);
                  (*pcVar2)();
                }
                uVar14 = *(undefined8 *)(lVar9 + lVar11 * 8);
                *(undefined8 *)(lVar9 + lVar11 * 8) = *(undefined8 *)(lVar9 + lVar15 * 8);
                *(undefined8 *)(lVar9 + lVar15 * 8) = uVar14;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < lVar15);
            lVar7 = param_3[1];
          }
        }
      }
      lVar11 = lVar19;
      if (lVar19 < lVar7) {
        if (SBORROW8(lVar19,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb3f4);
          (*pcVar2)();
        }
        if (lVar19 - lVar8 < param_4) {
          if (SCARRY8(lVar8,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb3fc);
            (*pcVar2)();
          }
          lVar9 = lVar8 + param_4;
          if (lVar7 <= lVar8 + param_4) {
            lVar9 = lVar7;
          }
          if (lVar9 < lVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb400);
            (*pcVar2)();
          }
          if (lVar19 != lVar9) {
            lVar7 = *param_3;
            puVar12 = (ulong *)(lVar7 + lVar19 * 8 + -8);
            lVar15 = lVar8 - lVar19;
            do {
              uVar16 = *(ulong *)(lVar7 + lVar19 * 8);
              lVar11 = lVar15;
              puVar18 = puVar12;
              do {
                uVar10 = *puVar18;
                if (uVar10 <= uVar16) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb404);
                  (*pcVar2)();
                }
                *puVar18 = uVar16;
                puVar18[1] = uVar10;
                bVar3 = lVar11 != -1;
                lVar11 = lVar11 + 1;
                puVar18 = puVar18 + -1;
              } while (bVar3);
              lVar19 = lVar19 + 1;
              puVar12 = puVar12 + 1;
              lVar15 = lVar15 + -1;
              lVar11 = lVar9;
            } while (lVar19 != lVar9);
          }
        }
      }
      if (lVar11 < lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb3e4);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar16 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar16) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar16 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar16 + 1;
      *(long *)(puVar6 + uVar16 * 0x10 + 0x20) = lVar8;
      *(long *)(puVar6 + uVar16 * 0x10 + 0x28) = lVar11;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb41c);
        (*pcVar2)();
      }
      FUN_1026cb424(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1026cb3b4;
      lVar7 = param_3[1];
      lVar8 = lVar11;
    } while (lVar11 < lVar7);
  }
  puVar6 = puStack_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb424);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar12 = (ulong *)(puVar6 + 0x10);
  uVar16 = *puVar12;
  while (1 < uVar16) {
    lVar8 = *param_3;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb420);
      (*pcVar2)();
    }
    plVar1 = (long *)(puVar6 + uVar16 * 0x10);
    lVar19 = *plVar1;
    puVar18 = puVar12 + uVar16 * 2;
    uVar10 = puVar18[1];
    FUN_1026cb694(lVar8 + lVar19 * 8,lVar8 + *puVar18 * 8,lVar8 + uVar10 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar10 < lVar19) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb3e8);
      (*pcVar2)();
    }
    if (*puVar12 <= uVar16 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb3ec);
      (*pcVar2)();
    }
    *plVar1 = lVar19;
    plVar1[1] = uVar10;
    uVar10 = *puVar12;
    lVar8 = uVar10 - uVar16;
    if (uVar10 < uVar16) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb3f0);
      (*pcVar2)();
    }
    uVar16 = uVar10 - 1;
    func_0x000107c610b8(puVar18,puVar18 + 2,lVar8 * 0x10);
    *puVar12 = uVar16;
  }
LAB_1026cb3b4:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1026cb424; end: 1026cb693;  */

undefined8 FUN_1026cb424(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    func_0x000107c61558();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_1026cb4fc;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb674);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1026cb55c:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb664);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb66c);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb64c);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb650);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb658);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb660);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1026cb4fc:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb654);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb65c);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb668);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb670);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1026cb55c;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb678);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb63c);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb694);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_1026cb694(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb640);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb644);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026cb648);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Entry: 1026cb694; end: 1026cb89b;  */

undefined8 FUN_1026cb694(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong *puVar4;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar1 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar1 = lVar10;
  }
  lVar1 = lVar1 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar5 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar5 = lVar11;
  }
  lVar5 = lVar5 >> 3;
  if (lVar1 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar1 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 << 3);
    }
    puVar4 = param_4 + lVar1;
    puVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        uVar6 = *param_2;
        if (uVar6 < *param_4) {
          puVar9 = param_4;
          puVar7 = param_2 + 1;
          puVar2 = param_2;
        }
        else {
          uVar6 = *param_4;
          puVar9 = param_4 + 1;
          puVar7 = param_2;
          puVar2 = param_4;
        }
        param_2 = puVar7;
        param_4 = puVar9;
        if (puVar8 != puVar2) {
          *puVar8 = uVar6;
        }
        puVar8 = puVar8 + 1;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar5 << 3);
    }
    puVar2 = param_4 + lVar5;
    puVar4 = puVar2;
    puVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        puVar7 = param_2 + -1;
        puVar9 = param_3;
        while( true ) {
          param_3 = puVar9 + -1;
          puVar4 = puVar2 + -1;
          if (*puVar4 < *puVar7) break;
          if (puVar9 != puVar2) {
            *param_3 = *puVar4;
          }
          puVar2 = puVar4;
          puVar8 = param_2;
          puVar9 = param_3;
          if (puVar4 <= param_4) goto LAB_1026cb840;
        }
        if (puVar9 != param_2) {
          *param_3 = *puVar7;
        }
        puVar4 = puVar2;
        puVar8 = puVar7;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar2));
    }
  }
LAB_1026cb840:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar6 = uVar3 + 7;
  if (-1 < (long)uVar3) {
    uVar6 = uVar3;
  }
  if ((puVar8 != param_4) || ((ulong *)((long)param_4 + (uVar6 & 0xfffffffffffffff8)) <= puVar8)) {
    func_0x000107c610b8(puVar8,param_4,((long)uVar6 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1026cb89c; end: 1026cb8af;  */

/* WARNING: Removing unreachable block (ram,0x0001026cb8cc) */
/* WARNING: Removing unreachable block (ram,0x0001026cb8dc) */
/* WARNING: Removing unreachable block (ram,0x0001026cb9ac) */
/* WARNING: Removing unreachable block (ram,0x0001026cb8e8) */
/* WARNING: Removing unreachable block (ram,0x0001026cb8f0) */
/* WARNING: Removing unreachable block (ram,0x0001026cb968) */
/* WARNING: Removing unreachable block (ram,0x0001026cb970) */
/* WARNING: Removing unreachable block (ram,0x0001026cb974) */
/* WARNING: Removing unreachable block (ram,0x0001026cb978) */
/* WARNING: Removing unreachable block (ram,0x0001026cb980) */

undefined * FUN_1026cb89c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112eb6638;
    func_0x0001000285a8(0x112eb6638,&UNK_10daccdb8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  func_0x000107c610b4(puVar3 + 0x20,param_1 + 0x20,lVar5 << 3);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 1026cb8b0; end: 1026cb9af;  */

undefined * FUN_1026cb8b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cb9b0);
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
    puVar3 = (undefined *)0x112eb6638;
    func_0x0001000285a8(0x112eb6638,&UNK_10daccdb8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1026cb9b0; end: 1026cbaab;  */

long FUN_1026cb9b0(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (ulong *)(param_4 + 0x40);
  uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar6 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *puVar4;
  if (param_2 == (undefined8 *)0x0) {
    lVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cbaa4);
      (*pcVar2)();
    }
    lVar7 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar5 >> 6;
    lVar8 = lVar7;
    do {
      while (uVar6 == 0) {
        bVar3 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cbaa0);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar7) {
          uVar6 = 0;
          if ((long)uVar10 <= lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          lVar7 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_1026cba84;
        }
        uVar6 = puVar4[lVar7];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar7 * 0x200);
      lVar8 = lVar7;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_1026cba84:
  *param_1 = param_4;
  param_1[1] = (long)puVar4;
  param_1[2] = ~uVar5;
  param_1[3] = lVar7;
  param_1[4] = uVar6;
  return param_3;
}



/* Entry: 1026cbaac; end: 1026cbccb;  */

void FUN_1026cbaac(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    puVar9 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar9 = param_1;
    }
    func_0x000107c60480();
    puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar2;
  if (puVar9 != (undefined *)0x0) {
    uVar10 = 0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1026cbc6c);
          (*pcVar3)();
        }
        uVar11 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c615f0(uVar11);
        puVar7 = param_2;
      }
      else {
        uVar11 = uVar10;
        puVar7 = param_1;
        FUN_1026caf18();
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026cbc68);
        (*pcVar3)();
      }
      puVar13 = (undefined *)(uVar10 + 1);
      uVar4 = uVar11;
      func_0x000107c5d0f0();
      func_0x000107c615f0(uVar11);
      puVar5 = puVar2;
      func_0x000107c61558();
      uVar6 = uVar4;
      FUN_1026cc230();
      uVar8 = (ulong)~(uint)puVar7 & 1;
      lVar1 = *(long *)(puVar2 + 0x10) + uVar8;
      if (SCARRY8(*(long *)(puVar2 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026cbc70);
        (*pcVar3)();
      }
      if (*(long *)(puVar2 + 0x18) < lVar1) {
        FUN_1026ca9c8(lVar1);
        uVar6 = uVar4;
        FUN_1026cc230();
        param_2 = puVar5;
        if (((uint)puVar7 & 1) != ((uint)puVar5 & 1)) {
          func_0x0001026c9f40(0);
          func_0x000107c60624();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1026cbccc);
          (*pcVar3)();
        }
LAB_1026cbbdc:
        if (((ulong)puVar7 & 1) != 0) goto LAB_1026cbb04;
LAB_1026cbbe4:
        *(ulong *)(puVar2 + (uVar6 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar2 + (uVar6 >> 6) * 8 + 0x40) | 1L << (uVar6 & 0x3f);
        *(ulong *)(*(long *)(puVar2 + 0x30) + uVar6 * 8) = uVar4;
        *(ulong *)(*(long *)(puVar2 + 0x38) + uVar6 * 8) = uVar11;
        func_0x000107c615e8(uVar11);
        if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1026cbc74);
          (*pcVar3)();
        }
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      }
      else {
        param_2 = puVar7;
        if (((ulong)puVar5 & 1) != 0) goto LAB_1026cbbdc;
        FUN_1026ca86c();
        if (((ulong)puVar7 & 1) == 0) goto LAB_1026cbbe4;
LAB_1026cbb04:
        uVar12 = *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar6 * 8);
        *(ulong *)(*(long *)(puVar2 + 0x38) + uVar6 * 8) = uVar11;
        func_0x000107c615e8(uVar11);
        func_0x000107c615e8(uVar12);
      }
      uVar10 = uVar10 + 1;
    } while (puVar13 != puVar9);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 1026cbccc; end: 1026cc1d3;  */

void FUN_1026cbccc(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long extraout_x8;
  int *piVar5;
  int aiStack_50 [2];
  undefined1 auStack_48 [24];
  
  lVar3 = 0;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  piVar5 = (int *)((long)aiStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61174(param_1);
    func_0x0001000d0fb8(piVar5);
    piVar4 = piVar5;
    func_0x000107c614c4(piVar5,lVar3);
    if ((int)piVar4 == 0) {
      iVar1 = *piVar5;
      if (iVar1 == 0x93) {
        *(undefined1 *)(param_2 + 0x28) = 1;
        func_0x0001026cbe34();
        lVar3 = 0x112d7af10;
        func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
        iVar2 = *(int *)(lVar3 + 0x50);
        func_0x000107c61574(param_2);
      }
      else {
        lVar3 = 0x112d7af10;
        func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
        iVar2 = *(int *)(lVar3 + 0x50);
        if (iVar1 != 0x11) {
          *(undefined1 *)(param_2 + 0x28) = 0;
          lVar3 = *(long *)(param_2 + 0x20);
          if (lVar3 != 0) {
            func_0x000107c615f0(lVar3);
            func_0x000107c5d0f0();
            func_0x0001026ca494();
            func_0x000107c5abb8(lVar3);
            func_0x000107c615e8(lVar3);
          }
        }
        func_0x000107c61574(param_2);
      }
      func_0x0001000d1dcc((long)piVar5 + (long)iVar2);
    }
    else {
      func_0x000107c61574(param_2);
      func_0x0001013d38bc(piVar5);
    }
  }
  return;
}



/* Entry: 1026cc1d4; end: 1026cc22f;  */

void FUN_1026cc1d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026cc230; end: 1026cc287;  */

void FUN_1026cc230(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1026cc288; end: 1026cc2eb;  */

void FUN_1026cc288(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1026cc2ec; end: 1026cc463;  */

void FUN_1026cc2ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  func_0x0001026ca84c(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1026cbaac();
  func_0x000107c6142c(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  lVar3 = 0;
  func_0x0001026ca64c();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aad90;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x10) = puVar2;
  *(long *)(unaff_x20 + 0x30) = lVar3;
  func_0x000107c40fa4(param_2);
  func_0x000107c61180();
  puVar2 = &UNK_110538f50;
  func_0x000107c613fc(&UNK_110538f50,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_1026cc464;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1013d3a70;
  puStack_48 = &UNK_110538f68;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar1 = param_2;
  func_0x000107c5c320(param_2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_2);
  func_0x000107c3e924(uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1026cc464; end: 1026cc48f;  */

void FUN_1026cc464(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long extraout_x8;
  long unaff_x20;
  int *piVar6;
  int aiStack_50 [2];
  undefined1 auStack_48 [24];
  
  lVar3 = 0;
  func_0x0001000d0cdc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  piVar6 = (int *)((long)aiStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c61174(param_1);
    func_0x0001000d0fb8(piVar6);
    piVar5 = piVar6;
    func_0x000107c614c4(piVar6,lVar3);
    if ((int)piVar5 == 0) {
      iVar1 = *piVar6;
      if (iVar1 == 0x93) {
        *(undefined1 *)(lVar4 + 0x28) = 1;
        func_0x0001026cbe34();
        lVar3 = 0x112d7af10;
        func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
        iVar2 = *(int *)(lVar3 + 0x50);
        func_0x000107c61574(lVar4);
      }
      else {
        lVar3 = 0x112d7af10;
        func_0x0001000285a8(0x112d7af10,&UNK_10dbcce80);
        iVar2 = *(int *)(lVar3 + 0x50);
        if (iVar1 != 0x11) {
          *(undefined1 *)(lVar4 + 0x28) = 0;
          lVar3 = *(long *)(lVar4 + 0x20);
          if (lVar3 != 0) {
            func_0x000107c615f0(lVar3);
            func_0x000107c5d0f0();
            func_0x0001026ca494();
            func_0x000107c5abb8(lVar3);
            func_0x000107c615e8(lVar3);
          }
        }
        func_0x000107c61574(lVar4);
      }
      func_0x0001000d1dcc((long)piVar6 + (long)iVar2);
    }
    else {
      func_0x000107c61574(lVar4);
      func_0x0001013d38bc(piVar6);
    }
  }
  return;
}



/* Entry: 1026cc490; end: 1026cc4bb;  */

void FUN_1026cc490(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026cc4bc; end: 1026cc5bf;  */

undefined * FUN_1026cc4bc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112eb6780);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  FUN_1026cc230();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026cc5c0);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c615f0();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c615f0();
      uVar3 = uVar9;
      FUN_1026cc230();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026cc590);
  (*pcVar1)();
}



/* Entry: 1026cc5c0; end: 1026cc5d3;  */

void FUN_1026cc5c0(long param_1,long param_2)

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



/* Entry: 1026cc5d4; end: 1026cc7c3;  */

void FUN_1026cc5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb6848,&UNK_10dacce70);
  puVar1 = &UNK_1105390c8;
  func_0x000107c613fc(&UNK_1105390c8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(0x1026cc6c0,puVar1);
  return;
}



/* Entry: 1026cc7c4; end: 1026cc7d3;  */

undefined1  [16] FUN_1026cc7c4(void)

{
  return ZEXT816(0x1105390f0);
}



/* Entry: 1026cc7d4; end: 1026cc82f;  */

void FUN_1026cc7d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026cc830; end: 1026cc927;  */

void FUN_1026cc830(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000285a8(0x112eb6858,&UNK_10dacceb8);
  func_0x0001000838ec(param_2);
  func_0x0001026d13f8(uVar7);
  func_0x000100082720("ShareBackBannerLoggerServiceProvider",0x24,2);
  FUN_1026d4020(uVar8,uVar1,uVar4,uVar7,uVar2,uVar5,param_2,uVar3,uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(param_2);
  func_0x000100082720("ShareBackBannerPresenterEntryPointProvider",0x2a,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1026cc928; end: 1026cc9a7;  */

void FUN_1026cc928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb6860,&UNK_10daccec0);
  puVar1 = &UNK_1105391c0;
  func_0x000107c613fc(&UNK_1105391c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026cca1c,puVar1);
  return;
}



/* Entry: 1026cc9a8; end: 1026cca1b;  */

void FUN_1026cc9a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1026cd1c8();
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1026cca64(param_2,param_3);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110539200;
  *param_1 = param_2;
  return;
}



/* Entry: 1026cca1c; end: 1026cca23;  */

void FUN_1026cca1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = uVar3;
  FUN_1026cd1c8();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  FUN_1026cca64(uVar3,uVar1);
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_110539200;
  *param_1 = uVar3;
  return;
}



/* Entry: 1026cca24; end: 1026cca63;  */

void FUN_1026cca24(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1026cca64(param_1,param_2);
  return;
}



/* Entry: 1026cca64; end: 1026ccbfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026cca64(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  long lStack_68;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112eb6870) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6878) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eb6868) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6880) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_2);
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar1,puVar4);
  func_0x000100083b20(&lStack_68);
  lVar6 = *(long *)(lStack_68 + _DAT_113083190);
  lVar2 = lVar6;
  func_0x000107c61174(lVar6);
  func_0x000107c61170(lStack_68);
  if (lVar6 == 0) {
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
  }
  else {
    func_0x0001000285a8(0x112eb0aa0,&UNK_10dac80e0);
    lVar6 = lVar2;
    func_0x0001000b637c(lVar2);
    plVar3 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(lVar6);
    puVar4 = &UNK_1105391e8;
    func_0x000107c613fc(&UNK_1105391e8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,puVar1);
    pcVar5 = FUN_1026ccce8;
    (**(code **)(*plVar3 + 0x60))(FUN_1026ccce8,puVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c615e8(pcVar5);
  }
  return puVar1;
}



/* Entry: 1026ccbfc; end: 1026ccce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ccbfc(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c61174(*param_1);
  func_0x0001045197e4(&uStack_168);
  uStack_68 = uStack_100;
  uStack_70 = uStack_108;
  uStack_58 = uStack_f0;
  uStack_60 = uStack_f8;
  uStack_48 = uStack_e0;
  uStack_50 = uStack_e8;
  uStack_40 = uStack_d8;
  uStack_a8 = uStack_140;
  uStack_b0 = uStack_148;
  uStack_98 = uStack_130;
  uStack_a0 = uStack_138;
  uStack_88 = uStack_120;
  uStack_90 = uStack_128;
  uStack_78 = uStack_110;
  uStack_80 = uStack_118;
  uStack_c8 = uStack_160;
  uStack_d0 = uStack_168;
  uStack_b8 = uStack_150;
  uStack_c0 = uStack_158;
  iVar2 = (int)&uStack_d0;
  FUN_10262a02c();
  if (iVar2 == 9) {
    func_0x000107c61428(param_2 + 0x10,auStack_180,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112eb6868;
    if (param_2 != 0) {
      func_0x000107c61428(param_2 + _DAT_112eb6868,auStack_198,1,0);
      *(undefined1 *)(param_2 + lVar1) = 1;
      func_0x000107c61170(param_2);
    }
  }
  else {
    FUN_10267c6c4(&uStack_168);
  }
  return;
}



/* Entry: 1026ccce8; end: 1026cccef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ccce8(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c61174(*param_1);
  func_0x0001045197e4(&uStack_168);
  uStack_68 = uStack_100;
  uStack_70 = uStack_108;
  uStack_58 = uStack_f0;
  uStack_60 = uStack_f8;
  uStack_48 = uStack_e0;
  uStack_50 = uStack_e8;
  uStack_40 = uStack_d8;
  uStack_a8 = uStack_140;
  uStack_b0 = uStack_148;
  uStack_98 = uStack_130;
  uStack_a0 = uStack_138;
  uStack_88 = uStack_120;
  uStack_90 = uStack_128;
  uStack_78 = uStack_110;
  uStack_80 = uStack_118;
  uStack_c8 = uStack_160;
  uStack_d0 = uStack_168;
  uStack_b8 = uStack_150;
  uStack_c0 = uStack_158;
  iVar2 = (int)&uStack_d0;
  FUN_10262a02c();
  if (iVar2 == 9) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_180,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112eb6868;
    if (lVar3 != 0) {
      func_0x000107c61428(lVar3 + _DAT_112eb6868,auStack_198,1,0);
      *(undefined1 *)(lVar3 + lVar1) = 1;
      func_0x000107c61170(lVar3);
    }
  }
  else {
    FUN_10267c6c4(&uStack_168);
  }
  return;
}



/* Entry: 1026cccf0; end: 1026ccd87;  */

void FUN_1026cccf0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1026cd1e8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026ccd88,uVar2,uVar3);
  return;
}



/* Entry: 1026ccd88; end: 1026ccec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ccd88(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  *(undefined **)(unaff_x22 + 0x98) = puVar1;
  FUN_1026e3784(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  lVar2 = lVar3;
  func_0x000107c61174();
  FUN_1026e36d8(puVar1,lVar3);
  *(undefined **)(unaff_x22 + 0xa0) = puVar1;
  func_0x000100083b20(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined **)(unaff_x22 + 0x58) = puVar1;
  func_0x00010008a7c8(unaff_x22 + 0x50,unaff_x22 + 0x58);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000100083b20(unaff_x22 + 0x58);
  func_0x000107c61574(uVar4);
  lVar3 = _DAT_112eb6870;
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112eb6870);
  *(undefined8 *)(lVar2 + _DAT_112eb6870) = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615e8(uVar4);
  lVar3 = *(long *)(lVar2 + lVar3);
  if (lVar3 != 0) {
    func_0x000107c4ee7c();
  }
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026ccec8,lVar3);
  return;
}



/* Entry: 1026ccec8; end: 1026ccf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ccec8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x68);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x1026ccf18;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  *(long *)(lVar2 + _DAT_112eb6878) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1026ccf8c; end: 1026ccfd3;  */

void FUN_1026ccf8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001026ccfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 1026ccfd4; end: 1026cd033; -[_TtC36MapStartupPromptPluginImplementation32ArrivalNotificationsUpsellPlugin init] */

void FUN_1026ccfd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStartupPromptPluginImplementation.ArrivalNotificationsUpsellPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026cd000);
  (*pcVar1)();
}



/* Entry: 1026cd034; end: 1026cd06b; -[_TtC36MapStartupPromptPluginImplementation32ArrivalNotificationsUpsellPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cd034(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb6880));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb6870));
  return;
}



/* Entry: 1026cd06c; end: 1026cd073;  */

undefined8 FUN_1026cd06c(void)

{
  return 0;
}



/* Entry: 1026cd074; end: 1026cd0b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1026cd074(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb6868;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112eb6868,auStack_38,0,0);
  return *(undefined1 *)(lVar2 + lVar1);
}



/* Entry: 1026cd0b8; end: 1026cd107;  */

void FUN_1026cd0b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026cd108;
  plVar3[0xc] = param_1;
  plVar3[0xd] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  plVar3[0xe] = lVar2;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0xf] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1026cd1e8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  plVar3[0x10] = lVar4;
  func_0x000107c5fca8();
  plVar3[0x11] = lVar2;
  plVar3[0x12] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026ccd88,lVar2,lVar4);
  return;
}



/* Entry: 1026cd108; end: 1026cd14b;  */

void FUN_1026cd108(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026cd148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1026cd14c; end: 1026cd18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cd14c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eb6870);
  *(undefined8 *)(unaff_x20 + _DAT_112eb6870) = 0;
  func_0x000107c615e8(uVar2);
  lVar1 = _DAT_112eb6878;
  if (*(long *)(unaff_x20 + _DAT_112eb6878) != 0) {
    func_0x000107c61450();
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  return;
}



/* Entry: 1026cd190; end: 1026cd1b7; -[_TtC36MapStartupPromptPluginImplementation32ArrivalNotificationsUpsellPlugin upsellScopeDidDismiss] */

void FUN_1026cd190(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026cd14c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026cd1b8; end: 1026cd1c7;  */

undefined1  [16] FUN_1026cd1b8(void)

{
  return ZEXT816(0x110539230);
}



/* Entry: 1026cd1c8; end: 1026cd1e7;  */

void FUN_1026cd1c8(void)

{
  func_0x000107c61168(&PTR_PTR_112858dd8);
  return;
}



/* Entry: 1026cd1e8; end: 1026cd227;  */

void FUN_1026cd1e8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1026cd228; end: 1026cd2a7;  */

void FUN_1026cd228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb6860,&UNK_10daccec0);
  puVar1 = &UNK_110539298;
  func_0x000107c613fc(&UNK_110539298,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026cd324,puVar1);
  return;
}



/* Entry: 1026cd2a8; end: 1026cd323;  */

void FUN_1026cd2a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  FUN_1026cd874();
  uVar2 = uVar1;
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1026cd378(param_2,param_3);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105392d8;
  *param_1 = uVar2;
  return;
}



/* Entry: 1026cd324; end: 1026cd32b;  */

void FUN_1026cd324(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = uVar1;
  FUN_1026cd874();
  uVar4 = uVar3;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  FUN_1026cd378(uVar1,uVar2);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_1105392d8;
  *param_1 = uVar4;
  return;
}



/* Entry: 1026cd32c; end: 1026cd377;  */

undefined8 FUN_1026cd32c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1026cd378(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1026cd378; end: 1026cd4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cd378(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long lVar5;
  long lStack_58;
  
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000100083b20(&lStack_58);
  lVar5 = *(long *)(lStack_58 + _DAT_113083190);
  lVar1 = lVar5;
  func_0x000107c61174(lVar5);
  func_0x000107c61170(lStack_58);
  if (lVar5 == 0) {
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
  }
  else {
    func_0x0001000285a8(0x112eb0aa0,&UNK_10dac80e0);
    lVar5 = lVar1;
    func_0x0001000b637c(lVar1);
    plVar2 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(lVar5);
    puVar3 = &UNK_1105392c0;
    func_0x000107c613fc(&UNK_1105392c0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar4 = FUN_1026cd5ac;
    (**(code **)(*plVar2 + 0x60))(FUN_1026cd5ac,puVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 1026cd4c8; end: 1026cd5ab;  */

void FUN_1026cd4c8(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c61174(*param_1);
  func_0x0001045197e4(&uStack_168);
  uStack_68 = uStack_100;
  uStack_70 = uStack_108;
  uStack_58 = uStack_f0;
  uStack_60 = uStack_f8;
  uStack_48 = uStack_e0;
  uStack_50 = uStack_e8;
  uStack_40 = uStack_d8;
  uStack_a8 = uStack_140;
  uStack_b0 = uStack_148;
  uStack_98 = uStack_130;
  uStack_a0 = uStack_138;
  uStack_88 = uStack_120;
  uStack_90 = uStack_128;
  uStack_78 = uStack_110;
  uStack_80 = uStack_118;
  uStack_c8 = uStack_160;
  uStack_d0 = uStack_168;
  uStack_b8 = uStack_150;
  uStack_c0 = uStack_158;
  iVar1 = (int)&uStack_d0;
  FUN_10262a02c();
  if (iVar1 == 10) {
    func_0x000107c61428(param_2 + 0x10,auStack_180,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61428(param_2 + 0x18,auStack_198,1,0);
      *(undefined1 *)(param_2 + 0x18) = 1;
      func_0x000107c61574(param_2);
    }
  }
  else {
    FUN_10267c6c4(&uStack_168);
  }
  return;
}



/* Entry: 1026cd5ac; end: 1026cd5b3;  */

void FUN_1026cd5ac(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  func_0x000107c61174(*param_1);
  func_0x0001045197e4(&uStack_168);
  uStack_68 = uStack_100;
  uStack_70 = uStack_108;
  uStack_58 = uStack_f0;
  uStack_60 = uStack_f8;
  uStack_48 = uStack_e0;
  uStack_50 = uStack_e8;
  uStack_40 = uStack_d8;
  uStack_a8 = uStack_140;
  uStack_b0 = uStack_148;
  uStack_98 = uStack_130;
  uStack_a0 = uStack_138;
  uStack_88 = uStack_120;
  uStack_90 = uStack_128;
  uStack_78 = uStack_110;
  uStack_80 = uStack_118;
  uStack_c8 = uStack_160;
  uStack_d0 = uStack_168;
  uStack_b8 = uStack_150;
  uStack_c0 = uStack_158;
  iVar1 = (int)&uStack_d0;
  FUN_10262a02c();
  if (iVar1 == 10) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_180,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      func_0x000107c61428(lVar2 + 0x18,auStack_198,1,0);
      *(undefined1 *)(lVar2 + 0x18) = 1;
      func_0x000107c61574(lVar2);
    }
  }
  else {
    FUN_10267c6c4(&uStack_168);
  }
  return;
}



/* Entry: 1026cd5b4; end: 1026cd61f;  */

void FUN_1026cd5b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026cd620,uVar1,uVar2);
  return;
}



/* Entry: 1026cd620; end: 1026cd6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cd620(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x38);
  lVar5 = *(long *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_112eb9c10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lVar5);
  func_0x0001000d224c(unaff_x22 + 0x10);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
  piVar3 = *(int **)(lVar5 + 0x30);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1026cd6e8;
                    /* WARNING: Could not recover jumptable at 0x0001026cd6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(*(undefined8 *)(unaff_x22 + 0x40),uVar4,lVar5);
  return;
}



/* Entry: 1026cd6e8; end: 1026cd78b;  */

void FUN_1026cd6e8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1026cd72c,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Entry: 1026cd78c; end: 1026cd793;  */

undefined8 FUN_1026cd78c(void)

{
  return 1;
}



/* Entry: 1026cd794; end: 1026cd7cf;  */

undefined1 FUN_1026cd794(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x18,auStack_38,0,0);
  return *(undefined1 *)(lVar1 + 0x18);
}



/* Entry: 1026cd7d0; end: 1026cd81f;  */

void FUN_1026cd7d0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1026cd820;
  plVar2[8] = param_1;
  plVar2[9] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[10] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0xb] = lVar1;
  plVar2[0xc] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026cd620,lVar1,lVar3);
  return;
}



/* Entry: 1026cd820; end: 1026cd863;  */

void FUN_1026cd820(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026cd860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1026cd864; end: 1026cd873;  */

undefined1  [16] FUN_1026cd864(void)

{
  return ZEXT816(0x110539308);
}



/* Entry: 1026cd874; end: 1026cd893;  */

void FUN_1026cd874(void)

{
  func_0x000107c61168(&PTR_PTR_112eb68f0);
  return;
}



/* Entry: 1026cd894; end: 1026cd9cf;  */

void FUN_1026cd894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb6958,&UNK_10dacd090);
  puVar1 = &UNK_110539330;
  func_0x000107c613fc(&UNK_110539330,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026cd9d0,puVar1);
  return;
}



/* Entry: 1026cd9d0; end: 1026cd9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cd9d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1026ce1d4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112eb6960) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112eb6968) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112eb6970) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1026cd9dc; end: 1026cda4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cd9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb6960) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6968) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb6970) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026cda50; end: 1026cda57; -[_TtC36MapStartupPromptPluginImplementation28MapFootstepsOnboardingPlugin type] */

undefined8 FUN_1026cda50(void)

{
  return 0;
}



/* Entry: 1026cda58; end: 1026cdbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1026cda58(double param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_60 [8];
  ulong uStack_58;
  
  uVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000109021b48();
  if ((uVar3 & 1) == 0) {
    func_0x000100083b20(&uStack_58);
    uVar3 = uStack_58;
    uVar4 = uStack_58;
    func_0x000109021b58();
    func_0x000107c615e8(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x000100083b20(&uStack_58);
      uVar3 = uStack_58;
      uVar4 = uStack_58;
      func_0x000107c4c324();
      func_0x000107c61170(uVar3);
      if ((long)uVar4 < 3) {
        func_0x000100083b20(&uStack_58);
        uVar3 = uStack_58;
        uVar4 = uStack_58;
        func_0x000107c4c320();
        func_0x000107c61170(uVar3);
        func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ee8c();
        (**(code **)(lVar5 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2);
        if (604800.0 < param_1 - (double)((long)uVar4 / 1000)) {
          func_0x000100083b20(&uStack_58);
          uVar3 = uStack_58;
          func_0x000107c437cc(uStack_58);
          func_0x000107c61170(uStack_58);
          return (uint)uVar3 ^ 1;
        }
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1026cdbf4; end: 1026cdc27; -[_TtC36MapStartupPromptPluginImplementation28MapFootstepsOnboardingPlugin wantsToPresent] */

uint FUN_1026cdbf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1026cda58();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1026cdc28; end: 1026cdd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cdc28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  uStack_50 = 0;
  func_0x00010008a7c8(&uStack_48,&uStack_50);
  func_0x000107c61574(uVar2);
  puVar1 = &UNK_110539358;
  func_0x000107c613fc(&UNK_110539358,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = uStack_48;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(uStack_48);
  func_0x000107c61174();
  func_0x000107c6157c(param_2);
  uVar2 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dacd0a0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1026cdd24; end: 1026cddbb;  */

void FUN_1026cdd24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026cddbc,uVar3,uVar4);
  return;
}



/* Entry: 1026cddbc; end: 1026cde3f;  */

void FUN_1026cddbc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1026cde40;
                    /* WARNING: Could not recover jumptable at 0x0001026cde3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 1026cde40; end: 1026cde8b;  */

void FUN_1026cde40(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xa8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1026cde8c,*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 1026cde8c; end: 1026cdfef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026cde8c(double param_1)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  cVar1 = *(char *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar1 == '\x01') {
    func_0x000100083b20(unaff_x22 + 0x38);
    lVar4 = *(long *)(unaff_x22 + 0x38);
    lVar3 = lVar4;
    func_0x000107c4c324();
    func_0x000107c61170(lVar4);
    func_0x000100083b20(unaff_x22 + 0x40);
    if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cdfe4);
      (*pcVar2)();
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c56224(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000100083b20(unaff_x22 + 0x48);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c5eea0(uVar6);
    func_0x000107c5ee8c();
    (**(code **)(lVar3 + 8))(uVar6,uVar7);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cdfe8);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cdfec);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026cdff0);
      (*pcVar2)();
    }
    func_0x000107c56220(uVar5);
    func_0x000107c61170(uVar5);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(unaff_x22 + 0x60))(*(undefined1 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001026cdfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026cdff0; end: 1026ce063; -[_TtC36MapStartupPromptPluginImplementation28MapFootstepsOnboardingPlugin presentPromptWithCompletion:] */

void FUN_1026cdff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105393a0;
  func_0x000107c613fc(&UNK_1105393a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_1026cdc28(FUN_1026ce1f4,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1026ce064; end: 1026ce067; -[_TtC36MapStartupPromptPluginImplementation28MapFootstepsOnboardingPlugin shouldDismiss] */

void FUN_1026ce064(void)

{
  return;
}



/* Entry: 1026ce068; end: 1026ce0df;  */

void FUN_1026ce068(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1026ce0e0;
  plVar6[0xc] = lVar5;
  plVar6[0xd] = lVar2;
  plVar6[10] = lVar3;
  plVar6[0xb] = lVar1;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar6[0xe] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar6[0xf] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x10] = uVar4;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar5;
  func_0x000107c5fce8();
  plVar6[0x11] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar6[0x12] = lVar5;
  plVar6[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026cddbc,lVar5,lVar3);
  return;
}



/* Entry: 1026ce0e0; end: 1026ce11b;  */

void FUN_1026ce0e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026ce118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026ce11c; end: 1026ce17b; -[_TtC36MapStartupPromptPluginImplementation28MapFootstepsOnboardingPlugin init] */

void FUN_1026ce11c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapStartupPromptPluginImplementation.MapFootstepsOnboardingPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ce148);
  (*pcVar1)();
}



/* Entry: 1026ce17c; end: 1026ce18b;  */

undefined1  [16] FUN_1026ce17c(void)

{
  return ZEXT816(0x110539380);
}



/* Entry: 1026ce18c; end: 1026ce1d3; -[_TtC36MapStartupPromptPluginImplementation28MapFootstepsOnboardingPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026ce1a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ce1ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026ce18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb6968));
  return;
}



/* Entry: 1026ce1d4; end: 1026ce1f3;  */

void FUN_1026ce1d4(void)

{
  func_0x000107c61168(&PTR_PTR_112858eb0);
  return;
}



/* Entry: 1026ce1f4; end: 1026ce1fb;  */

void FUN_1026ce1f4(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102421b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1026ce1fc; end: 1026ce30b;  */

void FUN_1026ce1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb6860,&UNK_10daccec0);
  puVar1 = &UNK_1105393c8;
  func_0x000107c613fc(&UNK_1105393c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026ce30c,puVar1);
  return;
}



/* Entry: 1026ce30c; end: 1026ce317;  */

/* WARNING: Possible PIC construction at 0x0001026ce2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ce2ec) */

void FUN_1026ce30c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  FUN_1026ce938();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  *(long *)(lVar4 + 0x20) = lVar1;
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1105393e0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1026ce318; end: 1026ce35b;  */

void FUN_1026ce318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1026ce35c; end: 1026ce4e7;  */

uint FUN_1026ce35c(double param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_60 [8];
  ulong uStack_58;
  
  uVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000109021b48();
  if ((uVar3 & 1) == 0) {
    func_0x000100083b20(&uStack_58);
    uVar3 = uStack_58;
    uVar4 = uStack_58;
    func_0x000109021b58();
    func_0x000107c615e8(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x000100083b20(&uStack_58);
      uVar3 = uStack_58;
      uVar4 = uStack_58;
      func_0x000107c4c324();
      func_0x000107c61170(uVar3);
      if ((long)uVar4 < 3) {
        func_0x000100083b20(&uStack_58);
        uVar3 = uStack_58;
        uVar4 = uStack_58;
        func_0x000107c4c320();
        func_0x000107c61170(uVar3);
        func_0x000107c5eea0(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c5ee8c();
        (**(code **)(lVar5 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2);
        if (604800.0 < param_1 - (double)((long)uVar4 / 1000)) {
          func_0x000100083b20(&uStack_58);
          uVar3 = uStack_58;
          func_0x000107c437cc(uStack_58);
          func_0x000107c61170(uStack_58);
          return (uint)uVar3 ^ 1;
        }
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1026ce4e8; end: 1026ce57b;  */

void FUN_1026ce4e8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026ce57c,uVar3,uVar4);
  return;
}



/* Entry: 1026ce57c; end: 1026ce667;  */

void FUN_1026ce57c(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  puVar3 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  *(undefined **)(unaff_x22 + 0xa8) = puVar3;
  func_0x000100083b20(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x48) = puVar3;
  func_0x000107c61174(puVar3);
  func_0x00010008a7c8(unaff_x22 + 0x38,(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61574(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
  piVar5 = *(int **)(lVar2 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1026ce668;
                    /* WARNING: Could not recover jumptable at 0x0001026ce664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar6,lVar2);
  return;
}



/* Entry: 1026ce668; end: 1026ce6b3;  */

void FUN_1026ce668(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xc0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1026ce6b4,*(undefined8 *)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa0));
  return;
}



/* Entry: 1026ce6b4; end: 1026ce817;  */

void FUN_1026ce6b4(double param_1)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  cVar2 = *(char *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar2 == '\x01') {
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x50);
    lVar4 = lVar5;
    func_0x000107c4c324();
    func_0x000107c61170(lVar5);
    func_0x000100083b20(unaff_x22 + 0x58);
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ce80c);
      (*pcVar3)();
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar4 = *(long *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c56224(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000100083b20(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c5eea0(uVar1);
    func_0x000107c5ee8c();
    (**(code **)(lVar4 + 8))(uVar1,uVar7);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ce810);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ce814);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ce818);
      (*pcVar3)();
    }
    func_0x000107c56220(uVar6);
    func_0x000107c61170(uVar6);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61574(uVar1);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001026ce804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 1026ce818; end: 1026ce823;  */

void FUN_1026ce818(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001026ce864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1026ce824; end: 1026ce867;  */

void FUN_1026ce824(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001026ce864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1026ce868; end: 1026ce86f;  */

undefined8 FUN_1026ce868(void)

{
  return 2;
}



/* Entry: 1026ce870; end: 1026ce893;  */

uint FUN_1026ce870(uint param_1)

{
  FUN_1026ce35c();
  return param_1 & 1;
}



/* Entry: 1026ce894; end: 1026ce8e3;  */

void FUN_1026ce894(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026ce8e4;
  plVar3[0xd] = param_1;
  plVar3[0xe] = lVar4;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar3[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x10] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x11] = uVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0x12] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x13] = lVar2;
  plVar3[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026ce57c,lVar2,lVar4);
  return;
}


