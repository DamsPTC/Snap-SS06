/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b5a624; end: 103b5a89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5a624(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112feeff8);
  if (lVar3 != 0) {
    func_0x000107c61174();
    uVar4 = 0;
    FUN_103b5ad08();
    if ((uVar4 & 1) == 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef040);
      func_0x000107c609e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    }
    func_0x000107c54514(lVar3);
    func_0x000107c61170(lVar3);
  }
  lVar3 = _DAT_112fef008;
  if (*(long *)(unaff_x20 + _DAT_112fef008) != 0) {
    func_0x000107c56704(*(undefined8 *)(param_1 + _DAT_112feef88));
    lVar3 = *(long *)(unaff_x20 + lVar3);
    if (lVar3 != 0) {
      func_0x000107c61174();
      func_0x000103b5a8f0();
      func_0x000107c54514(lVar3);
      func_0x000107c61170(lVar3);
    }
  }
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112fef000);
  if (uVar4 != 0) {
    cVar2 = *(char *)(param_1 + _DAT_112feef80);
    func_0x000107c61174();
    if ((cVar2 == '\x01') && (uVar5 = uVar4, func_0x000103b5aa44(), (uVar5 & 1) == 0)) {
      lVar3 = unaff_x20;
      func_0x000107c4e230();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar7 = lVar3;
        func_0x000107c499b8();
        func_0x000107c61170(lVar3);
        if ((int)lVar7 != 0) {
          func_0x000103b5abac();
        }
      }
    }
    func_0x000107c54514(uVar4);
    func_0x000107c61170(uVar4);
  }
  lVar3 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + _DAT_11307abc8);
    func_0x000107c61434(lVar7);
    func_0x000107c61170(lVar3);
    if (*(long *)(lVar7 + 0x10) != 0) {
      func_0x000107c61434(lVar7);
      uVar4 = 0;
      lVar3 = -0x2fffffffffffffe0;
      func_0x000100029284(0xd000000000000020);
      if ((uVar4 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,&uStack_50);
        func_0x000107c61430(lVar7,2);
        if (lStack_38 != 0) {
          func_0x00010006e7f4(&uStack_50);
          func_0x000107c5de64();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            return;
          }
          uVar6 = 0;
          FUN_103b59610(0);
          lVar3 = unaff_x20;
          func_0x000107c61480(unaff_x20,uVar6);
          if (lVar3 != 0) {
            *(undefined1 *)(lVar3 + _DAT_112fef050) = 1;
          }
          func_0x000107c61170(unaff_x20);
          return;
        }
        goto LAB_103b5a844;
      }
      func_0x000107c6142c(lVar7);
    }
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c6142c(lVar7);
  }
LAB_103b5a844:
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 103b5a8a0; end: 103b5ad07; -[SCSpotlightPlaybackControlGestureLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Possible PIC construction at 0x000103b5a8d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5a8dc) */

void FUN_103b5a8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b5a624(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103b5ad08; end: 103b5b2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b5ad08(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + _DAT_112feef78) == '\x01') {
      lVar9 = unaff_x20;
      func_0x000107c4e230();
      func_0x000107c61180();
      if (lVar9 == 0) {
        puVar13 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100214a84();
      }
      else {
        puVar13 = *(undefined8 **)(lVar9 + _DAT_11307abc8);
        func_0x000107c61434(puVar13);
        func_0x000107c61170(lVar9);
      }
      lVar9 = unaff_x20;
      func_0x000107c4e230();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar4 = lVar9;
        func_0x000107c499b8();
        func_0x000107c61170(lVar9);
        if ((int)lVar4 != 0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110f0c078;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c078);
          puVar10 = param_2;
          if (puVar13[2] == 0) {
LAB_103b5b040:
            uStack_68 = 0;
            uStack_70 = 0;
            lStack_58 = 0;
            uStack_60 = 0;
            func_0x000107c6142c(param_2);
            bVar1 = true;
          }
          else {
            func_0x000107c61434(puVar13);
            func_0x000100029284(ppuVar5);
            if (((ulong)puVar10 & 1) == 0) {
              func_0x000107c6142c(puVar13);
              goto LAB_103b5b040;
            }
            puVar10 = &uStack_70;
            func_0x0001000bb420(puVar13[7] + (long)ppuVar5 * 0x20);
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(puVar13);
            bVar1 = lStack_58 == 0;
          }
          func_0x00010006e7f4(&uStack_70);
          ppuVar5 = &PTR____CFConstantStringClassReference_110f0e6b8;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e6b8);
          if (puVar13[2] == 0) {
LAB_103b5b0c0:
            uStack_68 = 0;
            uStack_70 = 0;
            lStack_58 = 0;
            uStack_60 = 0;
          }
          else {
            func_0x000107c61434(puVar13);
            puVar11 = puVar10;
            func_0x000100029284(ppuVar5);
            if (((ulong)puVar11 & 1) == 0) {
              func_0x000107c6142c(puVar13);
              goto LAB_103b5b0c0;
            }
            func_0x0001000bb420(puVar13[7] + (long)ppuVar5 * 0x20,&uStack_70);
            func_0x000107c6142c(puVar10);
            puVar10 = puVar13;
          }
          func_0x000107c6142c(puVar10);
          if (lStack_58 == 0) {
            ppppuVar6 = (undefined8 ****)0x0;
            func_0x00010006e7f4();
LAB_103b5b138:
            ppppuVar14 = ppppuVar6;
            iVar2 = 0;
          }
          else {
            uVar8 = 0;
            FUN_103b5ebe0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            ppppuVar6 = &pppuStack_78;
            func_0x000107c6147c(ppppuVar6,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar8,6);
            ppppuVar14 = (undefined8 ****)pppuStack_78;
            if (((ulong)ppppuVar6 & 1) == 0) goto LAB_103b5b138;
            ppppuVar6 = (undefined8 ****)pppuStack_78;
            func_0x000107c3ebcc();
            iVar2 = (int)ppppuVar6;
            func_0x000107c61170();
          }
          func_0x000103b5aa44();
          if (((((ulong)ppppuVar14 & 1) != 0) || (!bVar1)) || (iVar2 != 0)) {
            func_0x000107c61170(lVar3);
            func_0x000107c6142c(puVar13);
            goto LAB_103b5b168;
          }
          if ((param_1 & 0xff) == 2) {
            if (*(char *)(unaff_x20 + _DAT_112fef048) == '\x01') {
              func_0x000107c6142c(puVar13);
              func_0x000107c61170(lVar3);
              param_1 = 0;
              goto LAB_103b5b16c;
            }
            if (puVar13[2] == 0) {
LAB_103b5b248:
              uStack_68 = 0;
              uStack_70 = 0;
              lStack_58 = 0;
              uStack_60 = 0;
            }
            else {
              func_0x000107c61434(puVar13);
              uVar12 = 0;
              lVar9 = -0x2fffffffffffffe2;
              func_0x000100029284(0xd00000000000001e);
              if ((uVar12 & 1) == 0) {
                func_0x000107c6142c(puVar13);
                goto LAB_103b5b248;
              }
              func_0x0001000bb420(puVar13[7] + lVar9 * 0x20,&uStack_70);
              func_0x000107c6142c(puVar13);
            }
            func_0x000107c6142c(puVar13);
            if (lStack_58 == 0) {
              func_0x000107c61170(lVar3);
              func_0x00010006e7f4(&uStack_70);
            }
            else {
              uVar8 = 0;
              FUN_103b5ebe0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              ppppuVar6 = &pppuStack_78;
              func_0x000107c6147c(ppppuVar6,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar8,6);
              if (((ulong)ppppuVar6 & 1) != 0) {
                ppppuVar6 = (undefined8 ****)pppuStack_78;
                func_0x000107c3ebcc(pppuStack_78);
                param_1 = (uint)ppppuVar6;
                func_0x000107c61170(pppuStack_78);
                goto LAB_103b5b1e0;
              }
              func_0x000107c61170(lVar3);
            }
            param_1 = 1;
          }
          else {
            func_0x000107c6142c(puVar13);
LAB_103b5b1e0:
            func_0x000107c61170(lVar3);
            param_1 = param_1 ^ 1;
          }
          goto LAB_103b5b16c;
        }
      }
      ppuVar5 = &PTR____CFConstantStringClassReference_110dcab38;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcab38);
      puVar10 = param_2;
      if (puVar13[2] == 0) {
LAB_103b5af28:
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
        func_0x000107c6142c(param_2);
LAB_103b5af38:
        func_0x00010006e7f4(&uStack_70);
LAB_103b5af40:
        param_1 = 0;
        ppppuVar14 = (undefined8 ****)0x0;
      }
      else {
        func_0x000107c61434(puVar13);
        func_0x000100029284(ppuVar5);
        if (((ulong)puVar10 & 1) == 0) {
          func_0x000107c6142c(puVar13);
          goto LAB_103b5af28;
        }
        puVar10 = &uStack_70;
        func_0x0001000bb420(puVar13[7] + (long)ppuVar5 * 0x20);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(puVar13);
        if (lStack_58 == 0) goto LAB_103b5af38;
        uVar8 = 0;
        FUN_103b5ebe0(0,0x112d7a520,&PTR_PTR_1126b2390);
        ppppuVar6 = &pppuStack_78;
        puVar10 = &uStack_70;
        func_0x000107c6147c(ppppuVar6,puVar10,PTR___sypN_11034f1a8 + 8,uVar8,6);
        ppppuVar14 = (undefined8 ****)pppuStack_78;
        if (((ulong)ppppuVar6 & 1) == 0) goto LAB_103b5af40;
        ppppuVar6 = (undefined8 ****)pppuStack_78;
        func_0x000107c5c018();
        func_0x000107c61180();
        if (ppppuVar6 == (undefined8 ****)0x0) {
          param_1 = 0;
        }
        else {
          ppppuVar7 = ppppuVar6;
          func_0x000107c5c080();
          func_0x000107c61170(ppppuVar6);
          param_1 = (uint)(ppppuVar7 == (undefined8 ****)0xb);
        }
      }
      ppuVar5 = &PTR____CFConstantStringClassReference_110ea1a58;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110ea1a58);
      if (puVar13[2] == 0) {
LAB_103b5afa8:
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x000107c61434(puVar13);
        puVar11 = puVar10;
        func_0x000100029284(ppuVar5);
        if (((ulong)puVar11 & 1) == 0) {
          func_0x000107c6142c(puVar13);
          goto LAB_103b5afa8;
        }
        func_0x0001000bb420(puVar13[7] + (long)ppuVar5 * 0x20,&uStack_70);
        func_0x000107c6142c(puVar10);
        puVar10 = puVar13;
      }
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar13);
      if (lStack_58 == 0) {
        func_0x00010006e7f4(&uStack_70);
        ppppuVar6 = (undefined8 ****)0x0;
      }
      else {
        uVar8 = 0;
        func_0x0001044ad5d8(0);
        ppppuVar7 = &pppuStack_78;
        func_0x000107c6147c(ppppuVar7,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar8,6);
        ppppuVar6 = (undefined8 ****)pppuStack_78;
        if ((int)ppppuVar7 == 0) {
          ppppuVar6 = (undefined8 ****)0x0;
        }
      }
      ppppuVar7 = ppppuVar6;
      func_0x000108539290(ppppuVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(ppppuVar6);
      func_0x000107c61170(ppppuVar14);
      param_1 = param_1 | (uint)ppppuVar7;
      goto LAB_103b5b16c;
    }
    func_0x000107c61170();
  }
