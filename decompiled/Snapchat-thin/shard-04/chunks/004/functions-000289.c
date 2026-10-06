/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034752ac; end: 10347535b; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:willSelectLens:index:originalLensIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034752ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000104507528(0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  func_0x000104505980(param_4,param_5,param_6);
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10347535c; end: 103475383; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:didSelectLens:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_10347535c(void)

{
  FUN_103475384();
  return;
}



/* Entry: 103475384; end: 103475457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  
  func_0x000104507528(0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  (*param_9)(param_4,param_5,param_6,param_7,param_8);
  uStack_68 = uVar1;
  func_0x0001002a64a8(&uStack_68);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 103475458; end: 103475503; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:didUpdateLensesList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000104507528(0);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  func_0x000104505a40();
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_4);
  return;
}



/* Entry: 103475504; end: 10347579f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475504(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_78;
  undefined *puStack_68;
  
  uVar10 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar11 = *(ulong *)(uVar10 + 0x10);
  }
  else {
    uVar11 = uVar10;
    if (0x7fffffffffffffff < param_2) {
      uVar11 = param_2;
    }
    func_0x000107c60480();
  }
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10347570c);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(param_2 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar12;
          func_0x00010346fa24(uVar12,param_2);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103475708);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(uVar3 + _DAT_113038e80);
        func_0x000107c5fadc(uVar5,((undefined8 *)(uVar3 + _DAT_113038e80))[1]);
        lVar4 = param_1;
        func_0x000107c4b180();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (lVar4 != 0) break;
        func_0x000107c61170(uVar3);
LAB_103475574:
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar11) goto LAB_10347572c;
      }
      uVar8 = *(undefined8 *)(uVar3 + _DAT_113038e88);
      uVar9 = *(undefined8 *)(uVar3 + _DAT_113038e90);
      uVar5 = 0;
      func_0x00010450489c(0);
      func_0x000107c610f8();
      func_0x000104504494(lVar4,uVar8,uVar9,uVar5);
      func_0x000107c61170(uVar3);
      if (lVar4 == 0) goto LAB_103475574;
      puVar7 = puStack_78;
      func_0x000107c61550();
      if ((((int)puVar7 == 0) || ((long)puStack_78 < 0)) ||
         (puVar7 = puStack_78, ((ulong)puStack_78 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_78 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puStack_78 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puStack_78 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_78) {
            puVar6 = puStack_78;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        FUN_103475b80(0,puVar6 + 1,1,puStack_78);
      }
      uVar3 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar3 + 0x10);
      puStack_78 = puVar7;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar12) {
        puStack_78 = (undefined *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_103475b80(puStack_78,uVar12 + 1,1,puVar7);
        uVar3 = (ulong)puStack_78 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar12 + 1;
      *(long *)(uVar3 + uVar12 * 8 + 0x20) = lVar4;
      uVar12 = uVar1;
    } while (uVar1 != uVar11);
  }
LAB_10347572c:
  func_0x000104507528(0);
  puVar7 = puStack_78;
  func_0x000104505a8c(puStack_78,param_3,param_4);
  func_0x000107c6142c(puStack_78);
  puStack_68 = puVar7;
  func_0x0001002a64a8(&puStack_68);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1034757a0; end: 103475833; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:didUpdateVisibleLenses:selectedLensIndex:originalLensIndex:] */

void FUN_1034757a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103f98c30(0);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_103475504(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 103475834; end: 10347583f; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:willDisplayLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000104507528(0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  (*(code *)&UNK_104505af0)();
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 103475840; end: 10347584b; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:didUpdateDisplayedLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000104507528(0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  (*(code *)&UNK_104505b2c)();
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10347584c; end: 103475857; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:didEndDisplayingLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347584c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000104507528(0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  (*(code *)&UNK_104505b68)();
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 103475858; end: 1034758fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x000104507528(0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  (*param_5)();
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1034758fc; end: 103475947; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController canShowLensCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1034758fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f70108);
}



/* Entry: 103475948; end: 1034759df;  */

undefined8 FUN_103475948(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f70148;
  func_0x0001000285a8(0x112f70148,&UNK_10dbcc878);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1034759e0; end: 103475a53;  */

undefined8 * FUN_1034759e0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103475a54; end: 103475b23;  */

undefined8 FUN_103475a54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f70148;
  func_0x0001000285a8(0x112f70148,&UNK_10dbcc878);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103475b24; end: 103475b7f;  */

void FUN_103475b24(void)

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
    func_0x00010450489c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f70150;
  plVar5 = (long *)&UNK_10dbcc880;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103475b80; end: 103475d9f;  */

ulong FUN_103475b80(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103475ca8);
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
  func_0x000103475aa4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103475ca4);
      (*pcVar1)();
    }
    func_0x000103475ca8(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103475da0; end: 103475daf;  */

void FUN_103475da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x000103f99b5c(0);
  func_0x000103f99828(param_1,param_2,uVar1);
  uVar1 = *puVar2;
  *puVar2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103475db0; end: 103475e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475db0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f70160) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103475e48; end: 103475ea7; -[_TtC25SCLensCarouselIntegration37LensCarouselViewModelCreatingServices init] */

void FUN_103475e48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselViewModelCreatingServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103475e74);
  (*pcVar1)();
}



/* Entry: 103475ea8; end: 103475eb7; -[_TtC25SCLensCarouselIntegration37LensCarouselViewModelCreatingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70160));
  return;
}



/* Entry: 103475eb8; end: 103475ed7;  */

void FUN_103475eb8(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc988);
  return;
}



/* Entry: 103475ed8; end: 103475f2f;  */

void FUN_103475ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103475f30; end: 103475f43;  */

void FUN_103475f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103475f44; end: 103476107;  */

