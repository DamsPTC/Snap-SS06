/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cdf450; end: 102cdf45f; -[AdDiscoverSharingPresenterSwift endShare] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf954b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f0c168),PTR_s_endShare_1125c2ed0);
  return;
}



/* Entry: 102cdf460; end: 102cdf4a3; -[AdDiscoverSharingPresenterSwift handleDidChangeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf460(long param_1)

{
  param_1 = param_1 + _DAT_112f0c160;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3d4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102cdf4a4; end: 102cdf563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf4a4(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f0c160;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  func_0x000107c61434(param_2);
  puVar3 = puVar2;
  func_0x000107c5f9dc(puVar2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(puVar2);
  func_0x000107c3d4a4(lVar1);
  func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 102cdf564; end: 102cdf5e7; -[AdDiscoverSharingPresenterSwift handleDidCompleteSharing:parameters:] */

void FUN_102cdf564(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c61174(param_1);
  FUN_102cdf4a4(param_3,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 102cdf5e8; end: 102cdf62b; -[AdDiscoverSharingPresenterSwift handleDidBeginSharing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf5e8(long param_1)

{
  param_1 = param_1 + _DAT_112f0c160;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3d49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102cdf62c; end: 102cdf66f; -[AdDiscoverSharingPresenterSwift handleDidExitPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf62c(long param_1)

{
  param_1 = param_1 + _DAT_112f0c160;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3d4ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102cdf670; end: 102cdf6b3; -[AdDiscoverSharingPresenterSwift handleDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf670(long param_1)

{
  param_1 = param_1 + _DAT_112f0c160;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3d4a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102cdf6b4; end: 102cdf6e7;  */

void FUN_102cdf6b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cdf6e8; end: 102cdf743; -[AdDiscoverSharingPresenterSwift .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cdf6e8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0c168));
  param_1 = param_1 + _DAT_112f0c160;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102cdf744; end: 102cdf763;  */

void FUN_102cdf744(void)

{
  func_0x000107c61168(&PTR_PTR_11289ef00);
  return;
}



/* Entry: 102cdf764; end: 102cdf793;  */

void FUN_102cdf764(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103b750d4();
  func_0x000103b750bc();
  *param_1 = uVar1;
  return;
}



/* Entry: 102cdf794; end: 102cdf827;  */

/* WARNING: Possible PIC construction at 0x000102cdf7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cdf808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cdf7ec) */
/* WARNING: Removing unreachable block (ram,0x000102cdf80c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf794(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ac080;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f0c198);
  *(undefined **)(param_1 + _DAT_112f0c198) = puVar1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102cdf828; end: 102cdf84f;  */

undefined8 FUN_102cdf828(void)

{
  return 0;
}



/* Entry: 102cdf850; end: 102cdfa6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdf850(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *param_3;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,uVar2);
  uStack_41 = param_4;
  func_0x0001007d6d78(&uStack_41);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102cdfa6c; end: 102cdfadf;  */

void FUN_102cdfa6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c61174(param_1);
  func_0x000102cdf8c8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cdfae0; end: 102ce0043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cdfae0(undefined8 param_1,undefined **param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined **)0x0) {
    return;
  }
  lVar14 = *(long *)(unaff_x20 + _DAT_112f0c1b8);
  if (lVar14 == 0) {
    return;
  }
  ppuVar13 = param_2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(lVar14);
  ppuVar3 = param_2;
  func_0x000107c40e0c();
  if ((int)ppuVar3 == 3) {
    ppuVar3 = param_2;
    func_0x000107c5def8();
    func_0x000107c61180();
    if (ppuVar3 != (undefined **)0x0) {
      func_0x000107c5d220(param_2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c52e1c(ppuVar3);
      func_0x000107c61170(ppuVar3);
      func_0x000107c61170(puVar2);
    }
  }
  lVar8 = unaff_x20;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (lVar8 == 0) goto LAB_102cdfd94;
  lVar11 = *(long *)(lVar8 + _DAT_11307abc8);
  func_0x000107c61434(lVar11);
  func_0x000107c61170(lVar8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110eb96b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110eb96b8);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102cdfc94:
    uStack_88 = 0;
    puStack_90 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    pcStack_80 = (code *)0x0;
    func_0x000107c6142c(ppuVar13);
    func_0x000107c6142c(lVar11);
LAB_102cdfcac:
    ppuVar13 = (undefined **)0x112d387f8;
    FUN_102ce2f08(&puStack_90,0x112d387f8,&UNK_10d902650);
LAB_102cdfcc4:
    uVar4 = 0;
  }
  else {
    func_0x000107c61434(lVar11);
    ppuVar7 = ppuVar13;
    func_0x000100029284(ppuVar3);
    if (((ulong)ppuVar7 & 1) == 0) {
      func_0x000107c6142c(lVar11);
      goto LAB_102cdfc94;
    }
    func_0x0001000bb420(*(long *)(lVar11 + 0x38) + (long)ppuVar3 * 0x20,&puStack_90);
    func_0x000107c6142c(ppuVar13);
    func_0x000107c61430(lVar11,2);
    if (puStack_78 == (undefined *)0x0) goto LAB_102cdfcac;
    uVar4 = 0;
    FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = &uStack_98;
    ppuVar13 = &puStack_90;
    func_0x000107c6147c(puVar5,ppuVar13,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)puVar5 & 1) == 0) goto LAB_102cdfcc4;
    uVar4 = uStack_98;
    func_0x000107c3ebcc(uStack_98);
    func_0x000107c61170(uStack_98);
  }
  ppuVar3 = param_2;
  func_0x000107c40e0c(param_2);
  ppuVar7 = param_2;
  func_0x000107c3d4cc();
  func_0x000107c61180();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    ppuVar13 = (undefined **)0xf000000000000000;
  }
  else {
    ppuVar12 = ppuVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(ppuVar7);
  }
  uVar6 = 0;
  func_0x000103b74c1c(0);
  func_0x000103b748f8(uVar4,ppuVar12,ppuVar13,((ulong)ppuVar3 & 0xffffffff) == 2,uVar6);
  func_0x0001000b44c0(ppuVar12);
  ppuVar3 = param_2;
  func_0x000107c5def8();
  func_0x000107c61180();
  if (ppuVar3 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c558ac(ppuVar3);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar2);
  }
LAB_102cdfd94:
  lVar8 = _DAT_112f0c198;
  ppuVar7 = *(undefined ***)(unaff_x20 + _DAT_112f0c198);
  ppuVar3 = param_2;
  if (ppuVar7 != (undefined **)0x0) {
    func_0x000107c61174();
    func_0x000107c40e0c();
    func_0x000107c61170(param_2);
    uVar4 = 0x406f400000000000;
    if ((int)ppuVar3 != 2) {
      uVar4 = 0;
    }
    func_0x000107c54f20(uVar4,ppuVar7);
    ppuVar3 = ppuVar7;
  }
  func_0x000107c61170(ppuVar3);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (lVar8 != 0) {
    func_0x000107c61174();
    ppuVar3 = param_2;
    func_0x000107c5def8();
    func_0x000107c61180();
    if (ppuVar3 == (undefined **)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce0044);
      (*pcVar1)();
    }
    ppuVar7 = param_2;
    func_0x000107c3d4cc();
    func_0x000107c61180();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar12 = (undefined **)0x0;
      ppuVar7 = (undefined **)0xf000000000000000;
      ppuVar16 = ppuVar13;
    }
    else {
      ppuVar12 = ppuVar7;
      func_0x000107c5ee30();
      ppuVar16 = ppuVar13;
      func_0x000107c61170(ppuVar7);
      ppuVar7 = ppuVar13;
    }
    ppuVar13 = param_2;
    func_0x000107c3d3f8();
    func_0x000107c61180();
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
      ppuVar16 = (undefined **)0xf000000000000000;
    }
    else {
      ppuVar15 = ppuVar13;
      func_0x000107c5ee30();
      func_0x000107c61170(ppuVar13);
    }
    puVar9 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puVar2 = &UNK_1105c0128;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar10 = &UNK_1105c0150;
    func_0x000107c613fc(&UNK_1105c0150,0x38,7);
    *(undefined **)(puVar10 + 0x10) = puVar2;
    *(undefined ***)(puVar10 + 0x18) = ppuVar12;
    *(undefined ***)(puVar10 + 0x20) = ppuVar7;
    *(undefined ***)(puVar10 + 0x28) = ppuVar15;
    *(undefined ***)(puVar10 + 0x30) = ppuVar16;
    pcStack_70 = FUN_102ce2d4c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102ce0ffc;
    puStack_78 = &UNK_1105c0168;
    ppuVar13 = &puStack_90;
    puStack_68 = puVar10;
    func_0x000107c60bc4(ppuVar13);
    puVar2 = puStack_68;
    func_0x000100de78a0(ppuVar12,ppuVar7);
    func_0x000100de78a0(ppuVar15,ppuVar16);
    func_0x000107c61574(puVar2);
    func_0x000107c3e4fc(puVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x0001000b44c0(ppuVar15,ppuVar16);
    func_0x0001000b44c0(ppuVar12,ppuVar7);
    func_0x0001000d224c(&puStack_90);
    uVar4 = uStack_88;
    puVar2 = puStack_90;
    puVar10 = puStack_90;
    func_0x000107c614f0(puStack_90);
    func_0x00010403c628(0xd00000000000002c,0x800000010f0fc210,puVar10,uVar4);
    func_0x000107c615e8(puVar2);
    func_0x000107c5a1ec(lVar8);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(puVar9);
  }
  func_0x000107c615e8(lVar14);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102ce0044; end: 102ce0113;  */

/* WARNING: Possible PIC construction at 0x000102ce0098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce009c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce0044(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0c198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f0c1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f0c1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f0c1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + _DAT_112f0c1b8));
  return;
}



/* Entry: 102ce0114; end: 102ce01bb;  */

/* WARNING: Possible PIC construction at 0x000102ce0170: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce0174) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce0114(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0c198));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0c1a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0c1a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0c1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0c1b8));
  return;
}



/* Entry: 102ce01bc; end: 102ce0263;  */

void FUN_102ce01bc(undefined8 param_1)

{
  if (lRam0000000112f0c208 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7286a8);
  return;
}



/* Entry: 102ce0264; end: 102ce026b;  */

void FUN_102ce0264(void)

{
  if (lRam0000000112f0c208 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7286a8);
  return;
}



