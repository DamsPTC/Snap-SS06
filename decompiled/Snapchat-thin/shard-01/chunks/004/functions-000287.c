/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101009f00; end: 101009f97;  */

void FUN_101009f00(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  func_0x0001000285a8(0x112d53328,&UNK_10d919ad0);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x30,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101009f98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101009f98; end: 101009fdb;  */

void FUN_101009f98(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101009fdc,*(undefined8 *)(lVar1 + 0x78),*(undefined8 *)(lVar1 + 0x80));
  return;
}



/* Entry: 101009fdc; end: 10100a233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101009fdc(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x22;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x10);
  uVar4 = *(ulong *)(unaff_x22 + 0x18);
  if (uVar4 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
    func_0x000107c61574(uVar8);
  }
  else {
    uVar3 = *(ulong *)(unaff_x22 + 0x20);
    uVar5 = *(ulong *)(unaff_x22 + 0x28);
    uVar7 = *(long *)(unaff_x22 + 0x50) + 0x10;
    func_0x000107c61618();
    if (uVar7 == 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
      func_0x000107c6142c(uVar4);
    }
    else {
      uVar14 = uVar7;
      func_0x000107c5fd5c();
      if ((uVar14 & 1) == 0) {
        lVar15 = *(long *)(uVar7 + _DAT_112d54480);
        uVar14 = *(ulong *)(lVar15 + 0x10);
        if (uVar14 != 0) {
          if ((uVar5 != 0) &&
             (uVar12 = *(ulong *)(uVar7 + _DAT_112d54488),
             (char)((ulong *)(uVar7 + _DAT_112d54488))[1] != '\x01' && uVar12 < uVar14)) {
            lVar13 = lVar15 + uVar12 * 0x58;
            uVar12 = *(ulong *)(lVar13 + 0x20);
            uVar9 = *(ulong *)(lVar13 + 0x28);
            if ((uVar12 != uVar3 || uVar5 != uVar9) &&
               (func_0x000107c605b8(uVar12,uVar9,uVar3,uVar5,0), (uVar12 & 1) == 0)) {
LAB_10100a184:
              func_0x000107c6142c(uVar4);
              func_0x000107c6142c(uVar5);
              puVar1 = (ulong *)(uVar7 + _DAT_112d54498);
              uVar14 = *puVar1;
              uVar9 = puVar1[1];
              uVar12 = puVar1[2];
              uVar11 = puVar1[3];
              puVar1[1] = 0;
              *puVar1 = 0;
              puVar1[3] = 0;
              puVar1[2] = 0;
              goto LAB_10100a1d0;
            }
          }
          uVar12 = 0;
          pbVar16 = (byte *)(lVar15 + 0x70);
          do {
            if (uVar14 == uVar12) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10100a234);
              (*pcVar6)();
            }
            if ((*pbVar16 & 1) == 0) {
              uVar9 = *(ulong *)(pbVar16 + -0x50);
              if ((uVar9 == uVar2 && uVar4 == *(ulong *)(pbVar16 + -0x48)) ||
                 (func_0x000107c605b8(uVar9,*(ulong *)(pbVar16 + -0x48),uVar2,uVar4,0),
                 (uVar9 & 1) != 0)) {
                FUN_10100894c(uVar12,1);
                goto LAB_10100a184;
              }
            }
            uVar12 = uVar12 + 1;
            pbVar16 = pbVar16 + 0x58;
          } while (uVar14 != uVar12);
        }
        puVar1 = (ulong *)(uVar7 + _DAT_112d54498);
        uVar14 = *puVar1;
        uVar9 = puVar1[1];
        uVar12 = puVar1[2];
        uVar11 = puVar1[3];
        *puVar1 = uVar2;
        puVar1[1] = uVar4;
        puVar1[2] = uVar3;
        puVar1[3] = uVar5;
LAB_10100a1d0:
        FUN_10100ae40(uVar14,uVar9,uVar12,uVar11);
        func_0x000107c61170(uVar7);
        plVar10 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x88) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_101009f98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar10,(ulong *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x58));
        return;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
      func_0x000107c61170(uVar7);
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c61574(uVar8);
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010100a0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10100a234; end: 10100a25f; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController initWithNibName:bundle:] */

void FUN_10100a234(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutViewImpl.QuickCutCarouselViewController",0x2f,"init(nibName:bundle:)"
                      ,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10100a260);
  (*pcVar1)();
}



/* Entry: 10100a260; end: 10100a3fb;  */

