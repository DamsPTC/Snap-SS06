/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101efc2b8; end: 101efc2bf;  */

void FUN_101efc2b8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 101efc2c0; end: 101efc30b;  */

undefined8 * FUN_101efc2c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 101efc30c; end: 101efc347;  */

undefined8 * FUN_101efc30c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 101efc348; end: 101efc3db;  */

int FUN_101efc348(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101efc3dc; end: 101efc417;  */

void FUN_101efc3dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    func_0x000107c61174(uVar1);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101efc418; end: 101efc42f;  */

void FUN_101efc418(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101efc430; end: 101efc52b;  */

ulong * FUN_101efc430(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 101efc52c; end: 101efc63f;  */

int FUN_101efc52c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 101efc640; end: 101efcc0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101efc640(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined **)(unaff_x20 + 0x18);
  uVar22 = *(ulong *)(unaff_x20 + 0x20);
  cVar5 = *(char *)(unaff_x20 + 0x28);
  lVar16 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar2 + _DAT_112e3d558,auStack_78,0x21,0);
  puVar9 = puVar3;
  FUN_101efa3c0(puVar3,uVar22);
  func_0x000107c614a8(auStack_78);
  lVar6 = _DAT_112e3d548;
  if (cVar5 != '\x01' || lVar16 == 0) goto LAB_101efcb7c;
  func_0x000107c61174();
  func_0x000107c61428(lVar2 + lVar6,auStack_78,0x20,0);
  lVar19 = *(long *)(lVar2 + lVar6);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_101efc7cc:
    func_0x000107c614a8(auStack_78);
  }
  else {
    func_0x000107c61434(lVar19);
    puVar10 = puVar3;
    uVar20 = uVar22;
    func_0x000100029284();
    if ((uVar20 & 1) == 0) {
      func_0x000107c6142c(lVar19);
      goto LAB_101efc7cc;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + (long)puVar10 * 0x10);
    func_0x000107c61174(uVar11);
    func_0x000107c614a8(auStack_78);
    func_0x000107c61170(uVar11);
    func_0x000107c6142c(lVar19);
    lVar19 = _DAT_112e3d550;
    func_0x000107c61428(lVar2 + _DAT_112e3d550,auStack_78,0x21,0);
    uVar20 = *(ulong *)(lVar2 + lVar19);
    uVar17 = *(ulong *)(uVar20 + 0x10);
    if (uVar17 == 0) {
      uVar23 = 0;
      uVar24 = 0;
    }
    else {
      lVar21 = 0;
      uVar23 = 0;
      do {
        puVar10 = *(undefined **)(uVar20 + lVar21 + 0x20);
        uVar24 = *(ulong *)(uVar20 + lVar21 + 0x28);
        if ((puVar10 == puVar3 && uVar24 == uVar22) ||
           (func_0x000107c605b8(puVar10,uVar24,puVar3,uVar22,0), ((ulong)puVar10 & 1) != 0)) {
          uVar24 = uVar23 + 1;
          uVar17 = *(ulong *)(uVar20 + 0x10);
          if (uVar17 - 1 != uVar23) {
            do {
              if (uVar17 <= uVar24) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x101efcbbc);
                (*pcVar7)();
              }
              puVar10 = *(undefined **)(uVar20 + lVar21 + 0x30);
              uVar4 = *(ulong *)(uVar20 + lVar21 + 0x38);
              if ((puVar10 != puVar3 || uVar4 != uVar22) &&
                 (puVar12 = puVar10, func_0x000107c605b8(puVar10,uVar4,puVar3,uVar22,0),
                 ((ulong)puVar12 & 1) == 0)) {
                if (uVar24 != uVar23) {
                  if (uVar17 <= uVar23) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x101efcc08);
                    (*pcVar7)();
                  }
                  puVar1 = (undefined8 *)(uVar20 + 0x20 + uVar23 * 0x10);
                  uVar11 = *puVar1;
                  uVar15 = puVar1[1];
                  func_0x000107c61434();
                  func_0x000107c61434(uVar4);
                  uVar17 = uVar20;
                  func_0x000107c61558();
                  *(ulong *)(lVar2 + lVar19) = uVar20;
                  if ((uVar17 & 1) == 0) {
                    func_0x0001014c4f24();
                    *(ulong *)(lVar2 + lVar19) = uVar20;
                  }
                  lVar14 = uVar20 + uVar23 * 0x10;
                  uVar13 = *(undefined8 *)(lVar14 + 0x28);
                  *(undefined **)(lVar14 + 0x20) = puVar10;
                  *(ulong *)(lVar14 + 0x28) = uVar4;
                  func_0x000107c6142c(uVar13);
                  *(ulong *)(lVar2 + lVar19) = uVar20;
                  if (*(ulong *)(uVar20 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x101efcc0c);
                    (*pcVar7)();
                  }
                  lVar14 = uVar20 + lVar21;
                  uVar13 = *(undefined8 *)(lVar14 + 0x38);
                  *(undefined8 *)(lVar14 + 0x30) = uVar11;
                  *(undefined8 *)(lVar14 + 0x38) = uVar15;
                  func_0x000107c6142c(uVar13);
                  *(ulong *)(lVar2 + lVar19) = uVar20;
                }
                uVar23 = uVar23 + 1;
              }
              uVar24 = uVar24 + 1;
              uVar17 = *(ulong *)(uVar20 + 0x10);
              lVar21 = lVar21 + 0x10;
            } while (uVar24 != uVar17);
          }
          goto LAB_101efc7ec;
        }
        uVar23 = uVar23 + 1;
        lVar21 = lVar21 + 0x10;
      } while (uVar17 != uVar23);
      uVar24 = *(ulong *)(uVar20 + 0x10);
      uVar23 = uVar17;
LAB_101efc7ec:
      if ((long)uVar24 < (long)uVar23) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101efc800);
        (*pcVar7)();
      }
    }
    func_0x000101755f94(lVar19,uVar23,uVar24);
    func_0x000107c614a8(auStack_78);
  }
  pcVar7 = *(code **)(lVar2 + _DAT_112e3d578);
  func_0x000107c61434(uVar22);
  (*pcVar7)();
  func_0x000107c61428(lVar2 + lVar6,auStack_78,0x21,0);
  func_0x000107c61174();
  uVar11 = *(undefined8 *)(lVar2 + lVar6);
  func_0x000107c61558(uVar11);
  uVar15 = *(undefined8 *)(lVar2 + lVar6);
  *(undefined8 *)(lVar2 + lVar6) = 0x8000000000000000;
  FUN_101efa47c(param_2,lVar16,puVar3,uVar22,uVar11);
  func_0x000107c6142c(uVar22);
  *(undefined8 *)(lVar2 + lVar6) = uVar15;
  func_0x000107c614a8(auStack_78);
  lVar19 = _DAT_112e3d550;
  func_0x000107c61428(lVar2 + _DAT_112e3d550,auStack_78,0x21,0);
  uVar24 = *(ulong *)(lVar2 + lVar19);
  func_0x000107c61434(uVar22);
  uVar20 = uVar24;
  func_0x000107c61558();
  *(ulong *)(lVar2 + lVar19) = uVar24;
  uVar17 = uVar24;
  if ((uVar20 & 1) == 0) {
    uVar17 = 0;
    func_0x0001000d182c(0,*(long *)(uVar24 + 0x10) + 1,1,uVar24);
    *(ulong *)(lVar2 + lVar19) = uVar17;
  }
  uVar20 = *(ulong *)(uVar17 + 0x10);
  uVar24 = uVar17;
  if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar20) {
    uVar24 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
    func_0x0001000d182c(uVar24,uVar20 + 1,1,uVar17);
  }
  *(ulong *)(uVar24 + 0x10) = uVar20 + 1;
  lVar21 = uVar24 + uVar20 * 0x10;
  *(undefined **)(lVar21 + 0x20) = puVar3;
  *(ulong *)(lVar21 + 0x28) = uVar22;
  *(ulong *)(lVar2 + lVar19) = uVar24;
  func_0x000107c614a8(auStack_78);
  lVar21 = *(long *)(lVar2 + lVar19);
  uVar22 = *(ulong *)(lVar21 + 0x10);
  while (100 < uVar22) {
    func_0x000107c61428(lVar2 + lVar19,auStack_78,0x21,0);
    lVar14 = *(long *)(lVar21 + 0x20);
    uVar20 = *(ulong *)(lVar21 + 0x28);
    func_0x000107c61434(uVar20);
    lVar18 = lVar21;
    func_0x000107c61558();
    *(long *)(lVar2 + lVar19) = lVar21;
    if (((int)lVar18 == 0) || (*(ulong *)(lVar21 + 0x18) >> 1 < uVar22 - 1)) {
      func_0x0001000d182c();
      *(long *)(lVar2 + lVar19) = lVar18;
      lVar21 = lVar18;
    }
    func_0x000100bcb1dc(lVar21 + 0x20);
    lVar18 = *(long *)(lVar21 + 0x10);
    func_0x000107c610b8(lVar21 + 0x20,lVar21 + 0x30,lVar18 * 0x10 + -0x10);
    *(long *)(lVar21 + 0x10) = lVar18 + -1;
    *(long *)(lVar2 + lVar19) = lVar21;
    func_0x000107c614a8(auStack_78);
    func_0x000107c61428(lVar2 + lVar6,auStack_78,0x21,0);
    uVar11 = *(undefined8 *)(lVar2 + lVar6);
    func_0x000107c61434(uVar11);
    uVar22 = uVar20;
    func_0x000100029284();
    func_0x000107c6142c(uVar11);
    if ((uVar22 & 1) == 0) {
      func_0x000107c6142c(uVar20);
    }
    else {
      iVar8 = (int)*(undefined8 *)(lVar2 + lVar6);
      func_0x000107c61558();
      lVar21 = *(long *)(lVar2 + lVar6);
      *(undefined8 *)(lVar2 + lVar6) = 0x8000000000000000;
      if (iVar8 == 0) {
        func_0x000101efa73c();
      }
      func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar21 + 0x30) + lVar14 * 0x10 + 8));
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar21 + 0x38) + lVar14 * 0x10));
      func_0x000101efaf84(lVar14,lVar21);
      func_0x000107c6142c(uVar20);
      *(long *)(lVar2 + lVar6) = lVar21;
    }
    func_0x000107c614a8(auStack_78);
    lVar21 = *(long *)(lVar2 + lVar19);
    uVar22 = *(ulong *)(lVar21 + 0x10);
  }
  func_0x000107c61170(lVar16);