/* Entry: 102ce026c; end: 102ce0567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce026c(ulong ******param_1,ulong *****param_2,ulong ******param_3,long param_4)

{
  ulong ******ppppppuVar1;
  ulong *****pppppuVar2;
  ulong *****pppppuVar3;
  undefined8 uVar4;
  ulong ******ppppppuVar5;
  ulong ******ppppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuStack_78;
  ulong *****pppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppppppuVar6 = param_1;
  func_0x000103b81f54();
  ppppppuVar5 = (ulong ******)*ppppppuVar6;
  ppppppuVar1 = ppppppuVar6 + 1;
  if ((param_1 == ppppppuVar5 && param_2 == *ppppppuVar1) ||
     (ppppppuVar6 = param_1, func_0x000107c605b8(param_1,param_2,ppppppuVar5,*ppppppuVar1,0),
     ((ulong)ppppppuVar6 & 1) != 0)) {
    if ((param_4 == 0) || (func_0x000103b81fc8(), *(long *)(param_4 + 0x10) == 0)) {
      uStack_68 = 0;
      pppppuStack_70 = (ulong *****)0x0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      pppppuVar3 = *ppppppuVar6;
      pppppuVar2 = ppppppuVar6[1];
      func_0x000107c61434(pppppuVar2);
      func_0x000107c61434(param_4);
      pppppuVar7 = pppppuVar2;
      func_0x000100029284(pppppuVar3);
      if (((ulong)pppppuVar7 & 1) == 0) {
        func_0x000107c6142c(param_4);
        uStack_68 = 0;
        pppppuStack_70 = (ulong *****)0x0;
        lStack_58 = 0;
        uStack_60 = 0;
        func_0x000107c6142c(pppppuVar2);
      }
      else {
        func_0x0001000bb420(*(long *)(param_4 + 0x38) + (long)pppppuVar3 * 0x20,&pppppuStack_70);
        func_0x000107c6142c(pppppuVar2);
        func_0x000107c6142c(param_4);
        if (lStack_58 != 0) {
          uVar4 = 0;
          FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          ppppppuVar6 = &pppppuStack_78;
          func_0x000107c6147c(ppppppuVar6,&pppppuStack_70,PTR___sypN_11034f1a8 + 8,uVar4,6);
          if (((ulong)ppppppuVar6 & 1) != 0) {
            pppppuStack_70 = pppppuStack_78;
            func_0x0001007d6d78(&pppppuStack_70);
            func_0x000107c61170();
            ppppppuVar6 = (ulong ******)pppppuStack_78;
          }
          goto LAB_102ce03c4;
        }
      }
    }
    ppppppuVar6 = &pppppuStack_70;
    FUN_102ce2f08(ppppppuVar6,0x112d387f8,&UNK_10d902650);
  }
LAB_102ce03c4:
  if ((param_3 != (ulong ******)0x0) && (param_4 != 0)) {
    func_0x000107c61174();
    func_0x0001000d224c(&pppppuStack_70);
    pppppuVar3 = pppppuStack_70;
    uVar4 = *(undefined8 *)((long)param_3 + _DAT_11307abc8);
    func_0x00010018cc3c(uVar4);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & (ulong)*pppppuVar3) + 0x110))
              (param_1,param_2,uVar4,param_4);
    func_0x000107c61170(pppppuVar3);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170();
    ppppppuVar6 = param_3;
  }
  func_0x000103b81960();
  ppppppuVar5 = (ulong ******)*ppppppuVar6;
  if (((ppppppuVar5 == param_1) && (ppppppuVar6[1] == param_2)) ||
     (func_0x000107c605b8(ppppppuVar5,ppppppuVar6[1],param_1,param_2,0),
     ((ulong)ppppppuVar5 & 1) != 0)) {
    pppppuStack_70 = (ulong *****)CONCAT71(pppppuStack_70._1_7_,1);
  }
  else {
    func_0x000103b81998();
    ppppppuVar6 = (ulong ******)*ppppppuVar5;
    if (((ppppppuVar6 != param_1) || (ppppppuVar5[1] != param_2)) &&
       (func_0x000107c605b8(ppppppuVar6,ppppppuVar5[1],param_1,param_2,0),
       ((ulong)ppppppuVar6 & 1) == 0)) {
      func_0x000103b81834();
      ppppppuVar5 = (ulong ******)*ppppppuVar6;
      if (((ppppppuVar5 != param_1) || (ppppppuVar6[1] != param_2)) &&
         (func_0x000107c605b8(ppppppuVar5,ppppppuVar6[1],param_1,param_2,0),
         ((ulong)ppppppuVar5 & 1) == 0)) {
        func_0x000103b81928();
        ppppppuVar6 = (ulong ******)*ppppppuVar5;
        if (((ppppppuVar6 != param_1) || (ppppppuVar5[1] != param_2)) &&
           (func_0x000107c605b8(ppppppuVar6,ppppppuVar5[1],param_1,param_2,0),
           ((ulong)ppppppuVar6 & 1) == 0)) {
          return;
        }
      }
    }
    pppppuStack_70 = (ulong *****)((ulong)pppppuStack_70 & 0xffffffffffffff00);
  }
  func_0x0001007d6d78(&pppppuStack_70);
  return;
}



/* Entry: 102ce0568; end: 102ce0623;  */

/* WARNING: Possible PIC construction at 0x000102ce0608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce060c) */

void FUN_102ce0568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_102ce026c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102ce0624; end: 102ce0f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102ce0624(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126d64f0;
    func_0x000107c610f8(PTR_PTR_1126d64f0);
    func_0x000107c453e4();
    puVar4 = &UNK_1105c0128;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_98 = (undefined **)0x102ce2d78;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bbf884;
    puStack_a0 = &UNK_1105c0190;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56da0(puVar10);
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)FUN_102ce2d80;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c01b8;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56e58(puVar10);
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)0x102ce2db0;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102a70bf8;
    puStack_a0 = &UNK_1105c01e0;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56ce0(puVar10);
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)FUN_102ce2de0;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bbf964;
    puStack_a0 = &UNK_1105c0208;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56d88(puVar10);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    ppuStack_98 = (undefined **)FUN_102ce2de8;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c0230;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c576f0(puVar10);
    func_0x000107c60bd0(ppuVar3);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112f0c1a0);
    uVar5 = 0;
    FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6157c(uVar9);
    uVar6 = 0x102ce32c8;
    func_0x0001000bfde0(0x102ce32c8,0,uVar5);
    func_0x000107c61574(uVar9);
    func_0x0001004575f0();
    func_0x000107c61574(uVar6);
    uVar6 = uVar9;
    func_0x000107c5cb24(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c571e0(puVar10);
    func_0x000107c61170(uVar6);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112f0c1b0);
    uVar6 = uVar9;
    func_0x000107c6157c(uVar9);
    func_0x0001004575f0();
    func_0x000107c61574(uVar9);
    uVar9 = uVar6;
    func_0x000107c5cb24(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c54ac4(puVar10);
    func_0x000107c61170(uVar9);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112f0c1a8);
    func_0x000107c6157c(uVar9);
    uVar6 = 0x102ce32cc;
    func_0x0001000bfde0(0x102ce32cc,0,uVar5);
    func_0x000107c61574(uVar9);
    func_0x0001004575f0();
    func_0x000107c61574(uVar6);
    uVar6 = uVar9;
    func_0x000107c5cb24(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c59b04(puVar10);
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112f0c1c0);
    func_0x000107c5c734(uVar6);
    func_0x000107c61180();
    func_0x000107c53548(puVar10);
    func_0x000107c615e8(uVar6);
    uVar6 = 0;
    if (param_3 >> 0x3c < 0xf) {
      func_0x000107c5ee20(param_2,param_3);
      uVar6 = param_2;
    }
    func_0x000107c5452c(puVar10);
    func_0x000107c61170(uVar6);
    if (param_5 >> 0x3c < 0xf) {
      func_0x000107c5ee20(param_4,param_5);
    }
    else {
      param_4 = 0;
    }
    func_0x000107c54528(puVar10);
    func_0x000107c61170(param_4);
    func_0x0001000d224c(&puStack_b8);
    puVar4 = puStack_b8;
    uVar9 = *(undefined8 *)(puStack_b8 + _DAT_112ff0148);
    func_0x000107c61174(uVar9);
    func_0x000107c61170(puVar4);
    uVar6 = uVar9;
    func_0x000107c5cb24(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c5a1c4(puVar10);
    func_0x000107c61170(uVar6);
    func_0x0001000d224c(&puStack_b8);
    puVar4 = puStack_b8;
    uVar9 = *(undefined8 *)(puStack_b8 + _DAT_112ff0158);
    func_0x000107c61174(uVar9);
    func_0x000107c61170(puVar4);
    uVar6 = uVar9;
    func_0x000107c5cb24(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c5a1cc(puVar10);
    func_0x000107c61170(uVar6);
    func_0x0001000d224c(&puStack_b8);
    puVar4 = puStack_b8;
    uVar9 = *(undefined8 *)(puStack_b8 + _DAT_112ff0150);
    func_0x000107c61174(uVar9);
    func_0x000107c61170(puVar4);
    uVar6 = uVar9;
    func_0x000107c5cb24(uVar9);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c5a1c8(puVar10);
    func_0x000107c61170(uVar6);
    puVar4 = &UNK_1105c0128;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    lVar8 = param_1;
    func_0x000107c61614(puVar2 + 0x10);
    ppuStack_98 = (undefined **)0x102ce2e18;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c0258;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_90);
    func_0x000107c56f48(puVar10);
    func_0x000107c60bd0();
    FUN_102ce0f88();
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bc0208;
    puStack_a0 = &UNK_1105c0280;
    ppuVar7 = &puStack_b8;
    ppuStack_98 = ppuVar3;
    puStack_90 = (undefined *)lVar8;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_90);
    func_0x000107c56e98(puVar10);
    func_0x000107c60bd0(ppuVar7);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)0x102ce2e48;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c02a8;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56c38(puVar10);
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)FUN_102ce2e78;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)0x102bc8c9c;
    puStack_a0 = &UNK_1105c02d0;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56c34(puVar10);
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)FUN_102ce2e80;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c02f8;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56e7c(puVar10);
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)FUN_102ce2eb0;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bc0284;
    puStack_a0 = &UNK_1105c0320;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56d00(puVar10);
    func_0x000107c60bd0(ppuVar3);
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    ppuStack_98 = (undefined **)0x102ce2eb8;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bc0300;
    puStack_a0 = &UNK_1105c0348;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_90);
    func_0x000107c56dfc(puVar10);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    ppuStack_98 = (undefined **)FUN_102ce2ec0;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102a70bf8;
    puStack_a0 = &UNK_1105c0370;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_90);
    func_0x000107c56cd0(puVar10);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return puVar10;
}



/* Entry: 102ce0f88; end: 102ce0ffb;  */

