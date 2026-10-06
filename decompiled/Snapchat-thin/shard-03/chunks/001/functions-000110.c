/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10253d990; end: 10253dd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253d990(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  code *pcVar14;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar12 = *(ulong **)(unaff_x20 + _DAT_112ea45a8);
  lVar10 = *(long *)((long)puVar12 + _DAT_112fa9438);
  if (lVar10 != 0) {
    lVar11 = *(long *)((long)puVar12 + _DAT_112fa9430);
    if ((lVar11 != 0) && (lVar3 = *(long *)((long)puVar12 + _DAT_112fa9440), lVar3 != 0)) {
      lVar13 = ((long *)((long)puVar12 + _DAT_112fa9430))[1];
      pcVar14 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar12) + 0xb8);
      func_0x000107c61174();
      func_0x000107c615f0(lVar11);
      lVar4 = lVar10;
      func_0x000107c615f0(lVar10);
      (*pcVar14)();
      uStack_88 = 0;
      func_0x000107c61614(auStack_90,0);
      uStack_88 = param_2;
      func_0x000107c61604(auStack_90,lVar4);
      func_0x000107c61174();
      func_0x000107c615f0(lVar11);
      func_0x000107c615f0(lVar10);
      func_0x000107c615e8(lVar4);
      lStack_80 = lVar10;
      lStack_78 = lVar11;
      lStack_70 = lVar13;
      lStack_68 = lVar3;
      func_0x00010008a7c8(&puStack_c8,auStack_90);
      puVar7 = puStack_c8;
      func_0x000100083b20(&lStack_98);
      func_0x000107c61574(puVar7);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4568);
      *(long *)(unaff_x20 + _DAT_112ea4568) = lStack_98;
      lVar4 = lStack_98;
      func_0x000107c61174();
      func_0x000107c61170(uVar9);
      puVar7 = &UNK_11051e6e0;
      puVar5 = puVar7;
      func_0x000107c613fc(&UNK_11051e6e0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar1 = (undefined8 *)(lVar4 + _DAT_112ea42f8);
      uVar9 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = 0x10253ecdc;
      puVar1[1] = puVar5;
      func_0x000107c6157c(puVar5);
      func_0x00010058d43c(uVar9,uVar2);
      func_0x000107c61574(puVar5);
      func_0x000100083b20(&puStack_c8);
      puVar5 = puStack_c8;
      func_0x000107c4e7bc(puStack_c8);
      func_0x000107c61180();
      func_0x000107c61170(puStack_c8);
      puVar6 = puVar5;
      func_0x000107c5c734(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c53704(param_1);
      func_0x000107c615e8(puVar6);
      func_0x000107c613fc(&UNK_11051e6e0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      uStack_a8 = 0x10253ece4;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_10253e0bc;
      puStack_b0 = &UNK_11051e770;
      ppuVar8 = &puStack_c8;
      puStack_a0 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_a0);
      func_0x000107c54ecc(param_1);
      func_0x000107c60bd0(ppuVar8);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4580);
      func_0x000109021ee0();
      if ((int)uVar9 != 0) {
        FUN_10253a258();
        func_0x000107c57bbc(param_1);
        func_0x000107c61170(uVar9);
      }
      FUN_102538a48();
      func_0x000107c52168();
      func_0x000107c54c20(param_1);
      func_0x000107c61170(uVar9);
      puVar7 = PTR_PTR_1126aaa90;
      func_0x000107c610f8(PTR_PTR_1126aaa90);
      func_0x000107c453e4();
      puVar5 = puVar7;
      FUN_102537b38();
      uVar9 = 0;
      FUN_10253ecec(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pcVar14 = FUN_102537c10;
      func_0x0001000bfde0(FUN_102537c10,0,uVar9);
      func_0x000107c61574(puVar5);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar14);
      puVar6 = puVar5;
      func_0x000107c5cb24(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c54b08(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c52168(puVar7);
      func_0x000107c573cc(param_1);
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar7);
      func_0x000102538240(auStack_90);
    }
  }
  return;
}



/* Entry: 10253dd9c; end: 10253de93;  */

