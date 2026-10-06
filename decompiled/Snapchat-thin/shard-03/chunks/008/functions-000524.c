/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cd4020; end: 102cd40d3;  */

void FUN_102cd4020(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + param_3 * 8);
      func_0x000107c61434(uVar2);
    }
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar2;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102cd40d4; end: 102cd40ef;  */

void FUN_102cd40d4(void)

{
  long unaff_x20;
  
  FUN_102cd4020(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102cd40f0; end: 102cd41d3;  */

void FUN_102cd40f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0x21,0);
  if (param_4 == 0) {
    func_0x000107c61434(param_3);
    func_0x000102cd4304(param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c61558(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
    FUN_102cd43c0(param_4,param_2,param_3,uVar1);
    func_0x000107c6142c(param_3);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102cd41d4; end: 102cd4203;  */

void FUN_102cd41d4(void)

{
  FUN_102cd4d1c();
  return;
}



/* Entry: 102cd4204; end: 102cd43bf;  */

undefined * FUN_102cd4204(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd4304);
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
    puVar3 = (undefined *)0x112f0af80;
    func_0x0001000285a8(0x112f0af80,&UNK_10db3e188);
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
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
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



/* Entry: 102cd43c0; end: 102cd467f;  */

void FUN_102cd43c0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd4498);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102cd4680(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd4460);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102cd4510();
    lVar6 = *unaff_x20;
    goto joined_r0x000102cd44ac;
  }
  lVar6 = *unaff_x20;
joined_r0x000102cd44ac:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd4510);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102cd4680; end: 102cd4acb;  */

void FUN_102cd4680(long param_1,ulong param_2)

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
  uVar6 = 0x112f0b058;
  func_0x0001000285a8(0x112f0b058,&UNK_10db3e220);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102cd48e8:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102cd4918);
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
          goto LAB_102cd48e8;
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
      func_0x000107c61434(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102cd491c);
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



/* Entry: 102cd4acc; end: 102cd4ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd4acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_58;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0af70);
  uVar3 = 0x112f0af78;
  uStack_80 = uVar10;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112f0af78,&UNK_10db3e180);
  func_0x000100087bd4(&uStack_58,0x102cd4e48,auStack_90,uVar3);
  if (uStack_58 == 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_80 = uVar10;
    uStack_78 = param_2;
    uStack_70 = param_3;
    func_0x000100087bd4(0x102cd4dbc,auStack_90,PTR___sytN_11034f1b0 + 8);
    return;
  }
  lVar9 = *(long *)(uStack_58 + 0x10);
  func_0x000107c61434(uStack_58);
  lVar8 = lVar9 + 1;
  lVar7 = 0x20;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    piVar1 = (int *)(uStack_58 + lVar7);
    lVar7 = lVar7 + 0x10;
    if (*piVar1 == 4) goto LAB_102cd4bc8;
  }
  lVar9 = lVar9 + 1;
  lVar8 = 0x20;
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      func_0x000107c6142c(uStack_58);
      uVar4 = uStack_58;
      func_0x000107c61558();
      uVar5 = uStack_58;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_102cd4204(0,*(long *)(uStack_58 + 0x10) + 1,1,uStack_58);
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102cd4204(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      lVar8 = uVar6 + uVar4 * 0x10;
      *(undefined8 *)(lVar8 + 0x20) = 4;
      *(undefined8 *)(lVar8 + 0x28) = param_1;
      uStack_80 = uVar10;
      uStack_78 = param_2;
      uStack_70 = param_3;
      puStack_68 = (undefined *)uVar6;
      func_0x000100087bd4(0x102cd4dd0,auStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(uVar6);
      return;
    }
    puVar2 = (ulong *)(uStack_58 + lVar8);
    lVar8 = lVar8 + 0x10;
  } while (*puVar2 < 5);
LAB_102cd4bc8:
  func_0x000107c61430(uStack_58,2);
  return;
}



/* Entry: 102cd4ca4; end: 102cd4cc3;  */