undefined1  [16] FUN_102ce0f88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined1 auVar3 [16];
  
  func_0x000107c614f0();
  puVar1 = &UNK_1105c0128;
  func_0x000107c613fc(&UNK_1105c0128,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105c0588;
  func_0x000107c613fc(&UNK_1105c0588,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = FUN_102ce2fd0;
  return auVar3;
}



/* Entry: 102ce0ffc; end: 102ce1033;  */

void FUN_102ce0ffc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102ce1034; end: 102ce1217;  */

void FUN_102ce1034(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = param_1;
  func_0x000103bb60a8();
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar1[3] = 2;
  puVar1[2] = 1;
  puVar3 = puVar1;
  func_0x000103bb630c();
  uVar5 = puVar3[1];
  puVar1[4] = *puVar3;
  puVar1[5] = uVar5;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar5);
  func_0x000107c490d4();
  uVar5 = 0;
  FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar1[9] = uVar5;
  puVar1[6] = puVar4;
  puVar3 = puVar1;
  func_0x000100214a84();
  func_0x000107c61588(puVar1);
  FUN_102ce2f08(puVar1 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar1 = puVar3;
  func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar3);
  func_0x000107c3dd28(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170();
  func_0x000103b8178c();
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar6 = puVar4;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar4);
  func_0x000107c3dd28(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 102ce1218; end: 102ce140f;  */

void FUN_102ce1218(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = param_3;
  func_0x000103b82204();
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  puVar1 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar1[3] = 4;
  puVar1[2] = 2;
  puVar4 = puVar1;
  func_0x000103b82400();
  uVar5 = puVar4[1];
  puVar1[4] = *puVar4;
  puVar1[5] = uVar5;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar5);
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  FUN_102ce2f90(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar1[9] = puVar4;
  puVar1[6] = puVar3;
  func_0x000103b81bc8();
  uVar5 = puVar4[1];
  puVar1[10] = *puVar4;
  puVar1[0xb] = uVar5;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar5);
  func_0x000107c46ed0();
  uVar5 = 0;
  FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar1[0xf] = uVar5;
  puVar1[0xc] = puVar3;
  puVar4 = puVar1;
  func_0x000100214a84(puVar1);
  func_0x000107c61588(puVar1);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar1 + 4,2,uVar5);
  puVar1 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar4);
  func_0x000107c3dd28(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102ce1410; end: 102ce15b3;  */

void FUN_102ce1410(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = param_1;
  func_0x000107c42a98();
  func_0x000107c61180();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000103bb463c();
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(uVar3,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000107c4e230(param_1);
    func_0x000107c61180();
    puVar2 = (undefined8 *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    puVar2[3] = 2;
    puVar2[2] = 1;
    puVar4 = puVar2;
    func_0x000103bb4cb8();
    uVar6 = puVar4[1];
    puVar2[4] = *puVar4;
    puVar2[5] = uVar6;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61434(uVar6);
    func_0x000107c45a48();
    uVar6 = 0;
    FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2[9] = uVar6;
    puVar2[6] = puVar5;
    puVar4 = puVar2;
    func_0x000100214a84(puVar2);
    func_0x000107c61588(puVar2);
    FUN_102ce2f08(puVar2 + 4,0x112d4b5f0,&UNK_10d9127d0);
    puVar2 = puVar4;
    func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar4);
    func_0x000107c4df80(puVar1);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102ce15b4; end: 102ce16b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce15b4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f0c1d8);
    puVar1 = &UNK_1105c06a0;
    func_0x000107c613fc(&UNK_1105c06a0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_2;
    uStack_58 = 0x102ce31c8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105c06b8;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102ce16b4; end: 102ce1857;  */

void FUN_102ce16b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = param_1;
  func_0x000103bb53d8();
  puVar2 = (undefined8 *)*puVar1;
  uVar3 = puVar1[1];
  func_0x000107c61434(uVar3);
  func_0x000107c5fadc(puVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c3dd24(param_1);
  func_0x000107c61170();
  func_0x000103bb60a8();
  uVar3 = *puVar2;
  uVar5 = puVar2[1];
  func_0x000107c61434(uVar5);
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  puVar2 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar1 = puVar2;
  func_0x000103bb630c();
  uVar5 = puVar1[1];
  puVar2[4] = *puVar1;
  puVar2[5] = uVar5;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar5);
  func_0x000107c490d4();
  uVar5 = 0;
  FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2[9] = uVar5;
  puVar2[6] = puVar4;
  puVar1 = puVar2;
  func_0x000100214a84(puVar2);
  func_0x000107c61588(puVar2);
  FUN_102ce2f08(puVar2 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar2 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar1);
  func_0x000107c3dd28(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102ce1858; end: 102ce197b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce1858(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112f0c1d8);
    puVar1 = &UNK_1105c0790;
    func_0x000107c613fc(&UNK_1105c0790,0x30,7);
    *(long *)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    uStack_78 = 0x102ce31e8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105c07a8;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102ce197c; end: 102ce1bb3;  */

void FUN_102ce197c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = param_4;
  func_0x000103b8223c();
  uVar3 = *puVar2;
  uVar6 = puVar2[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  puVar2 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar5 = puVar2;
  func_0x000103b82400();
  uVar6 = puVar5[1];
  puVar2[4] = *puVar5;
  puVar2[5] = uVar6;
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar6);
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  puVar5 = (undefined8 *)0x0;
  FUN_102ce2f90(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar2[9] = puVar5;
  puVar2[6] = puVar4;
  func_0x000103b823bc();
  uVar6 = puVar5[1];
  puVar2[10] = *puVar5;
  puVar2[0xb] = uVar6;
  if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce1bac);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_3) {
    if (param_3 < 9.223372036854776e+18) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61434(uVar6);
      func_0x000107c46ed0();
      uVar6 = 0;
      FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar2[0xf] = uVar6;
      puVar2[0xc] = puVar4;
      puVar5 = puVar2;
      func_0x000100214a84(puVar2);
      func_0x000107c61588(puVar2);
      uVar6 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408(puVar2 + 4,2,uVar6);
      puVar2 = puVar5;
      func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar5);
      func_0x000107c3dd28(param_4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce1bb4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce1bb0);
  (*pcVar1)();
}



/* Entry: 102ce1bb4; end: 102ce1c0f;  */

void FUN_102ce1bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_1;
  func_0x000103bba690();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c3dd24(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102ce1c10; end: 102ce1d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce1c10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  uVar4 = 0;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102ce2fd8(param_1);
    uVar5 = *(undefined8 *)(param_3 + _DAT_112f0c1d8);
    puVar1 = &UNK_1105c05b0;
    func_0x000107c613fc(&UNK_1105c05b0,0x29,7);
    *(long *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(undefined1 **)(puVar1 + 0x20) = puVar3;
    puVar1[0x28] = uVar4;
    pcStack_78 = FUN_102ce3190;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105c05c8;
    ppuVar2 = &puStack_98;
    puStack_70 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_70;
    func_0x000107c615f0(uVar5);
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102ce1d44; end: 102ce1ef3;  */

void FUN_102ce1d44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000103b827e4();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar1[3] = 2;
  puVar1[2] = 1;
  puVar3 = puVar1;
  func_0x000103b82820();
  uVar4 = puVar3[1];
  puVar1[4] = *puVar3;
  puVar1[5] = uVar4;
  FUN_102bc71b0();
  func_0x000107c613fc();
  puVar3[3] = 3;
  puVar3[2] = 1;
  func_0x0001042a8530(0);
  func_0x000107c61434(uVar4);
  func_0x000107c61434();
  func_0x0001042a7bf0();
  puVar3[4] = param_2;
  uVar4 = 0x112efcde0;
  func_0x0001000285a8(0x112efcde0,&UNK_10db2eaf0);
  puVar1[9] = uVar4;
  puVar1[6] = puVar3;
  puVar3 = puVar1;
  func_0x000100214a84(puVar1);
  func_0x000107c61588(puVar1);
  FUN_102ce2f08(puVar1 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar1 = puVar3;
  func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar3);
  func_0x000107c3dd28(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102ce1ef4; end: 102ce2033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce1ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    uVar3 = *(undefined8 *)(param_6 + _DAT_112f0c1d8);
    puVar1 = &UNK_1105c0448;
    func_0x000107c613fc(&UNK_1105c0448,0x40,7);
    *(long *)(puVar1 + 0x10) = param_6;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    *(undefined8 *)(puVar1 + 0x28) = param_4;
    *(undefined8 *)(puVar1 + 0x30) = param_5;
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    pcStack_88 = FUN_102ce2f48;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105c0460;
    ppuVar2 = &puStack_a8;
    puStack_80 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_80;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_6);
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_6);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102ce2034; end: 102ce22a3;  */

void FUN_102ce2034(undefined8 param_1,undefined8 param_2,double param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = param_4;
  func_0x000103b82348();
  uVar3 = *puVar2;
  uVar6 = puVar2[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  puVar2 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar2[3] = 6;
  puVar2[2] = 3;
  puVar5 = puVar2;
  func_0x000103b82400();
  uVar6 = puVar5[1];
  puVar2[4] = *puVar5;
  puVar2[5] = uVar6;
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar6);
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  puVar5 = (undefined8 *)0x0;
  FUN_102ce2f90(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar2[9] = puVar5;
  puVar2[6] = puVar4;
  func_0x000103b82684();
  uVar6 = puVar5[1];
  puVar2[10] = *puVar5;
  puVar2[0xb] = uVar6;
  puVar2[0xf] = PTR___sSSN_11034da80;
  puVar2[0xc] = param_5;
  puVar2[0xd] = param_6;
  func_0x000107c61434();
  func_0x000107c61434();
  func_0x000103b826bc();
  uVar6 = param_6[1];
  puVar2[0x10] = *param_6;
  puVar2[0x11] = uVar6;
  if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce229c);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_3) {
    if (param_3 < 9.223372036854776e+18) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61434(uVar6);
      func_0x000107c46ed0();
      uVar6 = 0;
      FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar2[0x15] = uVar6;
      puVar2[0x12] = puVar4;
      puVar5 = puVar2;
      func_0x000100214a84(puVar2);
      func_0x000107c61588(puVar2);
      uVar6 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408(puVar2 + 4,3,uVar6);
      puVar2 = puVar5;
      func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar5);
      func_0x000107c3dd28(param_4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce22a4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce22a0);
  (*pcVar1)();
}



/* Entry: 102ce22a4; end: 102ce25fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce22a4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f0c1d8);
    puVar1 = &UNK_1105c03f8;
    func_0x000107c613fc(&UNK_1105c03f8,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    uStack_68 = 0x102ce2f00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1105c0410;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102ce25fc; end: 102ce269f;  */

/* WARNING: Possible PIC construction at 0x000102ce2688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce268c) */

void FUN_102ce25fc(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = param_1;
  (*param_2)();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar4);
  func_0x000107c3dd28(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102ce26a0; end: 102ce27bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce26a0(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_4 + _DAT_112f0c1d8);
    func_0x000107c613fc(param_5,0x29,7);
    *(long *)(param_5 + 0x10) = param_4;
    *(undefined8 *)(param_5 + 0x18) = param_1;
    *(undefined8 *)(param_5 + 0x20) = param_2;
    *(byte *)(param_5 + 0x28) = param_3 & 1;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    ppuVar2 = &puStack_98;
    uStack_80 = param_7;
    uStack_78 = param_6;
    lStack_70 = param_5;
    func_0x000107c60bc4(ppuVar2);
    lVar1 = lStack_70;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_4);
    func_0x000107c61574(lVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_4);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102ce27bc; end: 102ce2843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce27bc(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + _DAT_112f0c198);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c40724(param_1,param_2);
    FUN_102cebbec((param_4 ^ 0xffffffff) & 1,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102ce2844; end: 102ce294b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce2844(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f0c1d8);
    puVar1 = &UNK_1105c04e8;
    func_0x000107c613fc(&UNK_1105c04e8,0x1c,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined4 *)(puVar1 + 0x18) = param_1;
    uStack_58 = 0x102ce2f64;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105c0500;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102ce294c; end: 102ce2a97;  */

void FUN_102ce294c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000103b829f0();
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar1[3] = 2;
  puVar1[2] = 1;
  puVar3 = puVar1;
  func_0x000103b82a2c();
  uVar4 = puVar3[1];
  puVar1[4] = *puVar3;
  puVar1[5] = uVar4;
  func_0x000107c61434();
  func_0x000107c60660();
  uVar4 = 0;
  FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar1[9] = uVar4;
  puVar1[6] = param_2;
  puVar3 = puVar1;
  func_0x000100214a84(puVar1);
  func_0x000107c61588(puVar1);
  FUN_102ce2f08(puVar1 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar1 = puVar3;
  func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar3);
  func_0x000107c3dd28(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102ce2a98; end: 102ce2d4b;  */

void FUN_102ce2a98(long *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar8 = *param_3;
  uVar9 = uVar8;
  func_0x000107c3f9f4();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar9;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar9);
  if (uVar4 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar9 = uVar4;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar9 == 0) {
    func_0x000107c6142c(uVar4);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100dd4260(0,uVar3,0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ce2d4c);
      (*pcVar2)();
    }
    uVar10 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar10;
        uVar3 = uVar4;
        func_0x0001002ec9a0();
      }
      uVar5 = uVar7;
      func_0x000107c49820();
      func_0x000107c61170(uVar7);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      uVar7 = uVar1 + 1;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        uVar3 = uVar7;
        func_0x000100dd4260(1 < *(ulong *)(puVar6 + 0x18),uVar7,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar7;
      *(ulong *)(puVar6 + uVar1 * 8 + 0x20) = uVar5;
    } while (uVar9 != uVar10);
    func_0x000107c6142c(uVar4);
  }
  uVar9 = uVar8;
  func_0x000107c51cac();
  func_0x000107c61180();
  lVar12 = 0;
  if (uVar9 == 0) {
    lVar13 = 0;
    lVar11 = param_2;
  }
  else {
    func_0x000107c4223c();
    lVar11 = param_2;
    func_0x000107c61170(uVar9);
    lVar13 = param_2;
  }
  uVar4 = uVar8;
  func_0x000107c4f7b0();
  func_0x000107c61180();
  lVar14 = lVar11;
  if (uVar4 != 0) {
    func_0x000107c4223c();
    lVar14 = lVar11;
    func_0x000107c61170(uVar4);
    lVar12 = lVar11;
  }
  uVar10 = uVar8;
  func_0x000107c4f7bc();
  func_0x000107c61180();
  if (uVar10 == 0) {
    lVar14 = 0;
  }
  else {
    func_0x000107c4223c();
    func_0x000107c61170(uVar10);
  }
  func_0x000107c4de24();
  func_0x000107c61180();
  if (uVar8 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar7 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
  }
  *param_1 = (long)puVar6;
  param_1[1] = lVar13;
  *(bool *)(param_1 + 2) = uVar9 == 0;
  param_1[3] = lVar12;
  *(bool *)(param_1 + 4) = uVar4 == 0;
  param_1[5] = lVar14;
  *(bool *)(param_1 + 6) = uVar10 == 0;
  param_1[7] = uVar7;
  param_1[8] = uVar3;
  return;
}



/* Entry: 102ce2d4c; end: 102ce2d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ce2d4c(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126d64f0;
    func_0x000107c610f8(PTR_PTR_1126d64f0);
    func_0x000107c453e4();
    puVar6 = &UNK_1105c0128;
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_98 = (undefined **)0x102ce2d78;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bbf884;
    puStack_a0 = &UNK_1105c0190;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56da0(puVar15);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)FUN_102ce2d80;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c01b8;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56e58(puVar15);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)0x102ce2db0;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102a70bf8;
    puStack_a0 = &UNK_1105c01e0;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56ce0(puVar15);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)FUN_102ce2de0;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bbf964;
    puStack_a0 = &UNK_1105c0208;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56d88(puVar15);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar3);
    ppuStack_98 = (undefined **)FUN_102ce2de8;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c0230;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c576f0(puVar15);
    func_0x000107c60bd0(ppuVar5);
    uVar13 = *(undefined8 *)(lVar3 + _DAT_112f0c1a0);
    uVar7 = 0;
    FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c6157c(uVar13);
    uVar8 = 0x102ce32c8;
    func_0x0001000bfde0(0x102ce32c8,0,uVar7);
    func_0x000107c61574(uVar13);
    func_0x0001004575f0();
    func_0x000107c61574(uVar8);
    uVar8 = uVar13;
    func_0x000107c5cb24(uVar13);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    func_0x000107c571e0(puVar15);
    func_0x000107c61170(uVar8);
    uVar13 = *(undefined8 *)(lVar3 + _DAT_112f0c1b0);
    uVar8 = uVar13;
    func_0x000107c6157c(uVar13);
    func_0x0001004575f0();
    func_0x000107c61574(uVar13);
    uVar13 = uVar8;
    func_0x000107c5cb24(uVar8);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c54ac4(puVar15);
    func_0x000107c61170(uVar13);
    uVar13 = *(undefined8 *)(lVar3 + _DAT_112f0c1a8);
    func_0x000107c6157c(uVar13);
    uVar8 = 0x102ce32cc;
    func_0x0001000bfde0(0x102ce32cc,0,uVar7);
    func_0x000107c61574(uVar13);
    func_0x0001004575f0();
    func_0x000107c61574(uVar8);
    uVar8 = uVar13;
    func_0x000107c5cb24(uVar13);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    func_0x000107c59b04(puVar15);
    func_0x000107c61170(uVar8);
    uVar8 = *(undefined8 *)(lVar3 + _DAT_112f0c1c0);
    func_0x000107c5c734(uVar8);
    func_0x000107c61180();
    func_0x000107c53548(puVar15);
    func_0x000107c615e8(uVar8);
    uVar8 = 0;
    if (uVar1 >> 0x3c < 0xf) {
      func_0x000107c5ee20(uVar9,uVar1);
      uVar8 = uVar9;
    }
    func_0x000107c5452c(puVar15);
    func_0x000107c61170(uVar8);
    if (uVar12 >> 0x3c < 0xf) {
      func_0x000107c5ee20(uVar14,uVar12);
    }
    else {
      uVar14 = 0;
    }
    func_0x000107c54528(puVar15);
    func_0x000107c61170(uVar14);
    func_0x0001000d224c(&puStack_b8);
    puVar6 = puStack_b8;
    uVar14 = *(undefined8 *)(puStack_b8 + _DAT_112ff0148);
    func_0x000107c61174(uVar14);
    func_0x000107c61170(puVar6);
    uVar9 = uVar14;
    func_0x000107c5cb24(uVar14);
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c5a1c4(puVar15);
    func_0x000107c61170(uVar9);
    func_0x0001000d224c(&puStack_b8);
    puVar6 = puStack_b8;
    uVar14 = *(undefined8 *)(puStack_b8 + _DAT_112ff0158);
    func_0x000107c61174(uVar14);
    func_0x000107c61170(puVar6);
    uVar9 = uVar14;
    func_0x000107c5cb24(uVar14);
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c5a1cc(puVar15);
    func_0x000107c61170(uVar9);
    func_0x0001000d224c(&puStack_b8);
    puVar6 = puStack_b8;
    uVar14 = *(undefined8 *)(puStack_b8 + _DAT_112ff0150);
    func_0x000107c61174(uVar14);
    func_0x000107c61170(puVar6);
    uVar9 = uVar14;
    func_0x000107c5cb24(uVar14);
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c5a1c8(puVar15);
    func_0x000107c61170(uVar9);
    puVar6 = &UNK_1105c0128;
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    lVar11 = lVar3;
    func_0x000107c61614(puVar4 + 0x10);
    ppuStack_98 = (undefined **)0x102ce2e18;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c0258;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_90);
    func_0x000107c56f48(puVar15);
    func_0x000107c60bd0();
    FUN_102ce0f88();
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bc0208;
    puStack_a0 = &UNK_1105c0280;
    ppuVar10 = &puStack_b8;
    ppuStack_98 = ppuVar5;
    puStack_90 = (undefined *)lVar11;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_90);
    func_0x000107c56e98(puVar15);
    func_0x000107c60bd0(ppuVar10);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)0x102ce2e48;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c02a8;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56c38(puVar15);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)FUN_102ce2e78;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)0x102bc8c9c;
    puStack_a0 = &UNK_1105c02d0;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56c34(puVar15);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)FUN_102ce2e80;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = (code *)&UNK_1000f6b44;
    puStack_a0 = &UNK_1105c02f8;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56e7c(puVar15);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)FUN_102ce2eb0;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bc0284;
    puStack_a0 = &UNK_1105c0320;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56d00(puVar15);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar3);
    ppuStack_98 = (undefined **)0x102ce2eb8;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102bc0300;
    puStack_a0 = &UNK_1105c0348;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c56dfc(puVar15);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c613fc(&UNK_1105c0128,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar3);
    ppuStack_98 = (undefined **)FUN_102ce2ec0;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    pcStack_a8 = FUN_102a70bf8;
    puStack_a0 = &UNK_1105c0370;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_90);
    func_0x000107c56cd0(puVar15);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
  }
  return puVar15;
}



/* Entry: 102ce2d80; end: 102ce2ddf;  */

void FUN_102ce2d80(void)

{
  func_0x000102ce2500();
  return;
}



/* Entry: 102ce2de0; end: 102ce2de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce2de0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f0c1d8);
    puVar2 = &UNK_1105c06a0;
    func_0x000107c613fc(&UNK_1105c06a0,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    uStack_58 = 0x102ce31c8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105c06b8;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102ce2de8; end: 102ce2e77;  */

void FUN_102ce2de8(void)

{
  func_0x000102ce2500();
  return;
}



/* Entry: 102ce2e78; end: 102ce2e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce2e78(undefined4 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f0c1d8);
    puVar2 = &UNK_1105c04e8;
    func_0x000107c613fc(&UNK_1105c04e8,0x1c,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined4 *)(puVar2 + 0x18) = param_1;
    uStack_58 = 0x102ce2f64;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105c0500;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102ce2e80; end: 102ce2eaf;  */

void FUN_102ce2e80(void)

{
  func_0x000102ce2500();
  return;
}



/* Entry: 102ce2eb0; end: 102ce2ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce2eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f0c1d8);
    puVar2 = &UNK_1105c0448;
    func_0x000107c613fc(&UNK_1105c0448,0x40,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x28) = param_4;
    *(undefined8 *)(puVar2 + 0x30) = param_5;
    *(undefined8 *)(puVar2 + 0x38) = param_1;
    pcStack_88 = FUN_102ce2f48;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105c0460;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_80;
    func_0x000107c615f0(uVar4);
    func_0x000107c61174(lVar1);
    func_0x000107c61434(param_5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 102ce2ec0; end: 102ce2eef;  */

void FUN_102ce2ec0(void)

{
  FUN_102ce26a0();
  return;
}



/* Entry: 102ce2ef0; end: 102ce2f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce2ef0(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar1 = *(byte *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f0c198);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c40724(uVar3,uVar4);
    FUN_102cebbec((bVar1 ^ 0xff) & 1,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102ce2f08; end: 102ce2f47;  */

undefined8 FUN_102ce2f08(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102ce2f48; end: 102ce2f6f;  */

void FUN_102ce2f48(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  
  puVar9 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar7 = *(undefined8 **)(unaff_x20 + 0x30);
  dVar12 = *(double *)(unaff_x20 + 0x38);
  puVar3 = puVar9;
  func_0x000103b82348();
  uVar4 = *puVar3;
  uVar1 = puVar3[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  puVar3 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar3[3] = 6;
  puVar3[2] = 3;
  puVar6 = puVar3;
  func_0x000103b82400();
  uVar1 = puVar6[1];
  puVar3[4] = *puVar6;
  puVar3[5] = uVar1;
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar1);
  func_0x000107c5dc50(uVar10,uVar11);
  func_0x000107c61180();
  puVar6 = (undefined8 *)0x0;
  FUN_102ce2f90(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar3[9] = puVar6;
  puVar3[6] = puVar5;
  func_0x000103b82684();
  uVar1 = puVar6[1];
  puVar3[10] = *puVar6;
  puVar3[0xb] = uVar1;
  puVar3[0xf] = PTR___sSSN_11034da80;
  puVar3[0xc] = uVar8;
  puVar3[0xd] = puVar7;
  func_0x000107c61434();
  func_0x000107c61434();
  func_0x000103b826bc();
  uVar8 = puVar7[1];
  puVar3[0x10] = *puVar7;
  puVar3[0x11] = uVar8;
  if (0x7fefffffffffffff < (ulong)ABS(dVar12)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ce229c);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar12) {
    if (dVar12 < 9.223372036854776e+18) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c61434(uVar8);
      func_0x000107c46ed0();
      uVar8 = 0;
      FUN_102ce2f90(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar3[0x15] = uVar8;
      puVar3[0x12] = puVar5;
      puVar7 = puVar3;
      func_0x000100214a84(puVar3);
      func_0x000107c61588(puVar3);
      uVar8 = 0x112d4b5f0;
      func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
      func_0x000107c61408(puVar3 + 4,3,uVar8);
      puVar3 = puVar7;
      func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(puVar7);
      func_0x000107c3dd28(puVar9);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ce22a4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ce22a0);
  (*pcVar2)();
}



/* Entry: 102ce2f70; end: 102ce2f8f;  */

void FUN_102ce2f70(void)

{
  long unaff_x20;
  
  FUN_102ce25fc(*(undefined8 *)(unaff_x20 + 0x10),&SUB_103b829b0);
  return;
}



/* Entry: 102ce2f90; end: 102ce2fcf;  */

void FUN_102ce2f90(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102ce2fd0; end: 102ce2fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce2fd0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar4 = auStack_68;
  uVar5 = 0;
  func_0x000107c61428(lVar1 + 0x10,puVar4,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102ce2fd8(param_1);
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112f0c1d8);
    puVar2 = &UNK_1105c05b0;
    func_0x000107c613fc(&UNK_1105c05b0,0x29,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined1 **)(puVar2 + 0x20) = puVar4;
    puVar2[0x28] = uVar5;
    pcStack_78 = FUN_102ce3190;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105c05c8;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 102ce2fd8; end: 102ce3157;  */

undefined * FUN_102ce2fd8(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    FUN_102bc78c4(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ce3158);
      (*pcVar2)();
    }
    uVar5 = 0;
    do {
      puVar1 = puStack_78;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ce313c);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar5;
        FUN_102ceffd0(uVar5,param_1);
      }
      uStack_c8 = uVar3;
      FUN_102ce2a98(&uStack_c0,&uStack_c8);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      puStack_78 = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_102bc78c4(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x28) = uStack_b8;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x20) = uStack_c0;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x60) = uStack_80;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x48) = uStack_98;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x40) = uStack_a0;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x58) = uStack_88;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x50) = uStack_90;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x38) = uStack_a8;
      *(undefined8 *)(puStack_78 + uVar3 * 0x48 + 0x30) = uStack_b0;
    } while (uVar4 != uVar5);
  }
  return puStack_78;
}