void FUN_10100a260(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_98 = &UNK_10d91b320;
  uVar2 = 0x112d544f8;
  lVar1 = 0x13f;
  func_0x00010100a38c(0x13f,0x112d544f8,0x112d53328,&UNK_10d919ad0);
  if (uVar2 < 0x40) {
    lStack_90 = *(long *)(lVar1 + -8) + 0x40;
    puStack_88 = &UNK_10d91b340;
    puStack_80 = &UNK_10d91b340;
    puStack_78 = &UNK_10d91b340;
    uVar2 = 0x112d54500;
    lVar1 = 0x13f;
    func_0x00010100a38c(0x13f,0x112d54500,0x112d54508,&UNK_10d91b358);
    if (uVar2 < 0x40) {
      lStack_70 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x112d54510;
      lVar1 = 0x13f;
      func_0x00010100a38c(0x13f,0x112d54510,0x112d52e20,&UNK_10d9196f0);
      if (uVar2 < 0x40) {
        lStack_68 = *(long *)(lVar1 + -8) + 0x40;
        puStack_60 = PTR___sBbWV_11034d660 + 0x40;
        puStack_58 = &UNK_10d91b368;
        puStack_50 = &UNK_10d91b368;
        puStack_48 = &UNK_10d91b380;
        puStack_40 = &UNK_10d91b340;
        puStack_38 = &UNK_10d91b340;
        puStack_30 = &UNK_10d91b340;
        puStack_28 = &UNK_10d91b340;
        func_0x000107c61630(param_1,0x100,0xf,&puStack_98,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Entry: 10100a3fc; end: 10100a517; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_10100a3fc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 in_x4;
  long extraout_x8;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),in_x4);
  func_0x000107c61174(param_5);
  uVar4 = param_5;
  FUN_101007438();
  func_0x000107c3ec60();
  func_0x000107c61170(uVar4);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  dVar3 = param_1 + -16.0 + -12.0;
  if (dVar3 < 0.0) {
    dVar3 = 0.0;
  }
  uVar4 = 0;
  func_0x000107c609cc(0,0,dVar3,dVar3);
  func_0x000107c61170(param_5);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 10100a518; end: 10100a5c7; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController collectionView:didSelectItemAtIndexPath:] */

void FUN_10100a518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  func_0x000107c61174(param_1);
  func_0x000107c5efec();
  FUN_10100894c();
  func_0x000107c61170(param_1);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 10100a5c8; end: 10100a78b;  */

void FUN_10100a5c8(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = (long)puVar4 - extraout_x12;
  func_0x000107c3f74c(param_3);
  dVar6 = param_1;
  func_0x000107c404a0(param_3);
  func_0x000107c3f74c(param_3);
  dVar7 = param_2;
  func_0x000107c404a0();
  FUN_101007438();
  lVar1 = param_3;
  func_0x000107c45350(param_1 + dVar6,param_2 + dVar7);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
    func_0x000107c5eff8();
  }
  else {
    func_0x000107c5efdc(puVar4,lVar1);
    func_0x000107c61170(lVar1);
    lVar2 = 0;
    func_0x000107c5eff8();
  }
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x38))(puVar4,lVar1 == 0,1,lVar2);
  func_0x00010100ac24(puVar4,lVar3);
  func_0x000107c5eff8(0);
  lVar1 = lVar3;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_10100b308(lVar3,0x112d54580,&UNK_10d91b480);
  }
  else {
    func_0x000107c5efe4();
    (**(code **)(lVar5 + 8))(lVar3,lVar2);
    FUN_101008df0(lVar1);
  }
  FUN_10100908c();
  return;
}



/* Entry: 10100a78c; end: 10100a7db; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController scrollViewDidEndDecelerating:] */

/* WARNING: Possible PIC construction at 0x00010100a7c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010100a7c8) */

void FUN_10100a78c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10100a5c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10100a7dc; end: 10100a803; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController scrollViewDidEndScrollingAnimation:] */

void FUN_10100a7dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10100908c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10100a804; end: 10100a9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100a804(double param_1,double param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar5 - extraout_x12;
  func_0x000107c3f74c(param_3);
  dVar7 = param_1;
  func_0x000107c404a0(param_3);
  func_0x000107c3f74c(param_3);
  dVar8 = param_2;
  func_0x000107c404a0();
  FUN_101007438();
  lVar2 = param_3;
  func_0x000107c45350(param_1 + dVar7,param_2 + dVar8);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
    func_0x000107c5eff8();
  }
  else {
    func_0x000107c5efdc(puVar5,lVar2);
    func_0x000107c61170(lVar2);
    lVar3 = 0;
    func_0x000107c5eff8();
  }
  lVar6 = *(long *)(lVar3 + -8);
  (**(code **)(lVar6 + 0x38))(puVar5,lVar2 == 0,1,lVar3);
  func_0x00010100ac24(puVar5,lVar4);
  func_0x000107c5eff8(0);
  lVar2 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar2 == 1) {
    FUN_10100b308(lVar4,0x112d54580,&UNK_10d91b480);
  }
  else {
    func_0x000107c5efe4();
    (**(code **)(lVar6 + 8))(lVar4,lVar3);
    plVar1 = (long *)(unaff_x20 + _DAT_112d54490);
    if ((char)plVar1[1] != '\x01') {
      if (*plVar1 == lVar2) goto LAB_10100a9dc;
      if (*(long *)(unaff_x20 + _DAT_112d54458) != 0) {
        func_0x000107c4e57c();
      }
    }
    *plVar1 = lVar2;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
LAB_10100a9dc:
  FUN_10100908c();
  return;
}



/* Entry: 10100aa00; end: 10100aa4f; -[_TtC16QuickCutViewImpl30QuickCutCarouselViewController scrollViewDidScroll:] */

/* WARNING: Possible PIC construction at 0x00010100aa38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010100aa3c) */

void FUN_10100aa00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10100a804(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10100aa50; end: 10100ab3f;  */

uint FUN_10100aa50(uint *param_1,int param_2)

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



/* Entry: 10100ab40; end: 10100ab8f;  */

void FUN_10100ab40(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d54518 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d54520;
  func_0x00010002969c(0x112d54520,&UNK_10d91b3a0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d54518 = puVar2;
  return;
}



/* Entry: 10100ab90; end: 10100ab93;  */

void FUN_10100ab90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b420;
  func_0x000107c61520(&UNK_10d91b420,&UNK_110376300);
  puRam0000000112d54528 = puVar1;
  return;
}



/* Entry: 10100ab94; end: 10100abd3;  */

void FUN_10100ab94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b420;
  func_0x000107c61520(&UNK_10d91b420,&UNK_110376300);
  puRam0000000112d54528 = puVar1;
  return;
}