LAB_101efcb7c:
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined *)0x0) {
    puVar3 = puVar9;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 101efcc0c; end: 101efcc0f;  */

void FUN_101efcc0c(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*param_2,*param_3);
  return;
}



/* Entry: 101efcc10; end: 101efcc47;  */

void FUN_101efcc10(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*param_2,*param_3);
  return;
}



/* Entry: 101efcc48; end: 101efcc63;  */

void FUN_101efcc48(long param_1,long param_2)

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



/* Entry: 101efcc64; end: 101efce6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101efcc64(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  
  ppuVar4 = &puStack_a0;
  func_0x000107c610f8();
  uVar6 = param_2;
  func_0x000107c5b428();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e3d5c8) = uVar6;
  puVar1 = auStack_70;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  uVar5 = *(undefined8 *)(param_4 + _DAT_113092298);
  func_0x000107c61174();
  func_0x000107c615f0(uVar5);
  uVar2 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f01a270);
  uVar6 = uVar5;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar2);
  if ((int)uVar6 == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    puVar7 = puVar1;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + _DAT_112f2fa38);
    puVar7 = *(undefined1 **)(puVar1 + _DAT_112e3d5c8);
    puVar3 = &UNK_11049c160;
    func_0x000107c613fc(&UNK_11049c160,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    pcStack_80 = FUN_101efcf38;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101efd434;
    puStack_88 = &UNK_11049c178;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174(uVar6);
    func_0x000107c61174();
    func_0x000107c61174(puVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c4db94(puVar7);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
    func_0x000107c60bd0(ppuVar4);
    param_2 = uVar6;
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar7);
  return puVar1;
}



/* Entry: 101efce70; end: 101efcf37;  */