void FUN_103475f44(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong auStack_78 [2];
  undefined1 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar9;
  func_0x000107c6157c();
  FUN_103476108();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = 0;
  FUN_103476c20();
  lVar5 = lVar4;
  func_0x000107c613fc();
  uVar6 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  uVar7 = uVar10;
  func_0x000107c615f0();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  func_0x000107c613fc(uVar6,0x20,7);
  func_0x0001005f60d4();
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  auStack_78[0] = 0;
  auStack_78[1] = 0;
  uStack_68 = 0xfe;
  func_0x0001000285a8(0x112f6ea70,&UNK_10dbcc930);
  func_0x000107c613fc();
  puVar8 = auStack_78;
  func_0x00010042e6a0();
  *(ulong **)(lVar5 + 0x48) = puVar8;
  auStack_78[0] = 0;
  func_0x0001000285a8(0x112f6ea78,&UNK_10dbcbb30);
  func_0x000107c613fc();
  puVar8 = auStack_78;
  func_0x00010042e6a0();
  *(ulong **)(lVar5 + 0x50) = puVar8;
  auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  puVar8 = auStack_78;
  func_0x00010042e6a0();
  *(ulong **)(lVar5 + 0x58) = puVar8;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  func_0x000107c61614(lVar5 + 0x60,0);
  *(undefined8 *)(lVar5 + 0x68) = param_3;
  func_0x000107c61604(lVar5 + 0x60,param_2);
  *(undefined8 *)(lVar5 + 0x10) = uVar9;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *(undefined8 *)(lVar5 + 0x30) = uVar10;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_11065a470;
  param_1[5] = (long)&PTR_DAT_11065a438;
  *param_1 = lVar5;
  return;
}



/* Entry: 103476108; end: 1034761d3;  */

void FUN_103476108(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lStack_38;
  
  if ((*(long *)(unaff_x20 + 0x18) != 0) && (func_0x0001000d224c(&lStack_38), lStack_38 != 0)) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar1 = lStack_38;
    func_0x000107c4b188(lStack_38);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    func_0x0001000bfde0(FUN_1034761d4,0,PTR___sSbN_11034dd40);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61574(lVar2);
    return;
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  func_0x000104886440();
  return;
}



/* Entry: 1034761d4; end: 1034761fb;  */

void FUN_1034761d4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1034761fc; end: 10347623f;  */

void FUN_1034761fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103476240; end: 10347625f;  */

void FUN_103476240(void)

{
  FUN_103475f44();
  return;
}



/* Entry: 103476260; end: 10347627f;  */

void FUN_103476260(void)

{
  func_0x000107c61168(&PTR_PTR_112f701d0);
  return;
}



/* Entry: 103476280; end: 10347657f;  */

void FUN_103476280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  if (((uint)param_3 & 0xff) == 1) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c6157c(uVar3);
    func_0x000100c82230();
    func_0x000107c61574(uVar3);
  }
  else {
    func_0x000103476350();
  }
  lVar1 = unaff_x20 + 0x60;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x68);
    lVar2 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar4 + 0x38))(param_1,param_2,param_3,param_4,param_5,lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 103476580; end: 1034765fb;  */

void FUN_103476580(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_2);
    uStack_49 = uVar1;
    func_0x0001007d6d78(&uStack_49);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1034765fc; end: 10347673f;  */

void FUN_1034765fc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  ulong uStack_68;
  byte bStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  bVar1 = *(byte *)(param_1 + 2);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (bVar1 >> 6 == 0) {
      bStack_60 = bVar1 & 1;
      uStack_70 = uVar3;
      uStack_68 = uVar2;
      func_0x000107c61174(uVar2);
      func_0x000107c61434(uVar3);
      func_0x0001007d6d78(&uStack_70);
      func_0x000107c61574(param_2);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar3);
    }
    else {
      if (bVar1 >> 6 == 1) {
        uStack_68 = uVar2 & 1;
        bStack_60 = 0x40;
        uStack_70 = uVar3;
        func_0x000107c61174(uVar3);
        func_0x0001007d6d78(&uStack_70);
        FUN_103476c58(uVar3,uVar2,bVar1);
      }
      else if (uVar2 != 0) {
        func_0x000104501ac4(0);
        func_0x000104500e64(uVar3,uVar2);
        uStack_70 = uVar3;
        func_0x0001007d6d78(&uStack_70);
        func_0x000107c61574(param_2);
        func_0x000107c61170(uVar3);
        return;
      }
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 103476740; end: 1034767d3;  */

void FUN_103476740(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(param_2);
    uStack_50 = 0x80;
    uStack_60 = uVar1;
    uStack_58 = uVar2;
    func_0x000107c61434(uVar2);
    func_0x0001007d6d78(&uStack_60);
    func_0x000107c6142c(uVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 1034767d4; end: 10347683f;  */

void FUN_1034767d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_103476840(unaff_x20 + 0x60);
  return;
}



/* Entry: 103476840; end: 103476863;  */

undefined8 FUN_103476840(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103476864; end: 103476883;  */

void FUN_103476864(void)

{
  FUN_1034767d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103476884; end: 1034768cf;  */

void FUN_103476884(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x58));
  return;
}



/* Entry: 1034768d0; end: 103476963;  */

/* WARNING: Possible PIC construction at 0x000103473870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103473874) */

void FUN_1034768d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  bVar1 = *(char *)(param_1 + 0x30) != '\x01';
  if (bVar1) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = *(ulong *)(*unaff_x20 + 0x30);
    func_0x000107c5ac48(uVar2);
    uVar3 = 0;
    uVar2 = uVar2 & 0xffffffff;
  }
  bVar1 = !bVar1;
  FUN_103476280(uVar2,uVar3,bVar1,param_2,param_3);
  if (bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2,uVar3);
  return;
}



/* Entry: 103476964; end: 103476ad7;  */

void FUN_103476964(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107c61174();
  func_0x0001007d6d78(&uStack_28);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103476ad8; end: 103476bb7;  */

undefined8 FUN_103476ad8(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 0x18))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 103476bb8; end: 103476c1f;  */

void FUN_103476bb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar1 = lVar2 + 0x60;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 0x68);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x48))(param_1,param_2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 103476c20; end: 103476c3f;  */

void FUN_103476c20(void)

{
  func_0x000107c61168(&PTR_PTR_112f70298);
  return;
}



/* Entry: 103476c40; end: 103476c57;  */

void FUN_103476c40(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x58);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar2);
    uStack_49 = uVar1;
    func_0x0001007d6d78(&uStack_49);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 103476c58; end: 103476c9f;  */

/* WARNING: Possible PIC construction at 0x000103476c78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103476c7c) */

void FUN_103476c58(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    param_1 = param_2;
    if (uVar1 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 103476ca0; end: 103476caf;  */

undefined8 FUN_103476ca0(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 0x18))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 103476cb0; end: 103476d0f; -[_TtC25SCLensCarouselIntegration33LensCarouselFeatureScopeActivator init] */

void FUN_103476cb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselFeatureScopeActivator",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103476cdc);
  (*pcVar1)();
}



/* Entry: 103476d10; end: 103476d57; -[_TtC25SCLensCarouselIntegration33LensCarouselFeatureScopeActivator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103476d10(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f70348));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f70350));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f70358));
  return;
}



/* Entry: 103476d58; end: 103476d77;  */

void FUN_103476d58(void)