/* Entry: 10100abd4; end: 10100abdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100abd4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d54540;
  func_0x0001000285a8(0x112d54540,&UNK_10d91b470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = 0x112d54508;
    func_0x0001000285a8(0x112d54508,&UNK_10d91b358);
    lVar4 = *(long *)(lVar2 + -8);
    (**(code **)(lVar4 + 0x10))(puVar3,param_1,lVar2);
    (**(code **)(lVar4 + 0x38))(puVar3,0,1,lVar2);
    lVar2 = _DAT_112d54470;
    func_0x000107c61428(lVar1 + _DAT_112d54470,auStack_70,0x21,0);
    FUN_10100abdc(puVar3,lVar1 + lVar2,0x112d54540,&UNK_10d91b470);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10100abdc; end: 10100ac73;  */

undefined8 FUN_10100abdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10100ac74; end: 10100ad5f;  */

undefined8 FUN_10100ac74(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar7 = param_1[2];
  if (lVar7 == param_2[2]) {
    if ((lVar7 != 0) && (param_1 != param_2)) {
      do {
        lStack_a8 = param_1[5];
        lStack_b0 = param_1[4];
        lStack_a0 = param_1[6];
        uStack_98 = (undefined1)param_1[7];
        uStack_8f = *(undefined8 *)((long)param_1 + 0x41);
        uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
        uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
        uVar4 = param_1[10];
        lVar2 = param_1[0xb];
        lStack_78 = param_2[5];
        lStack_80 = param_2[4];
        lStack_70 = param_2[6];
        uStack_68 = (undefined1)param_2[7];
        uStack_5f = *(undefined8 *)((long)param_2 + 0x41);
        uStack_67 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
        uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
        uVar1 = param_2[10];
        lVar3 = param_2[0xb];
        uVar5 = 0;
        func_0x0001010157e8(&lStack_b0,&lStack_80);
        if (((uVar5 & 1) == 0) ||
           (((uVar4 != uVar1 || (lVar2 != lVar3)) &&
            (func_0x000107c605b8(uVar4,lVar2,uVar1,lVar3,0), (uVar4 & 1) == 0))))
        goto LAB_10100ad38;
        lVar7 = lVar7 + -1;
        param_2 = param_2 + 0xb;
        param_1 = param_1 + 0xb;
      } while (lVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
LAB_10100ad38:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 10100ad60; end: 10100ada7;  */

undefined8 FUN_10100ad60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10100ada8; end: 10100ae3f;  */

void FUN_10100ada8(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = 0x112d53328;
  func_0x0001000285a8(0x112d53328,&UNK_10d919ad0);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10100b348;
  plVar2[9] = unaff_x20 + uVar3;
  plVar2[10] = lVar4;
  lVar4 = 0x112d54598;
  func_0x0001000285a8(0x112d54598,&UNK_10d91b4b0);
  plVar2[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0xc] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xd] = uVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xe] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0xf] = lVar1;
  plVar2[0x10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101009f00,lVar1,lVar4);
  return;
}



/* Entry: 10100ae40; end: 10100ae6f;  */

/* WARNING: Possible PIC construction at 0x00010100ae58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010100ae5c) */

void FUN_10100ae40(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 10100ae70; end: 10100aed3;  */

void FUN_10100ae70(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar3 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10100aed4;
  plVar3[0x29] = unaff_x20 + 0x10;
  plVar3[0x2a] = lVar4;
  lVar4 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  plVar3[0x2b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x2c] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x2d] = uVar1;
  lVar4 = 0x112d53358;
  func_0x0001000285a8(0x112d53358,&UNK_10d91b4d0);
  plVar3[0x2e] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x2f] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x30] = uVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0x31] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x32] = lVar2;
  plVar3[0x33] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101009530,lVar2,lVar4);
  return;
}



/* Entry: 10100aed4; end: 10100af0f;  */

void FUN_10100aed4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010100af0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10100af10; end: 10100b07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100af10(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d54460) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54468) = 0;
  lVar2 = _DAT_112d54470;
  lVar4 = 0x112d54508;
  func_0x0001000285a8(0x112d54508,&UNK_10d91b358);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar4);
  lVar2 = _DAT_112d54478;
  lVar4 = 0x112d52e20;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar4);
  *(undefined **)(unaff_x20 + _DAT_112d54480) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d54488);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d54490);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d54498);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d544b8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QuickCutViewImpl/QuickCutCarouselViewController.swift",0x35,2,0x60,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10100b07c);
  (*pcVar3)();
}



/* Entry: 10100b07c; end: 10100b1e7;  */

void FUN_10100b07c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(ulong *)(param_1 + 0x10) < 2) {
    FUN_100fe2d0c(0,0x32,0);
    lVar4 = 0;
    do {
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_100fe2d0c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      lVar4 = lVar4 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x20) = 0x6c6f686563616c70;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x28) = 0xec0000002d726564;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x30) = 0;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x38) = 0xe000000000000000;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x40) = 0;
      puVar2[uVar1 * 0x58 + 0x48] = 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x50) = 0;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x58) = 0xe000000000000000;
      *(undefined **)(puVar2 + uVar1 * 0x58 + 0x60) = &UNK_10d91b0f0;
      *(undefined8 *)(puVar2 + uVar1 * 0x58 + 0x68) = 0;
      puVar2[uVar1 * 0x58 + 0x70] = 0;
    } while (lVar4 != 0x32);
    func_0x000107c61434();
    FUN_100fe4248(puVar2);
  }
  else {
    func_0x000107c61434();
  }
  return;
}



/* Entry: 10100b1e8; end: 10100b267;  */

void FUN_10100b1e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d545a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b3e0;
  func_0x000107c61520(&UNK_10d91b3e0,&UNK_110376300);
  puRam0000000112d545a8 = puVar1;
  return;
}



/* Entry: 10100b268; end: 10100b2a7;  */

