/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038a07e4; end: 1038a099f;  */

/* WARNING: Possible PIC construction at 0x0001038a0880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a08ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a0884) */
/* WARNING: Removing unreachable block (ram,0x0001038a095c) */
/* WARNING: Removing unreachable block (ram,0x0001038a0964) */
/* WARNING: Removing unreachable block (ram,0x0001038a088c) */
/* WARNING: Removing unreachable block (ram,0x0001038a0898) */
/* WARNING: Removing unreachable block (ram,0x0001038a08b0) */
/* WARNING: Removing unreachable block (ram,0x0001038a0974) */
/* WARNING: Removing unreachable block (ram,0x0001038a08bc) */
/* WARNING: Removing unreachable block (ram,0x0001038a0924) */
/* WARNING: Removing unreachable block (ram,0x0001038a08c0) */
/* WARNING: Removing unreachable block (ram,0x0001038a0958) */
/* WARNING: Removing unreachable block (ram,0x0001038a08cc) */
/* WARNING: Removing unreachable block (ram,0x0001038a08d8) */
/* WARNING: Removing unreachable block (ram,0x0001038a0954) */
/* WARNING: Removing unreachable block (ram,0x0001038a08e4) */
/* WARNING: Removing unreachable block (ram,0x0001038a08fc) */
/* WARNING: Removing unreachable block (ram,0x0001038a08a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a07e4(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6240);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112fa6180) = param_1;
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112fa6190);
    func_0x000107c61174();
    func_0x000107c5dfd0(uVar3);
    func_0x000107c61180();
    uVar1 = 0;
    FUN_1038a4e58(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x000107c5fc54(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1038a09a0; end: 1038a09db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038a09a0(long *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = _DAT_112fa6240;
  *param_1 = unaff_x20;
  param_1[1] = lVar2;
  lVar2 = *(long *)(unaff_x20 + lVar2);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined1 *)(lVar2 + _DAT_112fa6180);
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  auVar3._8_8_ = param_1 + 2;
  auVar3._0_8_ = FUN_1038a09dc;
  return auVar3;
}



/* Entry: 1038a09dc; end: 1038a0cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a09dc(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  
  lVar2 = _DAT_112fa6180;
  lVar9 = *(long *)(*param_1 + param_1[1]);
  lVar6 = lVar9;
  if ((param_2 & 1) == 0) {
    if (lVar9 == 0) {
      return;
    }
    *(char *)(lVar9 + _DAT_112fa6180) = (char)param_1[2];
    uVar10 = *(ulong *)(lVar9 + _DAT_112fa6190);
    func_0x000107c61174();
    func_0x000107c5dfd0();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_1038a4e58(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    uVar7 = uVar10;
    func_0x000107c5fc54(uVar10,uVar4);
    func_0x000107c61170(uVar10);
    if (uVar7 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar10 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar10 != 0) {
      puVar11 = (ulong *)0x0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong **)((uVar7 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038a0cc0);
            (*pcVar3)();
          }
          puVar5 = *(ulong **)(uVar7 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar11;
          func_0x00010118dc90(puVar11,uVar7);
        }
        uVar1 = (long)puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038a0cb8);
          (*pcVar3)();
        }
        uVar4 = 0;
        func_0x0001038960dc(0);
        puVar8 = puVar5;
        func_0x000107c61480(puVar5,uVar4);
        if (puVar8 != (ulong *)0x0) {
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x68))
                    (*(undefined1 *)(lVar9 + lVar2));
        }
        func_0x000107c61170(puVar5);
        puVar11 = (ulong *)((long)puVar11 + 1);
      } while (uVar1 != uVar10);
    }
  }
  else {
    if (lVar9 == 0) {
      return;
    }
    *(char *)(lVar9 + _DAT_112fa6180) = (char)param_1[2];
    uVar10 = *(ulong *)(lVar9 + _DAT_112fa6190);
    func_0x000107c61174();
    func_0x000107c5dfd0();
    func_0x000107c61180();
    uVar4 = 0;
    FUN_1038a4e58(0,0x112d62a98,&PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    uVar7 = uVar10;
    func_0x000107c5fc54(uVar10,uVar4);
    func_0x000107c61170(uVar10);
    if (uVar7 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar10 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar10 != 0) {
      puVar11 = (ulong *)0x0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong **)((uVar7 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038a0cbc);
            (*pcVar3)();
          }
          puVar5 = *(ulong **)(uVar7 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar11;
          func_0x00010118dc90(puVar11,uVar7);
        }
        uVar1 = (long)puVar11 + 1;
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038a0cb4);
          (*pcVar3)();
        }
        uVar4 = 0;
        func_0x0001038960dc(0);
        puVar8 = puVar5;
        func_0x000107c61480(puVar5,uVar4);
        if (puVar8 != (ulong *)0x0) {
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x68))
                    (*(undefined1 *)(lVar9 + lVar2));
        }
        func_0x000107c61170(puVar5);
        puVar11 = (ulong *)((long)puVar11 + 1);
      } while (uVar1 != uVar10);
    }
  }
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 1038a0cf8; end: 1038a0d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038a0cf8(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6248);
  if (*(char *)(puVar1 + 1) == '\x01') {
    *puVar1 = 0x404d000000000000;
    *(undefined1 *)(puVar1 + 1) = 0;
    return 0x404d000000000000;
  }
  return *puVar1;
}



/* Entry: 1038a0d44; end: 1038a0d77;  */

undefined1  [16] FUN_1038a0d44(undefined8 param_1,undefined8 *param_2)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  param_2[1] = unaff_x20;
  FUN_1038a0cf8();
  *param_2 = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = FUN_1038a0d78;
  return auVar1;
}



/* Entry: 1038a0d78; end: 1038a0d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a0d78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1[1] + _DAT_112fa6248);
  *puVar1 = *param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Entry: 1038a0d94; end: 1038a0ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a0d94(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_112fa6250;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 1038a0de0; end: 1038a0ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a0de0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112fa6250;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038a0ed4; end: 1038a0ed7;  */

void FUN_1038a0ed4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 1038a0ed8; end: 1038a0f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038a0ed8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112fa6258);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1038a0f30; end: 1038a0f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a0f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6258);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 1038a0f8c; end: 1038a0fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038a0f8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fa6258;
  func_0x000107c61428(unaff_x20 + _DAT_112fa6258,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1038a4ec0;
  return auVar2;
}