void FUN_10253dd9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_11051e7f8;
    func_0x000107c613fc(&UNK_11051e7f8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    puVar2 = &UNK_11051e820;
    func_0x000107c613fc(&UNK_11051e820,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10dab77b8;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    func_0x000107c61174(param_1);
    uVar3 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar4 = 0x41;
    func_0x0001001ca524(0x41,0,0x3c,4,0,0,&UNK_10dab77c0,puVar2,uVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 10253de94; end: 10253e08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10253de94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar8 = *(long *)(param_3 + _DAT_112ea4568);
    lVar1 = lVar8;
    func_0x000107c61174(lVar8);
    func_0x000107c61170(param_3);
    if (lVar8 != 0) {
      puVar2 = &UNK_11051e7a8;
      func_0x000107c613fc(&UNK_11051e7a8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      puVar3 = &UNK_11051e7d0;
      func_0x000107c613fc(&UNK_11051e7d0,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      *(undefined8 *)(puVar3 + 0x20) = param_2;
      func_0x0001000285a8(0x112ea45d8,&UNK_10dab77b0);
      func_0x000107c613fc();
      func_0x000107c61434(param_2);
      pcVar5 = FUN_10253ed2c;
      func_0x0001000b64ac(FUN_10253ed2c,puVar3);
      uVar4 = 0;
      FUN_10253ecec(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      pcVar7 = FUN_10253e090;
      func_0x0001000bfde0(FUN_10253e090,0,uVar4);
      func_0x000107c61574(pcVar5);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar7);
      pcVar7 = pcVar5;
      func_0x000107c5cb24(pcVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      goto LAB_10253e06c;
    }
  }
  pcVar5 = (code *)PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  FUN_10253ecec(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  pcVar6 = "";
  func_0x000107c60124("",0,2);
  func_0x000107c4a8a4(pcVar5);
  func_0x000107c61180();
  func_0x000107c61170(pcVar6);
  pcVar7 = pcVar5;
  func_0x000107c5cb24(pcVar5);
  func_0x000107c61180();
LAB_10253e06c:
  func_0x000107c61170(pcVar5);
  return pcVar7;
}



/* Entry: 10253e090; end: 10253e0bb;  */

void FUN_10253e090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fadc(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10253e0bc; end: 10253e11b;  */

void FUN_10253e0bc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10253e11c; end: 10253e187;  */

void FUN_10253e11c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253e188,uVar1,uVar2);
  return;
}



/* Entry: 10253e188; end: 10253e1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253e188(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  bVar1 = *(long *)(lVar2 + _DAT_112ea4578) == 0;
  if (!bVar1) {
    func_0x000107c42018();
  }
                    /* WARNING: Could not recover jumptable at 0x00010253e1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar1);
  return;
}



/* Entry: 10253e1dc; end: 10253e21f;  */

void FUN_10253e1dc(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010253e21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10253e220; end: 10253e2f3; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter handleCloseSearchTray] */

void FUN_10253e220(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11051e640;
  func_0x000107c613fc(&UNK_11051e640,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11051e668;
  func_0x000107c613fc(&UNK_11051e668,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab7790;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x41;
  func_0x0001001ca524(0x41,0,0x3c,4,0,0,&UNK_10dab7798,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10253e2f4; end: 10253e4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253e2f4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)((param_2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10253e4e8);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c61174(uVar2);
    func_0x000107c4223c();
    uVar6 = param_1;
    func_0x000107c61170(uVar2);
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10253e4ec);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    FUN_10253e764(0,param_2,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    func_0x000107c4223c();
    uVar6 = param_1;
    func_0x000107c61170(uVar2);
    uVar2 = 1;
    FUN_10253e764(1,param_2,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
  }
  func_0x000107c4223c();
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_11051e5d0;
  func_0x000107c613fc(&UNK_11051e5d0,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_11051e5f8;
  func_0x000107c613fc(&UNK_11051e5f8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_10dab7720;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c61174();
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  lVar5 = 0x41;
  func_0x0001001ca524(0x41,0,0x3c,4,0,0,&UNK_10dab7728,puVar4,uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574();
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + _DAT_112ea45a8)) +
              0xa0))();
  if (lVar5 != 0) {
    func_0x000107c60a04(param_1,uVar6);
    func_0x000107c4c36c(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
    return;
  }
  return;
}



/* Entry: 10253e4ec; end: 10253e577; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter handlePlaceSelectedWithCoordinates:placeSelectionUpdate:] */

void FUN_10253e4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10253ecec(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10253e2f4(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10253e578; end: 10253e5d7; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter init] */

void FUN_10253e578(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationSearchTrayImplementation.MapLocationSearchTrayPresenter",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253e5a4);
  (*pcVar1)();
}



/* Entry: 10253e5d8; end: 10253e67f; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010253e5f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253e624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253e644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253e664: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253e648) */
/* WARNING: Removing unreachable block (ram,0x00010253e628) */
/* WARNING: Removing unreachable block (ram,0x00010253e5f8) */
/* WARNING: Removing unreachable block (ram,0x00010253e668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253e5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea45a8));
  return;
}



/* Entry: 10253e680; end: 10253e74f; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x00010253e704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253e720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253e708) */
/* WARNING: Removing unreachable block (ram,0x00010253e70c) */
/* WARNING: Removing unreachable block (ram,0x00010253e714) */
/* WARNING: Removing unreachable block (ram,0x00010253e71c) */
/* WARNING: Removing unreachable block (ram,0x00010253e724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253e680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ea4578);
  if (lVar1 != 0) {
    FUN_10253ecec(0,0x112d656a8,&PTR_PTR_1126b0a08);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar1);
    func_0x000107c60118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10253e750; end: 10253e763;  */

ulong FUN_10253e750(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e848);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e84c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b2050;
    func_0x000107c61168(PTR_PTR_1126b2050);
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
    puVar4 = PTR_PTR_1126b2050;
    func_0x000107c61168(PTR_PTR_1126b2050);
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
  FUN_10253ecec(0,0x112d5ecb8,&PTR_PTR_1126b2050);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e920);
  (*pcVar2)();
}



/* Entry: 10253e764; end: 10253e91f;  */

ulong FUN_10253e764(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e848);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e84c);
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
  FUN_10253ecec(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e920);
  (*pcVar2)();
}



/* Entry: 10253e920; end: 10253e983;  */

ulong FUN_10253e920(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e848);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e84c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126cd6c0;
    func_0x000107c61168(PTR_PTR_1126cd6c0);
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
    puVar4 = PTR_PTR_1126cd6c0;
    func_0x000107c61168(PTR_PTR_1126cd6c0);
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
  FUN_10253ecec(0,0x112ea4428,&PTR_PTR_1126cd6c0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10253e920);
  (*pcVar2)();
}



/* Entry: 10253e984; end: 10253ea13;  */

void FUN_10253e984(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10253e9d0;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253e188,lVar1,lVar3);
  return;
}



/* Entry: 10253ea14; end: 10253ea83;  */

void FUN_10253ea14(undefined8 param_1)

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
  plVar3[1] = 0x10253ee14;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10253ea84; end: 10253ea93;  */

undefined1  [16] FUN_10253ea84(void)

{
  return ZEXT816(0x11051e620);
}



/* Entry: 10253ea94; end: 10253eaff;  */

void FUN_10253ea94(void)

{
  func_0x000107c61168(&PTR_PTR_11284ceb0);
  return;
}



/* Entry: 10253eb00; end: 10253eb6f;  */

void FUN_10253eb00(undefined8 param_1)

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
  plVar3[1] = 0x10253ee18;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10253eb70; end: 10253eb9b;  */

void FUN_10253eb70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10253eb9c; end: 10253ebfb;  */

void FUN_10253eb9c(void)

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
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10253ebfc;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253cbe4,lVar1,lVar2);
  return;
}



/* Entry: 10253ebfc; end: 10253ec37;  */

void FUN_10253ebfc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010253ec34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10253ec38; end: 10253eca7;  */

void FUN_10253ec38(undefined8 param_1)

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
  plVar3[1] = 0x10253ee1c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10253eca8; end: 10253eceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253eca8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112ea45a0);
    func_0x000107c5d9d8();
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c4408c(param_1,param_2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar1 != 0) {
        func_0x000107c5faec(lVar1);
        func_0x000107c61170(lVar1);
      }
    }
  }
  return;
}



/* Entry: 10253ecec; end: 10253ed2b;  */

void FUN_10253ecec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10253ed2c; end: 10253ed37;  */

void FUN_10253ed2c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    puVar2 = &UNK_11051e230;
    func_0x000107c613fc(&UNK_11051e230,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    puVar3 = &UNK_11051e2a8;
    func_0x000107c613fc(&UNK_11051e2a8,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    func_0x000107c6157c(param_1);
    func_0x000107c61434(uVar5);
    uVar4 = 0x11;
    func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dab74f8,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10253ed38; end: 10253ed83;  */

void FUN_10253ed38(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10253ee10;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253e188,lVar1,lVar3);
  return;
}



/* Entry: 10253ed84; end: 10253edf3;  */

void FUN_10253ed84(undefined8 param_1)

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
  plVar3[1] = 0x10253ee20;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10253edf4; end: 10253ee2b;  */

void FUN_10253edf4(long param_1,long param_2)

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



/* Entry: 10253ee2c; end: 10253ee83; -[_TtC35MapLocationSearchTrayImplementation35MapLocationSearchTrayViewController initWithCoder:] */

void FUN_10253ee2c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "MapLocationSearchTrayImplementation/MapLocationSearchTrayViewController.swift"
                      ,0x4d,2,0xe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253ee84);
  (*pcVar1)();
}