void FUN_10100b268(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10100b2a8; end: 10100b307;  */

long FUN_10100b2a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_148 [88];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
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
  
  lVar2 = 0x112d545e8;
  func_0x0001000285a8(0x112d545e8,&UNK_10d91b4e8);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff));
  uStack_c8 = param_3[5];
  uStack_d0 = param_3[4];
  uStack_58 = param_3[7];
  uStack_60 = param_3[6];
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  uStack_68 = param_3[5];
  uStack_70 = param_3[4];
  uStack_b8 = param_3[7];
  uStack_c0 = param_3[6];
  uStack_48 = param_3[9];
  uStack_50 = param_3[8];
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
  uStack_e8 = param_3[1];
  uStack_f0 = *param_3;
  uStack_a8 = param_3[9];
  uStack_b0 = param_3[8];
  uStack_40 = *(undefined1 *)(param_3 + 10);
  uStack_a0 = *(undefined1 *)(param_3 + 10);
  func_0x000100fe2a18(&uStack_90,auStack_148);
  uVar1 = 0;
  FUN_10100500c(0);
  func_0x000107c5ff9c(lVar2,param_2,&uStack_f0,uVar1,&UNK_110376178);
  FUN_10100b308(&uStack_f0,0x112d52f90,&UNK_10d919870);
  return lVar2;
}



/* Entry: 10100b308; end: 10100b347;  */

undefined8 FUN_10100b308(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10100b348; end: 10100b34b;  */

void FUN_10100b348(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010100af0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10100b34c; end: 10100b3cf;  */

void FUN_10100b34c(void)

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



/* Entry: 10100b3d0; end: 10100b3e7;  */

void FUN_10100b3d0(undefined8 param_1)

{
  if (lRam0000000112d54668 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61e00c);
  return;
}



/* Entry: 10100b3e8; end: 10100b427;  */

void FUN_10100b3e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b528;
  func_0x000107c61520(&UNK_10d91b528,&UNK_1103764a0);
  puRam0000000112d54600 = puVar1;
  return;
}



/* Entry: 10100b428; end: 10100b42b;  */

void FUN_10100b428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b590;
  func_0x000107c61520(&UNK_10d91b590,&UNK_110376530);
  puRam0000000112d54608 = puVar1;
  return;
}



/* Entry: 10100b42c; end: 10100b46b;  */

void FUN_10100b42c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b590;
  func_0x000107c61520(&UNK_10d91b590,&UNK_110376530);
  puRam0000000112d54608 = puVar1;
  return;
}



/* Entry: 10100b46c; end: 10100b7cf;  */

long * FUN_10100b46c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar5 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar5;
    iVar3 = *(int *)(param_3 + 0x18);
    func_0x000107c61434();
    lVar5 = 0x112d545f8;
    func_0x0001000285a8(0x112d545f8,&UNK_10d91b520);
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))
              ((undefined1 *)((long)param_1 + (long)iVar3),
               (undefined1 *)((long)param_2 + (long)iVar3),lVar5);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    lVar5 = puVar1[1];
    uVar7 = *puVar1;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar4[1] = puVar1[1];
    *puVar4 = uVar7;
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar5);
  return param_1;
}



/* Entry: 10100b7d0; end: 10100b7e7;  */

void FUN_10100b7d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10100b7e8; end: 10100b86f;  */

void FUN_10100b7e8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10d91b618;
  puStack_38 = &UNK_10d91b630;
  lVar1 = 0x13f;
  FUN_10100b870();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    func_0x000107c6153c(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10100b870; end: 10100b8bf;  */

void FUN_10100b870(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d54678 != 0) {
    return;
  }
  puVar1 = &UNK_1103765a8;
  func_0x000107c5fd44();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d54678 = param_1;
  return;
}



/* Entry: 10100b8c0; end: 10100bb67;  */

int FUN_10100b8c0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10100b93c;
        goto LAB_10100b920;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10100b920:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10100b93c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10100bb68; end: 10100bb93;  */