/* Entry: 102ce3158; end: 102ce318f;  */

void FUN_102ce3158(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102ce3190; end: 102ce319f;  */

void FUN_102ce3190(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = puVar1;
  func_0x000103b827e4();
  uVar3 = *puVar2;
  uVar6 = puVar2[1];
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  puVar2 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar4 = puVar2;
  func_0x000103b82820();
  uVar6 = puVar4[1];
  puVar2[4] = *puVar4;
  puVar2[5] = uVar6;
  FUN_102bc71b0();
  func_0x000107c613fc();
  puVar4[3] = 3;
  puVar4[2] = 1;
  func_0x0001042a8530(0);
  func_0x000107c61434(uVar6);
  func_0x000107c61434();
  func_0x0001042a7bf0();
  puVar4[4] = uVar5;
  uVar6 = 0x112efcde0;
  func_0x0001000285a8(0x112efcde0,&UNK_10db2eaf0);
  puVar2[9] = uVar6;
  puVar2[6] = puVar4;
  puVar4 = puVar2;
  func_0x000100214a84(puVar2);
  func_0x000107c61588(puVar2);
  FUN_102ce2f08(puVar2 + 4,0x112d4b5f0,&UNK_10d9127d0);
  puVar2 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  func_0x000107c6142c(puVar4);
  func_0x000107c3dd28(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102ce31a0; end: 102ce31bf;  */

void FUN_102ce31a0(void)

{
  long unaff_x20;
  
  FUN_102ce25fc(*(undefined8 *)(unaff_x20 + 0x10),&SUB_103bb6d88);
  return;
}



/* Entry: 102ce31c0; end: 102ce32cf;  */

void FUN_102ce31c0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = puVar4;
  func_0x000103bba690();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c3dd24(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102ce32d0; end: 102ce3313;  */

void FUN_102ce32d0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ce3314; end: 102ce331f;  */

void FUN_102ce3314(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 102ce3320; end: 102ce3387;  */

void FUN_102ce3320(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c615f0(uVar1);
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c3d744(uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102ce3388; end: 102ce3397;  */

void FUN_102ce3388(undefined8 param_1)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x10),PTR_s_removeListener__112628e00,param_1);
  return;
}



/* Entry: 102ce3398; end: 102ce34ef;  */

/* WARNING: Possible PIC construction at 0x000102ce3428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce342c) */

void FUN_102ce3398(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c615f0(uVar1);
  func_0x000107c5fadc(param_1,param_2);
  if (param_4 != 0) {
    func_0x000107c5f9dc(param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c4df80(uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ce34f0; end: 102ce353f; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdOperaLayerFactory supportedLayers] */

void FUN_102ce34f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_102ce52c8();
  uVar1 = 0x112eff150;
  func_0x0001000285a8(0x112eff150,&UNK_10db32440);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102ce3540; end: 102ce358b; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdOperaLayerFactory setPlaybackSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce3540(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f0c3d0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 102ce358c; end: 102ce4d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102ce358c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long **pplVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *aplStack_a0 [3];
  long *plStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar2 = PTR_PTR_1126ca3f0;
  func_0x000107c61168(PTR_PTR_1126ca3f0);
  lVar21 = param_1;
  func_0x000107c6148c(param_1,puVar2);
  if (lVar21 != 0) {
    func_0x0001000d224c(aplStack_a0);
    if (aplStack_a0[0] == (long *)0x0) {
      return (long *)0x0;
    }
    plVar9 = aplStack_a0[0];
    func_0x000107c5dca8(aplStack_a0[0]);
    func_0x000107c61180();
    func_0x000107c615e8(aplStack_a0[0]);
    return plVar9;
  }
  puVar2 = PTR_PTR_1126ca6c8;
  func_0x000107c61168(PTR_PTR_1126ca6c8);
  lVar21 = param_1;
  func_0x000107c6148c(param_1,puVar2);
  if (lVar21 == 0) {
    puVar2 = PTR_PTR_1126ca700;
    func_0x000107c61168(PTR_PTR_1126ca700);
    lVar21 = param_1;
    func_0x000107c6148c(param_1,puVar2);
    if (lVar21 != 0) {
      func_0x0001003a5b88();
      plVar9 = (long *)PTR_PTR_1126ac288;
      func_0x000107c610f8();
      func_0x000107c45ffc();
      func_0x000107c61170(lVar21);
      if (plVar9 == (long *)0x0) {
        return (long *)0x0;
      }
      plVar3 = plVar9;
      func_0x000107c61174(plVar9);
      func_0x000102ce3444();
      func_0x000107c5a2bc(plVar3);
LAB_102ce3730:
      func_0x000107c61170(plVar3);
      return plVar9;
    }
    puVar2 = PTR_PTR_1126ca6e8;
    func_0x000107c61168(PTR_PTR_1126ca6e8);
    lVar21 = param_1;
    func_0x000107c6148c(param_1,puVar2);
    if (lVar21 == 0) {
      puVar2 = PTR_PTR_1126ca6a0;
      func_0x000107c61168(PTR_PTR_1126ca6a0);
      lVar21 = param_1;
      func_0x000107c6148c(param_1,puVar2);
      if (lVar21 != 0) {
        uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f0c420);
        func_0x0001000bf56c();
        uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112f0c468);
        uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f0c460);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3d0);
        uVar23 = ((undefined8 *)(unaff_x20 + _DAT_112f0c3d0))[1];
        uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f0c428);
        plVar3 = (long *)0x0;
        func_0x000102ce32f4();
        plVar9 = plVar3;
        func_0x000107c613fc();
        uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f0c470);
        plVar9[2] = param_5;
        ppuStack_80 = &PTR_DAT_1105c07e8;
        lVar4 = 0;
        aplStack_a0[0] = plVar9;
        plStack_88 = plVar3;
        FUN_102cedba8();
        func_0x000107c610f8();
        *(undefined8 *)(lVar4 + _DAT_112f0ccd0) = 0;
        *(undefined8 *)(lVar4 + _DAT_112f0ccd8) = 0;
        puVar10 = (undefined8 *)(lVar4 + _DAT_112f0cce0);
        *puVar10 = 0;
        *(undefined1 *)(puVar10 + 1) = 1;
        *(undefined8 *)(lVar4 + _DAT_112f0cce8) = 0x3ff0000000000000;
        *(undefined1 *)(lVar4 + _DAT_112f0ccf0) = 0;
        func_0x000107c61614(lVar4 + _DAT_112f0ccf8,0);
        *(undefined8 *)(lVar4 + _DAT_112f0cd00) = 0;
        *(undefined8 *)(lVar4 + _DAT_112f0cd08) = 0;
        puVar2 = PTR_PTR_1126ae820;
        func_0x000107c610f8();
        func_0x000107c61434(uVar23);
        func_0x000107c615f0(param_5);
        func_0x000107c6157c(plVar9);
        func_0x000107c453e4();
        *(undefined **)(lVar4 + _DAT_112f0cd18) = puVar2;
        lVar5 = lVar21;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = lVar5;
          func_0x000107c509b4();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
        }
        *(long *)(lVar4 + _DAT_112f0cd10) = lVar22;
        puVar2 = PTR_PTR_1126b46f0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar4 + _DAT_112f0cd20) = puVar2;
        *(undefined8 *)(lVar4 + _DAT_112f0cd38) = uVar24;
        *(undefined8 *)(lVar4 + _DAT_112f0cd28) = uVar17;
        FUN_102ce5264(aplStack_a0,lVar4 + _DAT_112f0cd40);
        *(long *)(lVar4 + _DAT_112f0cd30) = lVar21;
        *(undefined8 *)(lVar4 + _DAT_112f0cd48) = uVar19;
        *(undefined8 *)(lVar4 + _DAT_112f0cd50) = uVar20;
        lVar5 = plVar9[2];
        *(undefined8 *)(lVar4 + _DAT_112f0cc40) = uVar18;
        puVar10 = (undefined8 *)(lVar4 + _DAT_112f0cc48);
        *puVar10 = uVar6;
        puVar10[1] = uVar23;
        func_0x000107c615f4(lVar5,2);
        func_0x000107c61174(uVar24);
        func_0x000107c61174(uVar17);
        func_0x000107c61174(lVar21);
        func_0x000107c6157c(uVar19);
        func_0x000107c6157c(uVar20);
        func_0x000107c6157c(uVar18);
        func_0x0001003a5b88();
        uVar6 = 0x112f0c4d8;
        func_0x0001000285a8(0x112f0c4d8,&UNK_10db3fa28);
        plVar3 = &lStack_128;
        lStack_128 = lVar4;
        uStack_120 = uVar6;
        func_0x000107c61154(plVar3,PTR_s_initWithConfiguration_layerViewC_1125de050,param_2,param_3,
                            param_4,lVar5,uVar18);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar18);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce4d74);
          (*pcVar1)();
        }
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(lVar21);
        goto LAB_102ce3b6c;
      }
      puVar2 = PTR_PTR_1126ca720;
      func_0x000107c61168(PTR_PTR_1126ca720);
      lVar21 = param_1;
      func_0x000107c6148c(param_1,puVar2);
      if (lVar21 != 0) {
        func_0x0001003a5b88();
        plVar9 = (long *)PTR_PTR_1126ac278;
        func_0x000107c610f8();
        func_0x000107c45ffc();
        func_0x000107c61170(lVar21);
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
        plVar3 = plVar9;
        func_0x000107c61174(plVar9);
        func_0x000102ce3444();
        func_0x000107c5a2c0(plVar3);
        goto LAB_102ce3730;
      }
      puVar2 = PTR_PTR_1126ca708;
      func_0x000107c61168(PTR_PTR_1126ca708);
      lVar21 = param_1;
      func_0x000107c6148c(param_1,puVar2);
      if (lVar21 == 0) {
        puVar2 = PTR_PTR_1126ca710;
        func_0x000107c61168(PTR_PTR_1126ca710);
        lVar21 = param_1;
        func_0x000107c6148c(param_1,puVar2);
        if (lVar21 != 0) {
          uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f0c460);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3d0);
          uVar23 = ((undefined8 *)(unaff_x20 + _DAT_112f0c3d0))[1];
          uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f0c420);
          uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f0c428);
          func_0x000107c61434();
          pcVar7 = 
          "init(eventStream:playbackSessionId:configuration:layerViewControllerConfiguration:operaDependencies:cofStore:eventAnnouncer:adConfigProvider:featureFlags:mainQueuePerformer:)"
          ;
          func_0x0001000c10c0();
          func_0x000107c61180();
          lVar4 = 0;
          FUN_102ce01bc();
          func_0x000107c610f8();
          *(undefined8 *)(lVar4 + _DAT_112f0c198) = 0;
          lVar5 = _DAT_112f0c1a0;
          aplStack_a0[0] = (long *)((ulong)aplStack_a0[0] & 0xffffffffffffff00);
          lVar21 = 0x112d61fd8;
          func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
          func_0x000107c613fc();
          pplVar8 = aplStack_a0;
          func_0x00010042e6a0();
          *(long ***)(lVar4 + lVar5) = pplVar8;
          lVar5 = _DAT_112f0c1a8;
          aplStack_a0[0] = (long *)((ulong)aplStack_a0[0] & 0xffffffffffffff00);
          func_0x000107c613fc(lVar21,*(undefined4 *)(lVar21 + 0x30),*(undefined2 *)(lVar21 + 0x34));
          pplVar8 = aplStack_a0;
          func_0x00010042e6a0();
          *(long ***)(lVar4 + lVar5) = pplVar8;
          lVar21 = _DAT_112f0c1b0;
          func_0x000102ce5468(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          plVar9 = (long *)0x0;
          func_0x000107c60110();
          aplStack_a0[0] = plVar9;
          func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
          func_0x000107c613fc();
          pplVar8 = aplStack_a0;
          func_0x00010042e6a0();
          *(long ***)(lVar4 + lVar21) = pplVar8;
          lVar21 = _DAT_112f0c1d0;
          func_0x0001000285a8(0x112efcbf8,&UNK_10db2e8e0);
          func_0x000107c613fc();
          pcVar1 = FUN_102cdf764;
          func_0x0001000bdd8c(FUN_102cdf764,0);
          *(code **)(lVar4 + lVar21) = pcVar1;
          *(undefined8 *)(lVar4 + _DAT_112f0c1c0) = uVar17;
          *(undefined8 *)(lVar4 + _DAT_112f0c1c8) = uVar19;
          lVar21 = *(long *)(param_4 + _DAT_11307a240);
          if (lVar21 == 0) {
            func_0x000107c61174(uVar17);
            func_0x000107c6157c(uVar19);
          }
          else {
            func_0x000107c61174(uVar17);
            func_0x000107c6157c(uVar19);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar21 == 0) {
              lVar21 = 0;
            }
            else {
              lVar5 = lVar21;
              func_0x000107c509b4();
              func_0x000107c61180();
              func_0x000107c615e8(lVar21);
              lVar21 = lVar5;
            }
          }
          *(long *)(lVar4 + _DAT_112f0c1b8) = lVar21;
          *(char **)(lVar4 + _DAT_112f0c1d8) = pcVar7;
          *(undefined8 *)(lVar4 + _DAT_112f0cc40) = uVar18;
          puVar10 = (undefined8 *)(lVar4 + _DAT_112f0cc48);
          *puVar10 = uVar6;
          puVar10[1] = uVar23;
          func_0x000107c615f0(pcVar7);
          func_0x000107c6157c(uVar18);
          func_0x0001003a5b88();
          uVar6 = 0x112f0c4d0;
          func_0x0001000285a8(0x112f0c4d0,&UNK_10db3fa18);
          plVar9 = &lStack_118;
          lStack_118 = lVar4;
          uStack_110 = uVar6;
          func_0x000107c61154(plVar9,PTR_s_initWithConfiguration_layerViewC_1125de050,param_2,
                              param_3,param_4,param_5,uVar18);
          func_0x000107c61170(uVar18);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce4d78);
            (*pcVar1)();
          }
          plVar3 = plVar9;
          func_0x000107c61174();
          plVar14 = plVar3;
          func_0x000107c42a98();
          func_0x000107c61180();
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce4d7c);
            (*pcVar1)();
          }
          lVar21 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c613fc();
          *(undefined8 *)(lVar21 + 0x18) = 0xe;
          *(undefined8 *)(lVar21 + 0x10) = 7;
          func_0x000107c61174();
          plVar13 = plVar3;
          func_0x000103b81f54();
          puVar10 = (undefined8 *)plVar13[1];
          *(long *)(lVar21 + 0x20) = *plVar13;
          *(undefined8 **)(lVar21 + 0x28) = puVar10;
          func_0x000107c61434();
          func_0x000103bb6b44();
          puVar11 = (undefined8 *)puVar10[1];
          *(undefined8 *)(lVar21 + 0x30) = *puVar10;
          *(undefined8 **)(lVar21 + 0x38) = puVar11;
          func_0x000107c61434();
          func_0x000103bb6d88();
          puVar10 = (undefined8 *)puVar11[1];
          *(undefined8 *)(lVar21 + 0x40) = *puVar11;
          *(undefined8 **)(lVar21 + 0x48) = puVar10;
          func_0x000107c61434();
          func_0x000103b81960();
          puVar11 = (undefined8 *)puVar10[1];
          *(undefined8 *)(lVar21 + 0x50) = *puVar10;
          *(undefined8 **)(lVar21 + 0x58) = puVar11;
          func_0x000107c61434();
          func_0x000103b81998();
          puVar10 = (undefined8 *)puVar11[1];
          *(undefined8 *)(lVar21 + 0x60) = *puVar11;
          *(undefined8 **)(lVar21 + 0x68) = puVar10;
          func_0x000107c61434();
          func_0x000103b81834();
          puVar11 = (undefined8 *)puVar10[1];
          *(undefined8 *)(lVar21 + 0x70) = *puVar10;
          *(undefined8 **)(lVar21 + 0x78) = puVar11;
          func_0x000107c61434();
          func_0x000103b81928();
          uVar6 = puVar11[1];
          *(undefined8 *)(lVar21 + 0x80) = *puVar11;
          *(undefined8 *)(lVar21 + 0x88) = uVar6;
          func_0x000107c61434();
          lVar5 = lVar21;
          func_0x000107c5fc48(lVar21,PTR___sSSN_11034da80);
          func_0x000107c61574(lVar21);
          func_0x000107c3d744(plVar14);
          func_0x000107c615e8(pcVar7);
          func_0x000107c615e8(plVar14);
          func_0x000107c61170(plVar3);
          func_0x000107c61170(plVar3);
          func_0x000107c61170(lVar5);
          return plVar9;
        }
        puVar2 = PTR_PTR_1126ca728;
        func_0x000107c61168(PTR_PTR_1126ca728);
        lVar21 = param_1;
        func_0x000107c6148c(param_1,puVar2);
        if (lVar21 == 0) {
          puVar2 = PTR_PTR_1126ca718;
          func_0x000107c61168(PTR_PTR_1126ca718);
          lVar21 = param_1;
          func_0x000107c6148c(param_1,puVar2);
          if (lVar21 == 0) {
            func_0x000103b9998c();
            lVar5 = param_1;
            func_0x000107c61480(param_1,lVar21);
            if (lVar5 != 0) {
              uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f0c460);
              uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3d0);
              uVar23 = ((undefined8 *)(unaff_x20 + _DAT_112f0c3d0))[1];
              lVar21 = 0;
              func_0x000102ceb5b8();
              func_0x000107c610f8();
              *(undefined8 *)(lVar21 + _DAT_112f0cc40) = uVar18;
              puVar10 = (undefined8 *)(lVar21 + _DAT_112f0cc48);
              *puVar10 = uVar6;
              puVar10[1] = uVar23;
              func_0x000107c61434(uVar23);
              func_0x000107c6157c(uVar18);
              func_0x0001003a5b88();
              uVar6 = 0x112f0c4c8;
              func_0x0001000285a8(0x112f0c4c8,&UNK_10db3fa08);
              plVar9 = &lStack_108;
              lStack_108 = lVar21;
              uStack_100 = uVar6;
              func_0x000107c61154(plVar9,PTR_s_initWithConfiguration_layerViewC_1125de050,param_2,
                                  param_3,param_4,param_5,uVar18);
              func_0x000107c61170(uVar18);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce41c0);
                (*pcVar1)();
              }
              return plVar9;
            }
            func_0x000103b9a070();
            lVar21 = param_1;
            func_0x000107c61480(param_1,lVar5);
            if (lVar21 == 0) {
              func_0x000103b98e4c();
              lVar5 = param_1;
              func_0x000107c61480(param_1,lVar21);
              if (lVar5 == 0) {
                func_0x000103b99614();
                lVar21 = param_1;
                func_0x000107c61480(param_1,lVar5);
                if (lVar21 != 0) {
                  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f0c460);
                  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3d0);
                  uVar23 = ((undefined8 *)(unaff_x20 + _DAT_112f0c3d0))[1];
                  plVar3 = (long *)0x0;
                  func_0x000102ce32f4();
                  plVar9 = plVar3;
                  func_0x000107c613fc();
                  plVar9[2] = param_5;
                  ppuStack_80 = &PTR_DAT_1105c07e8;
                  lVar5 = 0;
                  aplStack_a0[0] = plVar9;
                  plStack_88 = plVar3;
                  FUN_102ceac60();
                  func_0x000107c610f8();
                  lVar21 = _DAT_112f0c9d0;
                  func_0x0001000c6560(0);
                  func_0x000107c613fc();
                  func_0x000107c61434(uVar23);
                  func_0x000107c615f0(param_5);
                  plVar3 = plVar9;
                  func_0x000107c6157c();
                  func_0x0001000c6580();
                  *(long **)(lVar5 + lVar21) = plVar3;
                  puVar10 = (undefined8 *)(lVar5 + _DAT_112f0c9d8);
                  puVar10[1] = 0;
                  *puVar10 = 0;
                  puVar10[3] = 0;
                  puVar10[2] = 0;
                  puVar10[4] = 0;
                  puVar10 = (undefined8 *)(lVar5 + _DAT_112f0c9c0);
                  *puVar10 = FUN_102ce4f4c;
                  puVar10[1] = 0;
                  FUN_102ce5264(aplStack_a0,lVar5 + _DAT_112f0c9c8);
                  lVar21 = plVar9[2];
                  *(undefined8 *)(lVar5 + _DAT_112f0cc40) = uVar18;
                  puVar10 = (undefined8 *)(lVar5 + _DAT_112f0cc48);
                  *puVar10 = uVar6;
                  puVar10[1] = uVar23;
                  func_0x000107c615f4(lVar21,2);
                  func_0x000107c6157c(uVar18);
                  func_0x0001003a5b88();
                  uVar6 = 0x112f0c4b0;
                  func_0x0001000285a8(0x112f0c4b0,&UNK_10db3f9e8);
                  plVar3 = &lStack_b0;
                  lStack_b0 = lVar5;
                  uStack_a8 = uVar6;
                  func_0x000107c61154(plVar3,PTR_s_initWithConfiguration_layerViewC_1125de050,
                                      param_2,param_3,param_4,lVar21,uVar18);
                  func_0x000107c615e8(lVar21);
                  func_0x000107c61170(uVar18);
                  if (plVar3 == (long *)0x0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce4d88);
                    (*pcVar1)();
                  }
                  func_0x000107c615e8(lVar21);
                  goto LAB_102ce3b6c;
                }
                func_0x000103b985c4();
                func_0x000107c61480(param_1,lVar21);
                if (param_1 != 0) {
                  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f0c460);
                  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3d0);
                  uVar18 = ((undefined8 *)(unaff_x20 + _DAT_112f0c3d0))[1];
                  lVar5 = 0;
                  FUN_102cf1218();
                  func_0x000107c610f8();
                  lVar21 = _DAT_112f0cf40;
                  func_0x0001005f60b4(0);
                  func_0x000107c613fc();
                  uVar6 = uVar18;
                  func_0x000107c61434();
                  func_0x0001005f60d4();
                  *(undefined8 *)(lVar5 + lVar21) = uVar6;
                  lVar21 = _DAT_112f0cf48;
                  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  FUN_102cf3578();
                  *(undefined **)(lVar5 + lVar21) = puVar2;
                  *(undefined8 *)(lVar5 + _DAT_112f0cc40) = uVar17;
                  puVar10 = (undefined8 *)(lVar5 + _DAT_112f0cc48);
                  *puVar10 = uVar23;
                  puVar10[1] = uVar18;
                  func_0x000107c61434(uVar18);
                  func_0x000107c6157c(uVar17);
                  func_0x0001003a5b88();
                  uVar6 = 0x112f0c4a8;
                  func_0x0001000285a8(0x112f0c4a8,&UNK_10db3f9d8);
                  plVar9 = &lStack_78;
                  lStack_78 = lVar5;
                  uStack_70 = uVar6;
                  func_0x000107c61154(plVar9,PTR_s_initWithConfiguration_layerViewC_1125de050,
                                      param_2,param_3,param_4,param_5,uVar17);
                  func_0x000107c61170(uVar17);
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce4d8c);
                    (*pcVar1)();
                  }
                  plVar3 = plVar9;
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x0001000d224c(aplStack_a0);
                  func_0x0001000a8868(aplStack_a0,plStack_88);
                  plVar14 = plStack_88;
                  (**(code **)((long)ppuStack_80 + 8))(plStack_88,ppuStack_80);
                  uVar6 = 0x112f03b90;
                  func_0x0001000285a8(0x112f03b90,&UNK_10db3f9e0);
                  pcVar1 = FUN_102cf0bfc;
                  func_0x0001000d5158(FUN_102cf0bfc,0,uVar6);
                  func_0x000107c61574(plVar14);
                  func_0x0001000834e4(aplStack_a0);
                  puVar2 = &UNK_1105c0820;
                  func_0x000107c613fc(&UNK_1105c0820,0x20,7);
                  *(undefined8 *)(puVar2 + 0x10) = uVar23;
                  *(undefined8 *)(puVar2 + 0x18) = uVar18;
                  pcVar15 = FUN_102ce5254;
                  func_0x0001000c0ebc(FUN_102ce5254,puVar2);
                  func_0x000107c61574(pcVar1);
                  func_0x000107c61574(puVar2);
                  puVar2 = &UNK_1105c0848;
                  func_0x000107c613fc(&UNK_1105c0848,0x18,7);
                  func_0x000107c61614(puVar2 + 0x10,plVar3);
                  func_0x000107c61170(plVar3);
                  uVar6 = 0x102ce525c;
                  puVar12 = puVar2;
                  (**(code **)(*(long *)pcVar15 + 0x60))(0x102ce525c);
                  func_0x000107c61574(pcVar15);
                  func_0x000107c61574(puVar2);
                  func_0x000107c614f0(uVar6);
                  uVar23 = *(undefined8 *)((long)plVar3 + _DAT_112f0cf40);
                  pcVar1 = *(code **)(puVar12 + 0x18);
                  func_0x000107c6157c(uVar23);
                  (*pcVar1)();
                  func_0x000107c61170(plVar3);
                  func_0x000107c615e8(uVar6);
                  func_0x000107c61574(uVar23);
                  return plVar9;
                }
              }
              else {
                func_0x0001000d224c(aplStack_a0);
                if (aplStack_a0[0] != (long *)0x0) {
                  plVar14 = aplStack_a0[0];
                  func_0x000107c509b4();
                  func_0x000107c61180();
                  func_0x000107c615e8(aplStack_a0[0]);
                  if (plVar14 != (long *)0x0) {
                    puVar2 = &UNK_1105c0870;
                    func_0x000107c613fc(&UNK_1105c0870,0x20,7);
                    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f0c460);
                    *(undefined8 *)(puVar2 + 0x10) = param_2;
                    *(long **)(puVar2 + 0x18) = plVar14;
                    uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3d0);
                    uVar18 = ((undefined8 *)(unaff_x20 + _DAT_112f0c3d0))[1];
                    plVar3 = (long *)0x0;
                    func_0x000102ce32f4();
                    plVar9 = plVar3;
                    func_0x000107c613fc();
                    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f0c428);
                    uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f0c418);
                    plVar9[2] = param_5;
                    ppuStack_80 = &PTR_DAT_1105c07e8;
                    lVar5 = 0;
                    aplStack_a0[0] = plVar9;
                    plStack_88 = plVar3;
                    FUN_102ce82c4();
                    func_0x000107c610f8();
                    lVar21 = _DAT_112f0c790;
                    func_0x0001000c6560(0);
                    func_0x000107c613fc();
                    func_0x000107c61434(uVar18);
                    func_0x000107c615f0(param_5);
                    func_0x000107c61174();
                    func_0x000107c6157c(plVar9);
                    plVar3 = plVar14;
                    func_0x000107c615f0();
                    func_0x0001000c6580();
                    *(long **)(lVar5 + lVar21) = plVar3;
                    *(undefined8 *)(lVar5 + _DAT_112f0c798) = 0;
                    puVar10 = (undefined8 *)(lVar5 + _DAT_112f0c7a0);
                    puVar10[1] = 0;
                    *puVar10 = 0;
                    puVar10[3] = 0;
                    puVar10[2] = 0;
                    puVar10[4] = 0;
                    func_0x000107c61614(lVar5 + _DAT_112f0c7a8,0);
                    lVar21 = _DAT_112f0c7b0;
                    uVar6 = 0x112f0aed0;
                    func_0x0001000285a8(0x112f0aed0,&UNK_10db3e0b0);
                    func_0x000107c613fc();
                    func_0x0001000c2754();
                    *(undefined8 *)(lVar5 + lVar21) = uVar6;
                    puVar10 = (undefined8 *)(lVar5 + _DAT_112f0c768);
                    *puVar10 = FUN_102ce52a8;
                    puVar10[1] = puVar2;
                    *(long **)(lVar5 + _DAT_112f0c788) = plVar14;
                    *(undefined8 *)(lVar5 + _DAT_112f0c780) = uVar19;
                    FUN_102ce5264(aplStack_a0,lVar5 + _DAT_112f0c770);
                    *(undefined8 *)(lVar5 + _DAT_112f0c778) = uVar20;
                    lVar21 = plVar9[2];
                    *(undefined8 *)(lVar5 + _DAT_112f0cc40) = uVar17;
                    puVar10 = (undefined8 *)(lVar5 + _DAT_112f0cc48);
                    *puVar10 = uVar23;
                    puVar10[1] = uVar18;
                    func_0x000107c615f4(lVar21,2);
                    func_0x000107c615f0(plVar14);
                    func_0x000107c6157c(puVar2);
                    func_0x000107c6157c(uVar19);
                    func_0x000107c61174(uVar20);
                    func_0x000107c6157c(uVar17);
                    func_0x0001003a5b88();
                    uVar6 = 0x112f0c4b8;
                    func_0x0001000285a8(0x112f0c4b8,&UNK_10db3f9f8);
                    plVar3 = &lStack_c0;
                    lStack_c0 = lVar5;
                    uStack_b8 = uVar6;
                    func_0x000107c61154(plVar3,PTR_s_initWithConfiguration_layerViewC_1125de050,
                                        param_2,param_3,param_4,lVar21,uVar17);
                    func_0x000107c615e8(lVar21);
                    func_0x000107c61170(uVar17);
                    if (plVar3 == (long *)0x0) {
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce4d84);
                      (*pcVar1)();
                    }
                    func_0x000107c615e8(lVar21);
                    func_0x000107c61574(puVar2);
                    func_0x000107c615e8(plVar14);
                    goto LAB_102ce3b6c;
                  }
                }
              }
              return (long *)0x0;
            }
            uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3e8);
            puVar2 = &UNK_1105c0898;
            func_0x000107c613fc(&UNK_1105c0898,0x20,7);
            uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f0c420);
            uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f0c460);
            *(undefined8 *)(puVar2 + 0x10) = uVar6;
            *(undefined8 *)(puVar2 + 0x18) = param_2;
            uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f0c3d0);
            uVar18 = ((undefined8 *)(unaff_x20 + _DAT_112f0c3d0))[1];
            plVar3 = (long *)0x0;
            func_0x000102ce32f4();
            plVar9 = plVar3;
            func_0x000107c613fc();
            plVar9[2] = param_5;
            ppuStack_80 = &PTR_DAT_1105c07e8;
            lVar5 = 0;
            aplStack_a0[0] = plVar9;
            plStack_88 = plVar3;
            FUN_102cf3040();
            func_0x000107c610f8();
            puVar10 = (undefined8 *)(lVar5 + _DAT_112f0d0b8);
            puVar10[1] = 0;
            *puVar10 = 0;
            puVar10[3] = 0;
            puVar10[2] = 0;
            puVar10[4] = 0;
            lVar21 = _DAT_112f0d0c0;
            puVar12 = PTR_PTR_1126ae568;
            func_0x000107c610f8();
            func_0x000107c61434(uVar18);
            func_0x000107c615f0(param_5);
            func_0x000107c6157c(uVar6);
            func_0x000107c61174(param_2);
            func_0x000107c6157c(plVar9);
            func_0x000107c453e4();
            *(undefined **)(lVar5 + lVar21) = puVar12;
            lVar21 = _DAT_112f0d0c8;
            puVar12 = PTR_PTR_1126ae568;
            func_0x000107c610f8();
            func_0x000107c453e4();
            *(undefined **)(lVar5 + lVar21) = puVar12;
            lVar21 = _DAT_112f0d0d0;
            func_0x000102ce5468(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar6 = 0;
            func_0x000107c6010c(0);
            puVar12 = PTR_PTR_1126ae820;
            func_0x000107c610f8();
            func_0x000107c49470();
            func_0x000107c61170(uVar6);
            *(undefined **)(lVar5 + lVar21) = puVar12;
            lVar21 = _DAT_112f0d0d8;
            uVar6 = 0;
            func_0x0001000c6560();
            func_0x000107c613fc();
            func_0x0001000c6580();
            *(undefined8 *)(lVar5 + lVar21) = uVar6;
            puVar10 = (undefined8 *)(lVar5 + _DAT_112f0d0a0);
            *puVar10 = 0x102ce52b0;
            puVar10[1] = puVar2;
            *(undefined8 *)(lVar5 + _DAT_112f0d0a8) = uVar19;
            FUN_102ce5264(aplStack_a0,lVar5 + _DAT_112f0d0b0);
            lVar21 = plVar9[2];
            *(undefined8 *)(lVar5 + _DAT_112f0cc40) = uVar17;
            puVar10 = (undefined8 *)(lVar5 + _DAT_112f0cc48);
            *puVar10 = uVar23;
            puVar10[1] = uVar18;
            func_0x000107c615f4(lVar21,2);
            func_0x000107c61434(uVar18);
            func_0x000107c6157c(puVar2);
            func_0x000107c61174(uVar19);
            func_0x000107c6157c(uVar17);
            func_0x0001003a5b88();
            uVar6 = 0x112f0c4c0;
            func_0x0001000285a8(0x112f0c4c0,&UNK_10db3fa00);
            plVar3 = &lStack_d0;
            lStack_d0 = lVar5;
            uStack_c8 = uVar6;
            func_0x000107c61154(plVar3,PTR_s_initWithConfiguration_layerViewC_1125de050,param_2,
                                param_3,param_4,lVar21,uVar17);
            func_0x000107c615e8(lVar21);
            func_0x000107c61170(uVar17);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce4d80);
              (*pcVar1)();
            }
            func_0x000107c615e8(lVar21);
            plVar13 = plVar3;
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x0001000d224c(auStack_f8);
            func_0x0001000a8868(auStack_f8,uStack_e0);
            uVar17 = uStack_e0;
            (**(code **)(lStack_d8 + 8))(uStack_e0,lStack_d8);
            uVar6 = 0x112f03b90;
            func_0x0001000285a8(0x112f03b90,&UNK_10db3f9e0);
            pcVar1 = FUN_102cf1484;
            func_0x0001000d5158(FUN_102cf1484,0,uVar6);
            func_0x000107c61574(uVar17);
            func_0x0001000834e4(auStack_f8);
            puVar12 = &UNK_1105c08c0;
            func_0x000107c613fc(&UNK_1105c08c0,0x20,7);
            *(undefined8 *)(puVar12 + 0x10) = uVar23;
            *(undefined8 *)(puVar12 + 0x18) = uVar18;
            plVar14 = (long *)0x102ce52b8;
            func_0x0001000c0ebc(0x102ce52b8,puVar12);
            func_0x000107c61574(pcVar1);
            func_0x000107c61574(puVar12);
            puVar12 = &UNK_1105c08e8;
            func_0x000107c613fc(&UNK_1105c08e8,0x18,7);
            func_0x000107c61614(puVar12 + 0x10,plVar13);
            func_0x000107c61170(plVar13);
            uVar6 = 0x102ce52c0;
            puVar16 = puVar12;
            (**(code **)(*plVar14 + 0x60))(0x102ce52c0);
            func_0x000107c61574(plVar14);
            func_0x000107c61574(puVar12);
            func_0x000107c614f0(uVar6);
            uVar23 = *(undefined8 *)((long)plVar13 + _DAT_112f0d0d8);
            pcVar1 = *(code **)(puVar16 + 0x10);
            func_0x000107c6157c(uVar23);
            (*pcVar1)();
            func_0x000107c615e8(uVar6);
            func_0x000107c61574(uVar23);
            func_0x000107c61574(puVar2);
            func_0x000107c61170(plVar13);