/* Entry: 10253ee84; end: 10253f167;  */

/* WARNING: Possible PIC construction at 0x00010253eed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253ef70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253ef90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253efe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253f000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253f050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253f070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253f0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253f0f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253f0d4) */
/* WARNING: Removing unreachable block (ram,0x00010253f074) */
/* WARNING: Removing unreachable block (ram,0x00010253f164) */
/* WARNING: Removing unreachable block (ram,0x00010253f0a8) */
/* WARNING: Removing unreachable block (ram,0x00010253f054) */
/* WARNING: Removing unreachable block (ram,0x00010253f004) */
/* WARNING: Removing unreachable block (ram,0x00010253f160) */
/* WARNING: Removing unreachable block (ram,0x00010253f038) */
/* WARNING: Removing unreachable block (ram,0x00010253efe4) */
/* WARNING: Removing unreachable block (ram,0x00010253ef94) */
/* WARNING: Removing unreachable block (ram,0x00010253f15c) */
/* WARNING: Removing unreachable block (ram,0x00010253efc8) */
/* WARNING: Removing unreachable block (ram,0x00010253ef74) */
/* WARNING: Removing unreachable block (ram,0x00010253eedc) */
/* WARNING: Removing unreachable block (ram,0x00010253f158) */
/* WARNING: Removing unreachable block (ram,0x00010253ef58) */
/* WARNING: Removing unreachable block (ram,0x00010253f0f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253ee84(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + _DAT_112ea45e0),param_2,0);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253f158);
  (*pcVar1)();
}



/* Entry: 10253f168; end: 10253f1c3; -[_TtC35MapLocationSearchTrayImplementation35MapLocationSearchTrayViewController initWithNibName:bundle:] */

void FUN_10253f168(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationSearchTrayImplementation.MapLocationSearchTrayViewController",0x47
                      ,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253f194);
  (*pcVar1)();
}



/* Entry: 10253f1c4; end: 10253f1d3; -[_TtC35MapLocationSearchTrayImplementation35MapLocationSearchTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253f1c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea45e0));
  return;
}



/* Entry: 10253f1d4; end: 10253f1f3;  */

void FUN_10253f1d4(void)

{
  func_0x000107c61168(&PTR_PTR_11284cfb0);
  return;
}



/* Entry: 10253f1f4; end: 10253f243; -[_TtC35MapLocationSearchTrayImplementation35MapLocationSearchTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_10253f1f4(void)

{
  return 1;
}



/* Entry: 10253f244; end: 10253f2bb;  */

void FUN_10253f244(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10253f2bc(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10253f2bc; end: 10253f2fb;  */

void FUN_10253f2bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10253f2fc; end: 10253f4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10253f2fc(double param_1,double param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long unaff_x20;
  double dVar11;
  
  puVar10 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar4 = param_3;
  func_0x000107c60bb8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61464();
    puVar10 = (undefined1 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
    *(long *)(unaff_x20 + _DAT_112ea4620) = param_3;
    plVar1 = (long *)(unaff_x20 + _DAT_112ea4628);
    *plVar1 = lVar5;
    plVar1[1] = param_4;
    func_0x000107c61174(param_3);
    lVar4 = param_4;
    func_0x00010006c00c(lVar5);
    func_0x000107c5b078(param_3);
    dVar11 = param_1;
    func_0x000107c51820(param_3);
    param_1 = param_1 * dVar11;
    *(double *)(unaff_x20 + _DAT_112ea4640) = param_1;
    func_0x000107c5b078(param_3);
    func_0x000107c51820(param_3);
    *(double *)(unaff_x20 + _DAT_112ea4648) = param_2 * param_1;
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x000107c51bc4();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253f4e0);
      (*pcVar3)();
    }
    puVar8 = puVar7;
    func_0x000107c5faec();
    lVar9 = lVar4;
    func_0x000107c61170(puVar7);
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea4630);
    *puVar2 = puVar8;
    puVar2[1] = lVar4;
    func_0x000107c51bc4();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253f4e4);
      (*pcVar3)();
    }
    puVar7 = puVar6;
    func_0x000107c5faec();
    func_0x000107c61170(puVar6);
    func_0x00010006c090(lVar5,param_4);
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea4638);
    *puVar2 = puVar7;
    puVar2[1] = lVar9;
    func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_3);
  }
  return puVar10;
}



/* Entry: 10253f4e4; end: 10253f587; -[_TtC33MapReactionServicesImplementation16MapReactionMedia prepareDataToUploadForMediaId:completionHandler:] */

/* WARNING: Possible PIC construction at 0x00010253f550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253f554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253f4e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ea4628);
    uVar1 = ((undefined8 *)(param_1 + _DAT_112ea4628))[1];
    func_0x000107c61174(param_1);
    func_0x000107c60bc4(param_4);
    func_0x000107c5ee20(uVar2,uVar1);
    (**(code **)(param_4 + 0x10))(param_4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10253f588; end: 10253f58f; -[_TtC33MapReactionServicesImplementation16MapReactionMedia mediaContentType] */

undefined8 FUN_10253f588(void)

{
  return 0;
}



/* Entry: 10253f590; end: 10253f59f; -[_TtC33MapReactionServicesImplementation16MapReactionMedia width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10253f590(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ea4640);
}



/* Entry: 10253f5a0; end: 10253f5af; -[_TtC33MapReactionServicesImplementation16MapReactionMedia height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10253f5a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ea4648);
}



/* Entry: 10253f5b0; end: 10253f5b7; -[_TtC33MapReactionServicesImplementation16MapReactionMedia isZipped] */

undefined8 FUN_10253f5b0(void)

{
  return 0;
}



/* Entry: 10253f5b8; end: 10253f5bf; -[_TtC33MapReactionServicesImplementation16MapReactionMedia duration] */

undefined8 FUN_10253f5b8(void)

{
  return 0;
}



/* Entry: 10253f5c0; end: 10253f5cb; -[_TtC33MapReactionServicesImplementation16MapReactionMedia chatKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253f5c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea4630);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ea4630))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10253f5cc; end: 10253f5d7; -[_TtC33MapReactionServicesImplementation16MapReactionMedia chatIV] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253f5cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea4638);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ea4638))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10253f5d8; end: 10253f61f;  */

void FUN_10253f5d8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10253f620; end: 10253f627; -[_TtC33MapReactionServicesImplementation16MapReactionMedia isInfiniteDuration] */

undefined8 FUN_10253f620(void)

{
  return 0;
}