long FUN_10100bb68(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10100bb94; end: 10100bb9b;  */

void FUN_10100bb94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10100bb9c; end: 10100bbd7;  */

undefined8 * FUN_10100bb9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10100bbd8; end: 10100bc33;  */

undefined8 * FUN_10100bbd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 10100bc34; end: 10100bc77;  */

undefined8 * FUN_10100bc34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 10100bc78; end: 10100bd13;  */

int FUN_10100bc78(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10100bd14; end: 10100c027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100bd14(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d546b8);
  pcVar1 = (char *)(unaff_x20 + _DAT_112d546b0);
  cVar2 = *pcVar1;
  uVar6 = 2;
  if (cVar2 != '\0') {
    uVar6 = 5;
  }
  func_0x000107c59a2c(uVar10,param_2,uVar6);
  func_0x000107c5211c(uVar10);
  uVar6 = *(undefined8 *)(pcVar1 + 8);
  func_0x000107c5fadc(uVar6,*(undefined8 *)(pcVar1 + 0x10));
  func_0x000107c520f4(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c59e34(uVar10);
  func_0x000107c552c8(uVar10);
  if (cVar2 == '\x01') {
    func_0x000107c52b54();
    func_0x000107c59e34(uVar10);
    func_0x000107c552c8(uVar10);
    func_0x000107c52b54(uVar10);
  }
  else {
    func_0x000107c59e34(uVar10);
    func_0x000107c552c8(uVar10);
  }
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar10);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  uVar6 = uVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  uVar6 = uVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar4 + 0x28) = uVar5;
  uVar6 = uVar10;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  uVar6 = uVar10;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(puVar4 + 0x38) = uVar5;
  uVar6 = 0;
  func_0x000100847984(0);
  puVar7 = puVar4;
  func_0x000107c5fc48(puVar4,uVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c3d8b8(uVar10);
  lVar8 = 0;
  FUN_10100b3d0();
  lVar12 = *(long *)(lVar8 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = -(lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1103765d8;
  func_0x000107c613fc(&UNK_1103765d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,unaff_x20);
  func_0x00010100c900(unaff_x20 + _DAT_112d546b0,&stack0xffffffffffffffc0 + lVar8);
  uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  uVar14 = lVar11 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_110376600;
  func_0x000107c613fc(&UNK_110376600,uVar14 + 8,uVar9 | 7);
  func_0x000100ffd22c(&stack0xffffffffffffffc0 + lVar8,puVar4 + uVar13);
  *(undefined **)(puVar4 + uVar14) = puVar3;
  *(undefined **)(&stack0xffffffffffffffb0 + lVar8) = PTR___sytN_11034f1b0 + 8;
  uVar6 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91b6b0,puVar4);
  func_0x000107c61574(puVar4);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d546c8);
  *(undefined8 *)(unaff_x20 + _DAT_112d546c8) = uVar6;
  func_0x000107c61574(uVar10);
  return;
}



/* Entry: 10100c028; end: 10100c0a3; -[_TtC16QuickCutViewImpl20QuickCutFooterButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100c028(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d546c0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined8 *)(param_1 + _DAT_112d546c8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QuickCutViewImpl/QuickCutFooterButton.swift",0x2b,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10100c0a4);
  (*pcVar2)();
}



/* Entry: 10100c0a4; end: 10100c12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100c0a4(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d546c8);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10100c12c; end: 10100c1c7; -[_TtC16QuickCutViewImpl20QuickCutFooterButton dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100c12c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112d546c8);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10100c1c8; end: 10100c223; -[_TtC16QuickCutViewImpl20QuickCutFooterButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100c1c8(long param_1)

{
  FUN_10100ca0c(param_1 + _DAT_112d546b0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d546b8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d546c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d546c8));
  return;
}



/* Entry: 10100c224; end: 10100c23f;  */

void FUN_10100c224(void)

{
  if (lRam0000000112d546f8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61e088);
  return;
}



/* Entry: 10100c240; end: 10100c26f;  */

void FUN_10100c240(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10100c270; end: 10100c3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100c270(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long alStack_50 [2];
  
  lVar1 = 0;
  FUN_10100b3d0();
  lVar8 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_1103765d8;
  func_0x000107c613fc(&UNK_1103765d8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x00010100c900(unaff_x20 + _DAT_112d546b0,&stack0xffffffffffffffc0 + lVar1);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar10 = lVar7 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_110376600;
  func_0x000107c613fc(&UNK_110376600,uVar10 + 8,uVar6 | 7);
  func_0x000100ffd22c(&stack0xffffffffffffffc0 + lVar1,puVar3 + uVar9);
  *(undefined **)(puVar3 + uVar10) = puVar2;
  *(undefined **)((long)alStack_50 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91b6b0,puVar3);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d546c8);
  *(undefined8 *)(unaff_x20 + _DAT_112d546c8) = uVar4;
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 10100c3a4; end: 10100c443;  */

void FUN_10100c3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  lVar4 = 0x112d54708;
  func_0x0001000285a8(0x112d54708,&UNK_10d91b6b8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10100c444,uVar2,uVar3);
  return;
}



/* Entry: 10100c444; end: 10100c4eb;  */

void FUN_10100c444(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  FUN_10100b3d0();
  func_0x0001000285a8(0x112d545f8,&UNK_10d91b520);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x30,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10100c4ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10100c4ec; end: 10100c52f;  */

void FUN_10100c4ec(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10100c530,*(undefined8 *)(lVar1 + 0x78),*(undefined8 *)(lVar1 + 0x80));
  return;
}



/* Entry: 10100c530; end: 10100c663;  */

void FUN_10100c530(void)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x28);
    uVar3 = *(long *)(unaff_x22 + 0x50) + 0x10;
    func_0x000107c61618();
    if (uVar3 == 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
    }
    else {
      uVar4 = uVar3;
      func_0x000107c5fd5c();
      if ((uVar4 & 1) == 0) {
        FUN_10100c664(uVar6,lVar1,uVar7,uVar2);
        func_0x000107c6142c(lVar1);
        func_0x000107c61170(uVar3);
        plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x88) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_10100c4ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar5,(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x58));
        return;
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      (**(code **)(*(long *)(unaff_x22 + 0x60) + 8))
                (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x58));
      func_0x000107c61170(uVar3);
    }
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c61574(uVar6);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010100c5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10100c664; end: 10100c7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100c664(ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112d546c0);
  uVar4 = puVar1[1];
  if ((uVar4 == 0) || ((char)puVar1[3] != param_4)) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d546b8);
    func_0x000107c5a378(uVar5,uVar4,param_4 != '\x01');
    func_0x000107c58dd8(uVar5);
    uVar4 = puVar1[1];
    if (uVar4 != 0) goto LAB_10100c6e4;
LAB_10100c708:
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d546b8);
    uVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c59e1c(uVar5);
    func_0x000107c61170(uVar4);
LAB_10100c738:
    uVar4 = puVar1[1];
    if (uVar4 != 0) goto LAB_10100c740;
  }
  else {
LAB_10100c6e4:
    uVar2 = *puVar1;
    if (uVar2 != param_1 || param_2 != uVar4) {
      func_0x000107c605b8(uVar2,uVar4,param_1,param_2,0);
      if ((uVar2 & 1) == 0) goto LAB_10100c708;
      goto LAB_10100c738;
    }
LAB_10100c740:
    if (puVar1[2] == param_3) goto LAB_10100c7bc;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d546b8);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5af98();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar3;
    func_0x000107c45154();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c55260(uVar5);
  func_0x000107c61170(puVar6);
  uVar4 = puVar1[1];