void FUN_101efce70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    ppuVar2 = &puStack_60;
    puVar1 = &UNK_11049c218;
    func_0x000107c613fc(&UNK_11049c218,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = param_2;
    pcStack_40 = FUN_101efd568;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_101efd248;
    puStack_48 = &UNK_11049c230;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c532e0(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101efcf38; end: 101efcf3f;  */

void FUN_101efcf38(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    ppuVar2 = &puStack_60;
    puVar1 = &UNK_11049c218;
    func_0x000107c613fc(&UNK_11049c218,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    pcStack_40 = FUN_101efd568;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_101efd248;
    puStack_48 = &UNK_11049c230;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(uVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c532e0(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101efcf40; end: 101efd20b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101efd18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101efd1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101efd0ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101efd190) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101efd0b0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101efcf40(undefined *param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined4 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar5 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar2 = *(undefined8 *)(param_5 + _DAT_113077640);
  uVar3 = ((undefined8 *)(param_5 + _DAT_113077640))[1];
  uVar4 = (uint)(param_2 >> 0x20);
  if (uVar4 >> 0x1e < 2) {
    if (uVar4 >> 0x1e == 0) {
      uStack_a0 = uVar2;
      uStack_94 = param_6;
      if ((param_2 & 0xff000000000000) == 0) goto code_r0x0001000b44c0;
    }
    else {
      if ((long)(int)param_1 == (long)param_1 >> 0x20) {
        return;
      }
LAB_101efd048:
      uStack_a0 = uVar2;
      uStack_94 = param_6;
      func_0x000100de78a0(param_1,param_2);
    }
    func_0x000107c61434(uVar3);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_7 != 0) {
      func_0x000107c5ee20(param_1,param_2);
      puStack_a8 = param_1;
      if (param_4 >> 0x3c < 0xf) {
        func_0x000107c5ee20(param_3,param_4);
      }
      func_0x0001000295c4(0);
      (**(code **)(lVar7 + 0x68))
                (puVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lVar5);
      func_0x000107c5fff0(puVar8);
      (**(code **)(lVar7 + 8))(puVar8,lVar5);
      puVar6 = &UNK_11049c268;
      func_0x000107c613fc(&UNK_11049c268,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = uStack_a0;
      *(undefined8 *)(puVar6 + 0x18) = uVar3;
      uStack_70 = 0x101efd57c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_101efd20c;
      puStack_78 = &UNK_11049c280;
      puStack_68 = puVar6;
      func_0x000107c60bc4(&puStack_90);
      param_1 = puStack_68;
      goto code_r0x000107c61574;
    }
    unaff_x30 = 0x101efd0b0;
    register0x00000008 = (BADSPACEBASE *)puVar8;
    unaff_x19 = param_2;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  else if (uVar4 >> 0x1e == 2) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
      return;
    }
    goto LAB_101efd048;
  }
code_r0x0001000b44c0:
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  if (uVar4 >> 0x1e == 1) {
    param_1 = (undefined *)(param_2 & 0x3fffffffffffffff);
  }
  else {
    if (uVar4 >> 0x1e != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101efd20c; end: 101efd247;  */

void FUN_101efd20c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101efd248; end: 101efd433;  */

void FUN_101efd248(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar4 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    puVar3 = (undefined *)0xf000000000000000;
    puVar7 = puVar5;
  }
  else {
    func_0x000107c6157c(uVar2);
    lVar4 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    puVar7 = puVar5;
    func_0x000107c61170(lVar4);
    puVar3 = puVar5;
  }
  if (param_3 == 0) {
    lStack_68 = 0;
    puVar7 = (undefined *)0xf000000000000000;
  }
  else {
    lVar4 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30();
    lStack_68 = param_3;
    func_0x000107c61170(lVar4);
  }
  if (param_4 == 0) {
    lVar4 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar6,param_4);
    lVar4 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar6,param_4 == 0,1);
  func_0x000107c61174(param_5);
  lVar4 = lStack_68;
  (*pcVar1)(param_2,puVar3,lStack_68,puVar7,puVar6,param_5,param_6);
  func_0x0001000b44c0(lVar4,puVar7);
  func_0x0001000b44c0(param_2,puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uVar2);
  func_0x0001000293e4(puVar6);
  return;
}



/* Entry: 101efd434; end: 101efd47b;  */

void FUN_101efd434(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 101efd47c; end: 101efd483;  */

void FUN_101efd47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101efd484; end: 101efd4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101efd484(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e3d5c8);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c532e0();
    func_0x000107c615e8(lVar1);
  }
  return 0;
}



/* Entry: 101efd4d0; end: 101efd503;  */

void FUN_101efd4d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101efd504; end: 101efd517; -[_TtC50SCSpotlightSharingChainedTranscodeFiringEntryPoint50SCSpotlightSharingChainedTranscodeFiringEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101efd504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e3d5c8));
  return;
}



/* Entry: 101efd518; end: 101efd567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101efd518(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + _DAT_112e3d5c8);
  func_0x000107c4500c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c532e0();
    func_0x000107c615e8(lVar1);
  }
  return 0;
}



/* Entry: 101efd568; end: 101efd597;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101efd18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101efd1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101efd0ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101efd190) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101efd0b0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101efd568(undefined *param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  puVar1 = &stack0xfffffffffffffff0;
  lVar5 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar2 = *(undefined8 *)(param_6 + _DAT_113077640);
  uVar3 = ((undefined8 *)(param_6 + _DAT_113077640))[1];
  uVar4 = (uint)(param_2 >> 0x20);
  if (uVar4 >> 0x1e < 2) {
    if (uVar4 >> 0x1e == 0) {
      uStack_a0 = uVar2;
      uStack_94 = param_7;
      if ((param_2 & 0xff000000000000) == 0) goto code_r0x0001000b44c0;
    }
    else {
      if ((long)(int)param_1 == (long)param_1 >> 0x20) {
        return;
      }
LAB_101efd048:
      uStack_a0 = uVar2;
      uStack_94 = param_7;
      func_0x000100de78a0(param_1,param_2);
    }
    func_0x000107c61434(uVar3);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c5ee20(param_1,param_2);
      puStack_a8 = param_1;
      if (param_4 >> 0x3c < 0xf) {
        func_0x000107c5ee20(param_3,param_4);
      }
      func_0x0001000295c4(0);
      (**(code **)(lVar8 + 0x68))
                (puVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                 lVar5);
      func_0x000107c5fff0(puVar9);
      (**(code **)(lVar8 + 8))(puVar9,lVar5);
      puVar6 = &UNK_11049c268;
      func_0x000107c613fc(&UNK_11049c268,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = uStack_a0;
      *(undefined8 *)(puVar6 + 0x18) = uVar3;
      uStack_70 = 0x101efd57c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_101efd20c;
      puStack_78 = &UNK_11049c280;
      puStack_68 = puVar6;
      func_0x000107c60bc4(&puStack_90);
      param_1 = puStack_68;
      goto code_r0x000107c61574;
    }
    unaff_x30 = 0x101efd0b0;
    register0x00000008 = (BADSPACEBASE *)puVar9;
    unaff_x19 = param_2;
    unaff_x20 = param_4;
    unaff_x29 = puVar1;
  }
  else if (uVar4 >> 0x1e == 2) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
      return;
    }
    goto LAB_101efd048;
  }
code_r0x0001000b44c0:
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  if (uVar4 >> 0x1e == 1) {
    param_1 = (undefined *)(param_2 & 0x3fffffffffffffff);
  }
  else {
    if (uVar4 >> 0x1e != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101efd598; end: 101efd637;  */

void FUN_101efd598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = &UNK_11049c5d0;
  func_0x000107c613fc(&UNK_11049c5d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(long *)(puVar1 + 0x20) = unaff_x20;
  func_0x0001000285a8(0x112e3d6b0,&UNK_10da29ed8);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  pcVar2 = FUN_101efef9c;
  func_0x0001000bdd8c(FUN_101efef9c,puVar1);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(code **)(unaff_x20 + 0x18) = pcVar2;
  return;
}



/* Entry: 101efd638; end: 101efd7a3;  */

void FUN_101efd638(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  uVar2 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  puVar3 = &UNK_11049c5f8;
  func_0x000107c613fc(&UNK_11049c5f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  puVar4 = &UNK_11049c620;
  func_0x000107c613fc(&UNK_11049c620,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101efefa8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(param_3);
  uVar5 = 0x112e2e6e0;
  func_0x0001000285a8(0x112e2e6e0,&UNK_10da17498);
  uVar6 = uVar1;
  func_0x000100775264(uVar1,1,FUN_101efefc0,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_58);
  uVar2 = 0x112e3d6b8;
  func_0x0001000285a8(0x112e3d6b8,&UNK_10da29ee0);
  uVar5 = uStack_58;
  func_0x000100775264(uStack_58,1,FUN_101efd8c8,0,uVar2);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar5;
  return;
}



/* Entry: 101efd7a4; end: 101efd8c7;  */

long FUN_101efd7a4(undefined1 *param_1)

{
  undefined1 *puVar1;
  long unaff_x22;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    FUN_101efefec();
    func_0x000107c613f8(&UNK_11049c6c0,param_1,0,0);
    *param_1 = 1;
    func_0x000107c61654();
  }
  else {
    FUN_101eff238(0,0x112e3d6a0,&PTR_PTR_1126a9928);
    func_0x000107c614e8();
    puVar1 = (undefined1 *)0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f01a320);
    unaff_x22 = lStack_38;
    func_0x000107c5cec8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (unaff_x22 == 0) {
      FUN_101efefec();
      func_0x000107c613f8(&UNK_11049c6c0,puVar1,0,0);
      *puVar1 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(lStack_38);
    }
    else {
      func_0x000107c615e8(lStack_38);
    }
  }
  return unaff_x22;
}



/* Entry: 101efd8c8; end: 101efd8f3;  */

void FUN_101efd8c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 101efd8f4; end: 101efd90f;  */

void FUN_101efd8f4(undefined8 param_1)

{
  FUN_101efdc40(param_1,FUN_101efd910);
  return;
}



/* Entry: 101efd910; end: 101efdc23;  */

void FUN_101efd910(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  
  func_0x0001059eec74();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101eff238(0,0x112e3d6a8,&PTR_PTR_1126c0e60);
  uVar5 = param_2;
  func_0x000107c5fc54(param_2,uVar4);
  func_0x000107c61170(param_2);
  uVar16 = uVar5 & 0xffffffffffffff8;
  if (uVar5 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar16 + 0x10);
  }
  else {
    uVar14 = uVar16;
    if (0x7fffffffffffffff < uVar5) {
      uVar14 = uVar5;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    uVar13 = 0;
    do {
      while( true ) {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar16 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101efdbc8);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar5 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar13;
          FUN_101eff040(uVar13,uVar5,&PTR_PTR_1126c0e60,0x112e3d6a8);
        }
        uVar1 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101efdbc4);
          (*pcVar3)();
        }
        uVar7 = uVar6;
        func_0x0001059efe20();
        func_0x000107c61180();
        if (uVar7 == 0) break;
        func_0x000107c61170();
        func_0x000107c61170(uVar6);
        uVar13 = uVar13 + 1;
        if (uVar1 == uVar14) goto LAB_101efdaa4;
      }
      puVar8 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000101f02000(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar13 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar13) {
        func_0x000101f02000(1 < *(ulong *)(puVar2 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar13 + 1;
      *(ulong *)(puVar2 + uVar13 * 8 + 0x20) = uVar6;
      uVar13 = uVar1;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    } while (uVar1 != uVar14);
  }
LAB_101efdaa4:
  func_0x000107c6142c(uVar5);
  if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
    puVar17 = puVar2;
    func_0x000107c60480();
  }
  else {
    puVar17 = *(undefined **)(puVar2 + 0x10);
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c61574(puVar2);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100403514(0,(ulong)puVar17 & ((long)puVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101efdc24);
      (*pcVar3)();
    }
    puVar15 = (undefined *)0x0;
    do {
      puVar12 = puVar2;
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(puVar2 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar9 = puVar15;
        FUN_101eff040(puVar15,puVar2,&PTR_PTR_1126c0e60,0x112e3d6a8);
      }
      func_0x000107c61174();
      puVar10 = puVar9;
      func_0x0001059efe08();
      func_0x000107c61180();
      puVar11 = puVar10;
      func_0x000107c5faec();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      uVar5 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
      }
      puVar15 = puVar15 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
      *(undefined **)(puVar8 + uVar5 * 0x10 + 0x20) = puVar11;
      *(undefined **)(puVar8 + uVar5 * 0x10 + 0x28) = puVar12;
    } while (puVar17 != puVar15);
    func_0x000107c61574(puVar2);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 101efdc24; end: 101efdc3f;  */

void FUN_101efdc24(undefined8 param_1)

{
  FUN_101efdc40(param_1,FUN_101efdcec);
  return;
}



/* Entry: 101efdc40; end: 101efdceb;  */

void FUN_101efdc40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = 0;
  FUN_101eff238(0,0x112e3d6a0,&PTR_PTR_1126a9928);
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  func_0x0001031ac8e8(param_1,0,0,param_3,0,uVar3,uVar1,uVar2);
  if (unaff_x21 != 0) {
    func_0x000107c614ac();
    *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  return;
}



/* Entry: 101efdcec; end: 101efe01b;  */

void FUN_101efdcec(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  
  func_0x0001059eec74();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101eff238(0,0x112e3d6a8,&PTR_PTR_1126c0e60);
  uVar5 = param_2;
  func_0x000107c5fc54(param_2,uVar4);
  func_0x000107c61170(param_2);
  uVar17 = uVar5 & 0xffffffffffffff8;
  if (uVar5 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar17 + 0x10);
  }
  else {
    uVar15 = uVar17;
    if (0x7fffffffffffffff < uVar5) {
      uVar15 = uVar5;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101efdfbc);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar14;
          FUN_101eff040(uVar14,uVar5,&PTR_PTR_1126c0e60,0x112e3d6a8);
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101efdfb8);
          (*pcVar3)();
        }
        uVar7 = uVar6;
        func_0x0001059efe38();
        func_0x000107c61180();
        if (uVar7 == 0) break;
        func_0x000107c61170();
LAB_101efdd88:
        func_0x000107c61170(uVar6);
        uVar14 = uVar14 + 1;
        if (uVar1 == uVar15) goto LAB_101efde9c;
      }
      uVar7 = uVar6;
      func_0x0001059efe2c();
      func_0x000107c61180();
      if (uVar7 == 0) goto LAB_101efdd88;
      func_0x000107c61170();
      puVar8 = puVar2;
      func_0x000107c61558();
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000101f02000(0,*(long *)(puVar2 + 0x10) + 1,1);
      }
      uVar14 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar14) {
        func_0x000101f02000(1 < *(ulong *)(puVar2 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar2 + uVar14 * 8 + 0x20) = uVar6;
      uVar14 = uVar1;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    } while (uVar1 != uVar15);
  }