/* Entry: 1038a0fcc; end: 1038a1063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038a0fcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fa6280;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6280);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000103894e10();
    func_0x000107c613fc();
    func_0x000107c61614(lVar2 + 0x10,0);
    func_0x000107c61614(lVar2 + 0x18,0);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    func_0x000107c61604(lVar2 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 1038a1064; end: 1038a1227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a1064(undefined8 param_1,char param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long alStack_a0 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112fa6290);
  uVar17 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar14 = puVar1[3];
  FUN_1038a4e58(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c61174();
  func_0x00010388cd64(uVar7,uVar14);
  uVar5 = uVar17;
  func_0x000107c60118(uVar17,param_1);
  if (((uVar5 & 1) == 0) || ((char)uVar6 != param_2)) {
    func_0x000107c61170(uVar17);
  }
  else if (uVar7 == 0) {
    func_0x00010388cd64(param_3,param_4);
    func_0x000107c61170(uVar17);
    uVar7 = param_3;
    uVar14 = param_4;
    if (param_3 == 0) {
      return;
    }
  }
  else {
    if (param_3 == 0) {
      func_0x000107c61170(uVar17);
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar14);
      goto LAB_1038a1188;
    }
    func_0x00010388cd64(uVar7,uVar14);
    func_0x00010388cd64(param_3,param_4);
    uVar6 = uVar7;
    FUN_1038a4f38(uVar7,param_3);
    if ((uVar6 & 1) != 0) {
      uVar6 = uVar14;
      func_0x0001038a518c(uVar14,param_4);
      func_0x000107c61170(uVar17);
      FUN_10381e510(uVar7,uVar14);
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(param_3);
      FUN_10381e510(uVar7,uVar14);
      if ((uVar6 & 1) != 0) {
        return;
      }
      goto LAB_1038a1188;
    }
    func_0x000107c61170(uVar17);
    FUN_10381e510(uVar7,uVar14);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_3);
  }
  FUN_10381e510(uVar7,uVar14);
LAB_1038a1188:
  lVar8 = *(long *)(unaff_x20 + _DAT_112fa6240);
  if (lVar8 != 0) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa6290);
    uVar15 = *puVar2;
    uVar16 = puVar2[2];
    uVar3 = puVar2[3];
    uVar4 = *(undefined1 *)(puVar2 + 1);
    func_0x000107c61174();
    func_0x000107c61174(uVar15);
    func_0x00010388cd64(uVar16,uVar3);
    FUN_10389d4f8(uVar15,uVar4,uVar16,uVar3);
    func_0x000107c61170(lVar8);
  }
  uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112fa6268);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112fa6270);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa6290);
  uStack_78 = uVar16;
  func_0x000107c61174();
  func_0x000107c61174(uVar16);
  lVar8 = 0x20;
  do {
    lVar9 = *(long *)((long)alStack_a0 + lVar8);
    if (lVar9 != 0) {
      func_0x000107c61174();
      lVar10 = lVar9;
      func_0x000107c45130();
      func_0x000107c61180();
      if (lVar10 != 0) {
        puVar11 = (undefined *)*puVar2;
        if ((*(char *)(puVar2 + 1) == '\0') || (*(char *)(puVar2 + 1) == '\x01')) {
          func_0x000107c61174(puVar11);
        }
        else {
          puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5af88();
          func_0x000107c61180();
        }
        func_0x000107c59e10(lVar10);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(puVar11);
      }
      puVar11 = (undefined *)*puVar2;
      if (*(char *)(puVar2 + 1) == '\0') {
        func_0x000107c3fdd0(0x3faeb851eb851eb8,puVar11);
LAB_1038a261c:
        func_0x000107c61180();
      }
      else {
        if (*(char *)(puVar2 + 1) != '\x01') {
          puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5af88();
          goto LAB_1038a261c;
        }
        uVar16 = puVar2[2];
        uVar3 = puVar2[3];
        puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c61174(puVar11);
        func_0x00010388cd64(uVar16,uVar3);
        func_0x000107c5af88(puVar12);
        func_0x000107c61180();
        puVar13 = puVar12;
        func_0x000107c3fdd0(0x3fc47ae147ae147b);
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        FUN_10381e510(uVar16,uVar3);
        func_0x000107c61170(puVar12);
        puVar11 = puVar13;
      }
      func_0x000107c52b50(lVar9);
      func_0x000107c61170(puVar11);
      lVar10 = lVar9;
      func_0x000107c4aba4(lVar9);
      func_0x000107c61180();
      puVar11 = (undefined *)*puVar2;
      if (*(char *)(puVar2 + 1) == '\0') {
        func_0x000107c3fdd0(0x3faeb851eb851eb8,puVar11);
LAB_1038a24a0:
        func_0x000107c61180();
      }
      else {
        if (*(char *)(puVar2 + 1) != '\x01') {
          puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5af88();
          goto LAB_1038a24a0;
        }
        uVar16 = puVar2[2];
        uVar3 = puVar2[3];
        puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c61174(puVar11);
        func_0x00010388cd64(uVar16,uVar3);
        func_0x000107c5af88(puVar12);
        func_0x000107c61180();
        puVar13 = puVar12;
        func_0x000107c3fdd0(0x3fc47ae147ae147b);
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        FUN_10381e510(uVar16,uVar3);
        func_0x000107c61170(puVar12);
        puVar11 = puVar13;
      }
      puVar12 = puVar11;
      func_0x000107c3ab24(puVar11);
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c52df8(lVar10);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(lVar9);
    }
    lVar8 = lVar8 + 8;
    if (lVar8 == 0x30) {
      uVar16 = 0x112fa6378;
      func_0x0001000285a8(0x112fa6378,&UNK_10dc19580);
      func_0x000107c61408(&uStack_80,2,uVar16);
      return;
    }
  } while( true );
}



/* Entry: 1038a1228; end: 1038a126f; -[_TtC11SCARBarImpl13ARBarViewImpl intrinsicContentSize] */

undefined1  [16]
FUN_1038a1228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  func_0x000107c3ec60();
  FUN_1038a0cf8();
  func_0x000107c61170(param_4);
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 1038a1270; end: 1038a1297; -[_TtC11SCARBarImpl13ARBarViewImpl initWithCoder:] */

void FUN_1038a1270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1038a45d4();
  return;
}



/* Entry: 1038a1298; end: 1038a1893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038a1298(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,byte param_5,
             undefined8 param_6,undefined8 param_7,uint param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa6230) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6248);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = unaff_x20 + _DAT_112fa6250;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6258);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112fa6260;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6240) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6268) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6270) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6278) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6280) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa6288) = 0;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6290);
  *puVar1 = puVar6;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar4 = param_1;
  func_0x000107c614f0();
  (**(code **)(param_2 + 0x28))();
  *(undefined8 *)(unaff_x20 + _DAT_112fa6298) = uVar4;
  pbVar3 = (byte *)(unaff_x20 + _DAT_112fa62a0);
  *pbVar3 = (byte)param_3 & 1;
  pbVar3[1] = (byte)((ulong)param_3 >> 8) & 1;
  pbVar3[2] = (byte)((ulong)param_3 >> 0x10) & 1;
  *(undefined8 *)(pbVar3 + 8) = param_4;
  pbVar3[0x10] = param_5 & 1;
  *(undefined8 *)(pbVar3 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fa62a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fa62b0) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_112fa6238) = 0;
  puVar6 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  puVar7 = auStack_70;
  func_0x000107c61154(0,0,0,0,puVar7,puVar6);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5af88(puVar5);
  func_0x000107c61180();
  func_0x000107c52b50(puVar7);
  func_0x000107c61170(puVar5);
  uVar4 = 0x765f7261625f7261;
  func_0x000107c5fadc(0x765f7261625f7261,0xee00776569765f32);
  func_0x000107c520f4(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  FUN_1038a2814(param_7,param_8 & 1,param_1,param_2);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_9);
  return puVar7;
}



/* Entry: 1038a1894; end: 1038a1a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a1894(double param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  FUN_1038a4550();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ec60();
  func_0x000107c609b0();
  dVar3 = (param_1 + -38.0) * 0.5;
  dVar6 = dVar3 + -5.0;
  if (*(char *)(unaff_x20 + _DAT_112fa62a0 + 1) == '\0') {
    dVar6 = dVar3;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa6240);
  dVar5 = dVar3;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c438d4();
    func_0x000107c609cc();
    dVar4 = dVar3;
    func_0x000107c438d4();
    func_0x000107c609b0();
    dVar5 = 0.0;
    func_0x000107c54b80(0,0,dVar3,dVar4,lVar1);
    func_0x000107c61170(lVar1);
  }
  lVar1 = _DAT_112fa6268;
  if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
    dVar5 = 10.0;
    func_0x000107c54b80(0x4024000000000000,dVar6,0x4043000000000000,0x4043000000000000);
    lVar1 = *(long *)(unaff_x20 + lVar1);
    if (lVar1 != 0) {
      func_0x000107c4aba4();
      func_0x000107c61180();
      dVar5 = 19.0;
      func_0x000107c539d4(0x4033000000000000);
      func_0x000107c61170(lVar1);
    }
  }
  lVar1 = _DAT_112fa6270;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6270);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c438d4();
    func_0x000107c609cc();
    func_0x000107c54b80(dVar5 + -10.0 + -38.0,dVar6,0x4043000000000000,0x4043000000000000,lVar2);
    func_0x000107c61170(lVar2);
    lVar1 = *(long *)(unaff_x20 + lVar1);
    if (lVar1 != 0) {
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c539d4(0x4033000000000000);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1038a1a40; end: 1038a1a67; -[_TtC11SCARBarImpl13ARBarViewImpl layoutSubviews] */