{
  func_0x000107c61168(&PTR_PTR_1128dca48);
  return;
}



/* Entry: 103476d78; end: 103476edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103476d78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\x01') {
    if (param_1[2] != 0) {
      func_0x000107c5e344(param_1[2]);
    }
  }
  else if (param_1[5] != 0) {
    func_0x000107c5e318();
  }
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  puVar2 = &UNK_11065a580;
  func_0x000107c613fc(&UNK_11065a580,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11065a5d0;
  func_0x000107c613fc(&UNK_11065a5d0,0x59,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar3 + 0x30) = param_1[1];
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  *(undefined8 *)(puVar3 + 0x40) = uVar7;
  *(undefined8 *)(puVar3 + 0x38) = uVar6;
  uVar5 = param_1[4];
  *(undefined8 *)(puVar3 + 0x50) = param_1[5];
  *(undefined8 *)(puVar3 + 0x48) = uVar5;
  puVar3[0x58] = *(undefined1 *)(param_1 + 6);
  pcVar4 = *(code **)(lStack_68 + 0x10);
  func_0x000107c6157c(puVar2);
  func_0x000101237340(param_2,param_3);
  FUN_103478740(param_1,auStack_c0);
  (*pcVar4)(cVar1 == '\0',FUN_103478730,puVar3,uStack_70,lStack_68);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 103476edc; end: 103476f97;  */

void FUN_103476edc(uint param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)(0);
    }
  }
  else {
    FUN_103476f98(param_5);
    if ((((param_1 & 1) == 0) && (*(char *)(param_5 + 0x30) != '\x01')) &&
       (*(long *)(param_5 + 0x28) != 0)) {
      func_0x000107c41b9c();
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(param_1 & 1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103476f98; end: 103477107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103476f98(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [24];
  long alStack_98 [3];
  long *plStack_80;
  long alStack_78 [3];
  undefined8 in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  if (*(char *)(param_1 + 6) != '\x01') {
    uVar7 = param_1[1];
    lVar8 = param_1[3];
    func_0x000107c61434(uVar7);
    lVar6 = lVar8;
    func_0x000107c61174(lVar8);
    func_0x000107c6142c(uVar7);
    if (lVar8 != 0) {
      func_0x0001000d224c(alStack_78);
      func_0x0001000a8868(alStack_78,in_stack_ffffffffffffffa0);
      puVar4 = &UNK_11065a580;
      func_0x000107c613fc(&UNK_11065a580,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar3 = &UNK_11065a5f8;
      func_0x000107c613fc(&UNK_11065a5f8,0x49,7);
      *(undefined **)(puVar3 + 0x10) = puVar4;
      uVar7 = *param_1;
      uVar10 = param_1[3];
      uVar9 = param_1[2];
      *(undefined8 *)(puVar3 + 0x20) = param_1[1];
      *(undefined8 *)(puVar3 + 0x18) = uVar7;
      *(undefined8 *)(puVar3 + 0x30) = uVar10;
      *(undefined8 *)(puVar3 + 0x28) = uVar9;
      uVar7 = param_1[4];
      *(undefined8 *)(puVar3 + 0x40) = param_1[5];
      *(undefined8 *)(puVar3 + 0x38) = uVar7;
      puVar3[0x48] = *(undefined1 *)(param_1 + 6);
      pcVar11 = *(code **)(in_stack_ffffffffffffffa8 + 0x20);
      FUN_103478740(param_1,auStack_b0);
      func_0x000107c6157c(puVar4);
      (*pcVar11)(lVar6,FUN_10347877c,puVar3,in_stack_ffffffffffffffa0,in_stack_ffffffffffffffa8);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar6);
      func_0x0001000834e4(alStack_78);
      return;
    }
  }
  cVar2 = *(char *)(param_1 + 6);
  if ((cVar2 == '\0') == (bool)*(char *)(unaff_x20 + _DAT_112f703b8)) {
    return;
  }
  *(bool *)(unaff_x20 + _DAT_112f703b8) = cVar2 == '\0';
  if (cVar2 != '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112f703c0) = 1;
  }
  func_0x0001000d224c(alStack_98);
  lVar6 = _DAT_112f703d8;
  if (alStack_98[0] == 0) {
    return;
  }
  if (cVar2 != '\x01') {
    lVar8 = *(long *)(unaff_x20 + _DAT_112f703d8);
    if (lVar8 == 0) {
      lVar8 = unaff_x20 + _DAT_112f703b0;
      uVar7 = *(undefined8 *)(lVar8 + 0x18);
      lVar1 = *(long *)(lVar8 + 0x20);
      func_0x0001000a8868(lVar8,uVar7);
      (**(code **)(lVar1 + 8))(alStack_98,uVar7,lVar1);
      func_0x0001000a8868(alStack_98,plStack_80);
      plVar5 = plStack_80;
      (**(code **)(alStack_78[0] + 8))(plStack_80,alStack_78[0]);
      puVar4 = &UNK_11065a580;
      func_0x000107c613fc(&UNK_11065a580,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,unaff_x20);
      uVar7 = 0x103478788;
      puVar3 = puVar4;
      (**(code **)(*plVar5 + 0x60))(0x103478788);
      func_0x000107c61574(plVar5);
      func_0x000107c61574(puVar4);
      func_0x0001000834e4(alStack_98);
      uVar9 = uVar7;
      func_0x000107c614f0(uVar7);
      (**(code **)(puVar3 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f703c8),uVar9,puVar3);
      func_0x000107c615e8(uVar7);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f703d0);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f703a8);
      lVar8 = 0;
      func_0x00010347d690();
      func_0x000107c613fc();
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar9);
      uVar7 = uVar10;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(undefined8 *)(lVar8 + 0x18) = uVar10;
      *(undefined8 *)(lVar8 + 0x20) = uVar7;
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
      uVar7 = *(undefined8 *)(unaff_x20 + lVar6);
      *(long *)(unaff_x20 + lVar6) = lVar8;
      func_0x000107c61574(uVar7);
      lVar8 = *(long *)(unaff_x20 + lVar6);
      if (lVar8 == 0) goto LAB_1034773f8;
    }
    plVar5 = *(long **)(lVar8 + 0x10);
    puVar4 = &UNK_11065a620;
    func_0x000107c613fc(&UNK_11065a620,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar8);
    pcVar11 = *(code **)(*plVar5 + 0x60);
    func_0x000107c6157c(lVar8);
    uVar7 = 0x103478790;
    puVar3 = puVar4;
    (*pcVar11)(0x103478790);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(uVar7);
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    pcVar11 = *(code **)(puVar3 + 0x10);
    func_0x000107c6157c(uVar9);
    (*pcVar11)();
    func_0x000107c61574(lVar8);
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar9);
  }