LAB_103b5b168:
  param_1 = 0;
LAB_103b5b16c:
  return param_1 & 1;
}



/* Entry: 103b5b2dc; end: 103b5b4bf;  */

/* WARNING: Possible PIC construction at 0x000103b5b3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5b404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5b444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5b490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5b448) */
/* WARNING: Removing unreachable block (ram,0x000103b5b408) */
/* WARNING: Removing unreachable block (ram,0x000103b5b3e0) */
/* WARNING: Removing unreachable block (ram,0x000103b5b494) */

void FUN_103b5b2dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  FUN_103b50e00(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c550d8();
  func_0x000107c3d8b8(uVar1);
  func_0x000107c5a050(uVar1);
  func_0x000107c3d89c(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  func_0x000107c3f75c(uVar1);
  func_0x000107c61180();
  func_0x000107c3f75c(param_1);
  func_0x000107c61180();
  func_0x000107c40280(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b5b4c0; end: 103b5b62f;  */

/* WARNING: Possible PIC construction at 0x000103b5b614: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5b4c0(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if ((*(long *)(unaff_x20 + _DAT_112fef010) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112fef010) + _DAT_112feecf8), lVar4 != 0)) {
    dVar6 = 0.0;
    dVar7 = 0.0;
    if ((param_1 & 1) == 0) {
      dVar7 = 1.0;
    }
    func_0x000107c61174();
    func_0x000107c3dc40();
    if (dVar6 != dVar7) {
      uVar5 = 0x3fe6666666666666;
      if ((param_1 & 1) == 0) {
        uVar5 = 0x3ff0000000000000;
      }
      FUN_103b5b630(param_1 & 1);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar2 = &UNK_1106d8a90;
      func_0x000107c613fc(&UNK_1106d8a90,0x28,7);
      *(long *)(puVar2 + 0x10) = lVar4;
      *(double *)(puVar2 + 0x18) = dVar7;
      *(undefined8 *)(puVar2 + 0x20) = uVar5;
      pcStack_50 = FUN_103b5ebd4;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_1106d8aa8;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      puVar2 = puStack_48;
      func_0x000107c61174(lVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c3dcd4(0x3fc3333333333333,0,puVar1);
      func_0x000107c60bd0(ppuVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 103b5b630; end: 103b5b75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5b630(uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  
  if ((param_1 & 1) == 0) {
    uVar5 = unaff_x20;
    func_0x000107c4e230();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c499b8();
      func_0x000107c61170(uVar5);
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
    uVar5 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (uVar5 != 0) {
      pcVar1 = *(code **)(uVar5 + _DAT_112feefb8);
      uVar2 = ((undefined8 *)(uVar5 + _DAT_112feefb8))[1];
      func_0x000107c6157c(uVar2);
      func_0x000107c61170();
      (*pcVar1)();
      func_0x000107c61574(uVar2);
      lVar3 = _DAT_112fef020;
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112fef020);
        if (lVar4 == 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_112fef010);
          if (lVar4 != 0) {
            func_0x000107c5c42c();
            func_0x000107c61180();
            if (lVar4 != 0) {
              FUN_103b5b2dc();
              func_0x000107c61170(lVar4);
            }
          }
          lVar4 = *(long *)(unaff_x20 + lVar3);
          if (lVar4 == 0) {
            return;
          }
        }
        goto LAB_103b5b65c;
      }
    }
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _DAT_112fef020);
    if (lVar4 != 0) {
LAB_103b5b65c:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_setHidden__1126479f8,param_1 & 1);
      return;
    }
  }
  return;
}



/* Entry: 103b5b760; end: 103b5b7bf;  */

void FUN_103b5b760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [48];
  
  func_0x000107c526c0();
  func_0x000107c6088c(auStack_60,param_2,param_2);
  func_0x000107c5a03c(param_3,param_4,auStack_60);
  return;
}



/* Entry: 103b5b7c0; end: 103b5b82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5b7c0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112fef018) != 0) {
    func_0x000107c526c0(0);
  }
  if ((*(long *)(unaff_x20 + _DAT_112fef010) != 0) &&
     (*(long *)(*(long *)(unaff_x20 + _DAT_112fef010) + _DAT_112feecf8) != 0)) {
    func_0x000107c526c0(0);
  }
  if (*(long *)(unaff_x20 + _DAT_112fef020) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112fef020),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 103b5b830; end: 103b5b8d7; -[SCSpotlightPlaybackControlGestureLayerViewController handleCreateStickerTapped] */

/* WARNING: Possible PIC construction at 0x000103b5b8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5b8b8) */

void FUN_103b5b830(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  func_0x000107c61174();
  puVar3 = param_1;
  func_0x000107c42a98();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    FUN_103bb4bb4();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c4e230(param_1);
    func_0x000107c61180();
    func_0x000107c4df7c(puVar3);
    func_0x000107c615e8(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b5b8d8);
  (*pcVar2)();
}



/* Entry: 103b5b8d8; end: 103b5bb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5b8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5b9bc);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103b5bb18; end: 103b5bc87;  */

long FUN_103b5bb18(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c40724(param_1,param_2);
    func_0x000107c61170(unaff_x20);
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 4;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000020;
    *(undefined8 *)(lVar2 + 0x28) = 0x800000010f1a1700;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(param_1);
    uVar4 = 0;
    FUN_103b5ebe0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined **)(lVar2 + 0x30) = puVar3;
    *(undefined8 *)(lVar2 + 0x48) = uVar4;
    *(undefined8 *)(lVar2 + 0x50) = 0xd000000000000020;
    *(undefined8 *)(lVar2 + 0x58) = 0x800000010f1a16d0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(param_2);
    *(undefined8 *)(lVar2 + 0x78) = uVar4;
    *(undefined **)(lVar2 + 0x60) = puVar3;
    lVar5 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    uVar4 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar4);
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5bc88);
  (*pcVar1)();
}



/* Entry: 103b5bc88; end: 103b5be57;  */

/* WARNING: Possible PIC construction at 0x000103b5bd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5be34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5bd50) */
/* WARNING: Removing unreachable block (ram,0x000103b5be38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5bc88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef040);
  func_0x000107c609e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  iVar3 = (int)param_3;
  if (((param_3 & 1) == 0) &&
     (func_0x000107c609a4(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_1,param_2), iVar3 != 0)) {
    uVar4 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f1a16a0);
    uVar6 = uVar4;
    FUN_103b5eaa0(param_1,param_2);
    func_0x000107c5f9dc();
    func_0x000107c6142c(uVar6);
    func_0x000107c3dd28();
  }
  else {
    lVar2 = _DAT_112feef38;
    lVar7 = *(long *)(unaff_x20 + _DAT_112feeff0);
    uVar5 = lVar7 + _DAT_112feef38;
    func_0x000107c61428(uVar5,auStack_58,0,0);
    if ((*(long *)(lVar7 + lVar2) == 2) || (FUN_103b5b8d8(param_1), (uVar5 & 1) == 0)) {
      return;
    }
    FUN_103b5b4c0(*(int *)(lVar7 + lVar2) == 1);
    uVar4 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f1a1670);
    uVar6 = uVar4;
    FUN_103b5eaa0(param_1,param_2);
    func_0x000107c5f9dc();
    func_0x000107c6142c(uVar6);
    func_0x000107c3dd28();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 103b5be58; end: 103b5bef3; -[SCSpotlightPlaybackControlGestureLayerViewController handleSingleTap:] */

/* WARNING: Possible PIC construction at 0x000103b5bec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5bed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5bec8) */
/* WARNING: Removing unreachable block (ram,0x000103b5bedc) */