LAB_102ce3b6c:
            func_0x000107c61574(plVar9);
            func_0x0001000834e4(aplStack_a0);
            return plVar3;
          }
          func_0x0001003a5b88();
          plVar9 = (long *)PTR_PTR_1126ac260;
          func_0x000107c610f8(PTR_PTR_1126ac260);
          func_0x000107c45ffc();
        }
        else {
          lVar5 = *(long *)(unaff_x20 + _DAT_112f0c420);
          func_0x000107c61174(lVar5);
          lVar21 = lVar5;
          func_0x0001003a5b88();
          plVar9 = (long *)PTR_PTR_1126ac268;
          func_0x000107c610f8(PTR_PTR_1126ac268);
          func_0x000107c45ff4();
          func_0x000107c61170(lVar5);
        }
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0c420);
        lVar5 = *(long *)(unaff_x20 + _DAT_112f0c458);
        func_0x000107c61174(uVar6);
        func_0x000107c61174();
        lVar21 = lVar5;
        func_0x0001003a5b88();
        plVar9 = (long *)PTR_PTR_1126ac270;
        func_0x000107c610f8(PTR_PTR_1126ac270);
        func_0x000107c45ff0();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(lVar5);
      }
    }
    else {
      func_0x0001003a5b88();
      plVar9 = (long *)PTR_PTR_1126ac280;
      func_0x000107c610f8(PTR_PTR_1126ac280);
      func_0x000107c46000();
    }
  }
  else {
    func_0x0001003a5b88();
    plVar9 = (long *)PTR_PTR_1126ac290;
    func_0x000107c610f8(PTR_PTR_1126ac290);
    func_0x000107c46004();
  }
  func_0x000107c61170(lVar21);
  return plVar9;
}