LAB_1034773f8:
  lVar6 = unaff_x20 + _DAT_112f703b0;
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  lVar8 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar7);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f70388);
  puVar4 = &UNK_11065a648;
  func_0x000107c613fc(&UNK_11065a648,0x58,7);
  uVar10 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  *(undefined8 *)(puVar4 + 0x18) = param_1[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  uVar10 = param_1[4];
  *(undefined8 *)(puVar4 + 0x38) = param_1[5];
  *(undefined8 *)(puVar4 + 0x30) = uVar10;
  puVar4[0x40] = *(undefined1 *)(param_1 + 6);
  *(long *)(puVar4 + 0x48) = alStack_98[0];
  *(undefined8 *)(puVar4 + 0x50) = uVar9;
  pcVar11 = *(code **)(lVar8 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c615f0(alStack_98[0]);
  FUN_103478740(param_1,alStack_98);
  (*pcVar11)(param_1,0x103478798,puVar4,uVar7,lVar8);
  func_0x000107c61574(puVar4);
  if ((*(char *)(param_1 + 6) == '\x01') &&
     (lVar6 = *(long *)(unaff_x20 + _DAT_112f703d8), lVar6 != 0)) {
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    lVar8 = lVar6;
    func_0x000107c6157c();
    func_0x0001000c6580();
    func_0x000107c615e8(alStack_98[0]);
    uVar7 = *(undefined8 *)(lVar6 + 0x20);
    *(long *)(lVar6 + 0x20) = lVar8;
    func_0x000107c61574(lVar6);
    func_0x000107c61574(uVar7);
    return;
  }
  func_0x000107c615e8(alStack_98[0]);
  return;
}



/* Entry: 103477108; end: 103477163;  */

void FUN_103477108(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103477164(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103477164; end: 103477523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103477164(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long alStack_98 [3];
  long *plStack_80;
  long lStack_78;
  
  cVar2 = *(char *)(param_1 + 6);
  if ((cVar2 == '\0') == (bool)*(char *)(unaff_x20 + _DAT_112f703b8)) {
    return;
  }
  *(bool *)(unaff_x20 + _DAT_112f703b8) = cVar2 == '\0';
  if (cVar2 != '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112f703c0) = 1;
  }
  func_0x0001000d224c(alStack_98);
  lVar7 = _DAT_112f703d8;
  if (alStack_98[0] == 0) {
    return;
  }
  if (cVar2 != '\x01') {
    lVar8 = *(long *)(unaff_x20 + _DAT_112f703d8);
    if (lVar8 == 0) {
      lVar8 = unaff_x20 + _DAT_112f703b0;
      uVar4 = *(undefined8 *)(lVar8 + 0x18);
      lVar1 = *(long *)(lVar8 + 0x20);
      func_0x0001000a8868(lVar8,uVar4);
      (**(code **)(lVar1 + 8))(alStack_98,uVar4,lVar1);
      func_0x0001000a8868(alStack_98,plStack_80);
      plVar6 = plStack_80;
      (**(code **)(lStack_78 + 8))(plStack_80,lStack_78);
      puVar3 = &UNK_11065a580;
      func_0x000107c613fc(&UNK_11065a580,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      uVar4 = 0x103478788;
      puVar5 = puVar3;
      (**(code **)(*plVar6 + 0x60))(0x103478788);
      func_0x000107c61574(plVar6);
      func_0x000107c61574(puVar3);
      func_0x0001000834e4(alStack_98);
      uVar9 = uVar4;
      func_0x000107c614f0(uVar4);
      (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f703c8),uVar9,puVar5);
      func_0x000107c615e8(uVar4);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f703d0);
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f703a8);
      lVar8 = 0;
      func_0x00010347d690();
      func_0x000107c613fc();
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c6157c(uVar9);
      uVar4 = uVar10;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(undefined8 *)(lVar8 + 0x18) = uVar10;
      *(undefined8 *)(lVar8 + 0x20) = uVar4;
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
      uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
      *(long *)(unaff_x20 + lVar7) = lVar8;
      func_0x000107c61574(uVar4);
      lVar8 = *(long *)(unaff_x20 + lVar7);
      if (lVar8 == 0) goto LAB_1034773f8;
    }
    plVar6 = *(long **)(lVar8 + 0x10);
    puVar3 = &UNK_11065a620;
    func_0x000107c613fc(&UNK_11065a620,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,lVar8);
    pcVar11 = *(code **)(*plVar6 + 0x60);
    func_0x000107c6157c(lVar8);
    uVar4 = 0x103478790;
    puVar5 = puVar3;
    (*pcVar11)(0x103478790);
    func_0x000107c61574(puVar3);
    func_0x000107c614f0(uVar4);
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    pcVar11 = *(code **)(puVar5 + 0x10);
    func_0x000107c6157c(uVar9);
    (*pcVar11)();
    func_0x000107c61574(lVar8);
    func_0x000107c615e8(uVar4);
    func_0x000107c61574(uVar9);
  }
LAB_1034773f8:
  lVar7 = unaff_x20 + _DAT_112f703b0;
  uVar4 = *(undefined8 *)(lVar7 + 0x18);
  lVar8 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,uVar4);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f70388);
  puVar3 = &UNK_11065a648;
  func_0x000107c613fc(&UNK_11065a648,0x58,7);
  uVar10 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  *(undefined8 *)(puVar3 + 0x18) = param_1[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x28) = uVar13;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  uVar10 = param_1[4];
  *(undefined8 *)(puVar3 + 0x38) = param_1[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar10;
  puVar3[0x40] = *(undefined1 *)(param_1 + 6);
  *(long *)(puVar3 + 0x48) = alStack_98[0];
  *(undefined8 *)(puVar3 + 0x50) = uVar9;
  pcVar11 = *(code **)(lVar8 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c615f0(alStack_98[0]);
  FUN_103478740(param_1,alStack_98);
  (*pcVar11)(param_1,0x103478798,puVar3,uVar4,lVar8);
  func_0x000107c61574(puVar3);
  if ((*(char *)(param_1 + 6) == '\x01') &&
     (lVar7 = *(long *)(unaff_x20 + _DAT_112f703d8), lVar7 != 0)) {
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    lVar8 = lVar7;
    func_0x000107c6157c();
    func_0x0001000c6580();
    func_0x000107c615e8(alStack_98[0]);
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    *(long *)(lVar7 + 0x20) = lVar8;
    func_0x000107c61574(lVar7);
    func_0x000107c61574(uVar4);
    return;
  }
  func_0x000107c615e8(alStack_98[0]);
  return;
}



/* Entry: 103477524; end: 10347767b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103477524(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long alStack_60 [2];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_2 + _DAT_112f703a0) != 0) {
      func_0x0001000d224c(alStack_60);
      if (alStack_60[0] != 0) {
        func_0x000107c4f2d8(alStack_60[0]);
        func_0x000107c615e8(alStack_60[0]);
      }
    }
    lStack_50 = param_2;
    func_0x000104505ba4(FUN_103477750,0,0x103477754,0,0x103477758,0,0x10347775c,0,0x1034787a4,
                        alStack_60,FUN_103477828,0,0x10347782c,0,0x103477830,0,0x103477834,0,
                        0x103477838,0,0x10347783c,0,0x103477840,0);
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f703d0);
    alStack_60[0] = lVar2;
    func_0x000107c6157c(uVar1);
    func_0x0001002a64a8(alStack_60);
    func_0x000107c61574(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10347767c; end: 10347774f;  */

void FUN_10347767c(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  cVar2 = *(char *)(param_1 + 0x30);
  if (cVar2 == '\x01') {
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c41ad8();
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x000107c61434(uVar4);
    func_0x000107c61174(uVar3);
    func_0x000107c6142c(uVar4);
    func_0x000107c5d4e0(param_2);
    func_0x000107c61170(uVar3);
    if (lVar1 != 0) {
      func_0x000107c419b4(lVar1);
    }
  }
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x18))(cVar2 == '\0',uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 103477750; end: 10347775f;  */

void FUN_103477750(void)

{
  return;
}



/* Entry: 103477760; end: 103477827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103477760(undefined8 param_1)

{
  long in_x5;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(alStack_78);
  func_0x0001000a8868(alStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x28))(param_1,uStack_60,lStack_58);
  func_0x0001000834e4(alStack_78);
  if (*(long *)(in_x5 + _DAT_112f703a0) != 0) {
    func_0x0001000d224c(alStack_78);
    if (alStack_78[0] != 0) {
      func_0x000107c419d4(alStack_78[0]);
      func_0x000107c615e8(alStack_78[0]);
    }
  }
  return;
}



/* Entry: 103477828; end: 10347784f;  */

void FUN_103477828(void)

{
  return;
}



/* Entry: 103477850; end: 1034779b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103477850(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  if (*(long *)(param_1 + _DAT_1130820a8) != 0) {
    param_2 = 0;
    uStack_60 = param_3;
    func_0x000104502c4c(FUN_1034779b4,0,0x103478800,auStack_70,0x1034779b8,0,0x1034779bc,0);
  }
  if ((*(long *)(param_1 + _DAT_1130820b0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + _DAT_1130820b0) + _DAT_113081ec0), lVar2 == 0)) {
    lVar3 = *(long *)(param_1 + _DAT_1130820c0);
    func_0x000107c61174(lVar3);
  }
  else {
    func_0x000104501ac4(0);
    func_0x000107c61174();
    lVar1 = lVar2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    func_0x000104500e64(lVar3,param_2);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(param_2);
  }
  lVar2 = *param_4;
  *param_4 = lVar3;
  func_0x000107c61170(lVar2);
  uVar4 = *param_6;
  *param_6 = *(undefined8 *)(param_1 + _DAT_1130820b8);
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1034779b4; end: 1034779bf;  */

void FUN_1034779b4(void)

{
  return;
}



/* Entry: 1034779c0; end: 103477a1f; -[_TtC25SCLensCarouselIntegration29LensCarouselInScopeController init] */

void FUN_1034779c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselInScopeController",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034779ec);
  (*pcVar1)();
}