/* Entry: 10253f628; end: 10253f62f; -[_TtC33MapReactionServicesImplementation16MapReactionMedia isRotationLocked] */

undefined8 FUN_10253f628(void)

{
  return 1;
}



/* Entry: 10253f630; end: 10253f8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10253f630(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar2 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b25e0;
  func_0x000107c610f8(PTR_PTR_1126b25e0);
  func_0x000107c453e4();
  uVar4 = 0;
  func_0x00010853d77c(0,0,0);
  func_0x000107c61180();
  func_0x000107c574c8(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea4630);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112ea4630))[1]);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4638);
  func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_112ea4638))[1]);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea4640);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ea4648);
  puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5dc58(uVar13,uVar14);
  func_0x000107c61180();
  lVar6 = 0;
  func_0x00010853d86c(0,0,0,uVar4,uVar5,0,puVar11,0);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar11);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c61174();
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar8 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar11) {
        puVar8 = puVar11;
      }
      func_0x000107c60480(puVar8);
    }
    puVar9 = (undefined *)0x0;
    FUN_10253f9b0(0,puVar8 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,&UNK_101a0fcbc,0x112d55598,
                  &PTR_PTR_1126b25d0);
    uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar12 + 0x10);
    puVar11 = puVar9;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_10253f9b0(puVar11,uVar1 + 1,1,puVar9,&UNK_101a0fcbc,0x112d55598,&PTR_PTR_1126b25d0);
      uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
    *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar7;
  }
  puVar8 = puVar11;
  FUN_10253fea8(puVar11);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar10 = puVar8;
  func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar8);
  func_0x000107c45788(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c574d8(puVar3);
  func_0x000107c61170(puVar9);
  func_0x000107c574b4(puVar2);
  func_0x000107c6142c(puVar11);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 10253f8d0; end: 10253f92f; -[_TtC33MapReactionServicesImplementation16MapReactionMedia init] */

void FUN_10253f8d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapReactionServicesImplementation.MapReactionMedia",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253f8fc);
  (*pcVar1)();
}



/* Entry: 10253f930; end: 10253f993; -[_TtC33MapReactionServicesImplementation16MapReactionMedia .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010253f974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253f978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253f930(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4620));
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112ea4628),
                      ((undefined8 *)(param_1 + _DAT_112ea4628))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea4630 + 8))
  ;
  return;
}



/* Entry: 10253f994; end: 10253f9af;  */

ulong FUN_10253f994(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10253faf8);
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
  FUN_10253fc1c(uVar2,uVar4,FUN_1025424cc);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10253faf4);
      (*pcVar1)();
    }
    FUN_10253fd1c(0,uVar2,uVar3 + 0x20,param_4,0x112ea4688,&PTR_PTR_1126aaa98);
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



/* Entry: 10253f9b0; end: 10253faf7;  */

ulong FUN_10253f9b0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10253faf8);
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
  FUN_10253fc1c(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10253faf4);
      (*pcVar1)();
    }
    FUN_10253fd1c(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 10253faf8; end: 10253fc0f;  */

undefined * FUN_10253faf8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10253fc10);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112ea4680;
    func_0x0001000285a8(0x112ea4680,&UNK_10dab7860);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106a4438);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 10253fc10; end: 10253fc1b;  */