void FUN_1038a1a40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038a1894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038a1a68; end: 1038a1a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a1a68(undefined8 param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  double dVar4;
  
  if ((param_2 & 1) == 0) {
    func_0x000107c550d8();
    bVar1 = 3;
  }
  else {
    FUN_1038a2074();
    bVar1 = 0;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
      if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
        func_0x000107c526c0(0);
      }
      if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
        func_0x000107c526c0(0);
      }
      lVar2 = _DAT_112fa6270;
      if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
      uVar3 = 0x3ff0000000000000;
      func_0x000107c526c0(0x3ff0000000000000);
      lVar2 = *(long *)(unaff_x20 + lVar2);
      if (lVar2 == 0) goto LAB_1038a2054;
      func_0x000107c61174();
      func_0x000107c3f74c();
      func_0x000107c3f74c(lVar2);
      func_0x000107c532b4(uVar3,lVar2);
LAB_1038a1ffc:
      func_0x000107c61170(lVar2);
      goto LAB_1038a2054;
    }
    func_0x000107c526c0(0);
    if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
      func_0x000107c526c0(0);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
      func_0x000107c526c0(0);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
    uVar3 = 0;
  }
  else {
    if (bVar1 == 2) {
      func_0x000107c526c0(0x3ff0000000000000);
      if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
        func_0x000107c526c0(0);
      }
      if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
        func_0x000107c526c0(0x3ff0000000000000);
      }
      lVar2 = _DAT_112fa6270;
      if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
      dVar4 = 1.0;
      func_0x000107c526c0(0x3ff0000000000000);
      lVar2 = *(long *)(unaff_x20 + lVar2);
      if (lVar2 == 0) goto LAB_1038a2054;
      func_0x000107c61174();
      func_0x000107c438d4();
      func_0x000107c609cc();
      func_0x000107c438d4(lVar2);
      func_0x000107c54b80(dVar4 + -10.0 + -38.0,lVar2);
      goto LAB_1038a1ffc;
    }
    func_0x000107c526c0(0x3ff0000000000000);
    if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
    uVar3 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar3);
LAB_1038a2054:
  *(byte *)(unaff_x20 + _DAT_112fa6288) = bVar1;
  return;
}



/* Entry: 1038a1a9c; end: 1038a1b0f; -[_TtC11SCARBarImpl13ARBarViewImpl beginTransition:transitionIn:context:] */

/* WARNING: Possible PIC construction at 0x0001038a1af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a1afc) */