void FUN_103b5be58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  func_0x000107c5bcc0();
  if (lVar1 == 3) {
    func_0x000107c5de64(param_1);
    func_0x000107c61180();
    func_0x000107c4b8b8(param_3,param_2,param_1);
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b5bef4; end: 103b5c1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5bef4(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c5bcc0();
  if (param_1 - 3U < 3) {
    lVar8 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if ((lVar8 != 0) &&
       (bVar1 = *(byte *)(lVar8 + _DAT_112feefa0), func_0x000107c61170(), (bVar1 & 1) == 0)) {
      if (*(char *)(unaff_x20 + _DAT_112fef038) != '\x01') {
        return;
      }
      *(undefined1 *)(unaff_x20 + _DAT_112fef038) = 0;
      FUN_103b5c1e8();
    }
    lVar8 = _DAT_112feef38;
    lVar7 = *(long *)(unaff_x20 + _DAT_112feeff0);
    func_0x000107c61428(lVar7 + _DAT_112feef38,auStack_68,1,0);
    *(undefined8 *)(lVar7 + lVar8) = 0;
    lVar8 = *(long *)(unaff_x20 + _DAT_112fef018);
    pcVar9 = "e_long_press_began";
    if (lVar8 == 0) goto LAB_103b5c1a4;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_1106d89f0;
    func_0x000107c613fc(&UNK_1106d89f0,0x19,7);
    *(long *)(puVar4 + 0x10) = lVar8;
    puVar4[0x18] = 1;
    uStack_78 = 0x103b5ea84;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1106d8a08;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_70;
    func_0x000107c61174(lVar8);
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
  }
  else {
    if (param_1 != 1) {
      return;
    }
    lVar8 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if ((lVar8 != 0) &&
       (cVar2 = *(char *)(lVar8 + _DAT_112feefa0), func_0x000107c61170(), cVar2 != '\x01')) {
      return;
    }
    lVar8 = _DAT_112feef38;
    lVar7 = *(long *)(unaff_x20 + _DAT_112feeff0);
    func_0x000107c61428(lVar7 + _DAT_112feef38,auStack_68,1,0);
    *(undefined8 *)(lVar7 + lVar8) = 2;
    lVar8 = *(long *)(unaff_x20 + _DAT_112fef018);
    pcVar9 = "potlightPauseGestureView";
    if (lVar8 == 0) goto LAB_103b5c1a4;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_1106d8a40;
    func_0x000107c613fc(&UNK_1106d8a40,0x19,7);
    *(long *)(puVar4 + 0x10) = lVar8;
    puVar4[0x18] = 0;
    uStack_78 = 0x103b5ec34;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1106d8a58;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_70;
    func_0x000107c61174(lVar8);
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
  }
  func_0x000107c3dcd4(0x3fd3333333333333,0,puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar8);
LAB_103b5c1a4:
  uVar6 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,(ulong)pcVar9 | 0x8000000000000000);
  func_0x000107c3dd24();
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 103b5c1e8; end: 103b5c237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5c1e8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112fef028;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112fef028) != 0) {
    func_0x000107c498f8();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef030);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  return;
}



/* Entry: 103b5c238; end: 103b5c287; -[SCSpotlightPlaybackControlGestureLayerViewController handleLongPress:] */

/* WARNING: Possible PIC construction at 0x000103b5c270: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5c274) */

void FUN_103b5c238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103b5bef4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b5c288; end: 103b5c533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5c288(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  ppuVar9 = &puStack_b0;
  func_0x000107c614f0();
  uVar4 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar12 = uVar4;
  func_0x000101107df4();
  lVar5 = param_5;
  func_0x000107c5fe08(param_5,uVar4,uVar12);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_touchesBegan_withEvent__11267b780,lVar5,param_6
                     );
  func_0x000107c61170(lVar5);
  lVar5 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (((lVar5 != 0) &&
      (bVar2 = *(byte *)(lVar5 + _DAT_112feefa0), func_0x000107c61170(), (bVar2 & 1) == 0)) &&
     (func_0x000102be0e84(), param_5 != 0)) {
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4b8b8(param_5);
    dVar10 = param_1;
    dVar11 = param_2;
    func_0x000107c61170(lVar5);
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b5c534);
      (*pcVar3)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar5);
    func_0x000107c609cc(dVar10,dVar11,param_3,param_4);
    if ((param_1 < dVar10 * 0.2) || (dVar10 - dVar10 * 0.2 < param_1)) {
      pdVar1 = (double *)(unaff_x20 + _DAT_112fef030);
      *pdVar1 = param_1;
      pdVar1[1] = param_2;
      *(undefined1 *)(pdVar1 + 2) = 0;
      lVar5 = _DAT_112fef028;
      if (*(long *)(unaff_x20 + _DAT_112fef028) != 0) {
        func_0x000107c498f8();
      }
      lVar6 = unaff_x20;
      func_0x000107c4aba4();
      func_0x000107c61180();
      if (lVar6 == 0) {
        uVar12 = 0x3fd3333333333333;
      }
      else {
        uVar12 = *(undefined8 *)(lVar6 + _DAT_112feef88);
        func_0x000107c61170();
      }
      puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c61168();
      puVar8 = &UNK_1106d8900;
      func_0x000107c613fc(&UNK_1106d8900,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      uStack_90 = 0x103b5ea50;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100fef460;
      puStack_98 = &UNK_1106d8918;
      puStack_88 = puVar8;
      func_0x000107c60bc4(&puStack_b0);
      func_0x000107c61574(puStack_88);
      func_0x000107c51924(uVar12);
      func_0x000107c61180();
      func_0x000107c61170(param_5);
      func_0x000107c60bd0(ppuVar9);
      param_5 = *(long *)(unaff_x20 + lVar5);
      *(undefined **)(unaff_x20 + lVar5) = puVar7;
    }
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 103b5c534; end: 103b5c61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5c534(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_112fef030 + 0x10) != '\x01') {
      *(undefined1 *)(param_2 + _DAT_112fef038) = 1;
      lVar1 = _DAT_112feef38;
      lVar2 = *(long *)(param_2 + _DAT_112feeff0);
      func_0x000107c61428(lVar2 + _DAT_112feef38,auStack_60,1,0);
      *(undefined8 *)(lVar2 + lVar1) = 2;
      func_0x000107c5fadc(0xd000000000000022,0x800000010f1a1870);
      func_0x000107c3dd24(param_2);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103b5c61c; end: 103b5c627; -[SCSpotlightPlaybackControlGestureLayerViewController touchesBegan:withEvent:] */

void FUN_103b5c61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b5c288(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b5c628; end: 103b5c7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5c628(double param_1,double param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar4 = uVar3;
  func_0x000101107df4();
  lVar5 = param_3;
  func_0x000107c5fe08(param_3,uVar3,uVar4);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_touchesMoved_withEvent__11252ca58,lVar5,param_4
                     );
  func_0x000107c61170(lVar5);
  lVar5 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  bVar2 = *(byte *)(lVar5 + _DAT_112feefa0);
  func_0x000107c61170();
  if ((bVar2 & 1) != 0) {
    return;
  }
  func_0x000102be0e84();
  if (param_3 == 0) {
    return;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112fef030);
  if (*(char *)(pdVar1 + 2) != '\x01') {
    dVar7 = *pdVar1;
    dVar6 = pdVar1[1];
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4b8b8(param_3);
    func_0x000107c61170(lVar5);
    param_1 = param_1 - dVar7;
    func_0x000107c61038(param_1,param_2 - dVar6);
    if (*(long *)(unaff_x20 + _DAT_112fef008) == 0) {
      if (param_1 <= 10.0) goto LAB_103b5c78c;
    }
    else {
      dVar6 = param_1;
      func_0x000107c3dc14();
      if (param_1 <= dVar6) goto LAB_103b5c78c;
    }
    if ((*(byte *)(unaff_x20 + _DAT_112fef038) & 1) == 0) {
      FUN_103b5c1e8();
    }
  }
LAB_103b5c78c:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103b5c7b4; end: 103b5c7bf; -[SCSpotlightPlaybackControlGestureLayerViewController touchesMoved:withEvent:] */

void FUN_103b5c7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b5c628(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b5c7c0; end: 103b5c933;  */

void FUN_103b5c7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b5c934; end: 103b5ca0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5c934(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112fef028;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112fef028) != 0) {
    func_0x000107c498f8();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef030);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  if (*(char *)(unaff_x20 + _DAT_112fef038) == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112fef038) = 0;
    lVar2 = _DAT_112feef38;
    lVar4 = *(long *)(unaff_x20 + _DAT_112feeff0);
    func_0x000107c61428(lVar4 + _DAT_112feef38,auStack_48,1,0);
    *(undefined8 *)(lVar4 + lVar2) = 0;
    uVar3 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f1a18a0);
    func_0x000107c3dd24();
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 103b5ca10; end: 103b5ca1b; -[SCSpotlightPlaybackControlGestureLayerViewController touchesEnded:withEvent:] */

void FUN_103b5ca10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x103b5c868)(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b5ca1c; end: 103b5caf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5ca1c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe08(param_1,uVar2,uVar3);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_touchesCancelled_withEvent__112526c90,param_1,
                      param_2);
  func_0x000107c61170(param_1);
  lVar4 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (((lVar4 != 0) &&
      (bVar1 = *(byte *)(lVar4 + _DAT_112feefa0), func_0x000107c61170(), (bVar1 & 1) == 0)) &&
     ((*(byte *)(unaff_x20 + _DAT_112fef038) & 1) == 0)) {
    FUN_103b5c1e8();
  }
  return;
}



/* Entry: 103b5caf8; end: 103b5cb03; -[SCSpotlightPlaybackControlGestureLayerViewController touchesCancelled:withEvent:] */