/* Entry: 102ce4d8c; end: 102ce4f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce4d8c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar2 = lStack_48;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    if (lVar2 != 0) {
      lVar3 = 0;
      FUN_102cf1464();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar4 + _DAT_112f0d070) = 0;
      *(long *)(lVar4 + _DAT_112f0d060) = lVar2;
      *(undefined8 *)(lVar4 + _DAT_112f0d068) = param_3;
      puVar1 = PTR_s_initWithFrame__1125e2948;
      lStack_58 = lVar4;
      lStack_50 = lVar3;
      func_0x000107c615f0(lVar2);
      func_0x000107c61174(param_3);
      plVar5 = &lStack_58;
      func_0x000107c61154(0,0,0,0,plVar5,puVar1);
      param_1[3] = lVar3;
      param_1[4] = (long)&PTR_DAT_1105c1230;
      func_0x000107c615e8(lVar2);
      *param_1 = (long)plVar5;
      return;
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102ce4f4c; end: 102ce4f8f;  */

void FUN_102ce4f4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_102ce9d50();
  uVar2 = uVar1;
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105c0d78;
  *param_1 = uVar2;
  return;
}



/* Entry: 102ce4f90; end: 102ce5067; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdOperaLayerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_102ce4f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_102ce358c(param_3,param_4,param_5,param_6,param_7);
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



/* Entry: 102ce5068; end: 102ce50c7; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdOperaLayerFactory init] */