void FUN_1038a1a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  if (param_4 == 0) {
    func_0x000107c550d8(param_1,param_2,0);
    uVar1 = 3;
  }
  else {
    FUN_1038a2074(param_3);
    uVar1 = 0;
  }
  FUN_1038a1e58(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1038a1b10; end: 1038a1b1b;  */

/* WARNING: Removing unreachable block (ram,0x0001038a1e7c) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f78) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f94) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f9c) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fac) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fb4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fc4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fd4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ee4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ef8) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f00) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f10) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f18) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f28) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f38) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ffc) */
/* WARNING: Removing unreachable block (ram,0x0001038a1e80) */
/* WARNING: Removing unreachable block (ram,0x0001038a1e9c) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ea4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1eb4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ebc) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a1b10(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [8];
  
  if ((param_3 & 1) != 0) {
    if ((param_2 & 1) == 0) {
      FUN_1038a1e58(0);
      func_0x000107c4ff34();
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6258);
      func_0x000107c61428(puVar1,auStack_48,0,0);
      pcVar3 = (code *)*puVar1;
      if (pcVar3 != (code *)0x0) {
        uVar2 = puVar1[1];
        func_0x000107c6157c(uVar2);
        (*pcVar3)();
        func_0x00010058d43c(pcVar3,uVar2);
      }
    }
    else if ((*(byte *)(unaff_x20 + _DAT_112fa62a0 + 2) & 1) == 0) {
      func_0x000107c550d8();
      func_0x000107c526c0(0x3ff0000000000000,unaff_x20);
      if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
        func_0x000107c526c0(0x3ff0000000000000);
      }
      if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
        func_0x000107c526c0(0x3ff0000000000000);
      }
      if (*(long *)(unaff_x20 + _DAT_112fa6270) != 0) {
        func_0x000107c526c0(0x3ff0000000000000);
      }
      *(undefined1 *)(unaff_x20 + _DAT_112fa6288) = 3;
      return;
    }
  }
  return;
}



/* Entry: 1038a1b1c; end: 1038a1b97; -[_TtC11SCARBarImpl13ARBarViewImpl endTransition:transitionIn:complete:context:enableDarkModeAlways:] */

/* WARNING: Possible PIC construction at 0x0001038a1b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a1b78) */

void FUN_1038a1b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  func_0x0001038a4744(param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1038a1b98; end: 1038a1b9b;  */

void FUN_1038a1b98(void)

{
  return;
}



/* Entry: 1038a1b9c; end: 1038a1ba3; -[_TtC11SCARBarImpl13ARBarViewImpl setBackgroundAlpha:] */

void FUN_1038a1b9c(void)

{
  return;
}



/* Entry: 1038a1ba4; end: 1038a1ddb;  */

void FUN_1038a1ba4(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_c0,0,0);
  func_0x000107c61428(param_3 + 0x10,auStack_d8,0,0);
  func_0x000107c61428(param_1 + 0x10,auStack_f0,1,0);
  func_0x000107c61428(param_3 + 0x10,auStack_108,1,0);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  bVar5 = (param_2 & 1) == 0;
  dVar14 = 1.0;
  if (bVar5) {
    dVar14 = 0.0;
  }
  dVar15 = 0.4;
  dVar3 = 0.5;
  if (bVar5) {
    dVar15 = 0.5;
    dVar3 = 0.4;
  }
  dVar16 = 0.0;
  if (bVar5) {
    dVar16 = 1.0;
  }
  uVar10 = 4;
  if (bVar5) {
    uVar10 = 0;
  }
  uStack_144 = 3;
  uStack_13c = uStack_144;
  if (bVar5) {
    uStack_13c = 1;
  }
  uStack_140 = 2;
  if (bVar5) {
    uStack_140 = 0;
    uStack_144 = 4;
  }
  do {
    bVar1 = *(byte *)(param_1 + 0x10);
    if (bVar1 < 2) {
      dVar12 = dVar16;
      if (bVar1 != 0) {
        dVar12 = dVar15;
      }
    }
    else {
      dVar12 = dVar3;
      if ((bVar1 != 2) && (dVar12 = dVar14, bVar1 != 3)) {
        return;
      }
    }
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar13 = *(undefined8 *)(param_3 + 0x10);
    puVar7 = &UNK_1106a24d8;
    func_0x000107c613fc(&UNK_1106a24d8,0x18,7);
    func_0x000107c615fc(puVar7 + 0x10,param_4);
    puVar8 = &UNK_1106a2500;
    func_0x000107c613fc(&UNK_1106a2500,0x19,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    puVar8[0x18] = bVar1;
    pcStack_118 = FUN_1038a4cc4;
    puStack_138 = puVar4;
    uStack_130 = 0x42000000;
    puStack_128 = &UNK_1000f6b44;
    puStack_120 = &UNK_1106a2518;
    ppuVar9 = &puStack_138;
    puStack_110 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_110);
    func_0x000107c3d724(uVar13,dVar12,puVar6);
    func_0x000107c60bd0(ppuVar9);
    if (bVar1 < 2) {
      puVar2 = &uStack_144;
      if (bVar1 != 0) {
        puVar2 = &uStack_140;
      }
      uVar11 = (undefined1)*puVar2;
    }
    else {
      uVar11 = (char)uStack_13c;
      if (bVar1 != 2) {
        uVar11 = uVar10;
      }
    }
    *(undefined1 *)(param_1 + 0x10) = uVar11;
    *(double *)(param_3 + 0x10) = dVar12 + *(double *)(param_3 + 0x10);
  } while( true );
}



/* Entry: 1038a1ddc; end: 1038a1e33; -[_TtC11SCARBarImpl13ARBarViewImpl performAnimations:context:enableDarkModeAlways:] */

void FUN_1038a1ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1038a4800(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038a1e34; end: 1038a1e57;  */

/* WARNING: Removing unreachable block (ram,0x0001038a1e7c) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f78) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f94) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f9c) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fac) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fb4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fc4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1fd4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ee4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ef8) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f00) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f10) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f18) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f28) */
/* WARNING: Removing unreachable block (ram,0x0001038a1f38) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ffc) */
/* WARNING: Removing unreachable block (ram,0x0001038a1e80) */
/* WARNING: Removing unreachable block (ram,0x0001038a1e9c) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ea4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1eb4) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ebc) */
/* WARNING: Removing unreachable block (ram,0x0001038a1ecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a1e34(void)

{
  long unaff_x20;
  
  FUN_1038a2074();
  func_0x000107c550d8();
  func_0x000107c526c0(0x3ff0000000000000);
  if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
  }
  if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
  }
  if (*(long *)(unaff_x20 + _DAT_112fa6270) != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112fa6288) = 3;
  return;
}



/* Entry: 1038a1e58; end: 1038a2073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a1e58(byte param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  
  if (param_1 < 2) {
    if (param_1 != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
      if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
        func_0x000107c526c0(0);
      }
      if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
        func_0x000107c526c0(0);
      }
      lVar1 = _DAT_112fa6270;
      if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
      uVar2 = 0x3ff0000000000000;
      func_0x000107c526c0(0x3ff0000000000000);
      lVar1 = *(long *)(unaff_x20 + lVar1);
      if (lVar1 == 0) goto LAB_1038a2054;
      func_0x000107c61174();
      func_0x000107c3f74c();
      func_0x000107c3f74c(lVar1);
      func_0x000107c532b4(uVar2,lVar1);
LAB_1038a1ffc:
      func_0x000107c61170(lVar1);
      goto LAB_1038a2054;
    }
    func_0x000107c526c0(0);
    if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
      func_0x000107c526c0(0);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
      func_0x000107c526c0(0);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
    uVar2 = 0;
  }
  else {
    if (param_1 == 2) {
      func_0x000107c526c0(0x3ff0000000000000);
      if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
        func_0x000107c526c0(0);
      }
      if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
        func_0x000107c526c0(0x3ff0000000000000);
      }
      lVar1 = _DAT_112fa6270;
      if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
      dVar3 = 1.0;
      func_0x000107c526c0(0x3ff0000000000000);
      lVar1 = *(long *)(unaff_x20 + lVar1);
      if (lVar1 == 0) goto LAB_1038a2054;
      func_0x000107c61174();
      func_0x000107c438d4();
      func_0x000107c609cc();
      func_0x000107c438d4(lVar1);
      func_0x000107c54b80(dVar3 + -10.0 + -38.0,lVar1);
      goto LAB_1038a1ffc;
    }
    func_0x000107c526c0(0x3ff0000000000000);
    if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
      func_0x000107c526c0(0x3ff0000000000000);
    }
    if (*(long *)(unaff_x20 + _DAT_112fa6270) == 0) goto LAB_1038a2054;
    uVar2 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar2);
LAB_1038a2054:
  *(byte *)(unaff_x20 + _DAT_112fa6288) = param_1;
  return;
}



/* Entry: 1038a2074; end: 1038a23af;  */

/* WARNING: Possible PIC construction at 0x0001038a2190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a21b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a228c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a22e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a232c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a2330) */
/* WARNING: Removing unreachable block (ram,0x0001038a2344) */
/* WARNING: Removing unreachable block (ram,0x0001038a2350) */
/* WARNING: Removing unreachable block (ram,0x0001038a22e4) */
/* WARNING: Removing unreachable block (ram,0x0001038a2290) */
/* WARNING: Removing unreachable block (ram,0x0001038a2244) */
/* WARNING: Removing unreachable block (ram,0x0001038a2208) */
/* WARNING: Removing unreachable block (ram,0x0001038a21bc) */
/* WARNING: Removing unreachable block (ram,0x0001038a2194) */
/* WARNING: Removing unreachable block (ram,0x0001038a2378) */
/* WARNING: Removing unreachable block (ram,0x0001038a2380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a2074(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c550d8();
  func_0x000107c526c0(0);
  func_0x000107c5a050();
  func_0x000107c3d89c(param_1);
  if (*(char *)(unaff_x20 + _DAT_112fa62a0 + 0x10) == '\x01') {
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 0xb;
    *(undefined8 *)(puVar1 + 0x10) = 5;
    func_0x000107c44d9c();
    func_0x000107c61180();
    FUN_1038a0cf8();
    func_0x000107c40290(unaff_x20);
    func_0x000107c61180();
    param_1 = unaff_x20;
  }
  else {
    func_0x000107c515ac(param_1);
    func_0x000107c61180();
    func_0x000107c3ec1c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038a23b0; end: 1038a2737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a23b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long alStack_a0 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112fa6240);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6290);
    uVar10 = *puVar1;
    uVar11 = puVar1[2];
    uVar2 = puVar1[3];
    uVar3 = *(undefined1 *)(puVar1 + 1);
    func_0x000107c61174();
    func_0x000107c61174(uVar10);
    func_0x00010388cd64(uVar11,uVar2);
    FUN_10389d4f8(uVar10,uVar3,uVar11,uVar2);
    func_0x000107c61170(lVar4);
  }
  uStack_80 = *(undefined8 *)(unaff_x20 + _DAT_112fa6268);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112fa6270);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6290);
  uStack_78 = uVar11;
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  lVar4 = 0x20;
  do {
    lVar5 = *(long *)((long)alStack_a0 + lVar4);
    if (lVar5 != 0) {
      func_0x000107c61174();
      lVar6 = lVar5;
      func_0x000107c45130();
      func_0x000107c61180();
      if (lVar6 != 0) {
        puVar7 = (undefined *)*puVar1;
        if ((*(char *)(puVar1 + 1) == '\0') || (*(char *)(puVar1 + 1) == '\x01')) {
          func_0x000107c61174(puVar7);
        }
        else {
          puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5af88();
          func_0x000107c61180();
        }
        func_0x000107c59e10(lVar6);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar7);
      }
      puVar7 = (undefined *)*puVar1;
      if (*(char *)(puVar1 + 1) == '\0') {
        func_0x000107c3fdd0(0x3faeb851eb851eb8,puVar7);
LAB_1038a261c:
        func_0x000107c61180();
      }
      else {
        if (*(char *)(puVar1 + 1) != '\x01') {
          puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5af88();
          goto LAB_1038a261c;
        }
        uVar11 = puVar1[2];
        uVar2 = puVar1[3];
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c61174(puVar7);
        func_0x00010388cd64(uVar11,uVar2);
        func_0x000107c5af88(puVar8);
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c3fdd0(0x3fc47ae147ae147b);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        FUN_10381e510(uVar11,uVar2);
        func_0x000107c61170(puVar8);
        puVar7 = puVar9;
      }
      func_0x000107c52b50(lVar5);
      func_0x000107c61170(puVar7);
      lVar6 = lVar5;
      func_0x000107c4aba4(lVar5);
      func_0x000107c61180();
      puVar7 = (undefined *)*puVar1;
      if (*(char *)(puVar1 + 1) == '\0') {
        func_0x000107c3fdd0(0x3faeb851eb851eb8,puVar7);
LAB_1038a24a0:
        func_0x000107c61180();
      }
      else {
        if (*(char *)(puVar1 + 1) != '\x01') {
          puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5af88();
          goto LAB_1038a24a0;
        }
        uVar11 = puVar1[2];
        uVar2 = puVar1[3];
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c61174(puVar7);
        func_0x00010388cd64(uVar11,uVar2);
        func_0x000107c5af88(puVar8);
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c3fdd0(0x3fc47ae147ae147b);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        FUN_10381e510(uVar11,uVar2);
        func_0x000107c61170(puVar8);
        puVar7 = puVar9;
      }
      puVar8 = puVar7;
      func_0x000107c3ab24(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c52df8(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar5);
    }
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x30) {
      uVar11 = 0x112fa6378;
      func_0x0001000285a8(0x112fa6378,&UNK_10dc19580);
      func_0x000107c61408(&uStack_80,2,uVar11);
      return;
    }
  } while( true );
}



/* Entry: 1038a2738; end: 1038a2813;  */

/* WARNING: Possible PIC construction at 0x0001038a2794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a27ec: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a2738(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112fa6268);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5df3c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c550d8();
      goto code_r0x000107c61170;
    }
    func_0x000107c61170(lVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6270);
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar1 = lVar2;
  func_0x000107c5df3c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c550d8();
    lVar2 = lVar1;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1038a2814; end: 1038a2cb3;  */

/* WARNING: Possible PIC construction at 0x0001038a2880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a28d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a291c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a29a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a29e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a2c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a2be4) */
/* WARNING: Removing unreachable block (ram,0x0001038a2bd0) */
/* WARNING: Removing unreachable block (ram,0x0001038a2b3c) */
/* WARNING: Removing unreachable block (ram,0x0001038a2c94) */
/* WARNING: Removing unreachable block (ram,0x0001038a2b44) */
/* WARNING: Removing unreachable block (ram,0x0001038a2af4) */
/* WARNING: Removing unreachable block (ram,0x0001038a2a9c) */
/* WARNING: Removing unreachable block (ram,0x0001038a2a54) */
/* WARNING: Removing unreachable block (ram,0x0001038a29ec) */
/* WARNING: Removing unreachable block (ram,0x0001038a29a8) */
/* WARNING: Removing unreachable block (ram,0x0001038a2958) */
/* WARNING: Removing unreachable block (ram,0x0001038a2920) */
/* WARNING: Removing unreachable block (ram,0x0001038a28d4) */
/* WARNING: Removing unreachable block (ram,0x0001038a2884) */
/* WARNING: Removing unreachable block (ram,0x0001038a2c38) */

void FUN_1038a2814(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c614f0(param_3);
  (**(code **)(param_4 + 0x30))();
  func_0x0001038a4cfc();
  func_0x000104884898();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1038a2cb4; end: 1038a2d1b;  */

void FUN_1038a2cb4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2 = param_2 + 0x10;
  func_0x000107c61600(param_2);
  FUN_1038a3934(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1038a2d1c; end: 1038a2d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a2d1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + _DAT_112fa6278) = uVar1;
    FUN_1038a2738();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1038a2d88; end: 1038a2e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a2d88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  uVar8 = *param_1;
  uVar6 = *(undefined1 *)(param_1 + 1);
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_112fa6290);
    uVar9 = *puVar1;
    uVar3 = puVar1[2];
    uVar5 = puVar1[3];
    *puVar1 = uVar8;
    uVar7 = *(undefined1 *)(puVar1 + 1);
    *(undefined1 *)(puVar1 + 1) = uVar6;
    puVar1[2] = uVar2;
    puVar1[3] = uVar4;
    func_0x000107c61174(uVar8);
    func_0x00010388cd64(uVar2,uVar4);
    FUN_1038a1064(uVar9,uVar7,uVar3,uVar5);
    func_0x000107c61170(uVar9);
    FUN_10381e510(uVar3,uVar5);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1038a2e64; end: 1038a2fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a2e64(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_58 [24];
  
  lVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar6 = *(ulong *)(lVar5 + 0x10);
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        if (*(ulong *)(lVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a2fa4);
          (*pcVar1)();
        }
        lVar2 = *(long *)(lVar5 + 0x20 + uVar8 * 8);
        if ((lVar2 != 0) && (func_0x000107c4a728(), (int)lVar2 != 0)) {
          lVar5 = 0;
          goto LAB_1038a2ef0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    lVar5 = 1;
LAB_1038a2ef0:
    lVar3 = *(long *)(param_2 + _DAT_112fa6240);
    lVar2 = param_2;
    if (lVar3 != 0) {
      *(char *)(lVar3 + _DAT_112fa6188) = (char)lVar5;
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112fa6198);
      func_0x000107c61174();
      func_0x00010389f864(lVar5);
      lVar4 = lVar5;
      FUN_1033d92b8();
      func_0x000107c6142c(lVar5);
      lVar2 = lVar4;
      func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(lVar4);
      func_0x000107c535a0(uVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1038a2fa4; end: 1038a3737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a2fa4(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar6 = _DAT_112fa6240;
  if (*(long *)(unaff_x20 + _DAT_112fa6240) == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6290);
    uVar19 = *puVar1;
    uVar4 = *(undefined1 *)(puVar1 + 1);
    uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112fa6298);
    uVar18 = puVar1[2];
    uVar3 = puVar1[3];
    pcVar2 = (char *)(unaff_x20 + _DAT_112fa62a0);
    if (*pcVar2 == '\x01') {
      puVar8 = PTR_PTR_1126affa8;
      func_0x000107c61168();
      func_0x000107c61174(uVar19);
      func_0x00010388cd64(uVar18,uVar3);
      func_0x000107c5aa04();
      func_0x000107c61180();
    }
    else {
      func_0x000107c61174(uVar19);
      func_0x00010388cd64(uVar18,uVar3);
      puVar8 = (undefined *)0x0;
    }
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112fa62b0);
    lVar16 = *(long *)(pcVar2 + 8);
    if (lVar16 == 0) {
      lStack_68._0_1_ = 2;
    }
    else {
      if (lVar16 != 1) {
        lStack_68 = lVar16;
        func_0x000107c60614(&UNK_11077ec18,&lStack_68,&UNK_11077ec18,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1038a3388);
        (*pcVar7)();
      }
      func_0x0001000d224c(&lStack_68);
    }
    lVar9 = 0;
    FUN_10389e40c();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar16 = lVar10 + _DAT_112fa6138;
    *(undefined8 *)(lVar16 + 8) = 0;
    func_0x000107c61614(lVar16,0);
    puVar1 = (undefined8 *)(lVar10 + _DAT_112fa6140);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112fa6148);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)(lVar10 + _DAT_112fa6150) = 0;
    *(undefined **)(lVar10 + _DAT_112fa6158) = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar5 = _DAT_112fa6160;
    uVar11 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar10 + lVar5) = uVar11;
    *(undefined1 *)(lVar10 + _DAT_112fa6180) = 0;
    lVar5 = _DAT_112fa6188;
    *(undefined1 *)(lVar10 + _DAT_112fa6188) = 0;
    *(undefined **)(lVar10 + _DAT_112fa6130) = puVar8;
    *(undefined ***)(lVar16 + 8) = &PTR_DAT_1106a22b0;
    func_0x000107c61604(lVar16,unaff_x20);
    puVar1 = (undefined8 *)(lVar10 + _DAT_112fa6178);
    *puVar1 = uVar19;
    *(undefined1 *)(puVar1 + 1) = uVar4;
    puVar1[2] = uVar18;
    puVar1[3] = uVar3;
    *(undefined1 *)(lVar10 + lVar5) = 0;
    *(undefined1 *)(lVar10 + _DAT_112fa6168) = (undefined1)lStack_68;
    *(undefined1 *)(lVar10 + _DAT_112fa6170) = (undefined1)lStack_68;
    func_0x000107c61174();
    func_0x00010388cd64(uVar18,uVar3);
    func_0x000107c61174();
    puVar12 = puVar8;
    FUN_10389f5f4();
    *(undefined **)(lVar10 + _DAT_112fa6190) = puVar12;
    uVar11 = 0;
    FUN_10389fa60();
    *(undefined8 *)(lVar10 + _DAT_112fa6198) = uVar11;
    plVar13 = &lStack_78;
    lStack_78 = lVar10;
    lStack_70 = lVar9;
    func_0x000107c61154(0,0,0,0,plVar13,PTR_s_initWithFrame__1125e2948);
    uVar11 = *(undefined8 *)((long)plVar13 + _DAT_112fa6190);
    plVar14 = plVar13;
    func_0x000107c61174();
    func_0x000107c53fcc(uVar11);
    func_0x000107c53e08(uVar11);
    func_0x000107c3d89c(plVar14);
    plVar15 = plVar14;
    func_0x000107c4aba4(plVar14);
    func_0x000107c61180();
    func_0x000107c562f4();
    func_0x000107c61170(plVar15);
    FUN_10389da88(uVar20,uVar17);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(puVar8);
    FUN_10381e510(uVar18,uVar3);
    func_0x000107c61170(plVar14);
    uVar18 = *(undefined8 *)(unaff_x20 + lVar6);
    *(long **)(unaff_x20 + lVar6) = plVar13;
    func_0x000107c61174(plVar14);
    func_0x000107c61170(uVar18);
    func_0x000107c61174(plVar14);
    func_0x000107c49778(unaff_x20);
    FUN_1038a0fcc();
    func_0x000107c61170(plVar14);
    func_0x000107c61604(unaff_x20 + 0x18,plVar14);
    func_0x000107c61574(unaff_x20);
    func_0x000107c61170(plVar14);
  }
  return;
}