/* Entry: 103477a20; end: 103477ac7; -[_TtC25SCLensCarouselIntegration29LensCarouselInScopeController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103477a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103477a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103477a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103477a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103477a80) */
/* WARNING: Removing unreachable block (ram,0x000103477a60) */
/* WARNING: Removing unreachable block (ram,0x000103477a40) */
/* WARNING: Removing unreachable block (ram,0x000103477aa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103477a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f70388));
  return;
}



/* Entry: 103477ac8; end: 103477ae7;  */

void FUN_103477ac8(void)

{
  func_0x000107c61168(&PTR_PTR_1128dcb18);
  return;
}



/* Entry: 103477ae8; end: 103477e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103477ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long alStack_b0 [2];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long in_stack_ffffffffffffff70;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  uVar10 = param_2;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)&plStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(alStack_b0);
  lVar13 = alStack_b0[0];
  if (alStack_b0[0] != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    uStack_c0 = param_3;
    if (param_1 != 0) {
      puStack_a0 = &uStack_68;
      puStack_98 = &uStack_70;
      uVar10 = 0;
      func_0x0001044fd80c(0x103477844,0,0x103477848,0,0x10347784c,0,FUN_1034787f4,alStack_b0);
      in_stack_ffffffffffffff70 = unaff_x20;
    }
    uVar2 = uStack_68;
    lVar4 = lVar13;
    uStack_d0 = uStack_70;
    func_0x000107c51cf0();
    func_0x000107c61180();
    lVar5 = lVar13;
    uStack_c8 = uStack_78;
    func_0x000107c3d0e8();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5eec4(lVar12);
    func_0x000107c5eeac();
    lStack_e0 = lVar6;
    uStack_d8 = uVar10;
    (**(code **)(lVar14 + 8))(lVar12,lVar3);
    lStack_b8 = lVar13;
    if (*(long *)(unaff_x20 + _DAT_112f703a0) == 0) {
      func_0x000107c61174(lVar4);
      func_0x000107c61174(lVar5);
      lVar13 = 0;
    }
    else {
      func_0x0001000d224c(alStack_b0);
      lVar13 = alStack_b0[0];
      if (alStack_b0[0] == 0) {
        func_0x000107c61174(lVar4);
        func_0x000107c61174(lVar5);
      }
      else {
        func_0x000107c61174(lVar4);
        func_0x000107c61174(lVar5);
        func_0x000107c5e318(alStack_b0[0]);
      }
    }
    func_0x0001000d224c(alStack_b0);
    puStack_e8 = puStack_98;
    plVar7 = alStack_b0;
    func_0x0001000a8868();
    puVar8 = &UNK_11065a580;
    plStack_f0 = plVar7;
    func_0x000107c613fc(&UNK_11065a580,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar9 = &UNK_11065a670;
    func_0x000107c613fc(&UNK_11065a670,0x59,7);
    uVar1 = uStack_c0;
    uVar10 = uStack_d8;
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *)(puVar9 + 0x18) = param_2;
    *(undefined8 *)(puVar9 + 0x20) = uStack_c0;
    *(long *)(puVar9 + 0x28) = lStack_e0;
    *(undefined8 *)(puVar9 + 0x30) = uStack_d8;
    *(undefined8 *)(puVar9 + 0x38) = uVar2;
    *(long *)(puVar9 + 0x40) = lVar4;
    *(long *)(puVar9 + 0x48) = lVar5;
    *(long *)(puVar9 + 0x50) = lVar13;
    puVar9[0x58] = 0;
    pcVar11 = *(code **)(in_stack_ffffffffffffff70 + 0x10);
    func_0x000107c61174(lVar4);
    func_0x000107c61174(lVar5);
    func_0x000107c6157c(puVar8);
    func_0x000101237340(param_2,uVar1);
    func_0x000107c615f0(lVar13);
    func_0x000107c61434(uVar10);
    (*pcVar11)(1,0x10347880c,puVar9,puStack_e8,in_stack_ffffffffffffff70);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar9);
    func_0x0001000834e4(alStack_b0);
    func_0x000107c615e8(lVar13);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(uVar10);
    func_0x000107c615e8(lStack_b8);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 103477e0c; end: 103477e17;  */