undefined * FUN_10253fc10(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1025424cc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10253fc1c; end: 10253fd1b;  */

undefined * FUN_10253fc1c(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10253fd1c; end: 10253fe37;  */

long FUN_10253fd1c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253fe34);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10253fe38);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10253fe58(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10253fe58(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10253fe30);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10253fe38; end: 10253fe57;  */

void FUN_10253fe38(void)

{
  func_0x000107c61168(&PTR_PTR_11284d090);
  return;
}



/* Entry: 10253fe58; end: 10253fe97;  */

void FUN_10253fe58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10253fe98; end: 10253fe9b; -[_TtC33MapReactionServicesImplementation16MapReactionMedia snapAttachmentUrl] */

void FUN_10253fe98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10253fe9c; end: 10253fe9f; -[_TtC33MapReactionServicesImplementation16MapReactionMedia snapMetadata] */

void FUN_10253fe9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10253fea0; end: 10253fea3; -[_TtC33MapReactionServicesImplementation16MapReactionMedia venueId] */

void FUN_10253fea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10253fea4; end: 10253fea7; -[_TtC33MapReactionServicesImplementation16MapReactionMedia mediaOrigins] */

void FUN_10253fea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10253fea8; end: 102540297;  */

undefined * FUN_10253fea8(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10254009c);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x000102545f10(0,0x112d55598,&PTR_PTR_1126b25d0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x00010121c1ac(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        func_0x000102545f10(0,0x112d55598,&PTR_PTR_1126b25d0);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 102540298; end: 10254029f;  */

undefined8 FUN_102540298(void)

{
  return 1;
}



/* Entry: 1025402a0; end: 10254033f;  */

void FUN_1025402a0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102540340; end: 10254034f;  */

void FUN_102540340(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102540350; end: 10254080f;  */

void FUN_102540350(ulong param_1,ulong param_2,undefined8 param_3,ulong *param_4,ulong param_5,
                  char param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_e8 [88];
  long lStack_90;
  undefined8 uStack_88;
  char cStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428(unaff_x20 + 0x58,&lStack_90,0x20,0);
  lVar12 = *(long *)(unaff_x20 + 0x58);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61434(lVar12);
    puVar10 = param_4;
    uVar2 = param_5;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      puVar9 = (undefined8 *)(*(long *)(lVar12 + 0x38) + (long)puVar10 * 0x28);
      uVar5 = *puVar9;
      uVar14 = puVar9[1];
      uVar15 = puVar9[4];
      func_0x000107c61434(uVar5);
      func_0x000107c6157c(uVar14);
      func_0x000107c61434(uVar15);
      func_0x000107c614a8(&lStack_90);
      func_0x000107c6142c(uVar15);
      func_0x000107c61574(uVar14);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(lVar12);
      func_0x000107c61428(unaff_x20 + 0x58,auStack_e8,0x21,0);
      pcVar1 = (code *)&lStack_90;
      FUN_102540810(pcVar1,param_4,param_5);
      uVar2 = *param_4;
      if (uVar2 != 0) {
        func_0x000107c61558();
        uVar13 = *param_4;
        *param_4 = 0x8000000000000000;
        uVar3 = param_1;
        uVar8 = param_2;
        FUN_102542568(param_1,param_2,param_3);
        uVar11 = (ulong)~(uint)uVar8 & 1;
        lVar12 = *(long *)(uVar13 + 0x10) + uVar11;
        if (SCARRY8(*(long *)(uVar13 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1025407e8);
          (*pcVar1)();
        }
        if (*(long *)(uVar13 + 0x18) < lVar12) {
          func_0x0001025437b8(lVar12,uVar2);
          uVar3 = param_1;
          uVar2 = param_2;
          FUN_102542568(param_1,param_2,param_3);
          if (((uint)uVar8 & 1) != ((uint)uVar2 & 1)) {
            func_0x000107c60624(&UNK_1106a4438);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102540810);
            (*pcVar1)();
          }
        }
        else if ((uVar2 & 1) == 0) {
          FUN_1025431f0();
        }
        uVar2 = *param_4;
        *param_4 = uVar13;
        func_0x000107c6157c(uVar13);
        func_0x000107c6142c(uVar2);
        if ((uVar8 & 1) == 0) {
          lVar12 = uVar13 + (uVar3 >> 6) * 8;
          *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar3 & 0x3f);
          puVar10 = (ulong *)(*(long *)(uVar13 + 0x30) + uVar3 * 0x18);
          *puVar10 = param_1;
          puVar10[1] = param_2;
          *(char *)(puVar10 + 2) = (char)param_3;
          *(undefined8 *)(*(long *)(uVar13 + 0x38) + uVar3 * 8) = 0;
          if (SCARRY8(*(long *)(uVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102540800);
            (*pcVar1)();
          }
          *(long *)(uVar13 + 0x10) = *(long *)(uVar13 + 0x10) + 1;
          func_0x000101107198(param_1,param_2,param_3);
        }
        lVar12 = *(long *)(*(long *)(uVar13 + 0x38) + uVar3 * 8);
        if (!SCARRY8(lVar12,1)) {
          *(long *)(*(long *)(uVar13 + 0x38) + uVar3 * 8) = lVar12 + 1;
          (*pcVar1)(&lStack_90,0);
          func_0x000107c614a8(auStack_e8);
          func_0x000107c61574(uVar13);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025407ec);
        (*pcVar1)();
      }
      (*pcVar1)(&lStack_90,0);
      goto LAB_102540700;
    }
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c614a8(&lStack_90);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11051ea68;
  func_0x000107c613fc(&UNK_11051ea68,0x31,7);
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  *(undefined8 *)(puVar4 + 0x18) = uVar14;
  *(ulong **)(puVar4 + 0x20) = param_4;
  *(ulong *)(puVar4 + 0x28) = param_5;
  puVar4[0x30] = param_6 == '\x01';
  uVar5 = 0;
  func_0x000102545f10(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c6157c(uVar14);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(param_7);
  uVar14 = 0x23;
  func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dab79d0,puVar4,uVar5);
  func_0x000107c61574(puVar4);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  if (lVar12 == 0) {
LAB_10254060c:
    uVar15 = 0xe000000000000000;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c5fadc(uVar5);
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (lVar12 == 0) goto LAB_10254060c;
    lVar6 = lVar12;
    func_0x000107c4b848();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    lVar12 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
  }
  lVar6 = 0x112ea47c0;
  func_0x0001000285a8(0x112ea47c0,&UNK_10dab79d8);
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(ulong *)(lVar6 + 0x20) = param_1;
  *(ulong *)(lVar6 + 0x28) = param_2;
  *(char *)(lVar6 + 0x30) = (char)param_3;
  *(undefined8 *)(lVar6 + 0x38) = 1;
  func_0x000101107198(param_1,param_2);
  lVar7 = lVar6;
  func_0x00010254d30c();
  func_0x000107c61588(lVar6);
  func_0x000102545e98((ulong *)(lVar6 + 0x20),0x112ea47c8,&UNK_10dab79e0);
  lStack_90 = lVar7;
  uStack_88 = uVar14;
  cStack_80 = param_6;
  lStack_78 = lVar12;
  uStack_70 = uVar15;
  func_0x000107c61428(unaff_x20 + 0x58,auStack_e8,0x21,0);
  func_0x000107c61434(param_5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c61558(uVar5);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = 0x8000000000000000;
  FUN_102542d8c(&lStack_90,param_4,param_5,uVar5);
  func_0x000107c6142c(param_5);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar14;
LAB_102540700:
  func_0x000107c614a8(auStack_e8);
  return;
}



/* Entry: 102540810; end: 102540883;  */

code * FUN_102540810(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x11bc);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_102542a04();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_102540884;
}



/* Entry: 102540884; end: 1025408b3;  */

void FUN_102540884(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1025408b4; end: 1025408bb;  */

void FUN_1025408b4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1025408bc; end: 102540adb;  */

void FUN_1025408bc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = *unaff_x20;
  func_0x000107c61428(unaff_x20 + 0xb,auStack_b8,0x20,0);
  lVar7 = unaff_x20[0xb];
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    lVar3 = param_1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar3 * 0x28);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uStack_98 = puVar6[3];
      uStack_a0 = puVar6[2];
      uStack_90 = puVar6[4];
      uStack_68 = puVar6[4];
      uStack_70 = puVar6[3];
      uStack_80 = uVar1;
      uStack_78 = uVar2;
      FUN_1025440a8(&uStack_80,auStack_c8,0x112ea4780,&UNK_10dab7978);
      FUN_1025440a8(&uStack_78,auStack_c8,0x112ea4788,&UNK_10dab7980);
      func_0x000100402194(&uStack_70,auStack_c8);
      func_0x000107c614a8(auStack_b8);
      func_0x000107c6142c(lVar7);
      puVar4 = &UNK_11051e9c8;
      func_0x000107c613fc(&UNK_11051e9c8,0x58,7);
      *(undefined8 **)(puVar4 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar4 + 0x18) = uVar1;
      *(undefined8 *)(puVar4 + 0x20) = uVar2;
      *(undefined8 *)(puVar4 + 0x30) = uStack_98;
      *(undefined8 *)(puVar4 + 0x28) = uStack_a0;
      *(undefined8 *)(puVar4 + 0x38) = uStack_90;
      *(long *)(puVar4 + 0x40) = param_1;
      *(ulong *)(puVar4 + 0x48) = param_2;
      *(undefined8 *)(puVar4 + 0x50) = uVar8;
      FUN_1025440a8(&uStack_80,auStack_b8,0x112ea4780,&UNK_10dab7978);
      FUN_1025440a8(&uStack_78,auStack_b8,0x112ea4788,&UNK_10dab7980);
      func_0x000100402194(&uStack_70,auStack_b8);
      func_0x000107c6157c();
      func_0x000107c61434(param_2);
      uVar8 = 0x23;
      func_0x0001001ca524(0x23,0,0x3c,4,0,0,&UNK_10dab7990,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar8);
      FUN_102545e98(&uStack_80,0x112ea4780,&UNK_10dab7978);
      FUN_102545e98(&uStack_78,0x112ea4788,&UNK_10dab7980);
      func_0x000100bcb1dc(&uStack_70);
      return;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_b8);
  return;
}



/* Entry: 102540adc; end: 102540af7;  */

void FUN_102540adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102540af8,0,0);
  return;
}