/* Entry: 1038a3738; end: 1038a38af;  */

/* WARNING: Possible PIC construction at 0x0001038a3794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a3870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a3798) */
/* WARNING: Removing unreachable block (ram,0x0001038a3848) */
/* WARNING: Removing unreachable block (ram,0x0001038a3860) */
/* WARNING: Removing unreachable block (ram,0x0001038a3874) */

void FUN_1038a3738(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  func_0x000107c44f7c(param_2);
  func_0x000107c61180();
  func_0x0001000b637c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1038a38b0; end: 1038a3933;  */

void FUN_1038a38b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c45154(uVar1);
    func_0x000107c61180();
    func_0x000107c55260(param_2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1038a3934; end: 1038a3c8f;  */

/* WARNING: Possible PIC construction at 0x0001038a3984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a3a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a3a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038a3994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a3a2c) */
/* WARNING: Removing unreachable block (ram,0x0001038a3988) */
/* WARNING: Removing unreachable block (ram,0x0001038a3a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a3934(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = _DAT_112fa6268;
  if (param_1 == 0) {
    param_1 = 0;
    if (*(long *)(unaff_x20 + _DAT_112fa6268) != 0) {
      func_0x000107c4ff34();
      param_1 = *(long *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
  }
  else {
    func_0x000107c61174();
    lVar3 = param_1;
    func_0x000107c4a728();
    lVar2 = _DAT_112fa6268;
    if ((int)lVar3 != 0) {
      if (*(long *)(unaff_x20 + _DAT_112fa6268) == 0) {
        FUN_1038a4550();
        puVar1 = PTR_s_leftButtonTapped_112601360;
        func_0x000107c61174();
        func_0x0001038a3388(param_1,&stack0xffffffffffffffa0,puVar1);
        func_0x000100183ab8(&stack0xffffffffffffffa0);
        lVar3 = *(long *)(unaff_x20 + lVar2);
        *(long *)(unaff_x20 + lVar2) = param_1;
        func_0x000107c61174(param_1);
        param_1 = lVar3;
      }
      else {
        func_0x000107c61174();
        FUN_1038a3738();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038a3c90; end: 1038a3cb7; -[_TtC11SCARBarImpl13ARBarViewImpl leftButtonTapped] */

void FUN_1038a3c90(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001038a3b9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038a3cb8; end: 1038a3dab;  */

/* WARNING: Possible PIC construction at 0x0001038a3d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a3d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a3cb8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  int iVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_112fa6190;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fa6240);
  if (lVar2 != 0) {
    iVar4 = (int)*(undefined8 *)(lVar2 + _DAT_112fa6190);
    lVar1 = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c49c80();
    if (iVar4 == 0) {
      iVar4 = (int)*(undefined8 *)(lVar2 + lVar3);
      func_0x000107c49c20();
      if (iVar4 == 0) {
        func_0x000107c4a61c(*(undefined8 *)(lVar2 + lVar3));
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  lVar3 = unaff_x20 + _DAT_112fa6250;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar2 = lVar3;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1038a3dac; end: 1038a3dd3; -[_TtC11SCARBarImpl13ARBarViewImpl rightButtonTapped] */

void FUN_1038a3dac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038a3cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038a3dd4; end: 1038a3e2f; -[_TtC11SCARBarImpl13ARBarViewImpl initWithFrame:] */

void FUN_1038a3dd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarImpl.ARBarViewImpl",0x19,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a3e00);
  (*pcVar1)();
}



/* Entry: 1038a3e30; end: 1038a3f33; -[_TtC11SCARBarImpl13ARBarViewImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010381e524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010381e528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a3e30(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa6230));
  FUN_10388c5c0(param_1 + _DAT_112fa6250);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112fa6258),
                      ((undefined8 *)(param_1 + _DAT_112fa6258))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa6298));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa62a0 + 0x18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa62a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa62b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa6260));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa6240));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa6268));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa6270));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fa6280));
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa6290);
  lVar2 = puVar1[2];
  uVar3 = puVar1[3];
  func_0x000107c61170(*puVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2,uVar3);
    return;
  }
  return;
}



/* Entry: 1038a3f34; end: 1038a3f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038a3f34(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112fa6240) != 0) {
    return *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112fa6240) + _DAT_112fa6180);
  }
  return 0;
}



/* Entry: 1038a3f64; end: 1038a3fbf;  */

code * FUN_1038a3f64(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xaed6);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_1038a09a0();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1038a3fc0;
}



/* Entry: 1038a3fc0; end: 1038a3feb;  */

void FUN_1038a3fc0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1038a3fec; end: 1038a4007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038a3fec(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6248);
  if (*(char *)(puVar1 + 1) == '\x01') {
    *puVar1 = 0x404d000000000000;
    *(undefined1 *)(puVar1 + 1) = 0;
    return 0x404d000000000000;
  }
  return *puVar1;
}