void FUN_102ce5068(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.AdOperaLayerFactory",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce5094);
  (*pcVar1)();
}



/* Entry: 102ce50c8; end: 102ce5233; -[_TtC40AdOperaLayerFactoryServiceImplementation19AdOperaLayerFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ce50f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce51f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce51fc) */
/* WARNING: Removing unreachable block (ram,0x000102ce519c) */
/* WARNING: Removing unreachable block (ram,0x000102ce515c) */
/* WARNING: Removing unreachable block (ram,0x000102ce511c) */
/* WARNING: Removing unreachable block (ram,0x000102ce50fc) */
/* WARNING: Removing unreachable block (ram,0x000102ce521c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce50c8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0c3d0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0c3d8));
  return;
}



/* Entry: 102ce5234; end: 102ce5253;  */

void FUN_102ce5234(void)

{
  func_0x000107c61168(&PTR_PTR_11289f0a8);
  return;
}



/* Entry: 102ce5254; end: 102ce5263;  */

uint FUN_102ce5254(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,lVar4);
  (**(code **)(lVar5 + 0x20))();
  uVar3 = 0;
  if (lVar2 != 0) {
    if (lVar4 == lVar1 && lVar2 == lVar5) {
      uVar3 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar3 = (uint)lVar4;
    }
  }
  func_0x000107c6142c(lVar5);
  return uVar3 & 1;
}