LAB_101efde9c:
  func_0x000107c6142c(uVar5);
  if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
    puVar18 = puVar2;
    func_0x000107c60480();
  }
  else {
    puVar18 = *(undefined **)(puVar2 + 0x10);
  }
  if (puVar18 == (undefined *)0x0) {
    func_0x000107c61574(puVar2);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar12 = (undefined *)((ulong)puVar18 & ((long)puVar18 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000100403514(0,puVar12,0);
    if ((long)puVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101efe01c);
      (*pcVar3)();
    }
    puVar16 = (undefined *)0x0;
    do {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(puVar2 + (long)puVar16 * 8 + 0x20);
        func_0x000107c61174();
        puVar13 = puVar12;
      }
      else {
        puVar9 = puVar16;
        puVar13 = puVar2;
        FUN_101eff040(puVar16,puVar2,&PTR_PTR_1126c0e60,0x112e3d6a8);
      }
      func_0x000107c61174();
      puVar10 = puVar9;
      func_0x0001059efe08();
      func_0x000107c61180();
      puVar11 = puVar10;
      func_0x000107c5faec();
      puVar12 = puVar13;
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      uVar5 = *(ulong *)(puVar8 + 0x10);
      puVar9 = (undefined *)(uVar5 + 1);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        puVar12 = puVar9;
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),puVar9,1);
      }
      puVar16 = puVar16 + 1;
      *(undefined **)(puVar8 + 0x10) = puVar9;
      *(undefined **)(puVar8 + uVar5 * 0x10 + 0x20) = puVar11;
      *(undefined **)(puVar8 + uVar5 * 0x10 + 0x28) = puVar13;
    } while (puVar18 != puVar16);
    func_0x000107c61574(puVar2);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 101efe01c; end: 101efe11f;  */

undefined8
FUN_101efe01c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c613fc(param_2,0x18,7);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000d224c(&uStack_58);
  func_0x0001000d224c(&uStack_60);
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(long *)(param_3 + 0x18) = param_2;
  uVar1 = 0x112d3d588;
  func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
  uVar2 = uStack_60;
  func_0x000100775264(uStack_60,1,param_5,param_3,uVar1);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_2);
  return uVar2;
}



/* Entry: 101efe120; end: 101efe1c7;  */