/* Entry: 102540af8; end: 102540ba7;  */

void FUN_102540af8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 200);
  func_0x0001000d224c(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  lVar3 = unaff_x22 + 0x60;
  func_0x0001000a8868();
  *(long *)(unaff_x22 + 0xf0) = lVar3;
  uVar4 = *puVar1;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar4;
  FUN_102540f18();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(lVar2 + 0x18);
  uVar5 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x110) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102540ba8,uVar5,uVar4);
  return;
}



/* Entry: 102540ba8; end: 102540c17;  */

void FUN_102540ba8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x110));
  (*pcVar1)(uVar3,uVar4,uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102540c18,0,0);
  return;
}



/* Entry: 102540c18; end: 102540c97;  */

void FUN_102540c18(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 200);
  func_0x0001000834e4(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x118) = plVar1;
  uVar2 = 0;
  func_0x000102545f10(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102540c98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0xb8,uVar4,uVar2);
  return;
}



/* Entry: 102540c98; end: 102540d37;  */

void FUN_102540c98(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102540ce0,0,0);
  return;
}



/* Entry: 102540d38; end: 102540da7;  */

void FUN_102540d38(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x138) = param_2;
    *(undefined8 *)(lVar2 + 0x140) = param_1;
    pcVar1 = FUN_102540da8;
  }
  else {
    pcVar1 = FUN_102540e84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102540da8; end: 102540e83;  */

void FUN_102540da8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  FUN_10254548c(uVar6);
  FUN_102541264();
  func_0x000107c6142c(uVar6);
  func_0x000107c61428(lVar3 + 0x58,unaff_x22 + 0xa0,0x21,0);
  FUN_102542ad8(unaff_x22 + 0x38,uVar2,uVar5);
  func_0x000107c614a8(unaff_x22 + 0xa0);
  FUN_102545e98(unaff_x22 + 0x38,0x112ea4770,&UNK_10dab7968);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102540e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102540e84; end: 102540f17;  */

void FUN_102540e84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c61428(lVar4 + 0x58,unaff_x22 + 0x88,0x21,0);
  FUN_102542ad8(unaff_x22 + 0x10,uVar1,uVar2);
  func_0x000107c614a8(unaff_x22 + 0x88);
  FUN_102545e98(unaff_x22 + 0x10,0x112ea4770,&UNK_10dab7968);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102540f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102540f18; end: 10254116b;  */

undefined * FUN_102540f18(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    FUN_1025444d4(0,lVar15,0);
    uVar1 = param_1 + 0x40;
    uVar8 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar11 = 0;
    iVar4 = *(int *)(param_1 + 0x24);
    do {
      if (uVar8 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102541158);
        (*pcVar7)();
      }
      uVar17 = uVar8 >> 6;
      uVar13 = 1L << (uVar8 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar17 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10254115c);
        (*pcVar7)();
      }
      if (iVar4 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102541160);
        (*pcVar7)();
      }
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar8 * 0x18);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar5 = *(undefined1 *)(puVar9 + 2);
      func_0x000101107198(uVar2,uVar3,uVar5);
      uVar16 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar16) {
        FUN_1025444d4(1 < *(ulong *)(puVar6 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar6 + uVar16 * 0x18 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + uVar16 * 0x18 + 0x28) = uVar3;
      puVar6[uVar16 * 0x18 + 0x30] = uVar5;
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar16 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102541164);
        (*pcVar7)();
      }
      uVar10 = *(ulong *)(uVar1 + uVar17 * 8);
      if ((uVar10 & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102541168);
        (*pcVar7)();
      }
      if (iVar4 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10254116c);
        (*pcVar7)();
      }
      uVar10 = uVar10 & -2L << (uVar8 & 0x3f);
      if (uVar10 == 0) {
        lVar14 = uVar17 << 6;
        puVar12 = (ulong *)(param_1 + 0x48 + uVar17 * 8);
        do {
          uVar17 = uVar17 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar17) {
            FUN_102545dc8(uVar8,iVar4,0);
            goto LAB_102540fbc;
          }
          uVar13 = *puVar12;
          lVar14 = lVar14 + 0x40;
          puVar12 = puVar12 + 1;
        } while (uVar13 == 0);
        FUN_102545dc8(uVar8,iVar4,0);
        uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + lVar14;
      }
      else {
        uVar17 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | uVar8 & 0x7fffffffffffffc0;
      }
LAB_102540fbc:
      lVar11 = lVar11 + 1;
      uVar8 = uVar16;
    } while (lVar11 != lVar15);
  }
  return puVar6;
}



/* Entry: 10254116c; end: 10254118f;  */

void FUN_10254116c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 **)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102541190,0,0);
  return;
}



/* Entry: 102541190; end: 1025411fb;  */