/* Entry: 102ce5264; end: 102ce52a7;  */

long FUN_102ce5264(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ce52a8; end: 102ce52c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce52a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_50;
  lVar4 = 0;
  FUN_102ce6adc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f0c738) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f0c728) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f0c730) = uVar2;
  puVar3 = PTR_s_initWithFrame__1125e2948;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar2);
  func_0x000107c61154(0,0,0,0,&lStack_50,puVar3);
  param_1[3] = lVar4;
  param_1[4] = &PTR_DAT_1105c09e0;
  *param_1 = plVar6;
  return;
}



/* Entry: 102ce52c8; end: 102ce54a7;  */

long FUN_102ce52c8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x112eff120;
  func_0x0001000285a8(0x112eff120,&UNK_10db32400);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x1e;
  *(undefined8 *)(lVar1 + 0x10) = 0xf;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c4e0,&PTR_PTR_1126ca3f0);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c4e8,&PTR_PTR_1126ca6c8);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c4f0,&PTR_PTR_1126ca700);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c4f8,&PTR_PTR_1126ca6e8);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c500,&PTR_PTR_1126ca6a0);
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c508,&PTR_PTR_1126ca708);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c510,&PTR_PTR_1126ca710);
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c518,&PTR_PTR_1126ca718);
  *(undefined8 *)(lVar1 + 0x58) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c520,&PTR_PTR_1126ca720);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  uVar2 = 0;
  func_0x000102ce5468(0,0x112f0c528,&PTR_PTR_1126ca728);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  uVar2 = 0;
  func_0x000103b9998c();
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  uVar2 = 0;
  func_0x000103b9a070();
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
  uVar2 = 0;
  func_0x000103b98e4c();
  *(undefined8 *)(lVar1 + 0x80) = uVar2;
  uVar2 = 0;
  func_0x000103b99614();
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  uVar2 = 0;
  func_0x000103b985c4();
  *(undefined8 *)(lVar1 + 0x90) = uVar2;
  return lVar1;
}



/* Entry: 102ce54a8; end: 102ce5507; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdOperaLayerFactoryProvider init] */

void FUN_102ce54a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.AdOperaLayerFactoryProvider",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ce54d4);
  (*pcVar1)();
}



/* Entry: 102ce5508; end: 102ce551b; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdOperaLayerFactoryProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce5508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0c530 + 8));
  return;
}



/* Entry: 102ce551c; end: 102ce5587; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdOperaLayerFactoryProvider createPluginWithShowcaseInteractionHistoryTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce551c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f0c530);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  (*pcVar1)(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102ce5588; end: 102ce5aa3;  */

long FUN_102ce5588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x48) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_11;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar1 = param_12;
  func_0x000107c4141c();
  func_0x000107c61180();
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
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_14;
  *(undefined8 *)(unaff_x20 + 0x60) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_16;
  *(undefined8 *)(unaff_x20 + 0x70) = param_15;
  *(undefined8 *)(unaff_x20 + 0x80) = param_17;
  *(undefined8 *)(unaff_x20 + 0x88) = param_18;
  return unaff_x20;
}



/* Entry: 102ce5aa4; end: 102ce5af7;  */

void FUN_102ce5aa4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102ce5738(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 102ce5af8; end: 102ce5b53;  */

void FUN_102ce5af8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c42e58();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ce5b54; end: 102ce5c93;  */

/* WARNING: Possible PIC construction at 0x000102ce5b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce5bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce5bc4) */
/* WARNING: Removing unreachable block (ram,0x000102ce5bb4) */
/* WARNING: Removing unreachable block (ram,0x000102ce5ba4) */
/* WARNING: Removing unreachable block (ram,0x000102ce5b94) */
/* WARNING: Removing unreachable block (ram,0x000102ce5b84) */
/* WARNING: Removing unreachable block (ram,0x000102ce5b74) */
/* WARNING: Removing unreachable block (ram,0x000102ce5b64) */
/* WARNING: Removing unreachable block (ram,0x000102ce5bd4) */

void FUN_102ce5b54(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102ce5c94; end: 102ce5ceb;  */

void FUN_102ce5c94(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010072b28c();
  *param_1 = param_2;
  return;
}



/* Entry: 102ce5cec; end: 102ce5cf3;  */

void FUN_102ce5cec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c42e58();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ce5cf4; end: 102ce5d87; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdPlayableComposerNavigator initWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce5cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = param_1 + _DAT_112f0c6b8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined1 *)(param_1 + _DAT_112f0c6c0) = 0;
  lVar1 = _DAT_112f0c6c8;
  func_0x000107c61614(param_1 + _DAT_112f0c6c8,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_initWithRuntime__1125edce0,param_3);
  return;
}



/* Entry: 102ce5d88; end: 102ce5da7;  */

void FUN_102ce5d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce5da8,0,0);
  return;
}



/* Entry: 102ce5da8; end: 102ce5e57;  */

void FUN_102ce5da8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x40) = lVar3;
  if (lVar3 != 0) {
    uVar1 = 0;
    func_0x000107c5fcec();
    uVar2 = uVar1;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce5e58,uVar1,uVar2);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000102ce5e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce5e58; end: 102ce5ebb;  */

void FUN_102ce5e58(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  FUN_102ce5ecc(uVar3,uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ce5ebc,0,0);
  return;
}



/* Entry: 102ce5ebc; end: 102ce5ecb;  */

void FUN_102ce5ebc(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102ce5ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ce5ecc; end: 102ce6113;  */

/* WARNING: Possible PIC construction at 0x000102ce5fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce60d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ce6024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce5fe0) */
/* WARNING: Removing unreachable block (ram,0x000102ce6028) */
/* WARNING: Removing unreachable block (ram,0x000102ce60d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce5ecc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f0c6c8;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4c250();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c40ef4(lVar2);
    func_0x000107c61180();
    puVar4 = &stack0xffffffffffffffa0;
    func_0x000107c61154(puVar4,PTR_s_makeContainerViewControllerWithP_11260b628,param_1,lVar2);
    func_0x000107c61180();
    if ((*(byte *)(unaff_x20 + _DAT_112f0c6c0) & 1) == 0) {
      func_0x000107c5677c(puVar4);
    }
    else {
      lVar5 = 0;
      FUN_102ce6780();
      lVar3 = lVar5;
      func_0x000107c610f8();
      *(undefined1 **)(lVar3 + _DAT_112f0c6f8) = puVar4;
      puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_a0 = lVar3;
      lStack_98 = lVar5;
      func_0x000107c61174(puVar4);
      func_0x000107c61154(&lStack_a0,puVar1,0,0);
      func_0x000107c61180();
      func_0x000107c5677c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102ce6114; end: 102ce620f; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdPlayableComposerNavigator presentComponentWithPage:animated:] */

/* WARNING: Possible PIC construction at 0x000102ce61f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ce61f4) */

void FUN_102ce6114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105c0978;
  func_0x000107c613fc(&UNK_1105c0978,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1105c09a0;
  func_0x000107c613fc(&UNK_1105c09a0,0x21,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db3fb80,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102ce6210; end: 102ce6303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102ce6210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c614f0();
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c61154(puVar2,PTR_s_makeContainerViewControllerWithP_11260b628,param_1,param_2);
  func_0x000107c61180();
  if (*(char *)(unaff_x20 + _DAT_112f0c6c0) == '\x01') {
    lVar3 = 0;
    FUN_102ce6780();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined1 **)(lVar4 + _DAT_112f0c6f8) = puVar2;
    puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(puVar2);
    func_0x000107c61154(&lStack_50,puVar1,0,0);
    func_0x000107c61180();
    func_0x000107c5677c();
    func_0x000107c61170(plVar5);
    func_0x000107c61170(puVar2);
    puVar2 = (undefined1 *)plVar5;
  }
  else {
    func_0x000107c5677c(puVar2);
  }
  return puVar2;
}



/* Entry: 102ce6304; end: 102ce6417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ce6304(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + _DAT_112f0c6b8;
  func_0x000107c61618();
  if (lVar1 == 0) {
LAB_102ce63fc:
    func_0x000107c61170(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar3 = 0;
      func_0x000103b98e4c(0);
      lVar4 = lVar2;
      func_0x000107c61480(lVar2,uVar3);
      if (lVar4 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar1);
        param_1 = lVar2;
        goto LAB_102ce63fc;
      }
      uVar3 = *(undefined8 *)(lVar4 + _DAT_112ff2528);
      lVar4 = ((undefined8 *)(lVar4 + _DAT_112ff2528))[1];
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c614f0(uVar3);
      (**(code **)(lVar4 + 0x48))();
      func_0x000107c615e8(uVar3);
    }
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102ce6418; end: 102ce648b; -[_TtC40AdOperaLayerFactoryServiceImplementation27AdPlayableComposerNavigator makeContainerViewControllerWithPage:parentComposerContext:] */

void FUN_102ce6418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102ce6210(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