void FUN_103477e0c(void)

{
  return;
}



/* Entry: 103477e18; end: 103478103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103477e18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_78);
  lVar4 = lStack_78;
  if (lStack_78 != 0) {
    lVar1 = lStack_78;
    func_0x000107c3d0e8(lStack_78);
    func_0x000107c61180();
    func_0x000107c5d4e0(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar1);
  }
  lVar4 = *(long *)(param_1 + _DAT_1130820b0);
  if ((lVar4 != 0) && (lVar1 = *(long *)(lVar4 + _DAT_113081ec0), lVar1 != 0)) {
    func_0x000107c61174();
    func_0x0001000d224c(&lStack_78);
    func_0x0001000a8868(&lStack_78,uStack_60);
    (**(code **)(lStack_58 + 0x10))(lVar1,uStack_60,lStack_58);
    func_0x000107c61170(lVar1);
    func_0x0001000834e4(&lStack_78);
    lVar4 = *(long *)(lVar4 + _DAT_113081ec0);
    if (lVar4 != 0) {
      func_0x000104501ac4(0);
      func_0x000107c61174(lVar4);
      lVar2 = lVar4;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar1 = lVar2;
      uVar3 = uStack_60;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x000104500e64(lVar1,uVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c6142c(uVar3);
      goto LAB_103477fa4;
    }
  }
  lVar1 = *(long *)(param_1 + _DAT_1130820c0);
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61174();
LAB_103477fa4:
  if (*(char *)(unaff_x20 + _DAT_112f703c0) == '\x01') {
    func_0x0001000d224c(&lStack_78);
    lVar4 = lStack_78;
    func_0x000107c614f0(lStack_78);
    (**(code **)(lStack_70 + 0x40))(lVar1,lVar4,lStack_70);
    func_0x000107c615e8(lStack_78);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 103478104; end: 1034781a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103478104(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1034786cc(param_1 + _DAT_112f703b0,auStack_70);
    func_0x000107c61170(param_1);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x18))(param_2,uStack_58,lStack_50);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 1034781a4; end: 1034781bf;  */

void FUN_1034781a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_11065a508;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1034781c0; end: 1034781df;  */

void FUN_1034781c0(void)

{
  FUN_103477ae8();
  return;
}



/* Entry: 1034781e0; end: 1034782e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034781e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar1 = 0;
  uVar3 = param_2;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = *unaff_x20;
  func_0x000107c5eec4(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar5 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  if (*(long *)(lVar4 + _DAT_112f703a0) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x0001000d224c(&lStack_98);
    lVar1 = lStack_98;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 1;
  lStack_98 = lVar2;
  uStack_90 = uVar3;
  lStack_88 = lVar1;
  FUN_103476d78(&lStack_98,param_1,param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c615e8(lVar1);
  return;
}



/* Entry: 1034782e8; end: 10347839f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034782e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar1 = *unaff_x20;
  func_0x0001000d224c(auStack_70);
  func_0x0001000a8868(auStack_70,uStack_58);
  (**(code **)(lStack_50 + 0x18))(param_1,uStack_58,lStack_50);
  func_0x0001000834e4(auStack_70);
  uStack_60 = uVar1;
  func_0x0001044fd80c(FUN_103477e0c,0,0x103477e10,0,0x103477e14,0,0x103478710,auStack_70);
  return;
}



/* Entry: 1034783a0; end: 1034783bf;  */

void FUN_1034783a0(void)

{
  func_0x000103478018();
  return;
}



/* Entry: 1034783c0; end: 1034783d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034783c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112f703d0));
  return;
}



/* Entry: 1034783d4; end: 10347861b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1034783d4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *unaff_x20 + _DAT_112f703b0;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar2 + 8))(auStack_58,uVar3,lVar2);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar3 = uStack_40;
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar3;
}



/* Entry: 10347861c; end: 1034786c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10347861c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = *unaff_x20 + _DAT_112f703b0;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar2 + 8))(auStack_68,uVar3,lVar2);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar3 = uStack_50;
  (**(code **)(lStack_48 + 0x30))(param_1,param_2,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return (uint)uVar3 & 1;
}



/* Entry: 1034786c4; end: 1034786cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034786c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1034786cc(lVar2 + _DAT_112f703b0,auStack_70);
    func_0x000107c61170(lVar2);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x18))(uVar1,uStack_58,lStack_50);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 1034786cc; end: 10347872f;  */

long FUN_1034786cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103478730; end: 10347873f;  */

void FUN_103478730(uint param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(0);
    }
  }
  else {
    FUN_103476f98(unaff_x20 + 0x28);
    if ((((param_1 & 1) == 0) && (*(char *)(unaff_x20 + 0x58) != '\x01')) &&
       (*(long *)(unaff_x20 + 0x50) != 0)) {
      func_0x000107c41b9c();
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 & 1);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103478740; end: 10347877b;  */

undefined8 FUN_103478740(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x103473364)(param_2,param_1);
  return param_2;
}



/* Entry: 10347877c; end: 1034787ab;  */

void FUN_10347877c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103477164(unaff_x20 + 0x18);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1034787ac; end: 1034787f3;  */