void FUN_102541190(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1025411fc;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_102541da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1025411fc; end: 102541263;  */

void FUN_1025411fc(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102541244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102541260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 102541264; end: 102541d9f;  */

void FUN_102541264(long param_1,undefined8 ****param_2,undefined4 param_3,undefined8 ****param_4,
                  undefined8 ****param_5,undefined8 param_6,undefined8 ****param_7)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined8 *****pppppuVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long unaff_x20;
  long lVar16;
  undefined8 *****pppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ****ppppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  pppuStack_a8 = (undefined8 ***)CONCAT44(pppuStack_a8._4_4_,param_3);
  pppppuVar4 = (undefined8 *****)0x0;
  ppppuVar7 = param_2;
  pppuStack_b0 = param_4;
  pppuStack_a0 = param_7;
  func_0x000107c5eea4();
  ppppuVar18 = pppppuVar4[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppuVar18[8]);
  lVar12 = (long)&pppuStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppppuVar5 = (undefined8 ****)PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e4a4(ppppuVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  ppppuVar6 = ppppuVar5;
  func_0x000107c5e5cc();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (ppppuVar6 == (undefined8 ****)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(ppppuVar7);
  }
  ppppuVar7 = ppppuVar5;
  func_0x000107c5e870(ppppuVar5);
  func_0x000107c61180();
  func_0x000107c61170(ppppuVar6);
  func_0x000107c61170(ppppuVar7);
  ppppuVar6 = ppppuVar5;
  func_0x000107c5e500(ppppuVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5eea0(lVar12);
  func_0x000107c5ee70();
  (*(code *)ppppuVar18[1])(lVar12);
  ppppuVar7 = ppppuVar5;
  func_0x000107c5e5b0(ppppuVar5);
  func_0x000107c61180();
  func_0x000107c61170(ppppuVar6);
  func_0x000107c61170(ppppuVar7);
  ppppuVar6 = ppppuVar5;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  FUN_10253fe38(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  FUN_10253f2fc();
  if (param_2 != (undefined8 ****)0x0) {
    ppppuVar7 = param_2;
    pppuStack_c0 = param_5;
    FUN_10253f630();
    ppppuVar18 = ppppuVar7;
    func_0x00010011df08();
    func_0x000107c61180();
    ppppuVar8 = ppppuVar18;
    if (ppppuVar18 == (undefined8 ****)0x0) {
      func_0x000107c5faec();
      pppppuVar17 = pppppuVar4;
      func_0x000107c5fadc();
      func_0x000107c6142c(pppppuVar4);
      ppppuVar8 = (undefined8 ****)0x0;
      func_0x000107c5faec();
      pppppuVar4 = pppppuVar17;
      func_0x000107c5fadc();
      func_0x000107c6142c(pppppuVar17);
    }
    func_0x000107c61174();
    ppppuVar19 = ppppuVar7;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (ppppuVar19 == (undefined8 ****)0x0) {
      func_0x000107c61170(ppppuVar18);
      func_0x000107c61170(ppppuVar8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102541bec);
      (*pcVar3)();
    }
    ppppuVar10 = ppppuVar19;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar19);
    if (ppppuVar10 == (undefined8 ****)0x0) {
LAB_102541538:
      ppppuVar19 = (undefined8 ****)0x0;
    }
    else {
      ppppuStack_90 = (undefined8 *****)0x0;
      uVar9 = 0;
      func_0x000102545f10(0,0x112d55598,&PTR_PTR_1126b25d0);
      pppppuVar4 = &ppppuStack_90;
      func_0x000107c5fc50(ppppuVar10,pppppuVar4,uVar9);
      func_0x000107c61170(ppppuVar10);
      ppppuVar19 = ppppuStack_90;
      if ((undefined8 *****)ppppuStack_90 == (undefined8 *****)0x0) goto LAB_102541538;
      pppppuVar17 = (undefined8 *****)((ulong)ppppuStack_90 & 0xffffffffffffff8);
      if ((ulong)ppppuStack_90 >> 0x3e == 0) {
        if (pppppuVar17[2] != (undefined8 ****)0x0) goto LAB_102541518;
LAB_102541550:
        ppppuVar10 = (undefined8 ****)0x0;
      }
      else {
        pppppuVar11 = (undefined8 *****)ppppuStack_90;
        if (-1 < (long)ppppuStack_90) {
          pppppuVar11 = pppppuVar17;
        }
        func_0x000107c60480();
        if (pppppuVar11 == (undefined8 *****)0x0) goto LAB_102541550;
LAB_102541518:
        if (((ulong)ppppuVar19 & 0xc000000000000001) == 0) {
          if (pppppuVar17[2] == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102541bd8);
            (*pcVar3)();
          }
          ppppuVar10 = (undefined8 ****)ppppuVar19[4];
          func_0x000107c61174(ppppuVar10);
        }
        else {
          ppppuVar10 = (undefined8 ****)0x0;
          pppppuVar4 = (undefined8 *****)ppppuVar19;
          func_0x00010121c1ac(0);
        }
      }
      func_0x000107c6142c(ppppuVar19);
      ppppuVar19 = ppppuVar10;
      func_0x000107c4c930(ppppuVar10);
      func_0x000107c61180();
      func_0x000107c61170(ppppuVar10);
    }
    lVar12 = *(long *)(unaff_x20 + 0x40);
    pppuStack_b8 = ppppuVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    ppppuVar8 = ppppuVar19;
    if (lVar12 != 0) {
      ppppuVar10 = ppppuVar6;
      func_0x000107c5db64();
      func_0x000107c61180();
      if (ppppuVar10 == (undefined8 ****)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(pppppuVar4);
      }
      ppppuVar8 = (undefined8 ****)pppuStack_a0;
      pppppuVar4 = (undefined8 *****)PTR___sSSN_11034da80;
      func_0x000107c5fc48(pppuStack_a0);
      func_0x000107c4ee2c(lVar12);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(ppppuVar18);
      func_0x000107c61170(ppppuVar10);
      ppppuVar18 = ppppuVar19;
    }
    func_0x000107c61170(ppppuVar8);
    func_0x000107c61170(ppppuVar18);
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x000107c61170(pppuStack_b8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(ppppuVar7);
      func_0x000107c61170(ppppuVar5);
      goto LAB_102541b60;
    }
    puVar13 = PTR_PTR_1126ba668;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar14 = PTR_PTR_1126dd8e8;
    func_0x000107c610f8(PTR_PTR_1126dd8e8);
    func_0x000107c453e4();
    func_0x000107c56278(puVar13);
    func_0x000107c61170(puVar14);
    puVar14 = puVar13;
    func_0x000107c4c3c4();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      func_0x000107c61170(pppuStack_b8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102541bf8);
      (*pcVar3)();
    }
    lVar12 = *(long *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      lVar16 = *(long *)(unaff_x20 + 0x10);
      if ((*(long *)(lVar16 + 0x10) != 0) && (func_0x00010035a314(), ((ulong)pppppuVar4 & 1) != 0))
      {
        plVar1 = (long *)(*(long *)(lVar16 + 0x38) + lVar12 * 0x10);
        lVar12 = *plVar1;
        lVar16 = plVar1[1];
        goto LAB_1025416fc;
      }
      lVar12 = 0;
    }
    else {
      lVar16 = *(long *)(param_1 + 0x28);
LAB_1025416fc:
      func_0x000107c61434(lVar16);
      func_0x000107c5fadc(lVar12,lVar16);
      func_0x000107c6142c(lVar16);
    }
    func_0x000107c5446c(puVar14);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(lVar12);
    puVar14 = puVar13;
    func_0x000107c4c3c4();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      func_0x000107c61170(pppuStack_b8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102541c04);
      (*pcVar3)();
    }
    func_0x000107c59cec();
    func_0x000107c61170(puVar14);
    puVar14 = puVar13;
    func_0x000107c4c3c4();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      func_0x000107c61170(pppuStack_b8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102541c10);
      (*pcVar3)();
    }
    func_0x000107c59558();
    func_0x000107c61170(puVar14);
    puVar14 = puVar13;
    func_0x000107c4c3c4();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      func_0x000107c61170(pppuStack_b8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102541c1c);
      (*pcVar3)();
    }
    func_0x000102545c0c(param_1);
    lVar12 = param_1;
    func_0x00010254009c();
    func_0x000107c6142c(param_1);
    puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar16 = lVar12;
    func_0x000107c5fc48(lVar12,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(lVar12);
    func_0x000107c45788(puVar15);
    func_0x000107c61170(lVar16);
    func_0x000107c57b5c(puVar14);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar15);
    puVar14 = puVar13;
    func_0x000107c4c3c4();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      func_0x000107c61170(pppuStack_b8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102541c28);
      (*pcVar3)();
    }
    ppppuVar18 = (undefined8 ****)pppuStack_b0;
    ppppuVar8 = (undefined8 ****)pppuStack_c0;
    func_0x000107c5fadc(pppuStack_b0,pppuStack_c0);
    func_0x000107c56028(puVar14);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(ppppuVar18);
    puVar14 = puVar13;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      func_0x000107c61170(puVar13);
      func_0x000107c61170(pppuStack_b8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(ppppuVar7);
    }
    else {
      puVar15 = puVar14;
      pppuStack_b0 = param_2;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar14);
      ppppuVar18 = (undefined8 ****)PTR_PTR_1126b28f8;
      func_0x000107c610f8();
      func_0x000107c477a4();
      ppppuVar19 = ppppuVar18;
      func_0x000107c5e42c();
      func_0x000107c61180();
      func_0x000107c61170(ppppuVar18);
      lVar12 = 0x112d670c8;
      pppuStack_c0 = ppppuVar6;
      FUN_1025424f0(0x112d670c8,&PTR_PTR_1126d7ab8,0x112ea4790,&UNK_10dab79a0);
      func_0x000107c613fc();
      pppuVar2 = pppuStack_b8;
      *(undefined8 *)(lVar12 + 0x18) = 3;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      ppppuVar6 = (undefined8 ****)pppuStack_b8;
      func_0x000107d6ae74(pppuStack_b8,ppppuVar7,0);
      func_0x000107c61180();
      func_0x000107c61170(pppuVar2);
      *(undefined8 *****)(lVar12 + 0x20) = ppppuVar6;
      func_0x00010006c00c(puVar15,ppppuVar8);
      pppuStack_a8 = ppppuVar19;
      func_0x000107c3ecc8(ppppuVar19);
      func_0x000107c61180();
      ppppuVar6 = (undefined8 ****)PTR_PTR_1126be6d0;
      func_0x000107c610f8(PTR_PTR_1126be6d0);
      puVar14 = puVar15;
      func_0x000107c5ee20(puVar15,ppppuVar8);
      uVar9 = 0;
      func_0x000102545f10(0,0x112d670c8,&PTR_PTR_1126d7ab8);
      lVar16 = lVar12;
      func_0x000107c5fc48(lVar12,uVar9);
      func_0x000107c61574(lVar12);
      func_0x000107c4607c(ppppuVar6);
      func_0x000107c61170(ppppuVar19);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(lVar16);
      func_0x00010006c090(puVar15,ppppuVar8);
      ppppuVar18 = ppppuVar6;
      func_0x000107c3ecc8(ppppuVar6);
      func_0x000107c61180();
      func_0x000107c61170(ppppuVar6);
      lVar12 = *(long *)(unaff_x20 + 0x48);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar12 != 0) {
        ppppuVar6 = (undefined8 ****)pppuStack_a0;
        func_0x000107c5fc48(pppuStack_a0,PTR___sSSN_11034da80);
        pcStack_70 = FUN_102545488;
        uStack_68 = 0;
        ppppuStack_90 = (undefined8 ****)PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100f5c588;
        puStack_78 = &UNK_11051e9e0;
        pppppuVar4 = &ppppuStack_90;
        func_0x000107c60bc4(pppppuVar4);
        func_0x000107c61574(uStack_68);
        func_0x000107c51e10(lVar12);
        func_0x000107c61170(pppuStack_b0);
        func_0x000107c61170(ppppuVar7);
        func_0x000107c61170(ppppuVar5);
        func_0x000107c61170(pppuStack_c0);
        func_0x00010006c090(puVar15,ppppuVar8);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(pppuStack_a8);
        func_0x000107c61170(ppppuVar18);
        func_0x000107c60bd0(pppppuVar4);
        func_0x000107c615e8(lVar12);
        goto LAB_102541b60;
      }
      func_0x000107c61170(pppuStack_b0);
      func_0x000107c61170(ppppuVar7);
      func_0x000107c61170(ppppuVar5);
      func_0x000107c61170(pppuStack_c0);
      func_0x00010006c090(puVar15,ppppuVar8);
      func_0x000107c61170(puVar13);
      ppppuVar5 = (undefined8 ****)pppuStack_a8;
      ppppuVar6 = ppppuVar18;
    }
  }
  func_0x000107c61170(ppppuVar5);