void FUN_101efe120(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x30);
    do {
      uVar2 = puVar5[-2];
      uVar1 = puVar5[-1];
      uVar6 = *puVar5;
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar2,uVar1);
      func_0x000107c6142c(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(uVar6);
      func_0x0001059ef168(param_1,uVar2,puVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar3);
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 101efe1c8; end: 101efe3cb;  */

undefined8
FUN_101efe1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &UNK_11049c490;
  func_0x000107c613fc(&UNK_11049c490,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_3);
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar2 = &UNK_11049c4b8;
  func_0x000107c613fc(&UNK_11049c4b8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101efeeb4;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  uVar3 = uStack_70;
  func_0x000100775264(uStack_70,1,0x101eff2b4,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return uVar3;
}



/* Entry: 101efe3cc; end: 101efe4c7;  */

undefined8 FUN_101efe3cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11049c3f0;
  func_0x000107c613fc(&UNK_11049c3f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_1);
  func_0x0001000d224c(&uStack_48);
  func_0x0001000d224c(&uStack_50);
  puVar2 = &UNK_11049c418;
  func_0x000107c613fc(&UNK_11049c418,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101efee8c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  uVar3 = uStack_50;
  func_0x000100775264(uStack_50,1,0x101eff28c,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return uVar3;
}



/* Entry: 101efe4c8; end: 101efe5ab;  */

void FUN_101efe4c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_2 + 0x30);
    do {
      uVar4 = puVar6[-2];
      uVar1 = puVar6[-1];
      uVar7 = *puVar6;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61434(uVar1);
      func_0x000107c466c0(uVar7,puVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x0001059ef5f4(param_1,puVar2,puVar3,uVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 3;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 101efe5ac; end: 101efe6a3;  */

undefined8
FUN_101efe5ac(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c613fc(param_2,0x18,7);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  func_0x0001000d224c(&uStack_58);
  func_0x0001000d224c(&uStack_60);
  func_0x000107c613fc(param_3,0x20,7);
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(long *)(param_3 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  uVar1 = uStack_60;
  func_0x000100775264(uStack_60,1,param_5,param_3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 101efe6a4; end: 101efe75f;  */

void FUN_101efe6a4(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x30);
    do {
      uVar3 = puVar5[-2];
      uVar1 = puVar5[-1];
      uVar6 = *puVar5;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61434(uVar1);
      func_0x000107c466c0(uVar6,puVar2);
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c6142c(uVar1);
      (*param_3)(param_1,puVar2,uVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar3);
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 101efe760; end: 101efe763;  */

void FUN_101efe760(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0001005fc990(param_1 + 0x40,*(undefined8 *)(param_1 + 8),&UNK_10ddc8912,0x90);
      func_0x00010b5ef0d0();
    }
  }
  return;
}



/* Entry: 101efe764; end: 101efe873;  */

void FUN_101efe764(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined1 auStack_40 [16];
  code *pcStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_1;
  pcStack_30 = FUN_101efe760;
  uStack_28 = 0;
  uVar1 = 0;
  FUN_101eff238(0,0x112e3d6a0,&PTR_PTR_1126a9928);
  func_0x0001031acfe4(0,0,FUN_101efee34,auStack_40,uVar2,uVar1,PTR___sytN_11034f1b0 + 8);
  if (unaff_x21 != 0) {
    func_0x000107c614ac();
  }
  return;
}



/* Entry: 101efe874; end: 101efeb0b;  */

undefined * FUN_101efe874(undefined8 param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  func_0x0001059eefb8(param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar2 = 0;
  FUN_101eff238(0,0x112e3d6a8,&PTR_PTR_1126c0e60);
  uVar10 = param_2;
  func_0x000107c5fc54(param_2,uVar2);
  func_0x000107c61170(param_2);
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar11 == 0) {
    func_0x000107c6142c(uVar10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101f0201c(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101efeb0c);
      (*pcVar1)();
    }
    uVar12 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar10 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar12;
        FUN_101eff040(uVar12,uVar10,&PTR_PTR_1126c0e60,0x112e3d6a8);
      }
      uVar4 = uVar3;
      (*param_4)();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
        func_0x000101f0201c(1 < *(ulong *)(puVar9 + 0x18),uVar3 + 1,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar3 + 1;
      *(ulong *)(puVar9 + uVar3 * 8 + 0x20) = uVar4;
    } while (uVar11 != uVar12);
    func_0x000107c6142c(uVar10);
  }
  uVar10 = 0;
  uVar11 = *(ulong *)(puVar9 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    if (uVar11 == uVar10) {
      func_0x000107c6142c(puVar9);
      return puVar8;
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar10) break;
    lVar5 = *(long *)(puVar9 + uVar10 * 8 + 0x20);
    uVar10 = uVar10 + 1;
    if (lVar5 != 0) {
      func_0x000107c61174();
      func_0x000107c5fdcc();
      uVar2 = param_1;
      func_0x000107c61170(lVar5);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001014dd0d8(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar12 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001014dd0d8(puVar8,uVar12 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar12 + 1;
      *(undefined8 *)(puVar8 + uVar12 * 8 + 0x20) = param_1;
      param_1 = uVar2;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101efeb08);
  (*pcVar1)();
}



/* Entry: 101efeb0c; end: 101efebbb;  */

void FUN_101efeb0c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 uVar3;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  uVar1 = 0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_101eff238(0,0x112e3d6a0,&PTR_PTR_1126a9928);
  uVar2 = 0x112d3d588;
  func_0x0001000285a8(0x112d3d588,&UNK_10da29ed0);
  func_0x0001031ac8e8(param_1,0,0,FUN_101efef08,auStack_50,uVar3,uVar1,uVar2);
  if (unaff_x21 != 0) {
    func_0x000107c614ac();
    *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  return;
}



/* Entry: 101efebbc; end: 101efebcb;  */

void FUN_101efebbc(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101efef98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101efebcc; end: 101efebeb;  */

void FUN_101efebcc(void)

{
  func_0x000107c61168(&PTR_PTR_112e3d638);
  return;
}



/* Entry: 101efebec; end: 101efec03;  */

undefined8 FUN_101efebec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  func_0x0001000d224c(&uStack_40);
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar2 = uStack_40;
  func_0x000100775264(uStack_40,1,FUN_101efd8f4,0,uVar1);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(uStack_40);
  return uVar2;
}



/* Entry: 101efec04; end: 101efec9b;  */

undefined8 FUN_101efec04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  func_0x0001000d224c(&uStack_40);
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar2 = uStack_40;
  func_0x000100775264(uStack_40,1,param_3,0,uVar1);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(uStack_40);
  return uVar2;
}



/* Entry: 101efec9c; end: 101efed37;  */

void FUN_101efec9c(undefined8 param_1)

{
  FUN_101efe01c(param_1,&UNK_11049c580,&UNK_11049c5a8,FUN_101efef34,0x101eff2dc);
  return;
}



/* Entry: 101efed38; end: 101efed3b;  */

undefined8
FUN_101efed38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = &UNK_11049c490;
  func_0x000107c613fc(&UNK_11049c490,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_3);
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar2 = &UNK_11049c4b8;
  func_0x000107c613fc(&UNK_11049c4b8,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101efeeb4;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  uVar3 = uStack_70;
  func_0x000100775264(uStack_70,1,0x101eff2b4,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return uVar3;
}



/* Entry: 101efed3c; end: 101efed6f;  */

void FUN_101efed3c(undefined8 param_1)

{
  FUN_101efe5ac(param_1,&UNK_11049c440,&UNK_11049c468,FUN_101efee94,0x101eff2a0);
  return;
}



/* Entry: 101efed70; end: 101efed73;  */

undefined8 FUN_101efed70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_11049c3f0;
  func_0x000107c613fc(&UNK_11049c3f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61434(param_1);
  func_0x0001000d224c(&uStack_48);
  func_0x0001000d224c(&uStack_50);
  puVar2 = &UNK_11049c418;
  func_0x000107c613fc(&UNK_11049c418,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101efee8c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  uVar3 = uStack_50;
  func_0x000100775264(uStack_50,1,0x101eff28c,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return uVar3;
}



/* Entry: 101efed74; end: 101efeda7;  */

void FUN_101efed74(undefined8 param_1)

{
  FUN_101efe5ac(param_1,&UNK_11049c3a0,&UNK_11049c3c8,FUN_101efee54,0x101efee74);
  return;
}



/* Entry: 101efeda8; end: 101efee33;  */

undefined8 FUN_101efeda8(void)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000100775264(uStack_40,1,FUN_101efe764,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(uStack_40);
  return uVar1;
}



/* Entry: 101efee34; end: 101efee53;  */

void FUN_101efee34(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101efee54; end: 101efee8b;  */

void FUN_101efee54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101efe6a4(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_1059ef784);
  return;
}



/* Entry: 101efee8c; end: 101efee93;  */

void FUN_101efee8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x30);
    do {
      uVar4 = puVar6[-2];
      uVar1 = puVar6[-1];
      uVar7 = *puVar6;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61434(uVar1);
      func_0x000107c466c0(uVar7,puVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x0001059ef5f4(param_1,puVar2,puVar3,uVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 3;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 101efee94; end: 101efeeb3;  */

void FUN_101efee94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101efe6a4(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_1059ef490);
  return;
}



/* Entry: 101efeeb4; end: 101efeecf;  */

/* WARNING: Possible PIC construction at 0x000101efe398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101efe3a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101efe39c) */
/* WARNING: Removing unreachable block (ram,0x000101efe3ac) */

void FUN_101efeeb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(uVar7);
  func_0x000107c5fadc(uVar3,uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x0001059ef2cc(param_1,puVar2,uVar3,puVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101efeed0; end: 101efef07;  */

void FUN_101efeed0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101efe874(param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_1059efe14);
  return;
}



/* Entry: 101efef08; end: 101efef33;  */

void FUN_101efef08(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101efef34; end: 101efef53;  */

void FUN_101efef34(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101efe874(param_1,*(undefined8 *)(unaff_x20 + 0x10),&SUB_1059efe2c);
  return;
}



/* Entry: 101efef54; end: 101efef9b;  */

void FUN_101efef54(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101efef98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101efef9c; end: 101efefa7;  */

void FUN_101efef9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_58);
  uVar1 = uStack_58;
  puVar3 = &UNK_11049c5f8;
  func_0x000107c613fc(&UNK_11049c5f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  puVar4 = &UNK_11049c620;
  func_0x000107c613fc(&UNK_11049c620,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101efefa8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(uVar5);
  uVar5 = 0x112e2e6e0;
  func_0x0001000285a8(0x112e2e6e0,&UNK_10da17498);
  uVar6 = uVar1;
  func_0x000100775264(uVar1,1,FUN_101efefc0,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar4);
  func_0x0001000d224c(&uStack_58);
  uVar2 = 0x112e3d6b8;
  func_0x0001000285a8(0x112e3d6b8,&UNK_10da29ee0);
  uVar5 = uStack_58;
  func_0x000100775264(uStack_58,1,FUN_101efd8c8,0,uVar2);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar5;
  return;
}



/* Entry: 101efefa8; end: 101efefbf;  */

void FUN_101efefa8(void)

{
  long unaff_x20;
  
  FUN_101efd7a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101efefc0; end: 101efefeb;  */

void FUN_101efefc0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101efefec; end: 101eff02b;  */

void FUN_101efefec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3d6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da29f58;
  func_0x000107c61520(&UNK_10da29f58,&UNK_11049c6c0);
  puRam0000000112e3d6c0 = puVar1;
  return;
}



/* Entry: 101eff02c; end: 101eff03f;  */

ulong FUN_101eff02c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff124);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff128);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c2098;
    func_0x000107c61168(PTR_PTR_1126c2098);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c2098;
    func_0x000107c61168(PTR_PTR_1126c2098);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101eff238(0,0x112e0fd70,&PTR_PTR_1126c2098);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff1fc);
  (*pcVar2)();
}



/* Entry: 101eff040; end: 101eff1fb;  */

ulong FUN_101eff040(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff124);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff128);
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
  FUN_101eff238(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff1fc);
  (*pcVar2)();
}



/* Entry: 101eff1fc; end: 101eff237;  */

ulong FUN_101eff1fc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff124);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff128);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126cbc90;
    func_0x000107c61168(PTR_PTR_1126cbc90);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126cbc90;
    func_0x000107c61168(PTR_PTR_1126cbc90);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101eff238(0,0x112e0fd78,&PTR_PTR_1126cbc90);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff1fc);
  (*pcVar2)();
}



/* Entry: 101eff238; end: 101eff277;  */

void FUN_101eff238(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101eff278; end: 101eff2ef;  */

void FUN_101eff278(void)

{
  FUN_101efee34();
  return;
}



/* Entry: 101eff2f0; end: 101eff303;  */

bool FUN_101eff2f0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101eff304; end: 101eff3af;  */

void FUN_101eff304(void)

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



/* Entry: 101eff3b0; end: 101eff3b3;  */

void FUN_101eff3b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3d6c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da29ef0;
  func_0x000107c61520(&UNK_10da29ef0,&UNK_11049c6c0);
  puRam0000000112e3d6c8 = puVar1;
  return;
}



/* Entry: 101eff3b4; end: 101eff3f3;  */

void FUN_101eff3b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3d6c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da29ef0;
  func_0x000107c61520(&UNK_10da29ef0,&UNK_11049c6c0);
  puRam0000000112e3d6c8 = puVar1;
  return;
}



/* Entry: 101eff3f4; end: 101eff567;  */

void FUN_101eff3f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101eff568; end: 101eff5af;  */

void FUN_101eff568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0(param_3);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101eff5b0; end: 101eff693;  */

void FUN_101eff5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 8))();
  func_0x000107c615e8(uStack_50);
  puVar2 = &UNK_11049c740;
  func_0x000107c613fc(&UNK_11049c740,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11049c768;
  func_0x000107c613fc(&UNK_11049c768,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  func_0x000107c61434(param_1);
  func_0x00010075a04c(0,1,FUN_101f02440,puVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 101eff694; end: 101eff8c3;  */

void FUN_101eff694(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  puVar8 = (undefined *)*param_1;
  cVar1 = *(char *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (cVar1 != '\x01') {
      func_0x000107c61434(puVar8);
      puVar9 = puVar8;
    }
    if (param_3 >> 0x3e == 0) {
      uVar7 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
    }
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar7 != 0) {
      if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff8c4);
        (*pcVar2)();
      }
      uVar11 = 0;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((param_3 & 0xc000000000000001) == 0) {
          uVar3 = *(ulong *)(param_3 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar11;
          FUN_101eff02c(uVar11,param_3);
        }
        uVar4 = uVar3;
        FUN_101f024e8();
        uVar12 = *(ulong *)(uVar4 + 0x10);
        lVar6 = *(long *)(puVar10 + 0x10);
        if (SCARRY8(lVar6,uVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff894);
          (*pcVar2)();
        }
        puVar8 = puVar10;
        func_0x000107c61558();
        if (((int)puVar8 == 0) ||
           (uVar5 = *(ulong *)(puVar10 + 0x18) >> 1, (long)uVar5 < (long)(lVar6 + uVar12))) {
          func_0x0001000d182c();
          uVar5 = *(ulong *)(puVar8 + 0x18) >> 1;
          puVar10 = puVar8;
          if (*(long *)(uVar4 + 0x10) != 0) goto LAB_101eff7f0;
LAB_101eff744:
          func_0x000107c6142c(uVar4);
          puVar8 = puVar10;
          if (uVar12 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff898);
            (*pcVar2)();
          }
        }
        else {
          puVar8 = puVar10;
          if (*(long *)(uVar4 + 0x10) == 0) goto LAB_101eff744;
LAB_101eff7f0:
          if (uVar5 - *(long *)(puVar8 + 0x10) < uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff89c);
            (*pcVar2)();
          }
          func_0x000107c6140c(puVar8 + *(long *)(puVar8 + 0x10) * 0x10 + 0x20,uVar4 + 0x20,uVar12,
                              PTR___sSSN_11034da80);
          func_0x000107c6142c(uVar4);
          if (uVar12 != 0) {
            if (SCARRY8(*(long *)(puVar8 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101eff8a0);
              (*pcVar2)();
            }
            *(ulong *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + uVar12;
          }
        }
        uVar11 = uVar11 + 1;
        func_0x000107c61170(uVar3);
        puVar10 = puVar8;
      } while (uVar7 != uVar11);
    }
    FUN_101eff8c4(puVar8,puVar9,param_4);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar8);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101eff8c4; end: 101effe4f;  */

void FUN_101eff8c4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x20));
  lVar15 = *(long *)(param_3 + 0x10);
  if (lVar15 == 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar18 = 0;
    lVar12 = *(long *)(param_2 + 0x10);
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar14 = (ulong *)(param_3 + 0x20 + lVar18 * 0x10);
      uVar19 = *puVar14;
      uVar16 = puVar14[1];
      lVar18 = lVar18 + 1;
      lVar13 = lVar12 + 1;
      puVar14 = (ulong *)(param_2 + 0x28);
      do {
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) {
          func_0x000107c61434(uVar16);
          puVar8 = puStack_88;
          func_0x000107c61558();
          if (((ulong)puVar8 & 1) == 0) {
            plVar1 = (long *)(puStack_88 + 0x10);
            puStack_88 = (undefined *)0x0;
            func_0x0001000d182c(0,*plVar1 + 1,1);
          }
          uVar6 = *(ulong *)(puStack_88 + 0x10);
          if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar6) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_88 + 0x18));
            func_0x0001000d182c(puVar8,uVar6 + 1,1,puStack_88);
            puStack_88 = puVar8;
          }
          *(ulong *)(puStack_88 + 0x10) = uVar6 + 1;
          *(ulong *)(puStack_88 + uVar6 * 0x10 + 0x20) = uVar19;
          *(ulong *)(puStack_88 + uVar6 * 0x10 + 0x28) = uVar16;
          break;
        }
        uVar6 = puVar14[-1];
        uVar3 = *puVar14;
        if (uVar6 == uVar19 && uVar3 == uVar16) break;
        puVar14 = puVar14 + 2;
        func_0x000107c605b8(uVar6,uVar3,uVar19,uVar16,0);
      } while ((uVar6 & 1) == 0);
    } while (lVar18 != lVar15);
  }
  lVar18 = *(long *)(param_2 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar18 != 0) {
    lVar12 = 0;
    do {
      puVar14 = (ulong *)(param_2 + 0x20 + lVar12 * 0x10);
      uVar19 = *puVar14;
      uVar16 = puVar14[1];
      lVar12 = lVar12 + 1;
      lVar13 = lVar15 + 1;
      puVar14 = (ulong *)(param_3 + 0x28);
      do {
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) {
          func_0x000107c61434(uVar16);
          puVar7 = puVar8;
          func_0x000107c61558();
          puVar9 = puVar8;
          if (((ulong)puVar7 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar6 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar6) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            func_0x0001000d182c(puVar8,uVar6 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar6 + 1;
          *(ulong *)(puVar8 + uVar6 * 0x10 + 0x20) = uVar19;
          *(ulong *)(puVar8 + uVar6 * 0x10 + 0x28) = uVar16;
          break;
        }
        uVar6 = puVar14[-1];
        uVar3 = *puVar14;
        if (uVar6 == uVar19 && uVar3 == uVar16) break;
        puVar14 = puVar14 + 2;
        func_0x000107c605b8(uVar6,uVar3,uVar19,uVar16,0);
      } while ((uVar6 & 1) == 0);
    } while (lVar12 != lVar18);
  }
  func_0x0001000d224c(&puStack_80);
  lVar15 = lStack_78;
  puVar7 = puStack_80;
  uVar19 = *(ulong *)(puVar8 + 0x10);
  if (uVar19 == 0) {
    func_0x000107c61434(puVar8);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(puVar8);
    func_0x000101f02038(0,uVar19,0);
    uVar16 = 0;
    puVar17 = (undefined8 *)(puVar8 + 0x28);
    puVar9 = puStack_80;
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101effe4c);
        (*pcVar5)();
      }
      uVar2 = puVar17[-1];
      uVar4 = *puVar17;
      uVar6 = *(ulong *)(puVar9 + 0x10);
      uVar3 = *(ulong *)(puVar9 + 0x18);
      puStack_80 = puVar9;
      func_0x000107c61434(uVar4);
      if (uVar3 >> 1 <= uVar6) {
        func_0x000101f02038(1 < uVar3,uVar6 + 1,1);
        puVar9 = puStack_80;
      }
      uVar16 = uVar16 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar9 + uVar6 * 0x18 + 0x20) = uVar2;
      *(undefined8 *)(puVar9 + uVar6 * 0x18 + 0x28) = uVar4;
      *(undefined8 *)(puVar9 + uVar6 * 0x18 + 0x30) = param_1;
      puVar17 = puVar17 + 2;
    } while (uVar19 != uVar16);
  }
  puVar10 = puVar7;
  func_0x000107c614f0(puVar7);
  puVar11 = puVar9;
  (**(code **)(lVar15 + 0x28))(puVar9,puVar10,lVar15);
  func_0x000107c615e8(puVar7);
  func_0x000107c6142c(puVar9);
  puVar7 = &UNK_11049c740;
  func_0x000107c613fc(&UNK_11049c740,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,unaff_x20);
  puVar9 = &UNK_11049c920;
  func_0x000107c613fc(&UNK_11049c920,0x28,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  *(undefined8 *)(puVar9 + 0x20) = param_4;
  func_0x00010075a04c(0,1,FUN_101f027fc,puVar9);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  func_0x0001000d224c(&puStack_80);
  puVar7 = puStack_80;
  uVar19 = *(ulong *)(puStack_88 + 0x10);
  if (uVar19 == 0) {
    func_0x000107c61434(puStack_88);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(puStack_88);
    func_0x000101f02038(0,uVar19,0);
    uVar16 = 0;
    puVar17 = (undefined8 *)(puStack_88 + 0x28);
    puVar9 = puStack_80;
    do {
      if (*(ulong *)(puStack_88 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101effe50);
        (*pcVar5)();
      }
      uVar2 = puVar17[-1];
      uVar4 = *puVar17;
      uVar6 = *(ulong *)(puVar9 + 0x10);
      uVar3 = *(ulong *)(puVar9 + 0x18);
      puStack_80 = puVar9;
      func_0x000107c61434(uVar4);
      if (uVar3 >> 1 <= uVar6) {
        func_0x000101f02038(1 < uVar3,uVar6 + 1,1);
        puVar9 = puStack_80;
      }
      uVar16 = uVar16 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar9 + uVar6 * 0x18 + 0x20) = uVar2;
      *(undefined8 *)(puVar9 + uVar6 * 0x18 + 0x28) = uVar4;
      *(undefined8 *)(puVar9 + uVar6 * 0x18 + 0x30) = param_1;
      puVar17 = puVar17 + 2;
    } while (uVar19 != uVar16);
  }
  puVar10 = puVar7;
  func_0x000107c614f0(puVar7);
  puVar11 = puVar9;
  (**(code **)(lStack_78 + 0x38))(puVar9,puVar10,lStack_78);
  func_0x000107c615e8(puVar7);
  func_0x000107c6142c(puVar9);
  puVar7 = &UNK_11049c740;
  func_0x000107c613fc(&UNK_11049c740,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,unaff_x20);
  puVar9 = &UNK_11049c948;
  func_0x000107c613fc(&UNK_11049c948,0x28,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(undefined **)(puVar9 + 0x18) = puStack_88;
  *(undefined8 *)(puVar9 + 0x20) = param_4;
  func_0x00010075a04c(0,1,FUN_101f0284c,puVar9);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puStack_88);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  return;
}