/* Entry: 1038a4008; end: 1038a4087;  */

undefined1  [16] FUN_1038a4008(undefined8 param_1,undefined8 *param_2)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  param_2[1] = unaff_x20;
  FUN_1038a0cf8();
  *param_2 = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = 0x1038a4eb8;
  return auVar1;
}



/* Entry: 1038a4088; end: 1038a41ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a4088(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112fa6250;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038a41f0; end: 1038a424b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038a41f0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(*unaff_x20 + _DAT_112fa6258);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1038a424c; end: 1038a42ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a424c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(*unaff_x20 + _DAT_112fa6258);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 1038a42ac; end: 1038a4323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038a42ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_112fa6258;
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + _DAT_112fa6258,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = 0x1038a4ec4;
  return auVar3;
}



/* Entry: 1038a4324; end: 1038a4337;  */

void FUN_1038a4324(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c10d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*unaff_x20,PTR_s_presentOverlay__112620fd8,param_1);
  return;
}



/* Entry: 1038a4338; end: 1038a448f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a4338(long param_1)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = *(long *)(unaff_x20 + _DAT_112fa6240);
  if ((lVar5 != 0) && (-1 < param_1)) {
    uVar3 = *(ulong *)(lVar5 + _DAT_112fa6158);
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
    if (param_1 < (long)uVar4) {
      plVar1 = (long *)(lVar5 + _DAT_112fa6140);
      *plVar1 = param_1;
      *(undefined1 *)(plVar1 + 1) = 0;
      uVar6 = *(undefined8 *)(lVar5 + _DAT_112fa6190);
      func_0x000107c61174(lVar5);
      func_0x000107c5efe8(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          param_1,0);
      func_0x000107c5efd4();
      (**(code **)(lVar7 + 8))
                (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      func_0x000107c51a54(uVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1038a4490; end: 1038a44af;  */

void FUN_1038a4490(void)

{
  FUN_1038a4338();
  return;
}



/* Entry: 1038a44b0; end: 1038a4513; -[_TtC11SCARBarImpl13ARBarViewImpl presentOverlay:] */

/* WARNING: Possible PIC construction at 0x0001038a44fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a4500) */