void FUN_1034787ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
  func_0x000103473300(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined1 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1034787f4; end: 10347880f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034787f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  plVar1 = *(long **)(unaff_x20 + 0x18);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x28);
  if (*(long *)(param_1 + _DAT_1130820a8) != 0) {
    param_2 = 0;
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000104502c4c(FUN_1034779b4,0,0x103478800,auStack_70,0x1034779b8,0,0x1034779bc,0);
  }
  if ((*(long *)(param_1 + _DAT_1130820b0) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + _DAT_1130820b0) + _DAT_113081ec0), lVar4 == 0)) {
    lVar5 = *(long *)(param_1 + _DAT_1130820c0);
    func_0x000107c61174(lVar5);
  }
  else {
    func_0x000104501ac4(0);
    func_0x000107c61174();
    lVar3 = lVar4;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000104500e64(lVar5,param_2);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(param_2);
  }
  lVar4 = *plVar1;
  *plVar1 = lVar5;
  func_0x000107c61170(lVar4);
  uVar6 = *puVar2;
  *puVar2 = *(undefined8 *)(param_1 + _DAT_1130820b8);
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 103478810; end: 103478ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103478810(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  func_0x000107c613fc();
  uVar7 = *(undefined8 *)(param_7 + _DAT_113038858);
  func_0x0001000285a8(0x112f70408,&UNK_10dbccac0);
  uVar6 = *(undefined8 *)(*(long *)(param_3 + _DAT_1130389c8) + _DAT_113038a98);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  uVar1 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  func_0x0001000285a8(0x112f70410,&UNK_10dbccac8);
  uVar2 = *(undefined8 *)(*(long *)(param_4 + _DAT_1130388a8) + _DAT_113038978);
  func_0x000107c61174();
  uVar6 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_6 + _DAT_113038e08);
  puVar3 = &UNK_11065a6a8;
  func_0x000107c613fc(&UNK_11065a6a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x0001000285a8(0x112f70418,&UNK_10dbccad0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  pcVar4 = FUN_103478b6c;
  func_0x0001000bdd8c(FUN_103478b6c,puVar3);
  puVar3 = &UNK_11065a6d0;
  func_0x000107c613fc(&UNK_11065a6d0,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_8;
  func_0x0001000285a8(0x112f70420,&UNK_10dbccad8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_8);
  pcVar5 = FUN_103478e38;
  func_0x0001000bdd8c(FUN_103478e38,puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar5;
  return;
}



/* Entry: 103478ad4; end: 103478b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103478ad4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f704f8;
  func_0x0001000285a8(0x112f704f8,&UNK_10dbccb28);
  func_0x0001000bda74(param_2,uVar1);
  uVar1 = *(undefined8 *)(param_3 + _DAT_112fcaa80);
  FUN_103474528(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  FUN_103473da8(param_2,uVar1);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_11065a378;
  return;
}



/* Entry: 103478b6c; end: 103478b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103478b6c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar3 = 0x112f704f8;
  func_0x0001000285a8(0x112f704f8,&UNK_10dbccb28);
  func_0x0001000bda74(uVar2,uVar3);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112fcaa80);
  FUN_103474528(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  FUN_103473da8(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_11065a378;
  return;
}



/* Entry: 103478b74; end: 103478e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103478b74(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  uVar6 = *(undefined8 *)(*(long *)(param_6 + _DAT_113038bf0) + _DAT_113038cc0);
  func_0x000107c6157c(uVar6);
  func_0x0001000d224c(auStack_90);
  lVar2 = 0;
  FUN_103477ac8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112f703b8) = 0;
  *(undefined1 *)(lVar3 + _DAT_112f703c0) = 0;
  lVar1 = _DAT_112f703c8;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  lVar1 = _DAT_112f703d0;
  uVar4 = 0x112f70158;
  func_0x0001000285a8(0x112f70158,&UNK_10dbcc890);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f703d8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f70388) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f70390) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112f70398) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f703a0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112f703a8) = uVar6;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000d224c(&uStack_c0);
  FUN_103478f8c(auStack_90,uStack_78);
  (**(code **)(lStack_70 + 8))(&uStack_c0,uStack_c0,lStack_b8,uStack_78,lStack_70);
  uVar4 = uStack_c0;
  func_0x000107c614f0(uStack_c0);
  lVar1 = lStack_a8;
  FUN_103478f8c(&uStack_c0,lStack_a8);
  lStack_d0 = lVar1;
  uStack_c8 = uStack_98;
  func_0x0001000c5db4(auStack_e8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  (**(code **)(lStack_b8 + 0x18))(auStack_e8,uVar4,lStack_b8);
  FUN_103478f8c(&uStack_c0,lStack_a8);
  uStack_c8 = uStack_a0;
  lStack_d0 = lStack_a8;
  func_0x0001000c5db4(auStack_e8);
  (**(code **)(*(long *)(lStack_a8 + -8) + 0x10))();
  func_0x000107c615e8(uStack_c0);
  func_0x000103478fb0(auStack_e8,lVar3 + _DAT_112f703b0);
  func_0x000103478fc8(&uStack_c0);
  plVar5 = &lStack_f8;
  lStack_f8 = lVar3;
  lStack_f0 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar6);
  func_0x000103478fc8(auStack_90);
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11065a540;
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 103478e38; end: 103478e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103478e38(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_113038bf0) + _DAT_113038cc0)
  ;
  func_0x000107c6157c(uVar10);
  func_0x0001000d224c(auStack_90);
  lVar6 = 0;
  FUN_103477ac8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar7 + _DAT_112f703b8) = 0;
  *(undefined1 *)(lVar7 + _DAT_112f703c0) = 0;
  lVar5 = _DAT_112f703c8;
  uVar8 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar7 + lVar5) = uVar8;
  lVar5 = _DAT_112f703d0;
  uVar8 = 0x112f70158;
  func_0x0001000285a8(0x112f70158,&UNK_10dbcc890);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar7 + lVar5) = uVar8;
  *(undefined8 *)(lVar7 + _DAT_112f703d8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f70388) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112f70390) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f70398) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f703a0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f703a8) = uVar10;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&uStack_c0);
  FUN_103478f8c(auStack_90,uStack_78);
  (**(code **)(lStack_70 + 8))(&uStack_c0,uStack_c0,lStack_b8,uStack_78,lStack_70);
  uVar8 = uStack_c0;
  func_0x000107c614f0(uStack_c0);
  lVar5 = lStack_a8;
  FUN_103478f8c(&uStack_c0,lStack_a8);
  lStack_d0 = lVar5;
  uStack_c8 = uStack_98;
  func_0x0001000c5db4(auStack_e8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))();
  (**(code **)(lStack_b8 + 0x18))(auStack_e8,uVar8,lStack_b8);
  FUN_103478f8c(&uStack_c0,lStack_a8);
  uStack_c8 = uStack_a0;
  lStack_d0 = lStack_a8;
  func_0x0001000c5db4(auStack_e8);
  (**(code **)(*(long *)(lStack_a8 + -8) + 0x10))();
  func_0x000107c615e8(uStack_c0);
  func_0x000103478fb0(auStack_e8,lVar7 + _DAT_112f703b0);
  func_0x000103478fc8(&uStack_c0);
  plVar9 = &lStack_f8;
  lStack_f8 = lVar7;
  lStack_f0 = lVar6;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar10);
  func_0x000103478fc8(auStack_90);
  param_1[3] = lVar6;
  param_1[4] = (long)&PTR_DAT_11065a540;
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 103478e3c; end: 103478e87;  */

void FUN_103478e3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103478e88; end: 103478e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103478e88(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x30) + _DAT_113038bf0) + _DAT_113038cc0)
  ;
  func_0x000107c6157c(uVar10);
  func_0x0001000d224c(auStack_90);
  lVar6 = 0;
  FUN_103477ac8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined1 *)(lVar7 + _DAT_112f703b8) = 0;
  *(undefined1 *)(lVar7 + _DAT_112f703c0) = 0;
  lVar5 = _DAT_112f703c8;
  uVar8 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar7 + lVar5) = uVar8;
  lVar5 = _DAT_112f703d0;
  uVar8 = 0x112f70158;
  func_0x0001000285a8(0x112f70158,&UNK_10dbcc890);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar7 + lVar5) = uVar8;
  *(undefined8 *)(lVar7 + _DAT_112f703d8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f70388) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112f70390) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f70398) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f703a0) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f703a8) = uVar10;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&uStack_c0);
  FUN_103478f8c(auStack_90,uStack_78);
  (**(code **)(lStack_70 + 8))(&uStack_c0,uStack_c0,lStack_b8,uStack_78,lStack_70);
  uVar8 = uStack_c0;
  func_0x000107c614f0(uStack_c0);
  lVar5 = lStack_a8;
  FUN_103478f8c(&uStack_c0,lStack_a8);
  lStack_d0 = lVar5;
  uStack_c8 = uStack_98;
  func_0x0001000c5db4(auStack_e8);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))();
  (**(code **)(lStack_b8 + 0x18))(auStack_e8,uVar8,lStack_b8);
  FUN_103478f8c(&uStack_c0,lStack_a8);
  uStack_c8 = uStack_a0;
  lStack_d0 = lStack_a8;
  func_0x0001000c5db4(auStack_e8);
  (**(code **)(*(long *)(lStack_a8 + -8) + 0x10))();
  func_0x000107c615e8(uStack_c0);
  func_0x000103478fb0(auStack_e8,lVar7 + _DAT_112f703b0);
  func_0x000103478fc8(&uStack_c0);
  plVar9 = &lStack_f8;
  lStack_f8 = lVar7;
  lStack_f0 = lVar6;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(uVar10);
  func_0x000103478fc8(auStack_90);
  param_1[3] = lVar6;
  param_1[4] = (long)&PTR_DAT_11065a540;
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 103478ea0; end: 103478f3f;  */