void FUN_102cd4ca4(void)

{
  func_0x000107c61168(&PTR_PTR_11289e5a8);
  return;
}



/* Entry: 102cd4cc4; end: 102cd4d1b;  */

int FUN_102cd4cc4(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 102cd4d1c; end: 102cd4d6b;  */

void FUN_102cd4d1c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 102cd4d6c; end: 102cd4e6f;  */

void FUN_102cd4d6c(void)

{
  func_0x000102cd41e8();
  return;
}



/* Entry: 102cd4e70; end: 102cd4eb3; -[SCOperaPlaybackProgressTracker totalDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cd4e70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0b060;
  func_0x000107c61428(param_1 + _DAT_112f0b060,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 102cd4eb4; end: 102cd4f03; -[SCOperaPlaybackProgressTracker setTotalDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd4eb4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0b060;
  func_0x000107c61428(param_2 + _DAT_112f0b060,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 102cd4f04; end: 102cd4f4b; -[SCOperaPlaybackProgressTracker playbackUpdatesObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd4f04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0b068;
  func_0x000107c61428(param_1 + _DAT_112f0b068,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102cd4f4c; end: 102cd4faf; -[SCOperaPlaybackProgressTracker setPlaybackUpdatesObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd4f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0b068;
  func_0x000107c61428(param_1 + _DAT_112f0b068,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102cd4fb0; end: 102cd4fdf;  */

void FUN_102cd4fb0(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102cd4fe0(param_1);
  return;
}



/* Entry: 102cd4fe0; end: 102cd5177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cd4fe0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  *(undefined4 *)(unaff_x20 + _DAT_112f0b070) = 0x3f800000;
  *(undefined8 *)(unaff_x20 + _DAT_112f0b078) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0b080) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0b088) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0b060) = 0;
  lVar1 = _DAT_112f0b068;
  *(undefined8 *)(unaff_x20 + _DAT_112f0b068) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0b090) = param_1;
  puVar2 = PTR_PTR_1126b46f0;
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f0b098) = puVar2;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f0b0a0) = puVar2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_68,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000107c61170(uVar5);
  puVar3 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  uVar4 = *(undefined8 *)(puVar3 + _DAT_112f0b090);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c41008(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c310();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  return puVar3;
}



/* Entry: 102cd5178; end: 102cd51a7; -[SCOperaPlaybackProgressTracker initWithStateMachine:] */

void FUN_102cd5178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  FUN_102cd4fe0(param_3);
  return;
}



/* Entry: 102cd51a8; end: 102cd51db; -[SCOperaPlaybackProgressTracker currentState] */

void FUN_102cd51a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cd51dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cd51dc; end: 102cd5317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd51dc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  float fVar2;
  double dVar4;
  double dVar3;
  
  dVar4 = *(double *)(unaff_x20 + _DAT_112f0b078);
  fVar2 = *(float *)(unaff_x20 + _DAT_112f0b070);
  dVar3 = (double)(ulong)(uint)fVar2;
  func_0x000107c3cf50(dVar3,*(undefined8 *)(unaff_x20 + _DAT_112f0b098));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0b080);
  func_0x000104442cc8(0);
  func_0x000107c610f8();
  func_0x000104442afc(dVar4 + dVar3 * (double)fVar2,uVar1);
  return;
}



/* Entry: 102cd5318; end: 102cd534f; -[SCOperaPlaybackProgressTracker changeCurrentProgressTime:] */