LAB_102541b60:
  func_0x000107c61170(ppppuVar6);
  return;
}



/* Entry: 102541da0; end: 102541f6f;  */

/* WARNING: Possible PIC construction at 0x000102541e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102541f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102541f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102541f24) */
/* WARNING: Removing unreachable block (ram,0x000102541e88) */
/* WARNING: Removing unreachable block (ram,0x000102541f34) */

void FUN_102541da0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000104522c9c(0);
  func_0x00010452281c(param_2,param_3);
  lVar2 = *(long *)(param_4 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x0001011d1d1c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(long *)(lVar3 + 0x20) = param_2;
    func_0x000107c61174(param_2);
    param_2 = lVar3;
    func_0x000107c5fc48(lVar3,uVar1);
    func_0x000107c61574(lVar3);
    func_0x000107c5b59c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102541f70; end: 1025420ab;  */

/* WARNING: Possible PIC construction at 0x000102542058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102542094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010254205c) */
/* WARNING: Removing unreachable block (ram,0x000102542098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102541f70(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11307fc80);
    func_0x0001044c309c(0);
    func_0x000107c61174(param_1);
    uVar2 = uVar4;
    func_0x000107c61434(uVar4);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar4);
    func_0x0001086063d8(uVar2,1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  FUN_102545d88();
  puVar1 = &UNK_11051eb00;
  func_0x000107c613f8(&UNK_11051eb00,param_1,0,0);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 1025420ac; end: 1025421a7;  */

void FUN_1025420ac(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10254219c);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_10253faf8();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025421a0);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1025421a4);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x18 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1106a4438);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1025421a8);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1025421a8; end: 102542243;  */

void FUN_1025421a8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102542244; end: 10254229f;  */

long FUN_102542244(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1025422a0; end: 102542377;  */

undefined8 * FUN_1025422a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102542378; end: 1025423cb;  */

undefined8 * FUN_102542378(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1025423cc; end: 10254246b;  */

int FUN_1025423cc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10254246c; end: 1025424cb;  */

void FUN_10254246c(void)

{
  FUN_102540350();
  return;
}



/* Entry: 1025424cc; end: 1025424ef;  */

void FUN_1025424cc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ea47d0;
  plVar5 = (long *)&UNK_10dab79e8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102545f10(0,0x112ea4688,&PTR_PTR_1126aaa98);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1025424f0; end: 102542567;  */

void FUN_1025424f0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102545f10(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}