void FUN_103478ea0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103478f40; end: 103478f8b;  */

void FUN_103478f40(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103f95a18(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103f9595c();
  *param_1 = uVar1;
  return;
}



/* Entry: 103478f8c; end: 103478fe7;  */

long * FUN_103478f8c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 103478fe8; end: 103479093;  */

void FUN_103478fe8(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x000104875e28(auStack_58);
  func_0x000107c61574(uVar1);
  if (lStack_40 == 0) {
    FUN_103118520(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x18))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103479094; end: 1034790d3;  */

void FUN_103479094(void)

{
  FUN_103478fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034790d4; end: 10347933f;  */

void FUN_1034790d4(byte param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
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
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)(0);
    }
  }
  else {
    puVar3 = &UNK_11065a768;
    func_0x000107c613fc(&UNK_11065a768,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11065a790;
    func_0x000107c613fc(&UNK_11065a790,0x29,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    puVar4[0x28] = param_1 & 1;
    uStack_50 = 0x1034796b8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11065a7a8;
    ppuVar5 = &puStack_70;
    puStack_48 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_48;
    func_0x000101237340(param_2,param_3);
    func_0x000107c61574(puVar3);
    puStack_70 = (undefined *)0xd00000000000002f;
    uStack_68 = 0x800000010f153090;
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    uVar1 = uStack_68;
    puVar3 = puStack_70;
    func_0x000107c5fadc(puStack_70,uStack_68);
    func_0x000107c6142c(uVar1);
    func_0x000107c55f20(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 103479340; end: 103479403;  */

void FUN_103479340(ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c50514(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  if ((param_1 & 1) == 0) {
    func_0x000104875e28(auStack_58);
    if (lStack_40 == 0) {
      FUN_103118520(auStack_58);
    }
    else {
      func_0x0001000a8868(auStack_58,lStack_40);
      (**(code **)(lStack_38 + 0x18))(lStack_40,lStack_38);
      func_0x0001000834e4(auStack_58);
    }
  }
  return;
}



/* Entry: 103479404; end: 103479543;  */

void FUN_103479404(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  uStack_50 = 0;
  cStack_48 = '\x01';
  puStack_70 = &uStack_50;
  func_0x000104500f7c(FUN_10347967c,0,0x103479680,&puStack_80,0x103479690,0,0x103479694,0,
                      0x103479698,0);
  if (cStack_48 == '\x01') {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      ppuVar3 = (undefined **)0x0;
      if (param_2 != (code *)0x0) {
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = (undefined8 *)&UNK_1000f6b44;
        puStack_68 = &UNK_11065a730;
        ppuVar3 = &puStack_80;
        pcStack_60 = param_2;
        uStack_58 = param_3;
        func_0x000107c60bc4(ppuVar3);
        uVar1 = uStack_58;
        func_0x000107c6157c(param_3);
        func_0x000107c61574(uVar1);
      }
      func_0x000107c53058(lVar2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 103479544; end: 1034795af;  */

undefined8 FUN_103479544(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 1034795b0; end: 10347960f;  */

void FUN_1034795b0(void)

{
  FUN_1034790d4();
  return;
}



/* Entry: 103479610; end: 10347967b;  */

void FUN_103479610(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x20))(param_1,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}