void FUN_1038a44b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1038a0fcc();
  FUN_103894c0c(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1038a4514; end: 1038a454f; -[_TtC11SCARBarImpl13ARBarViewImpl dismissOverlay] */

void FUN_1038a4514(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038a0fcc();
  func_0x000103894cec();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038a4550; end: 1038a456f;  */

void FUN_1038a4550(void)

{
  func_0x000107c61168(&PTR_PTR_1128f8710);
  return;
}



/* Entry: 1038a4570; end: 1038a45d3;  */

ulong FUN_1038a4570(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 1038a45d4; end: 1038a47ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a45d4(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa6230) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6248);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = unaff_x20 + _DAT_112fa6250;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6258);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112fa6260;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6240) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6268) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6270) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6278) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6280) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fa6288) = 0;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar6 = puVar5;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa6290);
  *puVar1 = puVar6;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SCARBarImpl/ARBarViewImpl.swift",0x1f,2,0x85,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038a4744);
  (*pcVar3)();
}



/* Entry: 1038a4800; end: 1038a495f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a4800(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (*(char *)(unaff_x20 + _DAT_112fa62a0 + 2) == '\x01') {
    puVar1 = &UNK_1106a2438;
    func_0x000107c613fc(&UNK_1106a2438,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = 0;
    puVar2 = &UNK_1106a2460;
    func_0x000107c613fc(&UNK_1106a2460,0x11,7);
    puVar2[0x10] = *(undefined1 *)(unaff_x20 + _DAT_112fa6288);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_1106a2488;
    func_0x000107c613fc(&UNK_1106a2488,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    puVar4[0x18] = param_1 & 1;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    *(long *)(puVar4 + 0x28) = unaff_x20;
    uStack_50 = 0x1038a4c98;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1106a24a0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c6157c(puVar2);
    func_0x000107c6157c(puVar1);
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    func_0x000107c3dcc0(0x3ff0000000000000,0,puVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1038a4960; end: 1038a4963;  */

void FUN_1038a4960(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa62b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc193a0;
  func_0x000107c61520(&UNK_10dc193a0,&UNK_1106a2360);
  puRam0000000112fa62b8 = puVar1;
  return;
}



/* Entry: 1038a4964; end: 1038a49a3;  */

void FUN_1038a4964(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa62b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc193a0;
  func_0x000107c61520(&UNK_10dc193a0,&UNK_1106a2360);
  puRam0000000112fa62b8 = puVar1;
  return;
}



/* Entry: 1038a49a4; end: 1038a4c4f;  */

int FUN_1038a49a4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038a4a20;
        goto LAB_1038a4a04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038a4a04:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1038a4a20:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038a4c50; end: 1038a4c8f;  */

void FUN_1038a4c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa62e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc19558;
  func_0x000107c61520(&UNK_10dc19558,&UNK_1106a23f0);
  puRam0000000112fa62e8 = puVar1;
  return;
}



/* Entry: 1038a4c90; end: 1038a4cc3;  */

void FUN_1038a4c90(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c45154(uVar2);
    func_0x000107c61180();
    func_0x000107c55260(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1038a4cc4; end: 1038a4d6b;  */

void FUN_1038a4cc4(void)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x10) + 0x10;
  func_0x000107c61600(lVar2);
  FUN_1038a1e58(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1038a4d6c; end: 1038a4dbf;  */

void FUN_1038a4d6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fa6388 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1038a4e58(0xff,0x112fa5a00,&PTR_PTR_1126c8d10);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112fa6388 = puVar2;
  return;
}



/* Entry: 1038a4dc0; end: 1038a4ddf;  */

void FUN_1038a4dc0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *param_1;
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61600(lVar1);
  FUN_1038a3934(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1038a4de0; end: 1038a4e4f;  */

void FUN_1038a4de0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112fa6390 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fa6398;
  func_0x00010002969c(0x112fa6398,&UNK_10dc19598);
  uVar2 = uVar1;
  func_0x0001038a4cfc();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112fa6390 = puVar3;
  return;
}



/* Entry: 1038a4e50; end: 1038a4e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038a4e50(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_58 [24];
  
  lVar6 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar7 = *(ulong *)(lVar6 + 0x10);
    if (uVar7 != 0) {
      uVar9 = 0;
      do {
        if (*(ulong *)(lVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a2fa4);
          (*pcVar1)();
        }
        lVar3 = *(long *)(lVar6 + 0x20 + uVar9 * 8);
        if ((lVar3 != 0) && (func_0x000107c4a728(), (int)lVar3 != 0)) {
          lVar6 = 0;
          goto LAB_1038a2ef0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
    lVar6 = 1;
LAB_1038a2ef0:
    lVar4 = *(long *)(lVar2 + _DAT_112fa6240);
    lVar3 = lVar2;
    if (lVar4 != 0) {
      *(char *)(lVar4 + _DAT_112fa6188) = (char)lVar6;
      uVar8 = *(undefined8 *)(lVar4 + _DAT_112fa6198);
      func_0x000107c61174();
      func_0x00010389f864(lVar6);
      lVar5 = lVar6;
      FUN_1033d92b8();
      func_0x000107c6142c(lVar6);
      lVar3 = lVar5;
      func_0x000107c5fc48(lVar5,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(lVar5);
      func_0x000107c535a0(uVar8);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1038a4e58; end: 1038a4e97;  */

void FUN_1038a4e58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1038a4e98; end: 1038a4ecb;  */

undefined1 FUN_1038a4e98(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1038a4ecc; end: 1038a4f37;  */

void FUN_1038a4ecc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  return;
}



/* Entry: 1038a4f38; end: 1038a53ef;  */

uint FUN_1038a4f38(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a518c);
          (*pcVar1)();
        }
        FUN_1038a5d68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a512c);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a5130);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a5134);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_1038a5054;
LAB_1038a5024:
              func_0x0001002ec9a0(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              func_0x0001002ec9a0(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_1038a5024;
LAB_1038a5054:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a5138);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_1038a5164;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_1038a5164:
  return uVar8 & 1;
}



/* Entry: 1038a53f0; end: 1038a5437;  */