void FUN_102cd5318(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x000102cd5258(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102cd5350; end: 102cd53ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5350(undefined4 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  float fVar3;
  double dVar4;
  
  lVar2 = _DAT_112f0b098;
  lVar1 = _DAT_112f0b070;
  fVar3 = *(float *)(unaff_x20 + _DAT_112f0b070);
  dVar4 = (double)(ulong)(uint)fVar3;
  func_0x000107c3cf50(*(undefined8 *)(unaff_x20 + _DAT_112f0b098));
  *(double *)(unaff_x20 + _DAT_112f0b078) =
       dVar4 * (double)fVar3 + *(double *)(unaff_x20 + _DAT_112f0b078);
  *(undefined4 *)(unaff_x20 + lVar1) = param_1;
  if (*(long *)(unaff_x20 + _DAT_112f0b080) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + lVar2),PTR_s_reset_11262ba18)
    ;
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112f0b080) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c138170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + lVar2),PTR_s_resetAndStart_11262ba78);
    return;
  }
  return;
}



/* Entry: 102cd5400; end: 102cd5437; -[SCOperaPlaybackProgressTracker playbackDidChangeRate:] */

void FUN_102cd5400(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102cd5350(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102cd5438; end: 102cd5497; -[SCOperaPlaybackProgressTracker init] */

void FUN_102cd5438(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaTrackerServiceUtils.OperaPlaybackProgressTracker",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cd5464);
  (*pcVar1)();
}



/* Entry: 102cd5498; end: 102cd54ff; -[SCOperaPlaybackProgressTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cd54c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cd54e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cd54c8) */
/* WARNING: Removing unreachable block (ram,0x000102cd54e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5498(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0b090));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0b098));
  return;
}



/* Entry: 102cd5500; end: 102cd5693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5500(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  float fVar8;
  double dVar10;
  long lStack_78;
  undefined1 auStack_70 [32];
  double dVar9;
  
  func_0x0001000bb420(param_1,auStack_70);
  uVar3 = 0;
  func_0x0001002ed07c(0);
  plVar4 = &lStack_78;
  func_0x000107c6147c(plVar4,auStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if ((int)plVar4 != 0) {
    lVar5 = lStack_78;
    func_0x000107c5d388();
    lVar6 = _DAT_112f0b080;
    uVar3 = 1;
    if (lVar5 != 1) {
      uVar3 = 2;
    }
    uVar1 = 0;
    if (lVar5 != 0) {
      uVar1 = uVar3;
    }
    *(undefined8 *)(unaff_x20 + _DAT_112f0b080) = uVar1;
    lVar2 = _DAT_112f0b098;
    lVar5 = _DAT_112f0b078;
    dVar10 = *(double *)(unaff_x20 + _DAT_112f0b078);
    fVar8 = *(float *)(unaff_x20 + _DAT_112f0b070);
    dVar9 = (double)(ulong)(uint)fVar8;
    func_0x000107c3cf50(dVar9,*(undefined8 *)(unaff_x20 + _DAT_112f0b098));
    lVar7 = *(long *)(unaff_x20 + lVar6);
    uVar3 = 0;
    func_0x000104442cc8(0);
    func_0x000107c610f8();
    func_0x000104442afc(dVar10 + dVar9 * (double)fVar8,lVar7,uVar3);
    lVar6 = *(long *)(unaff_x20 + lVar6);
    if (lVar6 == 0) {
      func_0x000107c5ba38(*(undefined8 *)(unaff_x20 + lVar2));
    }
    else if (lVar6 == 2) {
      *(undefined8 *)(unaff_x20 + lVar5) = 0;
      lVar6 = _DAT_112f0b060;
      func_0x000107c61428(unaff_x20 + _DAT_112f0b060,auStack_70,1,0);
      *(undefined8 *)(unaff_x20 + lVar6) = 0;
      func_0x000107c504e8(*(undefined8 *)(unaff_x20 + lVar2));
    }
    else if (lVar6 == 1) {
      func_0x000107c4e454(*(undefined8 *)(unaff_x20 + lVar2));
    }
    if (lVar7 != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0b0a0);
      func_0x000107c61174(uVar3);
      func_0x000107c4d664();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lStack_78);
  }
  return;
}



/* Entry: 102cd5694; end: 102cd56fb; -[SCOperaPlaybackProgressTracker next:] */

void FUN_102cd5694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  FUN_102cd5500(auStack_40);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 102cd56fc; end: 102cd571b;  */

void FUN_102cd56fc(void)

{
  func_0x000107c61168(&PTR_PTR_11289e660);
  return;
}



/* Entry: 102cd571c; end: 102cd571f; -[SCOperaPlaybackProgressTracker complete] */

void FUN_102cd571c(void)

{
  return;
}



/* Entry: 102cd5720; end: 102cd578b; -[SCOperaPlaybackAnalyticsTracker operaAnalyticsEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5720(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_102cd578c();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = uVar1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cd578c; end: 102cd57cf;  */

void FUN_102cd578c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f0b0e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104453d7c(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f0b0e0 = puVar2;
  return;
}



/* Entry: 102cd57d0; end: 102cd5957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd57d0(ulong param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  ulong auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f0b0e8;
  if ((param_3 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0b0e8,auStack_68,0,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61434(uVar3);
    uVar2 = param_1;
    func_0x0001000f66f0(param_1,param_2,uVar3);
    func_0x000107c6142c(uVar3);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x21,0);
    uVar3 = param_2;
    func_0x0001010af1e4(param_1,param_2);
    func_0x000107c614a8(auStack_80);
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112f0b0e8,auStack_68,0,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61434(uVar3);
    uVar2 = param_1;
    func_0x0001000f66f0(param_1,param_2,uVar3);
    func_0x000107c6142c(uVar3);
    if ((uVar2 & 1) != 0) goto LAB_102cd58f8;
    func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x21,0);
    func_0x000107c61434(param_2);
    func_0x000100403b00(auStack_90,param_1,param_2);
    func_0x000107c614a8(auStack_80);
    uVar3 = uStack_88;
  }
  func_0x000107c6142c(uVar3);
LAB_102cd58f8:
  func_0x000104453d7c(0);
  func_0x000104453694(param_1,param_2,param_3 & 1);
  auStack_80[0] = param_1;
  func_0x0001002a64a8(auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102cd5958; end: 102cd59b7; -[SCOperaPlaybackAnalyticsTracker isPlayingDidChangeFor:isPlaying:] */

void FUN_102cd5958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102cd57d0(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cd59b8; end: 102cd5aaf; -[SCOperaPlaybackAnalyticsTracker didExitPageWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd59b8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c5faec();
  lVar1 = _DAT_112f0b0e8;
  func_0x000107c61428(param_1 + _DAT_112f0b0e8,auStack_68,0,0);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar4);
  uVar3 = param_3;
  func_0x0001000f66f0(param_3,param_2,uVar4);
  func_0x000107c6142c(uVar4);
  if ((uVar3 & 1) == 0) {
    func_0x000107c61170(lVar2);
  }
  else {
    func_0x000107c61428(param_1 + lVar1,auStack_80,0x21,0);
    uVar4 = param_2;
    func_0x0001010af1e4(param_3,param_2);
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(param_2);
    param_2 = uVar4;
  }
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102cd5ab0; end: 102cd5ab3; -[SCOperaPlaybackAnalyticsTracker didEnterPageWith:] */

void FUN_102cd5ab0(void)

{
  return;
}



/* Entry: 102cd5ab4; end: 102cd5ba7; -[SCOperaPlaybackAnalyticsTracker didReceivePauseRequestFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5ab4(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec();
  lVar1 = _DAT_112f0b0e8;
  func_0x000107c61428(param_1 + _DAT_112f0b0e8,auStack_58,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  uVar2 = param_3;
  func_0x0001000f66f0(param_3,param_2,uVar3);
  func_0x000107c6142c(uVar3);
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    func_0x000104453d7c(0);
    func_0x0001044536d8(param_3,param_2,uVar3);
    uStack_60 = param_3;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61170(param_1);
    param_1 = param_3;
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102cd5ba8; end: 102cd5c9b; -[SCOperaPlaybackAnalyticsTracker didReceiveResumeRequestFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5ba8(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec();
  lVar1 = _DAT_112f0b0e8;
  func_0x000107c61428(param_1 + _DAT_112f0b0e8,auStack_58,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61174();
  func_0x000107c61434(uVar3);
  uVar2 = param_3;
  func_0x0001000f66f0(param_3,param_2,uVar3);
  func_0x000107c6142c(uVar3);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    func_0x000104453d7c(0);
    func_0x0001044536e8(param_3,param_2,uVar3);
    uStack_60 = param_3;
    func_0x0001002a64a8(&uStack_60);
    func_0x000107c61170(param_1);
    param_1 = param_3;
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102cd5c9c; end: 102cd5d23; -[SCOperaPlaybackAnalyticsTracker playbackRateDidChangeWithPlaybackRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5c9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000104453d7c(0);
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000104453734(param_1);
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102cd5d24; end: 102cd5db3; -[SCOperaPlaybackAnalyticsTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5d24(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f0b0d8;
  uVar3 = 0x112f0b0d0;
  func_0x0001000285a8(0x112f0b0d0,&UNK_10db3e250);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined **)(param_1 + _DAT_112f0b0e8) = PTR___swiftEmptySetSingleton_11034f1d8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cd5db4; end: 102cd5de7;  */

void FUN_102cd5db4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd5de8; end: 102cd5e1f; -[SCOperaPlaybackAnalyticsTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5de8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0b0d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0b0e8));
  return;
}



/* Entry: 102cd5e20; end: 102cd5e3f;  */

void FUN_102cd5e20(void)

{
  func_0x000107c61168(&PTR_PTR_11289e760);
  return;
}



/* Entry: 102cd5e40; end: 102cd5eab; -[SCOperaUILifecycleAnalyticsTracker analyticsEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5e40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_102cd5ef0();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = uVar1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cd5eac; end: 102cd5eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cd5eac(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_102cd5ef0();
  func_0x0001000c2068();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102cd5ef0; end: 102cd5f33;  */

void FUN_102cd5ef0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f0b128 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104454c98(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f0b128 = puVar2;
  return;
}



/* Entry: 102cd5f34; end: 102cd6093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd5f34(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  ulong auStack_90 [3];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112f0b138;
  puVar1 = (ulong *)(unaff_x20 + _DAT_112f0b130);
  if (puVar1[1] == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0b138,auStack_68,0,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c61434(uVar5);
    uVar4 = param_1;
    func_0x0001000f66f0(param_1,param_2,uVar5);
    func_0x000107c6142c(uVar5);
    uVar3 = param_1;
    if ((uVar4 & 1) == 0) {
      func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x21,0);
      func_0x000107c61434(param_2);
      func_0x000100403b00(auStack_78,param_1,param_2);
      func_0x000107c614a8(auStack_90);
      func_0x000107c6142c(uStack_70);
      func_0x000104454c98(0);
      func_0x0001044544bc(param_1,param_2);
    }
    else {
      func_0x000104454c98(0);
      func_0x000104454764(param_1,param_2);
    }
    auStack_90[0] = uVar3;
    func_0x0001002a64a8(auStack_90);
    func_0x000107c61170(uVar3);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 102cd6094; end: 102cd609f; -[SCOperaUILifecycleAnalyticsTracker pageDidBecomeVisibleWithPageId:] */

void FUN_102cd6094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102cd5f34(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cd60a0; end: 102cd623f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd60a0(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong auStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112f0b138;
  func_0x000107c61428(unaff_x20 + _DAT_112f0b138,auStack_68,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61434(uVar6);
  uVar5 = param_1;
  func_0x0001000f66f0(param_1,param_2,uVar6);
  func_0x000107c6142c(uVar6);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(unaff_x20 + _DAT_112f0b130);
    uVar5 = puVar1[1];
    if ((uVar5 != 0) &&
       ((uVar4 = *puVar1, uVar4 == param_1 && uVar5 == param_2 ||
        (func_0x000107c605b8(uVar4,uVar5,param_1,param_2,0), (uVar4 & 1) != 0)))) {
      lVar3 = _DAT_112f0b140;
      if ((*(byte *)(unaff_x20 + _DAT_112f0b140) & 1) == 0) {
        func_0x000104454c98(0);
        func_0x0001044548bc(param_1,param_2);
        auStack_80[0] = param_1;
        func_0x0001002a64a8(auStack_80);
        func_0x000107c61170(param_1);
      }
      else {
        func_0x000107c61428(unaff_x20 + lVar2,auStack_80,0x21,0);
        uVar5 = param_2;
        func_0x0001010af1e4(param_1,param_2);
        func_0x000107c614a8(auStack_80);
        func_0x000107c6142c(uVar5);
        func_0x000104454c98(0);
        func_0x00010445460c(param_1,param_2);
        auStack_80[0] = param_1;
        func_0x0001002a64a8(auStack_80);
        func_0x000107c61170(param_1);
        *(undefined1 *)(unaff_x20 + lVar3) = 0;
      }
      uVar5 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c6142c(uVar5);
    }
  }
  return;
}



/* Entry: 102cd6240; end: 102cd624b; -[SCOperaUILifecycleAnalyticsTracker pageDidBecomeInvisibleWithPageId:] */

void FUN_102cd6240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102cd60a0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cd624c; end: 102cd633f;  */

void FUN_102cd624c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cd6340; end: 102cd640f; -[SCOperaUILifecycleAnalyticsTracker operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd6340(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  func_0x000107c5faec();
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x000103bb806c();
  puVar2 = (ulong *)*puVar1;
  if ((puVar2 == (ulong *)param_3 && puVar1[1] == param_2) ||
     (func_0x000107c605b8(puVar2,puVar1[1],param_3,param_2,0), ((ulong)puVar2 & 1) != 0)) {
LAB_102cd63c0:
    func_0x000107c6142c(param_2);
  }
  else {
    func_0x000103bb9dec();
    uVar3 = *puVar2;
    if ((uVar3 == param_3) && (puVar2[1] == param_2)) goto LAB_102cd63c0;
    func_0x000107c605b8(uVar3,puVar2[1],param_3,param_2,0);
    func_0x000107c6142c(param_2);
    if ((uVar3 & 1) == 0) goto LAB_102cd63d8;
  }
  *(undefined1 *)((long)param_1 + _DAT_112f0b140) = 1;
LAB_102cd63d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd6410; end: 102cd64b7; -[SCOperaUILifecycleAnalyticsTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd6410(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = _DAT_112f0b120;
  uVar3 = 0x112f0b0f0;
  func_0x0001000285a8(0x112f0b0f0,&UNK_10db3e2a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  *(undefined **)(param_1 + _DAT_112f0b138) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f0b130);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + _DAT_112f0b140) = 0;
  FUN_102cd6534();
  lStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cd64b8; end: 102cd64e7;  */

void FUN_102cd64b8(void)

{
  FUN_102cd6534();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd64e8; end: 102cd6533; -[SCOperaUILifecycleAnalyticsTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cd6514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cd6518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd64e8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0b120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0b138));
  return;
}



/* Entry: 102cd6534; end: 102cd6553;  */

void FUN_102cd6534(void)

{
  func_0x000107c61168(&PTR_PTR_11289e820);
  return;
}



/* Entry: 102cd6554; end: 102cd6667;  */

long FUN_102cd6554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x00010090e858(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x00010090e878(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x00010090e888();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102cd6668; end: 102cd66a3;  */

void FUN_102cd6668(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cd66a4; end: 102cd66d7;  */

undefined1  [16] FUN_102cd66a4(void)

{
  return ZEXT816(0x1105bf568);
}



/* Entry: 102cd66d8; end: 102cd6703;  */

undefined8 FUN_102cd66d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 102cd6704; end: 102cd6763;  */

void FUN_102cd6704(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033232c();
  func_0x000107c613fc();
  FUN_102cd67a8(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 102cd6764; end: 102cd676b;  */

void FUN_102cd6764(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033232c();
  func_0x000107c613fc();
  FUN_102cd67a8(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102cd676c; end: 102cd67a7;  */

undefined8 FUN_102cd676c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102cd67a8(param_1);
  return unaff_x20;
}



/* Entry: 102cd67a8; end: 102cd686f;  */

void FUN_102cd67a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126ac230;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return;
}



/* Entry: 102cd6870; end: 102cd689b;  */

void FUN_102cd6870(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cd689c; end: 102cd68ef;  */

void FUN_102cd689c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102cd68f0; end: 102cd68f7;  */

void FUN_102cd68f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102cd68f8; end: 102cd6947;  */

undefined8 FUN_102cd68f8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102cd6948; end: 102cd698b;  */

undefined1  [16] FUN_102cd6948(void)

{
  return ZEXT816(0x1105bf5e8);
}



/* Entry: 102cd698c; end: 102cd69b3;  */

void FUN_102cd698c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102cd69b4; end: 102cd69bb;  */

undefined8 FUN_102cd69b4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102cd69bc; end: 102cd6a4f;  */

void FUN_102cd69bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010034399c();
  func_0x000107c613fc();
  FUN_102cd6ab0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102cd6a50; end: 102cd6a5b;  */

void FUN_102cd6a50(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010034399c();
  func_0x000107c613fc();
  FUN_102cd6ab0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102cd6a5c; end: 102cd6aaf;  */

undefined8 FUN_102cd6a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102cd6ab0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102cd6ab0; end: 102cd6c93;  */

void FUN_102cd6ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126ac238;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x7672655370616e73;
  func_0x000107c5fadc(0x7672655370616e73,0xec00000073656369);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102cd6c94; end: 102cd6ccf;  */

void FUN_102cd6c94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102cd6cd0; end: 102cd6d23;  */

void FUN_102cd6cd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102cd6d24; end: 102cd6d2b;  */

void FUN_102cd6d24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102cd6d2c; end: 102cd6d7b;  */

undefined8 FUN_102cd6d2c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102cd6d7c; end: 102cd6dbf;  */

undefined1  [16] FUN_102cd6d7c(void)

{
  return ZEXT816(0x1105bf6b0);
}



/* Entry: 102cd6dc0; end: 102cd6de7;  */

void FUN_102cd6dc0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102cd6de8; end: 102cd6def;  */

undefined8 FUN_102cd6de8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102cd6df0; end: 102cd6e3f;  */

void FUN_102cd6df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 102cd6e40; end: 102cd6fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd6e40(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_68 [24];
  
  lVar6 = *param_1;
  lVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((char)lVar1 != '\x01' && lVar6 != 0) {
      lVar7 = *(long *)(*(long *)(lVar2 + 0x20) + _DAT_113091b80);
      puVar3 = PTR_PTR_1126ae820;
      func_0x000107c61168(PTR_PTR_1126ae820);
      lVar4 = lVar7;
      func_0x000107c6148c(lVar7,puVar3);
      if (lVar4 != 0) {
        puVar3 = &UNK_1105bf7c0;
        func_0x000107c613fc(&UNK_1105bf7c0,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,lVar2);
        puVar5 = &UNK_1105bf800;
        func_0x000107c613fc(&UNK_1105bf800,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar3;
        *(long *)(puVar5 + 0x18) = lVar6;
        *(long *)(puVar5 + 0x20) = lVar4;
        puVar3 = &UNK_1105bf828;
        func_0x000107c613fc(&UNK_1105bf828,0x20,7);
        *(undefined **)(puVar3 + 0x10) = &UNK_10db3e7e0;
        *(undefined **)(puVar3 + 0x18) = puVar5;
        func_0x000107c61174(lVar7);
        func_0x000107c61174();
        FUN_102cd73a4(lVar6,(char)lVar1);
        func_0x0001001ca524(9,0,0x58,3,0,0,&UNK_10db3e7f0,puVar3,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(lVar7);
        func_0x000107c61574(lVar2);
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102cd6fcc; end: 102cd703b;  */

void FUN_102cd6fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cd703c,uVar1,uVar2);
  return;
}



/* Entry: 102cd703c; end: 102cd70a3;  */

void FUN_102cd703c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102cd70a4(*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102cd70a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cd70a4; end: 102cd71f7;  */

/* WARNING: Possible PIC construction at 0x000102cd70d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cd7108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cd7134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cd7164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cd71ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cd7168) */
/* WARNING: Removing unreachable block (ram,0x000102cd7174) */
/* WARNING: Removing unreachable block (ram,0x000102cd7138) */
/* WARNING: Removing unreachable block (ram,0x000102cd713c) */
/* WARNING: Removing unreachable block (ram,0x000102cd7140) */
/* WARNING: Removing unreachable block (ram,0x000102cd71a8) */
/* WARNING: Removing unreachable block (ram,0x000102cd7144) */
/* WARNING: Removing unreachable block (ram,0x000102cd710c) */
/* WARNING: Removing unreachable block (ram,0x000102cd718c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102cd7120) */
/* WARNING: Removing unreachable block (ram,0x000102cd70d4) */
/* WARNING: Removing unreachable block (ram,0x000102cd71b0) */
/* WARNING: Removing unreachable block (ram,0x000102cd71b8) */

void FUN_102cd70a4(void)

{
  func_0x000107c4d7e4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102cd71f8; end: 102cd726f;  */

void FUN_102cd71f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102cd7230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102cd7270; end: 102cd728f;  */

void FUN_102cd7270(void)

{
  func_0x00010090e888();
  return;
}



/* Entry: 102cd7290; end: 102cd7297;  */

undefined8 FUN_102cd7290(void)

{
  return 0;
}



/* Entry: 102cd7298; end: 102cd72f7;  */

void FUN_102cd7298(void)

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
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102cd72f8;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cd703c,lVar1,lVar2);
  return;
}



/* Entry: 102cd72f8; end: 102cd7333;  */

void FUN_102cd72f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102cd7330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102cd7334; end: 102cd73a3;  */

void FUN_102cd7334(undefined8 param_1)

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
  plVar3[1] = 0x102cd73b8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102cd73a4; end: 102cd73bb;  */

void FUN_102cd73a4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102cd73bc; end: 102cd744f; -[_TtC29PendingAppNotificationStorage37PendingAppNotificationStorageServices pendingAppNotificationStorage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd73bc(undefined8 param_1)

{
  undefined8 auStack_30 [2];
  
  func_0x000107c61174();
  func_0x000100083b20(auStack_30);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(auStack_30[0]);
  return;
}



/* Entry: 102cd7450; end: 102cd74af; -[_TtC29PendingAppNotificationStorage37PendingAppNotificationStorageServices init] */

void FUN_102cd7450(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PendingAppNotificationStorage.PendingAppNotificationStorageServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cd747c);
  (*pcVar1)();
}



/* Entry: 102cd74b0; end: 102cd74bf; -[_TtC29PendingAppNotificationStorage37PendingAppNotificationStorageServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd74b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0b4e0));
  return;
}



/* Entry: 102cd74c0; end: 102cd78b3;  */

long FUN_102cd74c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_16;
  *(undefined8 *)(unaff_x20 + 0x98) = param_17;
  func_0x0001000285a8(0x112e4a008,&UNK_10da41b88);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_18;
  func_0x000107c6157c(param_18);
  func_0x0001003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x00010072b05c();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010072b0fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  func_0x00010072b28c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61574(param_18);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar3;
  return unaff_x20;
}



/* Entry: 102cd78b4; end: 102cd797f;  */

void FUN_102cd78b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 102cd7980; end: 102cd79c3;  */

undefined1  [16] FUN_102cd7980(void)

{
  return ZEXT816(0x1105bf9f0);
}