LAB_10100c7bc:
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(char *)(puVar1 + 3) = param_4;
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10100c7f0; end: 10100c847; -[_TtC16QuickCutViewImpl20QuickCutFooterButton actionButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100c7f0(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112d546b0;
  lVar3 = 0;
  FUN_10100b3d0();
  pcVar2 = *(code **)(lVar1 + *(int *)(lVar3 + 0x1c));
  func_0x000107c61174(param_1);
  (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10100c848; end: 10100c873; -[_TtC16QuickCutViewImpl20QuickCutFooterButton initWithFrame:] */

void FUN_10100c848(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutViewImpl.QuickCutFooterButton",0x25,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10100c874);
  (*pcVar1)();
}



/* Entry: 10100c874; end: 10100c943;  */

void FUN_10100c874(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10100b3d0();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = &UNK_10d91b678;
    puStack_28 = &UNK_10d91b690;
    func_0x000107c61630(param_1,0x100,4,&lStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 10100c944; end: 10100c9cf;  */

void FUN_10100c944(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_10100b3d0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xffffffffffffff8));
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10100c9d0;
  plVar3[9] = unaff_x20 + uVar4;
  plVar3[10] = lVar2;
  lVar2 = 0x112d54708;
  func_0x0001000285a8(0x112d54708,&UNK_10d91b6b8);
  plVar3[0xb] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[0xc] = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xd] = uVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xe] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0xf] = lVar1;
  plVar3[0x10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10100c444,lVar1,lVar2);
  return;
}



/* Entry: 10100c9d0; end: 10100ca0b;  */

void FUN_10100c9d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010100ca08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10100ca0c; end: 10100ca47;  */

undefined8 FUN_10100ca0c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10100b3d0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10100ca48; end: 10100ca77;  */

undefined1 FUN_10100ca48(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10100ca78; end: 10100cb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10100ca78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d54710;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d54710);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    func_0x000107c610f8();
    func_0x000107c45558();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c53598(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c5a050(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10100cb30; end: 10100cdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100cb30(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  puVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10100cde4);
    (*pcVar2)();
  }
  puVar4 = puVar3;
  func_0x000101015bc8();
  uVar7 = *puVar4;
  uVar9 = puVar4[1];
  func_0x000107c61434(uVar9);
  func_0x000107c5fadc(uVar7,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c520f4(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  puVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10100cde8);
    (*pcVar2)();
  }
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c3fdd0(0x3fe0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  puVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10100cdec);
    (*pcVar2)();
  }
  puVar4 = puVar3;
  FUN_10100ca78();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  puVar4[3] = 5;
  puVar4[2] = 2;
  lVar1 = _DAT_112d54710;
  uVar7 = *(undefined8 *)((long)unaff_x20 + _DAT_112d54710);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar8 = puVar3;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    uVar9 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar8);
    puVar4[4] = uVar9;
    uVar7 = *(undefined8 *)((long)unaff_x20 + lVar1);
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != (undefined8 *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar3 = unaff_x20;
      func_0x000107c3f764(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar9 = uVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar3);
      puVar4[5] = uVar9;
      uVar7 = 0;
      func_0x000100847984(0);
      puVar3 = puVar4;
      func_0x000107c5fc48(puVar4,uVar7);
      func_0x000107c61574(puVar4);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(puVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10100cdf4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10100cdf0);
  (*pcVar2)();
}



/* Entry: 10100cdf4; end: 10100ce1b; -[_TtC16QuickCutViewImpl36QuickCutLoadingOverlayViewController viewDidLoad] */

void FUN_10100cdf4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10100cb30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10100ce1c; end: 10100ce93; -[_TtC16QuickCutViewImpl36QuickCutLoadingOverlayViewController viewDidAppear:] */

void FUN_10100ce1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_10100ca78();
  func_0x000107c5ba54();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10100ce94; end: 10100cf0b; -[_TtC16QuickCutViewImpl36QuickCutLoadingOverlayViewController viewWillDisappear:] */

void FUN_10100ce94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillDisappear__112685438;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_10100ca78();
  func_0x000107c5be00();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10100cf0c; end: 10100cfdb; -[_TtC16QuickCutViewImpl36QuickCutLoadingOverlayViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10100cf0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + _DAT_112d54710) = 0;
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c5faec(param_3);
    *(undefined8 *)(param_1 + _DAT_112d54710) = 0;
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar2;
}



/* Entry: 10100cfdc; end: 10100d067; -[_TtC16QuickCutViewImpl36QuickCutLoadingOverlayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10100cfdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d54710) = 0;
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 10100d068; end: 10100d09b;  */

void FUN_10100d068(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10100d09c; end: 10100d0ab; -[_TtC16QuickCutViewImpl36QuickCutLoadingOverlayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100d09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d54710));
  return;
}



/* Entry: 10100d0ac; end: 10100d0cb;  */

void FUN_10100d0ac(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7968);
  return;
}



/* Entry: 10100d0cc; end: 10100d0d3;  */

void FUN_10100d0cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 10100d0d4; end: 10100d5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10100d0d4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d54740;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d54740);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b0870;
    func_0x000107c610f8();
    func_0x000107c47da4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10100d5e8; end: 10100d68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10100d5e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d54770;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d54770);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d54778 + 0x10);
    FUN_10100f9d0();
    func_0x000107c610f8();
    func_0x000107c61434();
    FUN_10100f320();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10100d68c; end: 10100d693; -[_TtC16QuickCutViewImpl22QuickCutViewController preferredStatusBarStyle] */

undefined8 FUN_10100d68c(void)

{
  return 1;
}



/* Entry: 10100d694; end: 10100d6c7; -[_TtC16QuickCutViewImpl22QuickCutViewController initWithCoder:] */

undefined8 FUN_10100d694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10100ef5c();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 10100d6c8; end: 10100e53f;  */