/* Entry: 101effe50; end: 101effec7; -[_TtC24SCSpotlightUsageTracking21SpotlightUsageTracker updateMetadataWithStories:feedType:] */

void FUN_101effe50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000101f02904(0,0x112e0fd70,&PTR_PTR_1126c2098);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c6157c(param_1);
  FUN_101eff5b0(param_3,param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101effec8; end: 101f00093;  */

void FUN_101effec8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  undefined *puStack_80;
  long lStack_78;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000d224c(&puStack_80);
  puVar7 = puStack_80;
  lVar10 = *(long *)(param_2 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101f02038(0,lVar10,0);
    puVar9 = (undefined8 *)(param_2 + 0x28);
    puVar8 = puStack_80;
    do {
      uVar1 = puVar9[-1];
      uVar3 = *puVar9;
      uVar2 = *(ulong *)(puVar8 + 0x10);
      uVar4 = *(ulong *)(puVar8 + 0x18);
      puStack_80 = puVar8;
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        func_0x000101f02038(1 < uVar4,uVar2 + 1,1);
        puVar8 = puStack_80;
      }
      puVar9 = puVar9 + 2;
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar8 + uVar2 * 0x18 + 0x20) = uVar1;
      *(undefined8 *)(puVar8 + uVar2 * 0x18 + 0x28) = uVar3;
      *(undefined8 *)(puVar8 + uVar2 * 0x18 + 0x30) = param_1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar5 = puVar7;
  func_0x000107c614f0(puVar7);
  puVar6 = puVar8;
  (**(code **)(lStack_78 + 0x40))(puVar8,param_3,puVar5,lStack_78);
  func_0x000107c615e8(puVar7);
  func_0x000107c6142c(puVar8);
  puVar7 = &UNK_11049c740;
  func_0x000107c613fc(&UNK_11049c740,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,unaff_x20);
  puVar8 = &UNK_11049c790;
  func_0x000107c613fc(&UNK_11049c790,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long *)(puVar8 + 0x18) = param_2;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  func_0x000107c61434(param_2);
  func_0x00010075a04c(0,1,0x101f0244c,puVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 101f00094; end: 101f00117;  */

void FUN_101f00094(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c615f0(uVar1);
    func_0x000107c61574(param_2);
    func_0x000107c4beb8(uVar1);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 101f00118; end: 101f0017f; -[_TtC24SCSpotlightUsageTracking21SpotlightUsageTracker fetchMediaSuccessWithSnapIds:fetchType:feedType:] */

void FUN_101f00118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c6157c(param_1);
  FUN_101effec8(param_3,param_4,param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101f00180; end: 101f0063b;  */

void FUN_101f00180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000d224c(&uStack_80);
  uVar1 = uStack_80;
  func_0x000107c614f0(uStack_80);
  uVar2 = param_2;
  (**(code **)(lStack_78 + 0x30))(param_1,param_2,param_3,param_4,param_5,param_6,uVar1,lStack_78);
  func_0x000107c615e8(uStack_80);
  puVar3 = &UNK_11049c740;
  func_0x000107c613fc(&UNK_11049c740,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_11049c7b8;
  func_0x000107c613fc(&UNK_11049c7b8,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_7;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  func_0x000107c61434(param_3);
  func_0x00010075a04c(0,1,0x101f02458,puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 101f0063c; end: 101f0079b;  */

void FUN_101f0063c(double param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_58 [24];
  
  if (((char)param_2[1] != '\x01') && (*(long *)(*param_2 + 0x10) != 0)) {
    dVar2 = *(double *)(*param_2 + 0x20);
    func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      uVar1 = *(undefined8 *)(param_3 + 0x18);
      func_0x000107c615f0(uVar1);
      func_0x000107c61574(param_3);
      func_0x000107c4bec0((long)(param_1 - dVar2),uVar1);
      func_0x000107c615e8(uVar1);
    }
  }
  return;
}



/* Entry: 101f0079c; end: 101f00837; -[_TtC24SCSpotlightUsageTracking21SpotlightUsageTracker snapWatchedWithSnapId:paginationId:storyPosition:feedType:] */

/* WARNING: Possible PIC construction at 0x000101f00818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f0081c) */

void FUN_101f0079c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c6157c(param_1);
  FUN_101f00180(param_3,param_2,param_4,uVar1,param_5,param_6);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101f00838; end: 101f00933;  */

void FUN_101f00838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000d224c(&uStack_60);
  uVar1 = uStack_60;
  func_0x000107c614f0(uStack_60);
  (**(code **)(lStack_58 + 0x10))();
  func_0x000107c615e8(uStack_60);
  puVar2 = &UNK_11049c740;
  func_0x000107c613fc(&UNK_11049c740,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11049c7e0;
  func_0x000107c613fc(&UNK_11049c7e0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  func_0x000107c61434(param_2);
  func_0x00010075a04c(0,1,0x101f02468,puVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 101f00934; end: 101f00f97;  */

void FUN_101f00934(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  code *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  puVar16 = (undefined *)*param_2;
  cVar6 = *(char *)(param_2 + 1);
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 != 0) {
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (cVar6 != '\x01') {
      func_0x000107c61434(puVar16);
      puVar12 = puVar16;
    }
    puVar16 = &UNK_11049c808;
    func_0x000107c613fc(&UNK_11049c808,0x18,7);
    *(undefined **)(puVar16 + 0x10) = puVar10;
    uVar18 = *(ulong *)(puVar12 + 0x10);
    if (uVar18 != 0) {
      uVar19 = 0;
      lVar13 = *(long *)(param_4 + 0x10);
      do {
        if (*(ulong *)(puVar12 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101f00cb0);
          (*pcVar7)();
        }
        uVar1 = *(ulong *)(puVar12 + uVar19 * 0x10 + 0x20);
        uVar3 = *(ulong *)((long)(puVar12 + uVar19 * 0x10 + 0x20) + 8);
        uVar19 = uVar19 + 1;
        puVar14 = (ulong *)(param_4 + 0x28);
        lVar15 = lVar13 + 1;
        do {
          lVar15 = lVar15 + -1;
          if (lVar15 == 0) {
            func_0x000107c61434(uVar3);
            puVar9 = puVar10;
            func_0x000107c61558();
            *(undefined **)(puVar16 + 0x10) = puVar10;
            puVar11 = puVar10;
            if (((ulong)puVar9 & 1) == 0) {
              puVar11 = (undefined *)0x0;
              func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
              *(undefined **)(puVar16 + 0x10) = puVar11;
            }
            uVar8 = *(ulong *)(puVar11 + 0x10);
            puVar10 = puVar11;
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar8) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
              func_0x0001000d182c(puVar10,uVar8 + 1,1,puVar11);
            }
            *(ulong *)(puVar10 + 0x10) = uVar8 + 1;
            *(ulong *)(puVar10 + uVar8 * 0x10 + 0x20) = uVar1;
            *(ulong *)(puVar10 + uVar8 * 0x10 + 0x28) = uVar3;
            *(undefined **)(puVar16 + 0x10) = puVar10;
            break;
          }
          uVar8 = puVar14[-1];
          uVar4 = *puVar14;
          if (uVar8 == uVar1 && uVar4 == uVar3) break;
          puVar14 = puVar14 + 2;
          func_0x000107c605b8(uVar8,uVar4,uVar1,uVar3,0);
        } while ((uVar8 & 1) == 0);
      } while (uVar19 != uVar18);
    }
    func_0x000107c6142c(puVar12);
    func_0x0001000d224c(&puStack_98);
    puVar12 = puStack_98;
    uVar18 = *(ulong *)(puVar10 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 != 0) {
      puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61434(puVar10);
      func_0x000101f02038(0,uVar18,0);
      uVar19 = 0;
      puVar17 = (undefined8 *)(puVar10 + 0x28);
      puVar9 = puStack_98;
      do {
        if (*(ulong *)(puVar10 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101f00cb4);
          (*pcVar7)();
        }
        uVar2 = puVar17[-1];
        uVar5 = *puVar17;
        uVar1 = *(ulong *)(puVar9 + 0x10);
        uVar3 = *(ulong *)(puVar9 + 0x18);
        puStack_98 = puVar9;
        func_0x000107c61434(uVar5);
        if (uVar3 >> 1 <= uVar1) {
          func_0x000101f02038(1 < uVar3,uVar1 + 1,1);
          puVar9 = puStack_98;
        }
        uVar19 = uVar19 + 1;
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x20) = uVar2;
        *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x28) = uVar5;
        *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x30) = param_1;
        puVar17 = puVar17 + 2;
      } while (uVar18 != uVar19);
      func_0x000107c6142c(puVar10);
    }
    puVar10 = puVar12;
    func_0x000107c614f0(puVar12);
    puVar11 = puVar9;
    (**(code **)(lStack_90 + 0x48))(puVar9,puVar10,lStack_90);
    func_0x000107c615e8(puVar12);
    func_0x000107c6142c(puVar9);
    puVar10 = &UNK_11049c740;
    func_0x000107c613fc(&UNK_11049c740,0x18,7);
    func_0x000107c61644(puVar10 + 0x10,param_3);
    puVar12 = &UNK_11049c830;
    func_0x000107c613fc(&UNK_11049c830,0x30,7);
    *(undefined **)(puVar12 + 0x10) = puVar10;
    *(undefined **)(puVar12 + 0x18) = puVar16;
    *(undefined8 *)(puVar12 + 0x20) = param_5;
    *(undefined8 *)(puVar12 + 0x28) = param_1;
    func_0x000107c6157c(puVar16);
    func_0x00010075a04c(0,1,FUN_101f02498,puVar12);
    func_0x000107c61574(puVar16);
    func_0x000107c61574(puVar11);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 101f00f98; end: 101f01063;  */

void FUN_101f00f98(double param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auStack_68 [24];
  
  if ((char)param_2[1] != '\x01') {
    lVar1 = *param_2;
    lVar3 = *(long *)(lVar1 + 0x10);
    if (lVar3 != 0) {
      func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
      pdVar4 = (double *)(lVar1 + 0x20);
      do {
        dVar5 = *pdVar4;
        lVar1 = param_3 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x18);
          func_0x000107c615f0(uVar2);
          func_0x000107c61574(lVar1);
          func_0x000107c4bebc((long)(param_1 - dVar5),uVar2);
          func_0x000107c615e8(uVar2);
        }
        lVar3 = lVar3 + -1;
        pdVar4 = pdVar4 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 101f01064; end: 101f01317;  */

void FUN_101f01064(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  puStack_b8 = (undefined *)*param_2;
  cVar4 = *(char *)(param_2 + 1);
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (cVar4 == '\x01') {
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(puStack_b8);
    }
    func_0x000107c61428(param_4 + 0x10,auStack_a0,0,0);
    lVar13 = *(long *)(param_4 + 0x10);
    uVar15 = *(ulong *)(lVar13 + 0x10);
    func_0x000107c61434(lVar13);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar15 != 0) {
      uVar12 = 0;
      do {
        if (*(ulong *)(lVar13 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101f01318);
          (*pcVar5)();
        }
        puVar14 = (ulong *)(lVar13 + 0x20 + uVar12 * 0x10);
        uVar1 = *puVar14;
        uVar2 = puVar14[1];
        uVar12 = uVar12 + 1;
        lVar11 = *(long *)(puStack_b8 + 0x10) + 1;
        puVar14 = (ulong *)(puStack_b8 + 0x28);
        do {
          lVar11 = lVar11 + -1;
          if (lVar11 == 0) goto LAB_101f0114c;
          uVar6 = puVar14[-1];
          uVar3 = *puVar14;
          if (uVar6 == uVar1 && uVar3 == uVar2) break;
          puVar14 = puVar14 + 2;
          func_0x000107c605b8(uVar6,uVar3,uVar1,uVar2,0);
        } while ((uVar6 & 1) == 0);
        func_0x000107c61434(uVar2);
        puVar7 = puVar10;
        func_0x000107c61558();
        puStack_b0 = puVar10;
        if (((ulong)puVar7 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar10 + 0x10) + 1,1);
        }
        uVar6 = *(ulong *)(puStack_b0 + 0x10);
        if (*(ulong *)(puStack_b0 + 0x18) >> 1 <= uVar6) {
          func_0x000100403514(1 < *(ulong *)(puStack_b0 + 0x18),uVar6 + 1,1);
        }
        *(ulong *)(puStack_b0 + 0x10) = uVar6 + 1;
        *(ulong *)(puStack_b0 + uVar6 * 0x10 + 0x20) = uVar1;
        *(ulong *)(puStack_b0 + uVar6 * 0x10 + 0x28) = uVar2;
        puVar10 = puStack_b0;
LAB_101f0114c:
      } while (uVar12 != uVar15);
    }
    func_0x000107c6142c(puStack_b8);
    func_0x000107c6142c(lVar13);
    if (*(long *)(puVar10 + 0x10) != 0) {
      func_0x0001000d224c(&puStack_b0);
      puVar7 = puStack_b0;
      puVar8 = puStack_b0;
      func_0x000107c614f0(puStack_b0);
      puVar9 = puVar10;
      (**(code **)(lStack_a8 + 0x18))(puVar10,puVar8,lStack_a8);
      func_0x000107c61574(puVar10);
      func_0x000107c615e8(puVar7);
      puVar7 = &UNK_11049c740;
      func_0x000107c613fc(&UNK_11049c740,0x18,7);
      func_0x000107c61644(puVar7 + 0x10,param_3);
      puVar10 = &UNK_11049c8a8;
      func_0x000107c613fc(&UNK_11049c8a8,0x28,7);
      *(undefined8 *)(puVar10 + 0x10) = param_1;
      *(undefined **)(puVar10 + 0x18) = puVar7;
      *(undefined8 *)(puVar10 + 0x20) = param_5;
      func_0x00010075a04c(0,1,0x101f024c4,puVar10);
      func_0x000107c61574(puVar9);
    }
    func_0x000107c61574(puVar10);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 101f01318; end: 101f013e3;  */

void FUN_101f01318(double param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auStack_68 [24];
  
  if ((char)param_2[1] != '\x01') {
    lVar1 = *param_2;
    lVar3 = *(long *)(lVar1 + 0x10);
    if (lVar3 != 0) {
      func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
      pdVar4 = (double *)(lVar1 + 0x20);
      do {
        dVar5 = *pdVar4;
        lVar1 = param_3 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x18);
          func_0x000107c615f0(uVar2);
          func_0x000107c61574(lVar1);
          func_0x000107c4beb0((long)(param_1 - dVar5),uVar2);
          func_0x000107c615e8(uVar2);
        }
        lVar3 = lVar3 + -1;
        pdVar4 = pdVar4 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 101f013e4; end: 101f014c3; -[_TtC24SCSpotlightUsageTracking21SpotlightUsageTracker mediaLoadedFromCacheWithSnapIds:feedType:] */

void FUN_101f013e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c6157c(param_1);
  FUN_101f00838(param_3,param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101f014c4; end: 101f015ab;  */

void FUN_101f014c4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c615f0(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c4bec8(uVar2);
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000d224c(&uStack_80);
    func_0x000107c61574(param_2);
    func_0x000107c614f0(uStack_80);
    (**(code **)(lStack_78 + 0x50))();
    func_0x000107c61574();
    func_0x000107c615e8(uStack_80);
  }
  return;
}



/* Entry: 101f015ac; end: 101f019a7;  */

/* WARNING: Possible PIC construction at 0x000101f01784: Changing call to branch */

void FUN_101f015ac(ulong param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  func_0x000107c5b538();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar9 = *param_2;
    *param_2 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar2 = 0;
    func_0x000101f02904(0,0x112e0fd78,&PTR_PTR_1126cbc90);
    uVar9 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    uVar13 = uVar9 & 0xffffffffffffff8;
    if (uVar9 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar11 = uVar13;
      if (0x7fffffffffffffff < uVar9) {
        uVar11 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar11 != 0) {
      uVar5 = 0;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        while( true ) {
          if ((uVar9 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar13 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101f01764);
              (*pcVar1)();
            }
            uVar3 = *(ulong *)(uVar9 + uVar5 * 8 + 0x20);
            func_0x000107c61174();
            uVar10 = uVar2;
          }
          else {
            uVar3 = uVar5;
            uVar10 = uVar9;
            FUN_101eff1fc();
          }
          if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101f01760);
            (*pcVar1)();
          }
          uVar12 = uVar5 + 1;
          func_0x000107c61174();
          uVar4 = uVar3;
          func_0x000107c5b2d0();
          func_0x000107c61180();
          if (uVar4 == 0) break;
          uVar5 = uVar4;
          func_0x000107c5faec();
          uVar2 = uVar10;
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar4);
          puVar6 = puVar8;
          func_0x000107c61558();
          puVar7 = puVar8;
          if (((ulong)puVar6 & 1) == 0) {
            uVar2 = *(long *)(puVar8 + 0x10) + 1;
            puVar7 = (undefined *)0x0;
            func_0x0001000d182c(0,uVar2,1,puVar8);
          }
          uVar4 = *(ulong *)(puVar7 + 0x10);
          uVar3 = uVar4 + 1;
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            uVar2 = uVar3;
            func_0x0001000d182c(puVar8,uVar3,1,puVar7);
          }
          *(ulong *)(puVar8 + 0x10) = uVar3;
          *(ulong *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar5;
          *(ulong *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar10;
          uVar5 = uVar12;
          if (uVar12 == uVar11) goto code_r0x000107c6142c;
        }
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        uVar2 = uVar10;
        uVar5 = uVar5 + 1;
      } while (uVar12 != uVar11);
    }
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar9);
  return;
}



/* Entry: 101f019a8; end: 101f01be7;  */

/* WARNING: Possible PIC construction at 0x000101f01a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f01a48) */

void FUN_101f019a8(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c5b538();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f01be8);
    (*pcVar1)();
  }
  uVar2 = 0;
  func_0x000101f02904(0,0x112e0fd80,&PTR_PTR_1126ced58);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f01be4);
        (*pcVar1)();
      }
      func_0x000107c61174(*(undefined8 *)(uVar3 + 0x20));
    }
    else {
      func_0x000101eff210(0,uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 101f01be8; end: 101f01d17;  */

void FUN_101f01be8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c5ddb8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar2;
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    lVar2 = *param_4;
    *param_4 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  return;
}



/* Entry: 101f01d18; end: 101f01f1f;  */

/* WARNING: Possible PIC construction at 0x000101f01ef4: Changing call to branch */

void FUN_101f01d18(ulong param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_1 != 0) {
    func_0x000107c5b538();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar2 = 0;
      func_0x000101f02904(0,0x112e0fd88,&PTR_PTR_1126cc730);
      uVar9 = param_1;
      func_0x000107c5fc54();
      func_0x000107c61170(param_1);
      uVar13 = uVar9 & 0xffffffffffffff8;
      if (uVar9 >> 0x3e == 0) {
        uVar11 = *(ulong *)(uVar13 + 0x10);
      }
      else {
        uVar11 = uVar13;
        if (0x7fffffffffffffff < uVar9) {
          uVar11 = uVar9;
        }
        func_0x000107c60480();
      }
      if (uVar11 != 0) {
        uVar5 = 0;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          while( true ) {
            if ((uVar9 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar13 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101f01ed4);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(uVar9 + uVar5 * 8 + 0x20);
              func_0x000107c61174();
              uVar10 = uVar2;
            }
            else {
              uVar3 = uVar5;
              uVar10 = uVar9;
              func_0x000101eff224();
            }
            if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101f01ed0);
              (*pcVar1)();
            }
            uVar12 = uVar5 + 1;
            func_0x000107c61174();
            uVar4 = uVar3;
            func_0x000107c5b2d0();
            func_0x000107c61180();
            if (uVar4 == 0) break;
            uVar5 = uVar4;
            func_0x000107c5faec();
            uVar2 = uVar10;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar4);
            puVar6 = puVar8;
            func_0x000107c61558();
            puVar7 = puVar8;
            if (((ulong)puVar6 & 1) == 0) {
              uVar2 = *(long *)(puVar8 + 0x10) + 1;
              puVar7 = (undefined *)0x0;
              func_0x0001000d182c(0,uVar2,1,puVar8);
            }
            uVar4 = *(ulong *)(puVar7 + 0x10);
            uVar3 = uVar4 + 1;
            puVar8 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
              uVar2 = uVar3;
              func_0x0001000d182c(puVar8,uVar3,1,puVar7);
            }
            *(ulong *)(puVar8 + 0x10) = uVar3;
            *(ulong *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar5;
            *(ulong *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar10;
            uVar5 = uVar12;
            if (uVar12 == uVar11) goto code_r0x000107c6142c;
          }
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar3);
          uVar2 = uVar10;
          uVar5 = uVar5 + 1;
        } while (uVar12 != uVar11);
      }
      goto code_r0x000107c6142c;
    }
  }
  uVar9 = *param_2;
  *param_2 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar9);
  return;
}