void FUN_103b5caf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_103b5ebe0(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b5ca1c(param_3,param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b5cb04; end: 103b5cfb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5cb04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong unaff_x20;
  long lVar16;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_98 [24];
  
  uVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar16 = param_3;
  func_0x000107c5bcc0();
  lVar2 = _DAT_112feef38;
  if ((lVar16 == 3) &&
     (lVar16 = *(long *)(unaff_x20 + _DAT_112feeff0),
     func_0x000107c61428(lVar16 + _DAT_112feef38,auStack_98,0,0), *(long *)(lVar16 + lVar2) != 2)) {
    uVar5 = unaff_x20;
    func_0x000107c4e230();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c499b8();
      func_0x000107c61170();
      if (((int)uVar6 != 0) && (func_0x000103b5abac(), (uVar5 & 1) == 0)) {
        return;
      }
    }
    uVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4b8b8(param_3);
    func_0x000107c61170(uVar5);
    uVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b5cfac);
      (*pcVar3)();
    }
    uVar6 = uVar5;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (uVar6 == 0) {
      uVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b5cfb4);
        (*pcVar3)();
      }
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b5cfb0);
      (*pcVar3)();
    }
    uVar14 = param_1;
    uVar15 = param_2;
    func_0x000107c40720(param_1,param_2);
    func_0x000107c61170(unaff_x20);
    func_0x000107c614e8(uVar4);
    puVar7 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c3ee00();
    func_0x000107c61180();
    uVar8 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f1a1b60);
    puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c450d0();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar8);
    if (puVar9 != (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c46db4();
      func_0x000107c6088c(&puStack_d0,0x3fb999999999999a,0x3fb999999999999a);
      func_0x000107c60888(&puStack_d0,0x3fc657184ae74487);
      func_0x000107c532b4(uVar14,uVar15,puVar10);
      func_0x000107c526c0(0,puVar10);
      puStack_d8 = puStack_a8;
      uStack_e0 = uStack_b0;
      uStack_f8 = uStack_c8;
      puStack_100 = puStack_d0;
      puStack_e8 = puStack_b8;
      puStack_f0 = puStack_c0;
      func_0x000107c60884(&puStack_130,&puStack_d0,&puStack_100);
      uStack_c8 = uStack_128;
      puStack_d0 = puStack_130;
      puStack_b8 = (undefined *)uStack_118;
      puStack_c0 = (undefined *)uStack_120;
      puStack_a8 = (undefined *)uStack_108;
      uStack_b0 = uStack_110;
      func_0x000107c5a03c(puVar10);
      func_0x000107c3d89c(uVar6);
      puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar7 = &UNK_1106d8950;
      func_0x000107c613fc(&UNK_1106d8950,0x18,7);
      *(undefined **)(puVar7 + 0x10) = puVar10;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x103b5ea74;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_1000f6b44;
      puStack_b8 = &UNK_1106d8968;
      ppuVar12 = &puStack_d0;
      puStack_a8 = puVar7;
      func_0x000107c60bc4(ppuVar12);
      puVar7 = puStack_a8;
      func_0x000107c61174();
      func_0x000107c61574(puVar7);
      puVar7 = &UNK_1106d89a0;
      func_0x000107c613fc(&UNK_1106d89a0,0x18,7);
      *(undefined **)(puVar7 + 0x10) = puVar10;
      uStack_b0 = 0x103b5ea7c;
      puStack_d0 = puVar1;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_100288f10;
      puStack_b8 = &UNK_1106d89b8;
      ppuVar13 = &puStack_d0;
      puStack_a8 = puVar7;
      func_0x000107c60bc4(ppuVar13);
      puVar7 = puStack_a8;
      func_0x000107c61174(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c3dcd8(0x3fd999999999999a,0,0x3fe0000000000000,0x3fe3333333333333,puVar11);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
    }
    uVar14 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f1a1af0);
    uVar15 = uVar14;
    FUN_103b5bb18(param_1,param_2);
    uVar8 = uVar15;
    func_0x000107c5f9dc();
    func_0x000107c6142c(uVar15);
    func_0x000107c3dd28();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103b5cfb4; end: 103b5d003; -[SCSpotlightPlaybackControlGestureLayerViewController handleDoubleTap:] */

/* WARNING: Possible PIC construction at 0x000103b5cfec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5cff0) */

void FUN_103b5cfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103b5cb04(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b5d004; end: 103b5df93;  */

/* WARNING: Possible PIC construction at 0x000103b5d098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5da54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5da8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5db2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5dbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5df28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5ddf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5dd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b5d164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5dd34) */
/* WARNING: Removing unreachable block (ram,0x000103b5ddfc) */
/* WARNING: Removing unreachable block (ram,0x000103b5de04) */
/* WARNING: Removing unreachable block (ram,0x000103b5dee4) */
/* WARNING: Removing unreachable block (ram,0x000103b5deec) */
/* WARNING: Removing unreachable block (ram,0x000103b5de2c) */
/* WARNING: Removing unreachable block (ram,0x000103b5def4) */
/* WARNING: Removing unreachable block (ram,0x000103b5df04) */
/* WARNING: Removing unreachable block (ram,0x000103b5dbe8) */
/* WARNING: Removing unreachable block (ram,0x000103b5df88) */
/* WARNING: Removing unreachable block (ram,0x000103b5dbf8) */
/* WARNING: Removing unreachable block (ram,0x000103b5db30) */
/* WARNING: Removing unreachable block (ram,0x000103b5db34) */
/* WARNING: Removing unreachable block (ram,0x000103b5db38) */
/* WARNING: Removing unreachable block (ram,0x000103b5dd38) */
/* WARNING: Removing unreachable block (ram,0x000103b5db44) */
/* WARNING: Removing unreachable block (ram,0x000103b5dd50) */
/* WARNING: Removing unreachable block (ram,0x000103b5db6c) */
/* WARNING: Removing unreachable block (ram,0x000103b5dd68) */
/* WARNING: Removing unreachable block (ram,0x000103b5db94) */
/* WARNING: Removing unreachable block (ram,0x000103b5dd70) */
/* WARNING: Removing unreachable block (ram,0x000103b5dd84) */
/* WARNING: Removing unreachable block (ram,0x000103b5df2c) */
/* WARNING: Removing unreachable block (ram,0x000103b5df3c) */
/* WARNING: Removing unreachable block (ram,0x000103b5df5c) */
/* WARNING: Removing unreachable block (ram,0x000103b5df54) */
/* WARNING: Removing unreachable block (ram,0x000103b5df78) */
/* WARNING: Removing unreachable block (ram,0x000103b5dd98) */
/* WARNING: Removing unreachable block (ram,0x000103b5ddb4) */
/* WARNING: Removing unreachable block (ram,0x000103b5ddc4) */
/* WARNING: Removing unreachable block (ram,0x000103b5ded8) */
/* WARNING: Removing unreachable block (ram,0x000103b5df0c) */
/* WARNING: Removing unreachable block (ram,0x000103b5df10) */
/* WARNING: Removing unreachable block (ram,0x000103b5ddd8) */
/* WARNING: Removing unreachable block (ram,0x000103b5ddbc) */
/* WARNING: Removing unreachable block (ram,0x000103b5df18) */
/* WARNING: Removing unreachable block (ram,0x000103b5df24) */
/* WARNING: Removing unreachable block (ram,0x000103b5dbd0) */
/* WARNING: Removing unreachable block (ram,0x000103b5d6b0) */
/* WARNING: Removing unreachable block (ram,0x000103b5d844) */
/* WARNING: Removing unreachable block (ram,0x000103b5d84c) */
/* WARNING: Removing unreachable block (ram,0x000103b5d89c) */
/* WARNING: Removing unreachable block (ram,0x000103b5d8a4) */
/* WARNING: Removing unreachable block (ram,0x000103b5d874) */
/* WARNING: Removing unreachable block (ram,0x000103b5d8ac) */
/* WARNING: Removing unreachable block (ram,0x000103b5d8bc) */
/* WARNING: Removing unreachable block (ram,0x000103b5d564) */
/* WARNING: Removing unreachable block (ram,0x000103b5d568) */
/* WARNING: Removing unreachable block (ram,0x000103b5d5fc) */
/* WARNING: Removing unreachable block (ram,0x000103b5d600) */
/* WARNING: Removing unreachable block (ram,0x000103b5d618) */
/* WARNING: Removing unreachable block (ram,0x000103b5d7c0) */
/* WARNING: Removing unreachable block (ram,0x000103b5d644) */
/* WARNING: Removing unreachable block (ram,0x000103b5d7c8) */
/* WARNING: Removing unreachable block (ram,0x000103b5d698) */
/* WARNING: Removing unreachable block (ram,0x000103b5d578) */
/* WARNING: Removing unreachable block (ram,0x000103b5d0ec) */
/* WARNING: Removing unreachable block (ram,0x000103b5d0c4) */
/* WARNING: Removing unreachable block (ram,0x000103b5d0cc) */
/* WARNING: Removing unreachable block (ram,0x000103b5d134) */
/* WARNING: Removing unreachable block (ram,0x000103b5d0d4) */
/* WARNING: Removing unreachable block (ram,0x000103b5d09c) */
/* WARNING: Removing unreachable block (ram,0x000103b5d168) */
/* WARNING: Removing unreachable block (ram,0x000103b5d804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5d004(long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long alStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c4e230();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c3b9ac(param_3);
      func_0x000107c61180();
      func_0x000107c5faec();
    }
    goto code_r0x000107c61170;
  }
  plVar4 = param_1;
  FUN_103bba034();
  plVar2 = (long *)*plVar4;
  param_3 = unaff_x20;
  if ((plVar2 == param_1 && plVar4[1] == param_2) ||
     (func_0x000107c605b8(plVar2,plVar4[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
    lVar6 = _DAT_112feef38;
    lVar9 = *(long *)(unaff_x20 + _DAT_112feeff0);
    func_0x000107c61428(lVar9 + _DAT_112feef38,&uStack_a0,1,0);
    *(undefined8 *)(lVar9 + lVar6) = 0;
    FUN_103b5b7c0();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef040);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112fef048) = 0;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_3 == 0) {
      if (*(long *)(unaff_x20 + _DAT_112feeff8) == 0) {
        return;
      }
      func_0x000107c54514();
      return;
    }
    uVar3 = 0;
    FUN_103b59610(0);
    lVar6 = param_3;
    func_0x000107c61480(param_3,uVar3);
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + _DAT_112fef050) = 0;
    }
    goto code_r0x000107c61170;
  }
  FUN_103bb5f70();
  plVar4 = (long *)*plVar2;
  if (((plVar4 == param_1) && (plVar2[1] == param_2)) ||
     (func_0x000107c605b8(plVar4,plVar2[1],param_1,param_2,0), ((ulong)plVar4 & 1) != 0)) {
    lVar6 = _DAT_112feef38;
    lVar9 = *(long *)(unaff_x20 + _DAT_112feeff0);
    func_0x000107c61428(lVar9 + _DAT_112feef38,&uStack_a0,1,0);
    *(undefined8 *)(lVar9 + lVar6) = 2;
    FUN_103b5b4c0(1);
    return;
  }
  FUN_103bb5fa8();
  plVar2 = (long *)*plVar4;
  if (((plVar2 != param_1) || (plVar4[1] != param_2)) &&
     (func_0x000107c605b8(plVar2,plVar4[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
    FUN_103bb5f00();
    plVar4 = (long *)*plVar2;
    if (((plVar4 == param_1) && (plVar2[1] == param_2)) ||
       (func_0x000107c605b8(plVar4,plVar2[1],param_1,param_2,0), ((ulong)plVar4 & 1) != 0)) {
      lVar6 = _DAT_112feef38;
      lVar9 = *(long *)(unaff_x20 + _DAT_112feeff0);
      func_0x000107c61428(lVar9 + _DAT_112feef38,&uStack_a0,1,0);
      *(undefined8 *)(lVar9 + lVar6) = 1;
      return;
    }
    FUN_103bb5f38();
    plVar2 = (long *)*plVar4;
    if (((plVar2 != param_1) || (plVar4[1] != param_2)) &&
       (func_0x000107c605b8(plVar2,plVar4[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
      FUN_103bb5fe0();
      plVar5 = (long *)*plVar2;
      if (((plVar5 == param_1) && (plVar2[1] == param_2)) ||
         (func_0x000107c605b8(plVar5,plVar2[1],param_1,param_2,0), ((ulong)plVar5 & 1) != 0)) {
        lVar6 = _DAT_112feef38;
        lVar9 = *(long *)(unaff_x20 + _DAT_112feeff0);
        func_0x000107c61428(lVar9 + _DAT_112feef38,&uStack_a0,0,0);
        if (*(int *)(lVar9 + lVar6) != 1) {
          return;
        }
        FUN_103b5b4c0(0);
        return;
      }
      FUN_103bb6018();
      plVar2 = (long *)*plVar5;
      if (((plVar2 == param_1) && (plVar5[1] == param_2)) ||
         (func_0x000107c605b8(plVar2,plVar5[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
        if (*(long *)(unaff_x20 + _DAT_112fef018) != 0) {
          func_0x000107c526c0(0);
        }
        if ((*(long *)(unaff_x20 + _DAT_112fef010) != 0) &&
           (*(long *)(*(long *)(unaff_x20 + _DAT_112fef010) + _DAT_112feecf8) != 0)) {
          func_0x000107c526c0(0);
        }
        if (*(long *)(unaff_x20 + _DAT_112fef020) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (*(long *)(unaff_x20 + _DAT_112fef020),PTR_s_setHidden__1126479f8,1);
          return;
        }
        return;
      }
      FUN_103bb69ec();
      plVar5 = (long *)*plVar2;
      lVar6 = unaff_x20;
      if (((plVar5 == param_1) && (plVar2[1] == param_2)) ||
         (func_0x000107c605b8(plVar5,plVar2[1],param_1,param_2,0), ((ulong)plVar5 & 1) != 0)) {
        FUN_103b5b4c0(1);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef040);
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        func_0x000107c4e230();
        func_0x000107c61180();
        if (param_3 != 0) {
          func_0x000107c499b8(param_3);
          goto code_r0x000107c61170;
        }
        param_3 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (param_3 != 0) {
          uVar3 = 0;
          FUN_103b59610(0);
          lVar6 = param_3;
          func_0x000107c61480(param_3,uVar3);
          if (lVar6 != 0) {
            func_0x000107c4e230();
            func_0x000107c61180();
            if (unaff_x20 == 0) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
              func_0x00010006e7f4(&uStack_a0);
              *(undefined1 *)(lVar6 + _DAT_112fef050) = 0;
            }
            else {
              func_0x000107c61434(*(undefined8 *)(unaff_x20 + _DAT_11307abc8));
              param_3 = unaff_x20;
            }
          }
          goto code_r0x000107c61170;
        }
        param_3 = *(long *)(unaff_x20 + _DAT_112feeff8);
        if (param_3 != 0) {
          func_0x000107c61174();
          uVar7 = 0;
          FUN_103b5ad08();
          if ((uVar7 & 1) == 0) {
            func_0x000107c609e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
          }
          func_0x000107c54514(param_3);
          goto code_r0x000107c61170;
        }
        param_3 = *(long *)(unaff_x20 + _DAT_112fef008);
        if (param_3 != 0) {
          func_0x000107c61174();
          func_0x000103b5a8f0();
          func_0x000107c54514(param_3);
          goto code_r0x000107c61170;
        }
        func_0x000107c4aba4();
        func_0x000107c61180();
        lVar9 = _DAT_112feef38;
        if (lVar6 == 0) {
          return;
        }
        if ((*(char *)(lVar6 + _DAT_112feef98) == '\x01') &&
           (lVar10 = *(long *)(unaff_x20 + _DAT_112feeff0),
           func_0x000107c61428(lVar10 + _DAT_112feef38,alStack_b8,0,0),
           *(int *)(lVar10 + lVar9) == 2)) goto LAB_103b5da58;
        FUN_103b5c1e8();
        *(undefined1 *)(unaff_x20 + _DAT_112fef038) = 0;
        lVar9 = _DAT_112feef38;
        lVar10 = *(long *)(unaff_x20 + _DAT_112feeff0);
        func_0x000107c61428(lVar10 + _DAT_112feef38,&uStack_a0,1,0);
        if (*(int *)(lVar10 + lVar9) != 2) goto LAB_103b5da58;
        *(undefined8 *)(lVar10 + lVar9) = 0;
        param_3 = -0x2fffffffffffffde;
        func_0x000107c5fadc(0xd000000000000022,0x800000010f1a18a0);
      }
      else {
        FUN_103bb6b44();
        plVar2 = (long *)*plVar5;
        if (((plVar2 == param_1) && (plVar5[1] == param_2)) ||
           (func_0x000107c605b8(plVar2,plVar5[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
          FUN_103b5b4c0(1);
          lVar6 = _DAT_112feef38;
          lVar9 = *(long *)(unaff_x20 + _DAT_112feeff0);
          func_0x000107c61428(lVar9 + _DAT_112feef38,&uStack_a0,1,0);
          if (*(int *)(lVar9 + lVar6) != 1) {
            return;
          }
          goto LAB_103b5d33c;
        }
        FUN_103bba0a4();
        plVar5 = (long *)*plVar2;
        if (((plVar5 != param_1) || (plVar2[1] != param_2)) &&
           (func_0x000107c605b8(plVar5,plVar2[1],param_1,param_2,0), ((ulong)plVar5 & 1) == 0)) {
          FUN_103bb6c64();
          plVar2 = (long *)*plVar5;
          if (((plVar2 != param_1) || (plVar5[1] != param_2)) &&
             (func_0x000107c605b8(plVar2,plVar5[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
            FUN_103b81420();
            plVar4 = (long *)*plVar2;
            if (((plVar4 == param_1) && (plVar2[1] == param_2)) ||
               (func_0x000107c605b8(plVar4,plVar2[1],param_1,param_2,0), ((ulong)plVar4 & 1) != 0))
            {
              func_0x000107c4e230();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                return;
              }
              func_0x000107c499b8();
              param_3 = unaff_x20;
              goto code_r0x000107c61170;
            }
            FUN_103b828b4();
            plVar2 = (long *)*plVar4;
            if (((plVar2 != param_1) || (plVar4[1] != param_2)) &&
               (func_0x000107c605b8(plVar2,plVar4[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0))
            {
              return;
            }
            if ((param_4 == 0) || (FUN_103b828f0(), *(long *)(param_4 + 0x10) == 0)) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
LAB_103b5de60:
              func_0x00010006e7f4(&uStack_a0);
            }
            else {
              lVar6 = *plVar2;
              uVar7 = plVar2[1];
              func_0x000107c61434(param_4);
              func_0x000107c61434(uVar7);
              uVar8 = uVar7;
              func_0x000100029284(lVar6);
              if ((uVar8 & 1) == 0) {
                func_0x000107c6142c(param_4);
                uStack_98 = 0;
                uStack_a0 = 0;
                lStack_88 = 0;
                uStack_90 = 0;
                func_0x000107c6142c(uVar7);
                goto LAB_103b5de60;
              }
              func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar6 * 0x20,&uStack_a0);
              func_0x000107c6142c(uVar7);
              func_0x000107c6142c(param_4);
              if (lStack_88 == 0) goto LAB_103b5de60;
              uVar3 = 0;
              FUN_103b5ebe0(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
              plVar4 = alStack_b8;
              func_0x000107c6147c(plVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar3,6);
              if (((ulong)plVar4 & 1) != 0) {
                func_0x000107c3ab38(alStack_b8[0]);
                param_3 = alStack_b8[0];
                goto code_r0x000107c61170;
              }
            }
            puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef040);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            lVar6 = *(long *)(unaff_x20 + _DAT_112feeff8);
            if (lVar6 == 0) {
              return;
            }
            func_0x000107c61174();
            uVar7 = 0;
            FUN_103b5ad08();
            if ((uVar7 & 1) == 0) {
              func_0x000107c609e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
            }
            func_0x000107c54514(lVar6);
            goto LAB_103b5da58;
          }
        }
        lVar9 = _DAT_112feef38;
        lVar10 = *(long *)(unaff_x20 + _DAT_112feeff0);
        func_0x000107c61428(lVar10 + _DAT_112feef38,&uStack_a0,0,0);
        if (*(int *)(lVar10 + lVar9) == 1) {
          FUN_103b5b4c0(0);
        }
        func_0x000107c4aba4();
        func_0x000107c61180();
        if (lVar6 == 0) {
          return;
        }
        if ((*(char *)(lVar6 + _DAT_112feefb0) == '\x01') &&
           (param_3 = *(long *)(unaff_x20 + _DAT_112feeff8), param_3 != 0)) {
          func_0x000107c61174();
          uVar7 = 0;
          FUN_103b5ad08();
          if ((uVar7 & 1) == 0) {
            puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef040);
            func_0x000107c609e0(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
          }
          func_0x000107c54514(param_3);
          goto code_r0x000107c61170;
        }
        if (*(char *)(lVar6 + _DAT_112feefa8) != '\x01') {
LAB_103b5da58:
          func_0x000107c61170(lVar6);
          return;
        }
        param_3 = *plVar4;
        lVar6 = plVar4[1];
        func_0x000107c61434(lVar6);
        func_0x000107c5fadc(param_3,lVar6);
        func_0x000107c6142c(lVar6);
      }
      func_0x000107c3dd24();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
  lVar6 = _DAT_112feef38;
  lVar9 = *(long *)(unaff_x20 + _DAT_112feeff0);
  func_0x000107c61428(lVar9 + _DAT_112feef38,&uStack_a0,1,0);
LAB_103b5d33c:
  *(undefined8 *)(lVar9 + lVar6) = 0;
  return;
}



/* Entry: 103b5df94; end: 103b5e04f; -[SCSpotlightPlaybackControlGestureLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000103b5e034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5e038) */

void FUN_103b5df94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b5d004(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b5e050; end: 103b5e0ff; -[SCSpotlightPlaybackControlGestureLayerViewController gestureRecognizer:shouldReceiveTouch:] */

uint FUN_103b5e050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c4b8b8(param_6,param_4,uVar1);
  func_0x000107c61170(uVar1);
  uVar1 = param_5;
  func_0x000103b5b9bc(param_1,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103b5e100; end: 103b5e21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103b5e100(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = _DAT_112fef008;
  lVar4 = *(long *)(unaff_x20 + _DAT_112feeff8);
  lVar3 = *(long *)(unaff_x20 + _DAT_112fef000);
  lVar5 = *(long *)(unaff_x20 + _DAT_112fef008);
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  lStack_58 = lVar5;
  if (((lVar4 == 0 || param_2 != lVar4) && (lVar3 == 0 || param_2 != lVar3)) &&
     (lVar5 == 0 || param_2 != lVar5)) {
    func_0x000107c61174(lVar4);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar5);
    uVar2 = 0x112f55d60;
    func_0x0001000285a8(0x112f55d60,&UNK_10dbacfc8);
    func_0x000107c61408(&lStack_68,3,uVar2);
    if (*(long *)(unaff_x20 + lVar1) != 0) {
      return param_1 == *(long *)(unaff_x20 + lVar1);
    }
  }
  else {
    func_0x000107c61174(lVar5);
    func_0x000107c61174(lVar4);
    func_0x000107c61174(lVar3);
    uVar2 = 0x112f55d60;
    func_0x0001000285a8(0x112f55d60,&UNK_10dbacfc8);
    func_0x000107c61408(&lStack_68,3,uVar2);
  }
  return false;
}



/* Entry: 103b5e220; end: 103b5e297; -[SCSpotlightPlaybackControlGestureLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_103b5e220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b5e100(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103b5e298; end: 103b5e403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b5e298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar2 = _DAT_112feeff0;
  uVar3 = 0;
  FUN_103b58fc4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112feeff8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef008) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef010) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef018) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef020) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef028) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef030);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112fef038) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef040);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fef048) = 0;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithConfiguration_layerViewC_1125de030,
                      param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar4);
  }
  return puVar4;
}



/* Entry: 103b5e404; end: 103b5e5cb; -[SCSpotlightPlaybackControlGestureLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_103b5e404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  FUN_103b5e298(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103b5e5cc; end: 103b5e753; -[SCSpotlightPlaybackControlGestureLayerViewController initWithNibName:bundle:] */

void FUN_103b5e5cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  func_0x000103b5e478(param_3,param_2,param_4);
  return;
}



/* Entry: 103b5e754; end: 103b5e77b; -[SCSpotlightPlaybackControlGestureLayerViewController initWithCoder:] */

void FUN_103b5e754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000103b5e62c();
  return;
}



/* Entry: 103b5e77c; end: 103b5e853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5e77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  code *pcVar3;
  
  func_0x000107c614f0();
  if ((*(byte *)(unaff_x20 + _DAT_112fef050) & 1) == 0) {
    pcVar3 = *(code **)(unaff_x20 + _DAT_112feefe8);
    if (pcVar3 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112feefe8))[1];
      uVar1 = uVar2;
      func_0x000107c6157c();
      (*pcVar3)(param_1,param_2);
      func_0x000103b5ea40(pcVar3,uVar2);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    func_0x000107c61154(param_1,param_2,&stack0xffffffffffffffa0,PTR_s_hitTest_withEvent__1125d6850,
                        param_3);
    func_0x000107c61180();
  }
  return;
}



/* Entry: 103b5e854; end: 103b5e8cb; -[_TtC23SCContextSpotlightSwiftP33_CB678240E65CE5BF264B41A8527E1DA425SpotlightGestureLayerView hitTest:withEvent:] */

void FUN_103b5e854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_103b5e77c(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 103b5e8cc; end: 103b5e953; -[_TtC23SCContextSpotlightSwiftP33_CB678240E65CE5BF264B41A8527E1DA425SpotlightGestureLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5e8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_5;
  func_0x000107c614f0();
  *(undefined1 *)(param_5 + _DAT_112fef050) = 0;
  puVar1 = (undefined8 *)(param_5 + _DAT_112feefe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = param_5;
  lStack_48 = lVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 103b5e954; end: 103b5e9ef; -[_TtC23SCContextSpotlightSwiftP33_CB678240E65CE5BF264B41A8527E1DA425SpotlightGestureLayerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b5e954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar3 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112fef050) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112feefe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar4 != (long *)0x0) {
    func_0x000107c61170(plVar4);
  }
  return (undefined1 *)plVar4;
}



/* Entry: 103b5e9f0; end: 103b5ea23;  */

void FUN_103b5e9f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b5ea24; end: 103b5ea9f; -[_TtC23SCContextSpotlightSwiftP33_CB678240E65CE5BF264B41A8527E1DA425SpotlightGestureLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5ea24(long param_1)

{
  if (*(long *)(param_1 + _DAT_112feefe8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112feefe8))[1]);
    return;
  }
  return;
}



/* Entry: 103b5eaa0; end: 103b5ebd3;  */

long FUN_103b5eaa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000020;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f1a1700;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  uVar3 = 0;
  FUN_103b5ebe0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined **)(lVar1 + 0x30) = puVar2;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x50) = 0xd000000000000020;
  *(undefined8 *)(lVar1 + 0x58) = 0x800000010f1a16d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_2);
  *(undefined8 *)(lVar1 + 0x78) = uVar3;
  *(undefined **)(lVar1 + 0x60) = puVar2;
  lVar4 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  uVar3 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),2,uVar3);
  return lVar4;
}