/* WARNING: Possible PIC construction at 0x00010100d72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100d9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100da30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100da50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100daa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100db18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100db38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100db88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100ddc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100de30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100de50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100deb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100df00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100df20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100df78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100dfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100e4b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010100e450) */
/* WARNING: Removing unreachable block (ram,0x00010100e53c) */
/* WARNING: Removing unreachable block (ram,0x00010100e478) */
/* WARNING: Removing unreachable block (ram,0x00010100e424) */
/* WARNING: Removing unreachable block (ram,0x00010100e3e4) */
/* WARNING: Removing unreachable block (ram,0x00010100e3c0) */
/* WARNING: Removing unreachable block (ram,0x00010100e3a4) */
/* WARNING: Removing unreachable block (ram,0x00010100e340) */
/* WARNING: Removing unreachable block (ram,0x00010100e538) */
/* WARNING: Removing unreachable block (ram,0x00010100e374) */
/* WARNING: Removing unreachable block (ram,0x00010100e320) */
/* WARNING: Removing unreachable block (ram,0x00010100e2d0) */
/* WARNING: Removing unreachable block (ram,0x00010100e534) */
/* WARNING: Removing unreachable block (ram,0x00010100e304) */
/* WARNING: Removing unreachable block (ram,0x00010100e2b0) */
/* WARNING: Removing unreachable block (ram,0x00010100e260) */
/* WARNING: Removing unreachable block (ram,0x00010100e530) */
/* WARNING: Removing unreachable block (ram,0x00010100e294) */
/* WARNING: Removing unreachable block (ram,0x00010100e208) */
/* WARNING: Removing unreachable block (ram,0x00010100e1c8) */
/* WARNING: Removing unreachable block (ram,0x00010100e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010100e158) */
/* WARNING: Removing unreachable block (ram,0x00010100e52c) */
/* WARNING: Removing unreachable block (ram,0x00010100e18c) */
/* WARNING: Removing unreachable block (ram,0x00010100e138) */
/* WARNING: Removing unreachable block (ram,0x00010100e0e8) */
/* WARNING: Removing unreachable block (ram,0x00010100e528) */
/* WARNING: Removing unreachable block (ram,0x00010100e11c) */
/* WARNING: Removing unreachable block (ram,0x00010100e088) */
/* WARNING: Removing unreachable block (ram,0x00010100e030) */
/* WARNING: Removing unreachable block (ram,0x00010100dfdc) */
/* WARNING: Removing unreachable block (ram,0x00010100df7c) */
/* WARNING: Removing unreachable block (ram,0x00010100df24) */
/* WARNING: Removing unreachable block (ram,0x00010100df04) */
/* WARNING: Removing unreachable block (ram,0x00010100deb4) */
/* WARNING: Removing unreachable block (ram,0x00010100e524) */
/* WARNING: Removing unreachable block (ram,0x00010100dee8) */
/* WARNING: Removing unreachable block (ram,0x00010100de54) */
/* WARNING: Removing unreachable block (ram,0x00010100de34) */
/* WARNING: Removing unreachable block (ram,0x00010100dde4) */
/* WARNING: Removing unreachable block (ram,0x00010100e520) */
/* WARNING: Removing unreachable block (ram,0x00010100de18) */
/* WARNING: Removing unreachable block (ram,0x00010100ddc4) */
/* WARNING: Removing unreachable block (ram,0x00010100dd74) */
/* WARNING: Removing unreachable block (ram,0x00010100e51c) */
/* WARNING: Removing unreachable block (ram,0x00010100dda8) */
/* WARNING: Removing unreachable block (ram,0x00010100dd54) */
/* WARNING: Removing unreachable block (ram,0x00010100dd04) */
/* WARNING: Removing unreachable block (ram,0x00010100e518) */
/* WARNING: Removing unreachable block (ram,0x00010100dd38) */
/* WARNING: Removing unreachable block (ram,0x00010100dce4) */
/* WARNING: Removing unreachable block (ram,0x00010100dc8c) */
/* WARNING: Removing unreachable block (ram,0x00010100e514) */
/* WARNING: Removing unreachable block (ram,0x00010100dcc8) */
/* WARNING: Removing unreachable block (ram,0x00010100dc6c) */
/* WARNING: Removing unreachable block (ram,0x00010100dc1c) */
/* WARNING: Removing unreachable block (ram,0x00010100e510) */
/* WARNING: Removing unreachable block (ram,0x00010100dc50) */
/* WARNING: Removing unreachable block (ram,0x00010100dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010100dbac) */
/* WARNING: Removing unreachable block (ram,0x00010100e50c) */
/* WARNING: Removing unreachable block (ram,0x00010100dbe0) */
/* WARNING: Removing unreachable block (ram,0x00010100db8c) */
/* WARNING: Removing unreachable block (ram,0x00010100db3c) */
/* WARNING: Removing unreachable block (ram,0x00010100e508) */
/* WARNING: Removing unreachable block (ram,0x00010100db70) */
/* WARNING: Removing unreachable block (ram,0x00010100db1c) */
/* WARNING: Removing unreachable block (ram,0x00010100dac4) */
/* WARNING: Removing unreachable block (ram,0x00010100e504) */
/* WARNING: Removing unreachable block (ram,0x00010100db00) */
/* WARNING: Removing unreachable block (ram,0x00010100daa4) */
/* WARNING: Removing unreachable block (ram,0x00010100da54) */
/* WARNING: Removing unreachable block (ram,0x00010100e500) */
/* WARNING: Removing unreachable block (ram,0x00010100da88) */
/* WARNING: Removing unreachable block (ram,0x00010100da34) */
/* WARNING: Removing unreachable block (ram,0x00010100d9e4) */
/* WARNING: Removing unreachable block (ram,0x00010100e4fc) */
/* WARNING: Removing unreachable block (ram,0x00010100da18) */
/* WARNING: Removing unreachable block (ram,0x00010100d9c4) */
/* WARNING: Removing unreachable block (ram,0x00010100d9a8) */
/* WARNING: Removing unreachable block (ram,0x00010100d91c) */
/* WARNING: Removing unreachable block (ram,0x00010100e4f8) */
/* WARNING: Removing unreachable block (ram,0x00010100d98c) */
/* WARNING: Removing unreachable block (ram,0x00010100d8e4) */
/* WARNING: Removing unreachable block (ram,0x00010100e4f4) */
/* WARNING: Removing unreachable block (ram,0x00010100d900) */
/* WARNING: Removing unreachable block (ram,0x00010100d8a0) */
/* WARNING: Removing unreachable block (ram,0x00010100e4f0) */
/* WARNING: Removing unreachable block (ram,0x00010100d8bc) */
/* WARNING: Removing unreachable block (ram,0x00010100d85c) */
/* WARNING: Removing unreachable block (ram,0x00010100e4ec) */
/* WARNING: Removing unreachable block (ram,0x00010100d878) */
/* WARNING: Removing unreachable block (ram,0x00010100d820) */
/* WARNING: Removing unreachable block (ram,0x00010100e4e8) */
/* WARNING: Removing unreachable block (ram,0x00010100d83c) */
/* WARNING: Removing unreachable block (ram,0x00010100d7e4) */
/* WARNING: Removing unreachable block (ram,0x00010100e4e4) */
/* WARNING: Removing unreachable block (ram,0x00010100d800) */
/* WARNING: Removing unreachable block (ram,0x00010100d7a8) */
/* WARNING: Removing unreachable block (ram,0x00010100e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010100d7c4) */
/* WARNING: Removing unreachable block (ram,0x00010100d76c) */
/* WARNING: Removing unreachable block (ram,0x00010100e4dc) */
/* WARNING: Removing unreachable block (ram,0x00010100d788) */
/* WARNING: Removing unreachable block (ram,0x00010100d730) */
/* WARNING: Removing unreachable block (ram,0x00010100e4d8) */
/* WARNING: Removing unreachable block (ram,0x00010100d74c) */
/* WARNING: Removing unreachable block (ram,0x00010100e4b8) */