uint FUN_1038a53f0(ulong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  
  uVar14 = *param_1;
  uVar8 = param_1[1];
  uVar11 = param_2[1];
  FUN_1038a4f38(uVar14,*param_2);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  if (uVar8 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar8 & 0xffffffffffffff8;
    if ((uVar8 & 0x8000000000000000) != 0) {
      uVar14 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar11 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar11 & 0xffffffffffffff8;
    if ((uVar11 & 0x8000000000000000) != 0) {
      uVar2 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar14 == uVar2) {
    if (uVar14 != 0) {
      uVar9 = uVar8 & 0xffffffffffffff8;
      uVar2 = uVar9;
      if ((uVar8 & 0x8000000000000000) != 0) {
        uVar2 = uVar8;
      }
      uVar4 = uVar9 + 0x20;
      if (uVar8 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      uVar10 = uVar11 & 0xffffffffffffff8;
      uVar2 = uVar10;
      if ((uVar11 & 0x8000000000000000) != 0) {
        uVar2 = uVar11;
      }
      uVar5 = uVar10 + 0x20;
      if (uVar11 >> 0x3e != 0) {
        uVar5 = uVar2;
      }
      if (uVar4 != uVar5) {
        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a53f0);
          (*pcVar1)();
        }
        uVar3 = 0;
        func_0x000100ef8bfc(0);
        if (((uVar11 | uVar8) & 0xc000000000000001) == 0) {
          lVar17 = *(long *)(uVar9 + 0x10);
          lVar18 = *(long *)(uVar10 + 0x10);
          uVar7 = uVar3;
          puVar15 = (ulong *)(uVar8 + 0x20);
          puVar16 = (undefined8 *)(uVar11 + 0x20);
          do {
            uVar14 = uVar14 - 1;
            if (lVar17 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a5390);
              (*pcVar1)();
            }
            if (lVar18 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a5394);
              (*pcVar1)();
            }
            uVar11 = *puVar15;
            uVar12 = *puVar16;
            FUN_1038a5d24();
            func_0x000107c61174();
            func_0x000107c61174(uVar12);
            uVar8 = uVar11;
            func_0x000107c5f0a0(uVar11,uVar12,uVar3,uVar7);
            uVar13 = (uint)uVar8;
            func_0x000107c61170(uVar11);
            func_0x000107c61170();
            if ((uVar8 & 1) == 0) break;
            lVar18 = lVar18 + -1;
            lVar17 = lVar17 + -1;
            uVar7 = uVar12;
            puVar15 = puVar15 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar14 != 0);
        }
        else {
          lVar17 = 4;
          do {
            uVar14 = uVar14 - 1;
            uVar2 = lVar17 - 4;
            if ((uVar8 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar9 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a5398);
                (*pcVar1)();
              }
              uVar4 = *(ulong *)(uVar8 + lVar17 * 8);
              func_0x000107c61174();
              if ((uVar11 & 0xc000000000000001) == 0) goto LAB_1038a5298;
LAB_1038a5268:
              FUN_1033d9ecc(uVar2,uVar11);
            }
            else {
              uVar4 = uVar2;
              FUN_1033d9ecc(uVar2,uVar8);
              if ((uVar11 & 0xc000000000000001) != 0) goto LAB_1038a5268;
LAB_1038a5298:
              if (*(long *)(uVar10 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1038a539c);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(uVar11 + lVar17 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar5 = uVar2;
            FUN_1038a5d24();
            uVar6 = uVar4;
            func_0x000107c5f0a0(uVar4,uVar2,uVar3,uVar5);
            uVar13 = (uint)uVar6;
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar2);
          } while (((uVar6 & 1) != 0) && (lVar17 = lVar17 + 1, uVar14 != 0));
        }
        goto LAB_1038a53c8;
      }
    }
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
LAB_1038a53c8:
  return uVar13 & 1;
}



/* Entry: 1038a5438; end: 1038a544b;  */

bool FUN_1038a5438(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038a544c; end: 1038a54f7;  */

void FUN_1038a544c(void)

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



/* Entry: 1038a54f8; end: 1038a5553;  */

void FUN_1038a54f8(long param_1)

{
  if (param_1 != 0) {
    return;
  }
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  return;
}



/* Entry: 1038a5554; end: 1038a55af;  */

void FUN_1038a5554(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5af88(puVar1);
    func_0x000107c61180();
  }
  return;
}



/* Entry: 1038a55b0; end: 1038a55cf;  */

undefined8 FUN_1038a55b0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar9 = *param_1;
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar8 = *param_2;
  lVar2 = param_2[2];
  uVar4 = param_2[3];
  cVar5 = *(char *)(param_2 + 1);
  uVar7 = param_1[1];
  uVar6 = 0;
  FUN_1038a5d68(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(uVar9,uVar8,uVar6);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if ((char)uVar7 == cVar5) {
    if (uVar1 == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) {
      func_0x00010388cd64(lVar2,uVar4);
      func_0x00010388cd64(uVar1,uVar3);
      uVar7 = uVar1;
      FUN_1038a4f38(uVar1,lVar2);
      if ((uVar7 & 1) == 0) {
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(lVar2);
        FUN_10381e510(uVar1,uVar3);
      }
      else {
        uVar7 = uVar3;
        func_0x0001038a518c(uVar3,uVar4);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(lVar2);
        FUN_10381e510(uVar1,uVar3);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 1038a55d0; end: 1038a56f3;  */

undefined8
FUN_1038a55d0(ulong param_1,char param_2,ulong param_3,ulong param_4,undefined8 param_5,char param_6
             ,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  FUN_1038a5d68(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(param_1,param_5,uVar1);
  if ((param_1 & 1) == 0) {
    return 0;
  }
  if (param_2 == param_6) {
    if (param_3 == 0) {
      if (param_7 == 0) {
        return 1;
      }
    }
    else if (param_7 != 0) {
      func_0x00010388cd64(param_7,param_8);
      func_0x00010388cd64(param_3,param_4);
      uVar2 = param_3;
      FUN_1038a4f38(param_3,param_7);
      if ((uVar2 & 1) == 0) {
        func_0x000107c6142c(param_8);
        func_0x000107c6142c(param_7);
        FUN_10381e510(param_3,param_4);
      }
      else {
        uVar2 = param_4;
        func_0x0001038a518c(param_4,param_8);
        func_0x000107c6142c(param_8);
        func_0x000107c6142c(param_7);
        FUN_10381e510(param_3,param_4);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 1038a56f4; end: 1038a56f7;  */

void FUN_1038a56f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa63a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc195c8;
  func_0x000107c61520(&UNK_10dc195c8,&UNK_1106a2778);
  puRam0000000112fa63a0 = puVar1;
  return;
}



/* Entry: 1038a56f8; end: 1038a5737;  */

void FUN_1038a56f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa63a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc195c8;
  func_0x000107c61520(&UNK_10dc195c8,&UNK_1106a2778);
  puRam0000000112fa63a0 = puVar1;
  return;
}



/* Entry: 1038a5738; end: 1038a5747;  */

undefined1  [16] FUN_1038a5738(void)

{
  return ZEXT816(0x1106a25d8);
}



/* Entry: 1038a5748; end: 1038a57b3;  */

long FUN_1038a5748(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038a57b4; end: 1038a5823;  */

undefined8 * FUN_1038a57b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar2 = param_2[2];
  func_0x000107c61174();
  if (lVar2 == 0) {
    lVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[2] = lVar2;
    param_1[3] = uVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar1);
  }
  return param_1;
}



/* Entry: 1038a5824; end: 1038a58eb;  */

undefined8 * FUN_1038a5824(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  plVar3 = param_1 + 2;
  lVar4 = *plVar3;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar1 = param_2[2];
  if (lVar4 == 0) {
    if (lVar1 != 0) {
      param_1[2] = lVar1;
      uVar2 = param_2[3];
      param_1[3] = uVar2;
      func_0x000107c61434();
      func_0x000107c61434(uVar2);
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      param_1[2] = lVar1;
      func_0x000107c61434();
      func_0x000107c6142c(lVar4);
      uVar2 = param_1[3];
      param_1[3] = param_2[3];
      func_0x000107c61434();
      func_0x000107c6142c(uVar2);
      return param_1;
    }
    FUN_1038a58ec(plVar3);
  }
  lVar1 = param_2[2];
  param_1[3] = param_2[3];
  *plVar3 = lVar1;
  return param_1;
}



/* Entry: 1038a58ec; end: 1038a591b;  */

undefined8 * FUN_1038a58ec(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  return param_1;
}



/* Entry: 1038a591c; end: 1038a599f;  */

undefined8 * FUN_1038a591c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  plVar2 = param_1 + 2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (*plVar2 != 0) {
    if (param_2[2] != 0) {
      param_1[2] = param_2[2];
      func_0x000107c6142c();
      uVar1 = param_1[3];
      param_1[3] = param_2[3];
      func_0x000107c6142c(uVar1);
      return param_1;
    }
    FUN_1038a58ec(plVar2);
  }
  lVar3 = param_2[2];
  param_1[3] = param_2[3];
  *plVar2 = lVar3;
  return param_1;
}



/* Entry: 1038a59a0; end: 1038a5a37;  */

int FUN_1038a59a0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1038a5a38; end: 1038a5a93;  */

/* WARNING: Possible PIC construction at 0x0001038a5a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038a5a50) */

void FUN_1038a5a38(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1038a5a94; end: 1038a5aef;  */

undefined8 * FUN_1038a5a94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038a5af0; end: 1038a5b2b;  */

undefined8 * FUN_1038a5af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1038a5b2c; end: 1038a5d23;  */

int FUN_1038a5b2c(ulong *param_1,int param_2)

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



/* Entry: 1038a5d24; end: 1038a5d67;  */

void FUN_1038a5d24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fa63a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100ef8bfc(0xff);
  puVar2 = &UNK_10dc18c1c;
  func_0x000107c61520(&UNK_10dc18c1c,uVar1);
  puRam0000000112fa63a8 = puVar2;
  return;
}



/* Entry: 1038a5d68; end: 1038a5da7;  */

void FUN_1038a5d68(undefined8 param_1,long *param_2,long *param_3)

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