/* Entry: 103b5ebd4; end: 103b5ebdf;  */

void FUN_103b5ebd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c526c0(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6088c(auStack_60,uVar2,uVar2);
  func_0x000107c5a03c(uVar1,param_2,auStack_60);
  return;
}



/* Entry: 103b5ebe0; end: 103b5ec1f;  */

void FUN_103b5ebe0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b5ec20; end: 103b5ec4b;  */

void FUN_103b5ec20(long param_1,long param_2)

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



/* Entry: 103b5ec4c; end: 103b5ede3;  */

undefined1  [16] FUN_103b5ec4c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe2;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f1a1650);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f1a1bd0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5ed18);
  (*pcVar1)();
}



/* Entry: 103b5ede4; end: 103b5f287;  */

void FUN_103b5ede4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103b5f288; end: 103b5f297; -[_TtC34SCPremiumStoryShareSendingServices34SCPremiumStoryShareSendingServices premiumStoryShareSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef210));
  return;
}



/* Entry: 103b5f298; end: 103b5f2a7; -[_TtC34SCPremiumStoryShareSendingServices34SCPremiumStoryShareSendingServices premiumStoryConversationResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef218));
  return;
}



/* Entry: 103b5f2a8; end: 103b5f30b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f2a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef210) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fef218) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5f30c; end: 103b5f36b; -[_TtC34SCPremiumStoryShareSendingServices34SCPremiumStoryShareSendingServices init] */