void FUN_10100d6c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10100e4d8);
  (*pcVar1)();
}



/* Entry: 10100e540; end: 10100e643; -[_TtC16QuickCutViewImpl22QuickCutViewController viewDidLoad] */

void FUN_10100e540(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_10100d6c8();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10100e644; end: 10100e673; -[_TtC16QuickCutViewImpl22QuickCutViewController viewWillAppear:] */

void FUN_10100e644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x00010100e59c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10100e674; end: 10100e73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100e674(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__112684c48,param_1 & 1);
  if (*(char *)(unaff_x20 + _DAT_112d54798 + 8) != '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c517f0();
    func_0x000107c61170(puVar1);
  }
  lVar3 = unaff_x20 + _DAT_112d54790;
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



/* Entry: 10100e740; end: 10100e76f; -[_TtC16QuickCutViewImpl22QuickCutViewController viewDidDisappear:] */

void FUN_10100e740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10100e674(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10100e770; end: 10100e7c7; -[_TtC16QuickCutViewImpl22QuickCutViewController skipButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100e770(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d54780);
  if (pcVar1 != (code *)0x0) {
    func_0x000107c61174();
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10100e7c8; end: 10100e807; -[_TtC16QuickCutViewImpl22QuickCutViewController cancelButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100e7c8(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d54788);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10100e808; end: 10100e867; -[_TtC16QuickCutViewImpl22QuickCutViewController initWithNibName:bundle:] */

void FUN_10100e808(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutViewImpl.QuickCutViewController",0x27,"init(nibName:bundle:)",0x15,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10100e834);
  (*pcVar1)();
}



/* Entry: 10100e868; end: 10100e943; -[_TtC16QuickCutViewImpl22QuickCutViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10100e868(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54740));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54748));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54750));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54758));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54760));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54768));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54770));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d54778 + 8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d54778 + 0x10));
  func_0x000107c6142c(uVar1);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112d54780),
                      ((undefined8 *)(param_1 + _DAT_112d54780))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d54788 + 8));
  param_1 = param_1 + _DAT_112d54790;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10100e944; end: 10100e963;  */

void FUN_10100e944(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7a20);
  return;
}



/* Entry: 10100e964; end: 10100e9a3;  */

bool FUN_10100e964(void)

{
  long unaff_x20;
  
  func_0x000107c4f078();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c61170(unaff_x20);
  }
  return unaff_x20 != 0;
}



/* Entry: 10100e9a4; end: 10100e9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10100e9a4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d54740;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d54740);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b0870;
    func_0x000107c610f8();
    func_0x000107c47da4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10100e9b0; end: 10100ea2f;  */

void FUN_10100e9b0(void)

{
  func_0x000107c610f8(PTR_PTR_1126aead8);
                    /* WARNING: Could not recover jumptable at 0x00010c038f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10100ea30; end: 10100ea6f; -[_TtC16QuickCutViewImpl22QuickCutViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100ea30(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d54788);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10100ea70; end: 10100ea77; -[_TtC16QuickCutViewImpl22QuickCutViewController pageViewName] */

undefined8 FUN_10100ea70(void)

{
  return 0x153;
}



/* Entry: 10100ea78; end: 10100eabb;  */

void FUN_10100ea78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070160();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10100eabc; end: 10100eae7; -[_TtC16QuickCutViewImpl22QuickCutViewController defaultSubProjectName] */

void FUN_10100eabc(void)

{
  func_0x000107c5fadc(0x7543206b63697551,0xe900000000000074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10100eae8; end: 10100eb4b;  */

/* WARNING: Possible PIC construction at 0x00010100eafc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010100eb00) */

void FUN_10100eae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}