void FUN_103b5f30c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPremiumStoryShareSendingServices.SCPremiumStoryShareSendingServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5f338);
  (*pcVar1)();
}



/* Entry: 103b5f36c; end: 103b5f3a3; -[_TtC34SCPremiumStoryShareSendingServices34SCPremiumStoryShareSendingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b5f388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5f38c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f36c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fef210));
  return;
}



/* Entry: 103b5f3a4; end: 103b5f3ef; -[SCPremiumStoryShareModel compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f3a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fef248);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fef248))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b5f3f0; end: 103b5f3fb; -[SCPremiumStoryShareModel snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f3f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef250))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef250);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b5f3fc; end: 103b5f40b; -[SCPremiumStoryShareModel overrideTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b5f3fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fef258);
}



/* Entry: 103b5f40c; end: 103b5f417; -[SCPremiumStoryShareModel additionalText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f40c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fef260))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fef260);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b5f418; end: 103b5f46f;  */

void FUN_103b5f418(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b5f470; end: 103b5f48f; -[SCPremiumStoryShareModel media] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f470(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fef268));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b5f490; end: 103b5f49f; -[SCPremiumStoryShareModel mediaMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fef270));
  return;
}



/* Entry: 103b5f4a0; end: 103b5f647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef248);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef250);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fef258) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef260);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fef268) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fef270) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5f648; end: 103b5f76b; -[SCPremiumStoryShareModel initWithCompositeStoryId:snapId:overrideTimestamp:additionalText:media:mediaMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f648(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_4 == 0) {
    lVar6 = 0;
    lVar5 = param_2;
  }
  else {
    lVar6 = param_2;
    func_0x000107c5faec();
    lVar5 = lVar6;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef248);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112fef250);
  *plVar2 = param_4;
  plVar2[1] = lVar6;
  *(undefined8 *)(param_1 + _DAT_112fef258) = param_5;
  plVar2 = (long *)(param_1 + _DAT_112fef260);
  *plVar2 = param_6;
  plVar2[1] = lVar5;
  *(undefined8 *)(param_1 + _DAT_112fef268) = param_7;
  *(undefined8 *)(param_1 + _DAT_112fef270) = param_8;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61154(&lStack_70,puVar3);
  return;
}



/* Entry: 103b5f76c; end: 103b5f8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b5f76c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_a0;
  func_0x000107c610f8();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef248);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef250);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  *(undefined8 *)(unaff_x20 + _DAT_112fef258) = param_1[4];
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef260);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_78 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_112fef268) = uStack_78;
  uStack_80 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_112fef270) = uStack_80;
  func_0x000100402194(&uStack_50,auStack_90);
  FUN_103b5f8c0(&uStack_60,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b5f8c0(&uStack_70,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_103b5f8c0(&uStack_78,auStack_90,0x112fef278,&UNK_10dc59288);
  FUN_103b5f8c0(&uStack_80,auStack_90,0x112fef280,&UNK_10dc59290);
  func_0x000107c61154(auStack_a0,PTR_s_init_1125d9248);
  func_0x000103b5f908(param_1);
  return puVar2;
}



/* Entry: 103b5f8c0; end: 103b5f93b;  */

undefined8 FUN_103b5f8c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103b5f93c; end: 103b5f93f; -[SCPremiumStoryShareModel copyWithZone:] */

void FUN_103b5f93c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b5f940; end: 103b5f973; -[SCPremiumStoryShareModel description] */

void FUN_103b5f940(void)

{
  undefined1 auStack_58 [72];
  
  FUN_103b5fa64(auStack_58);
  func_0x000103b5f908(auStack_58);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b5f974; end: 103b5f9ef; -[SCPremiumStoryShareModel init] */

void FUN_103b5f974(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCPremiumStoryShareSendingServices/SCPremiumStoryShareModelWrapper.swift",
                      0x48,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5f9bc);
  (*pcVar1)();
}



/* Entry: 103b5f9f0; end: 103b5fa63; -[SCPremiumStoryShareModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5f9f0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef248 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef250 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef260 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fef268));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fef270));
  return;
}



/* Entry: 103b5fa64; end: 103b5fb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fa64(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = ((undefined8 *)(param_2 + _DAT_112fef248))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_112fef250);
  uVar4 = *(undefined8 *)(param_2 + _DAT_112fef258);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112fef268);
  uVar6 = *(undefined8 *)(param_2 + _DAT_112fef270);
  puVar2 = (undefined8 *)(param_2 + _DAT_112fef260);
  *param_1 = *(undefined8 *)(param_2 + _DAT_112fef248);
  param_1[1] = uVar3;
  uVar7 = puVar1[1];
  uVar8 = *puVar1;
  param_1[3] = puVar1[1];
  param_1[2] = uVar8;
  param_1[4] = uVar4;
  uVar4 = puVar2[1];
  uVar8 = *puVar2;
  param_1[6] = puVar2[1];
  param_1[5] = uVar8;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar4);
  func_0x000107c615f0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar6);
  return;
}



/* Entry: 103b5fb18; end: 103b5fb37;  */

void FUN_103b5fb18(void)

{
  func_0x000107c61168(&PTR_PTR_112931288);
  return;
}



/* Entry: 103b5fb38; end: 103b5fb83; -[SCPremiumStoryShareRecipient recipientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fb38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fef2b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fef2b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b5fb84; end: 103b5fbd7; -[SCPremiumStoryShareRecipient groupParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fb84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112fef2b8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b5fbd8; end: 103b5fbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef2b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fef2b8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5fbdc; end: 103b5fc7b; -[SCPremiumStoryShareRecipient initWithRecipientId:groupParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fbdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef2b0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(long *)(param_1 + _DAT_112fef2b8) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5fc7c; end: 103b5fce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef2b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fef2b8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5fce8; end: 103b5fceb; -[SCPremiumStoryShareRecipient copyWithZone:] */

void FUN_103b5fce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b5fcec; end: 103b5fd07; -[SCPremiumStoryShareRecipient description] */

void FUN_103b5fcec(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b5fd08; end: 103b5fd83; -[SCPremiumStoryShareRecipient init] */

void FUN_103b5fd08(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCPremiumStoryShareSendingServices/SCPremiumStoryShareRecipientWrapper.swift"
                      ,0x4c,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5fd50);
  (*pcVar1)();
}



/* Entry: 103b5fd84; end: 103b5fdbf; -[SCPremiumStoryShareRecipient .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b5fda4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b5fda8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fd84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fef2b0 + 8))
  ;
  return;
}



/* Entry: 103b5fdc0; end: 103b5fddf;  */

void FUN_103b5fdc0(void)

{
  func_0x000107c61168(&PTR_PTR_112931378);
  return;
}



/* Entry: 103b5fde0; end: 103b5fde3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fde0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef2b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fef2b8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5fde4; end: 103b5fe2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fde4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef2e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b5fe30; end: 103b5fe8f; -[_TtC32SCAdsSnapDocOperaPageResolverApi43SCCameraAttachmentOperaPageResolverServices init] */

void FUN_103b5fe30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdsSnapDocOperaPageResolverApi.SCCameraAttachmentOperaPageResolverServices"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b5fe5c);
  (*pcVar1)();
}



/* Entry: 103b5fe90; end: 103b5fea3; -[_TtC32SCAdsSnapDocOperaPageResolverApi43SCCameraAttachmentOperaPageResolverServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b5fe90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fef2e8));
  return;
}



/* Entry: 103b5fea4; end: 103b60147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b5fea4(undefined *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  double dVar8;
  undefined1 auStack_60 [8];
  
  puVar7 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef318) = 0;
  *(undefined **)(unaff_x20 + _DAT_112fef320) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar4 = _DAT_112fef328;
  uVar2 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef330);
  *puVar1 = 0x103b5fea0;
  puVar1[1] = 0;
  lVar4 = _DAT_112fef338;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100725510();
  *(undefined **)(unaff_x20 + lVar4) = puVar3;
  lVar4 = _DAT_112fef340;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar2;
  puVar3 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112fef348) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fef350) = param_3;
  if (param_2 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112fef358) = 1;
    *(undefined8 *)(unaff_x20 + _DAT_112fef360) = 2;
    *(undefined8 *)(unaff_x20 + _DAT_112fef368) = 10;
    func_0x000107c615f0(param_3);
    func_0x000107c61174(puVar3);
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_2);
    func_0x000107c61174(puVar3);
    lVar4 = param_2;
    func_0x000108f495a0();
    *(long *)(unaff_x20 + _DAT_112fef358) = lVar4;
    lVar4 = param_2;
    func_0x000108f495c8();
    *(long *)(unaff_x20 + _DAT_112fef360) = lVar4;
    lVar4 = param_2;
    func_0x000108f495f0();
    func_0x000107c615e8(param_2);
    *(long *)(unaff_x20 + _DAT_112fef368) = lVar4;
  }
  dVar8 = (double)param_4;
  if (param_4 < 1) {
    dVar8 = 604800.0;
  }
  *(double *)(unaff_x20 + _DAT_112fef370) = dVar8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar3 == (undefined *)0x0) {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001024a2fc0();
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar6;
  }
  else {
    puVar6 = puVar3;
    func_0x000107c61174();
    puVar5 = puVar6;
    FUN_103b6499c();
    func_0x000107c61170(puVar6);
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar5;
    func_0x000107c61174();
    puVar5 = puVar6;
    func_0x000103b650e0();
    func_0x000107c61170(puVar6);
  }
  *(undefined **)(unaff_x20 + _DAT_112fef380) = puVar5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_2);
  return puVar7;
}



/* Entry: 103b60148; end: 103b60197;  */

undefined8 FUN_103b60148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103b61a50();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_2);
  return uVar1;
}



/* Entry: 103b60198; end: 103b606a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b60198(undefined *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  double dVar7;
  undefined1 auStack_60 [8];
  
  puVar6 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef318) = 0;
  *(undefined **)(unaff_x20 + _DAT_112fef320) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar4 = _DAT_112fef328;
  uVar2 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef330);
  *puVar1 = 0x103b5fea0;
  puVar1[1] = 0;
  lVar4 = _DAT_112fef338;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100725510();
  *(undefined **)(unaff_x20 + lVar4) = puVar3;
  lVar4 = _DAT_112fef340;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar2;
  *(undefined **)(unaff_x20 + _DAT_112fef348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fef350) = param_3;
  if (param_2 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112fef358) = 1;
    *(undefined8 *)(unaff_x20 + _DAT_112fef360) = 2;
    *(undefined8 *)(unaff_x20 + _DAT_112fef368) = 10;
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_2);
    func_0x000107c61174(param_1);
    lVar4 = param_2;
    func_0x000108f495a0();
    *(long *)(unaff_x20 + _DAT_112fef358) = lVar4;
    lVar4 = param_2;
    func_0x000108f495c8();
    *(long *)(unaff_x20 + _DAT_112fef360) = lVar4;
    lVar4 = param_2;
    func_0x000108f495f0();
    func_0x000107c615e8(param_2);
    *(long *)(unaff_x20 + _DAT_112fef368) = lVar4;
  }
  dVar7 = (double)param_4;
  if (param_4 < 1) {
    dVar7 = 604800.0;
  }
  *(double *)(unaff_x20 + _DAT_112fef370) = dVar7;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == (undefined *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001024a2fc0();
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar5;
  }
  else {
    func_0x000107c61174();
    puVar3 = param_1;
    FUN_103b6499c();
    func_0x000107c61170(param_1);
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar3;
    func_0x000107c61174();
    puVar3 = param_1;
    func_0x000103b650e0();
    func_0x000107c61170(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_112fef380) = puVar3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_2);
  return puVar6;
}



/* Entry: 103b606a8; end: 103b608c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b606a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  double dVar7;
  undefined1 auStack_70 [8];
  
  puVar6 = auStack_70;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef318) = 0;
  *(undefined **)(unaff_x20 + _DAT_112fef320) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_112fef328;
  uVar3 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef330);
  *puVar1 = 0x103b5fea0;
  puVar1[1] = 0;
  lVar2 = _DAT_112fef338;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100725510();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112fef340;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined **)(unaff_x20 + _DAT_112fef348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fef350) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fef358) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fef360) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fef368) = param_5;
  dVar7 = (double)param_6;
  if (param_6 < 1) {
    dVar7 = 604800.0;
  }
  *(double *)(unaff_x20 + _DAT_112fef370) = dVar7;
  if (param_1 == (undefined *)0x0) {
    func_0x000107c615f0(param_2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001024a2fc0();
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar5;
  }
  else {
    func_0x000107c615f0(param_2);
    func_0x000107c61174();
    func_0x000107c61174();
    puVar4 = param_1;
    FUN_103b6499c();
    func_0x000107c61170(param_1);
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar4;
    func_0x000107c61174();
    puVar4 = param_1;
    func_0x000103b650e0();
    func_0x000107c61170(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_112fef380) = puVar4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar6;
}



/* Entry: 103b608c4; end: 103b6135b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103b608c4(double param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  ulong auStack_100 [2];
  undefined1 auStack_f0 [32];
  undefined *apuStack_d0 [2];
  undefined1 auStack_a0 [32];
  
  lVar2 = 0;
  auStack_100[0] = param_2;
  auStack_100[1] = param_3;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = (long)auStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f854();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar17 = (undefined8 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uVar4 = 0;
  func_0x0001000295c4();
  func_0x000107c5ffdc();
  *puVar17 = uVar4;
  (**(code **)(lVar15 + 0x68))
            (puVar17,*(undefined4 *)
                      PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_11034f8c0
             ,lVar3);
  puVar5 = puVar17;
  func_0x000107c5f860();
  (**(code **)(lVar15 + 8))(puVar17,lVar3);
  lVar3 = _DAT_112fef320;
  if (((ulong)puVar5 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b60e60);
    (*pcVar1)();
  }
  func_0x000107c61428(unaff_x20 + _DAT_112fef320,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000107c61434(uVar4);
  uVar6 = param_4;
  func_0x0001000f66f0(param_4,param_5,uVar4);
  func_0x000107c6142c(uVar4);
  if ((uVar6 & 1) == 0) {
    pcVar1 = *(code **)(unaff_x20 + _DAT_112fef330);
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112fef330))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar1)(lVar16);
    func_0x000107c61574(uVar4);
    func_0x000107c5ee8c();
    (**(code **)(lVar14 + 8))(lVar16,lVar2);
    lVar3 = _DAT_112fef378;
    if ((0 < *(long *)(unaff_x20 + _DAT_112fef360)) &&
       (*(long *)(unaff_x20 + _DAT_112fef360) <= *(long *)(unaff_x20 + _DAT_112fef318))) {
      uVar4 = 0x737365735f726570;
      uVar12 = 0xeb000000006e6f69;
LAB_103b60e2c:
      FUN_103b6871c(uVar4,uVar12);
      return 1;
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112fef358);
    if (0 < lVar2) {
      func_0x000107c61428(unaff_x20 + _DAT_112fef378,apuStack_d0,0x20,0);
      lVar3 = *(long *)(unaff_x20 + lVar3);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(lVar3 + 0x10) != 0) {
        func_0x000107c61434(lVar3);
        uVar6 = auStack_100[0];
        uVar10 = auStack_100[1];
        func_0x000100029284();
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((uVar10 & 1) != 0) {
          puVar13 = *(undefined **)(*(long *)(lVar3 + 0x38) + uVar6 * 8);
          func_0x000107c61434(puVar13);
        }
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c614a8(apuStack_d0);
      lVar3 = *(long *)(puVar13 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar3 != 0) {
        pdVar18 = (double *)(puVar13 + 0x20);
        do {
          dVar19 = *pdVar18;
          if (param_1 + -86400.0 <= dVar19) {
            puVar7 = puVar8;
            func_0x000107c61558();
            apuStack_d0[0] = puVar8;
            if (((ulong)puVar7 & 1) == 0) {
              func_0x00010134166c(0,*(long *)(puVar8 + 0x10) + 1,1);
            }
            uVar6 = *(ulong *)(apuStack_d0[0] + 0x10);
            if (*(ulong *)(apuStack_d0[0] + 0x18) >> 1 <= uVar6) {
              func_0x00010134166c(1 < *(ulong *)(apuStack_d0[0] + 0x18),uVar6 + 1,1);
            }
            *(ulong *)(apuStack_d0[0] + 0x10) = uVar6 + 1;
            *(double *)(apuStack_d0[0] + uVar6 * 8 + 0x20) = dVar19;
            puVar8 = apuStack_d0[0];
          }
          lVar3 = lVar3 + -1;
          pdVar18 = pdVar18 + 1;
        } while (lVar3 != 0);
      }
      func_0x000107c6142c(puVar13);
      lVar3 = *(long *)(puVar8 + 0x10);
      func_0x000107c61574(puVar8);
      if (lVar2 <= lVar3) {
        uVar4 = 0x616572635f726570;
        uVar12 = 0xeb00000000726f74;
        goto LAB_103b60e2c;
      }
    }
    lVar3 = _DAT_112fef380;
    lVar2 = *(long *)(unaff_x20 + _DAT_112fef368);
    if (0 < lVar2) {
      dVar19 = *(double *)(unaff_x20 + _DAT_112fef370);
      func_0x000107c61428(unaff_x20 + _DAT_112fef380,auStack_f0,0,0);
      lVar14 = *(long *)(unaff_x20 + lVar3);
      lVar3 = *(long *)(lVar14 + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar3 != 0) {
        func_0x000107c61434(lVar14);
        lVar15 = 0x20;
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          dVar20 = *(double *)(lVar14 + lVar15);
          if (param_1 - dVar19 <= dVar20) {
            puVar8 = puVar13;
            func_0x000107c61558();
            apuStack_d0[0] = puVar13;
            if (((ulong)puVar8 & 1) == 0) {
              func_0x00010134166c(0,*(long *)(puVar13 + 0x10) + 1,1);
            }
            uVar6 = *(ulong *)(apuStack_d0[0] + 0x10);
            if (*(ulong *)(apuStack_d0[0] + 0x18) >> 1 <= uVar6) {
              func_0x00010134166c(1 < *(ulong *)(apuStack_d0[0] + 0x18),uVar6 + 1,1);
            }
            *(ulong *)(apuStack_d0[0] + 0x10) = uVar6 + 1;
            *(double *)(apuStack_d0[0] + uVar6 * 8 + 0x20) = dVar20;
            puVar13 = apuStack_d0[0];
          }
          lVar15 = lVar15 + 8;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        func_0x000107c6142c(lVar14);
      }
      lVar3 = *(long *)(puVar13 + 0x10);
      func_0x000107c61574(puVar13);
      if (lVar2 <= lVar3) {
        uVar4 = 0x626f6c675f726570;
        uVar12 = 0xea00000000006c61;
        goto LAB_103b60e2c;
      }
    }
    uVar10 = auStack_100[1];
    uVar6 = auStack_100[0];
    lVar3 = *(long *)(unaff_x20 + _DAT_112fef350);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c614f0(lVar3);
      uVar9 = uVar6;
      uVar11 = uVar10;
      FUN_103fd810c(uVar6,uVar10,lVar2);
      if (((uint)uVar11 & 0xff) != 1 && (uVar9 & 0xffffffff) != 0) {
        uVar4 = 0x67696c655f746f6e;
        uVar12 = 0xec000000656c6269;
        goto LAB_103b60e2c;
      }
      func_0x000107c615f0(lVar3);
      func_0x000100087bd4(FUN_103b61cdc,apuStack_d0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar3);
    }
    func_0x000103b60e60(param_1,uVar6,uVar10,param_4,param_5);
  }
  return 0;
}



/* Entry: 103b6135c; end: 103b613eb; -[_TtC26SCFanPassUpsellOperaPlugin29FanPassUpsellFrequencyManager shouldSkipFanPassPlaceholdersForCreatorId:storyGroupId:] */

uint FUN_103b6135c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_103b608c4(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 103b613ec; end: 103b615c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b613ec(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112fef338;
  func_0x000107c61428(param_1 + _DAT_112fef338,auStack_68,0x20,0);
  lVar8 = *(long *)(param_1 + lVar1);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar2 = param_2;
    uVar6 = param_3;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
      func_0x000107c6157c(uVar9);
      func_0x000107c614a8(auStack_68);
      func_0x000107c61574(uVar9);
      func_0x000107c6142c(lVar8);
      return;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_68);
  puVar3 = &UNK_1106d8de8;
  func_0x000107c613fc(&UNK_1106d8de8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  puVar4 = &UNK_1106d8e10;
  func_0x000107c613fc(&UNK_1106d8e10,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(long *)(puVar4 + 0x18) = param_2;
  *(ulong *)(puVar4 + 0x20) = param_3;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  func_0x000107c615f0(param_4);
  func_0x000107c61434(param_3);
  uVar9 = 1;
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10dc59388,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61428(param_1 + lVar1,auStack_68,0x21,0);
  func_0x000107c61434(param_3);
  func_0x000107c6157c(uVar9);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61558(uVar5);
  uVar7 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
  func_0x000102768548(uVar9,param_2,param_3,uVar5);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(param_1 + lVar1) = uVar7;
  func_0x000107c614a8(auStack_68);
  func_0x000107c61574(uVar9);
  return;
}



/* Entry: 103b615c4; end: 103b615df;  */

void FUN_103b615c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103b615e0,0,0);
  return;
}



/* Entry: 103b615e0; end: 103b6169f;  */

void FUN_103b615e0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x22 + 200));
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar1;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103b616a0;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  uVar1 = 0x112ecdf38;
  func_0x0001000285a8(0x112ecdf38,&UNK_10db9f430);
  *(undefined **)(unaff_x22 + 0x78) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x88) = &UNK_10293521c;
  *(undefined **)(unaff_x22 + 0x90) = &UNK_1106d8e28;
  *(long *)(unaff_x22 + 0x98) = lVar2;
  func_0x000107c49ccc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103b616a0; end: 103b616df;  */

void FUN_103b616a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103b616e0,0,0);
  return;
}



/* Entry: 103b616e0; end: 103b61797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b616e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112fef340);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar3);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
    func_0x000100087bd4(FUN_103b61de4,unaff_x22 + 0x50,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000103b61794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103b61798; end: 103b61847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b61798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112fef338,auStack_70,0x21,0);
    func_0x0001027617d4(param_2,param_3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103b61848; end: 103b61943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b61848(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  func_0x000107c5f854();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = (undefined8 *)((long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar3 = 0;
  func_0x0001000295c4();
  func_0x000107c5ffdc();
  *puVar5 = uVar3;
  (**(code **)(lVar6 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___s8Dispatch0A9PredicateO7onQueueyACSo17OS_dispatch_queueCcACmFWC_11034f8c0
             ,lVar2);
  puVar4 = puVar5;
  func_0x000107c5f860();
  (**(code **)(lVar6 + 8))(puVar5,lVar2);
  if (((ulong)puVar4 & 1) != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112fef318) = 0;
    lVar2 = _DAT_112fef320;
    func_0x000107c61428(unaff_x20 + _DAT_112fef320,auStack_58,1,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x000107c6142c(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b61944);
  (*pcVar1)();
}



/* Entry: 103b61944; end: 103b619a3; -[_TtC26SCFanPassUpsellOperaPlugin29FanPassUpsellFrequencyManager init] */

void FUN_103b61944(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCFanPassUpsellOperaPlugin.FanPassUpsellFrequencyManager",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b61970);
  (*pcVar1)();
}



/* Entry: 103b619a4; end: 103b61a4f; -[_TtC26SCFanPassUpsellOperaPlugin29FanPassUpsellFrequencyManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b61a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b61a14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b619a4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fef350));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fef348));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef378));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef380));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef320));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef328));
  return;
}


