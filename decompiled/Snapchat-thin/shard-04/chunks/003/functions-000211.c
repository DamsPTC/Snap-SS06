/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103317bb8; end: 103317bc7; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager lensToPreselect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f59178));
  return;
}



/* Entry: 103317bc8; end: 103317c1f; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager willActivateCollectionCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317bc8(long param_1)

{
  ulong uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = (ulong)*(byte *)(param_1 + _DAT_112f59180);
  uStack_28 = 0;
  func_0x000107c61174();
  func_0x000100087c34(&uStack_30);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103317c20; end: 103317c23; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager didActivateCollectionCarousel:] */

void FUN_103317c20(void)

{
  return;
}



/* Entry: 103317c24; end: 103317c27; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager willDeactivateCollectionCarousel:] */

void FUN_103317c24(void)

{
  return;
}



/* Entry: 103317c28; end: 103317c9f; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager didDeactivateCollectionCarousel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317c28(long param_1)

{
  code *pcVar1;
  ulong uStack_40;
  undefined1 uStack_38;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f59188);
  func_0x000107c61174();
  (*pcVar1)();
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_112f59180);
  uStack_38 = 1;
  func_0x000100087c34(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103317ca0; end: 103317cff; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager init] */

void FUN_103317ca0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardIntegration.LensCollectionManager",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103317ccc);
  (*pcVar1)();
}



/* Entry: 103317d00; end: 103317d6b; -[_TtC23LensInfoCardIntegrationP33_EC4DAA9B3341C7D3BCBD5D1132F42B9221LensCollectionManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103317d2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103317d30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103317d00(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f59170));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f59178));
  return;
}



/* Entry: 103317d6c; end: 103317d8b;  */

void FUN_103317d6c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce078);
  return;
}



/* Entry: 103317d8c; end: 103317d93;  */

void FUN_103317d8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 103317d94; end: 103317fd7;  */

void FUN_103317d94(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long *plStack_60;
  undefined1 uStack_58;
  
  func_0x0001000d224c(&plStack_60);
  if (plStack_60 == (long *)0x0) {
    plStack_60 = (long *)0x0;
    uStack_58 = 3;
    func_0x000100087c34(&plStack_60);
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    plVar1 = plStack_60;
    func_0x000107c4b2e0(plStack_60);
    func_0x000107c61180();
    plVar2 = plVar1;
    func_0x0001000b637c();
    func_0x000107c61170(plVar1);
    uVar3 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    pcVar4 = FUN_103317fd8;
    func_0x0001000bfde0(FUN_103317fd8,0,uVar3);
    func_0x000107c61574(plVar2);
    puVar7 = &UNK_11063de10;
    puVar5 = puVar7;
    func_0x000107c613fc(&UNK_11063de10,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcVar6 = FUN_103318cb4;
    puVar9 = puVar5;
    (**(code **)(*(long *)pcVar4 + 0x60))(FUN_103318cb4);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(puVar5);
    pcVar4 = pcVar6;
    func_0x000107c614f0(pcVar6);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
    (**(code **)(puVar9 + 0x10))(uVar10,pcVar4,puVar9);
    func_0x000107c615e8(pcVar6);
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    plVar1 = plStack_60;
    func_0x000107c51c8c();
    func_0x000107c61180();
    plVar2 = plVar1;
    func_0x0001000b637c();
    func_0x000107c61170();
    func_0x000102b15e24();
    func_0x0001000c2068();
    func_0x000107c61574(plVar2);
    func_0x000107c613fc(&UNK_11063de10,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    uVar3 = 0x103318cbc;
    puVar5 = puVar7;
    (**(code **)(*plVar1 + 0x60))(0x103318cbc);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar7);
    uVar8 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(puVar5 + 0x10))(uVar10,uVar8,puVar5);
    func_0x000107c615e8(uVar3);
    FUN_1033183e0(param_1);
    func_0x000107c615e8(plStack_60);
  }
  return;
}



/* Entry: 103317fd8; end: 10331816b;  */

/* WARNING: Possible PIC construction at 0x000103318124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103318128) */

void FUN_103317fd8(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = *param_2;
  FUN_1033188e4();
  *param_1 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___sypN_11034f1a8;
  lVar11 = lVar4;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  for (lVar12 = *(long *)(lVar4 + 0x10); lVar12 != 0; lVar12 = lVar12 + -1) {
    lVar11 = lVar11 + 0x20;
    func_0x0001000bb420(lVar11,auStack_80);
    func_0x000100102924(auStack_80,auStack_a8);
    uVar7 = 0;
    func_0x000100c70ba8(0);
    plVar8 = &lStack_88;
    func_0x000107c6147c(plVar8,auStack_a8,puVar2 + 8,uVar7,6);
    lVar3 = lStack_88;
    if ((((ulong)plVar8 & 1) != 0) && (lStack_88 != 0)) {
      puVar6 = puVar9;
      func_0x000107c61550();
      if (((int)puVar6 == 0) ||
         (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar5 = puVar9;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        func_0x000100fe2a60(0,puVar5 + 1,1,puVar9);
      }
      uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar10 + 0x10);
      puVar9 = puVar6;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
        func_0x000100fe2a60(puVar9,uVar1 + 1,1,puVar6);
        uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
      *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar3;
      *param_1 = (ulong)puVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar4);
  return;
}



/* Entry: 10331816c; end: 10331820f;  */

void FUN_10331816c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103318210();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103318210; end: 10331836b;  */

/* WARNING: Possible PIC construction at 0x000103318258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103318284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033182b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103318324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103318338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331834c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103318328) */
/* WARNING: Removing unreachable block (ram,0x0001033182b8) */
/* WARNING: Removing unreachable block (ram,0x0001033182c4) */
/* WARNING: Removing unreachable block (ram,0x000103318288) */
/* WARNING: Removing unreachable block (ram,0x00010331828c) */
/* WARNING: Removing unreachable block (ram,0x000103318290) */
/* WARNING: Removing unreachable block (ram,0x000103318340) */
/* WARNING: Removing unreachable block (ram,0x000103318294) */
/* WARNING: Removing unreachable block (ram,0x00010331825c) */
/* WARNING: Removing unreachable block (ram,0x0001033182f8) */
/* WARNING: Removing unreachable block (ram,0x000103318300) */
/* WARNING: Removing unreachable block (ram,0x000103318264) */
/* WARNING: Removing unreachable block (ram,0x00010331833c) */
/* WARNING: Removing unreachable block (ram,0x000103318350) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_103318210(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10331836c; end: 1033183df;  */

void FUN_10331836c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1033183e0; end: 10331857b;  */

void FUN_1033183e0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long alStack_78 [3];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] == 0) {
    func_0x000107c6142c(param_2);
LAB_10331849c:
    func_0x000107c61170(uVar1);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c49c88();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar3;
      uVar5 = param_2;
      FUN_10331857c(uVar3,param_2);
      if ((uVar2 & 1) != 0) {
        func_0x000107c6142c(param_2);
        func_0x000107c615e8(alStack_78[0]);
        goto LAB_10331849c;
      }
      lVar4 = *(long *)(unaff_x20 + 0x38);
      if (lVar4 != 0) {
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar5);
        }
        func_0x000107c3fa4c(alStack_78[0]);
        func_0x000107c61170(lVar4);
      }
      func_0x000107c4e718(alStack_78[0]);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      *(ulong *)(unaff_x20 + 0x38) = param_1;
      func_0x000107c61174(uVar1);
      func_0x000107c61170(uVar5);
      func_0x000107c61428(unaff_x20 + 0x48,alStack_78,0x21,0);
      func_0x000100403b00(auStack_60,uVar3,param_2);
      func_0x000107c614a8(alStack_78);
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(alStack_78[0]);
    }
    else {
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(alStack_78[0]);
      uStack_58 = param_2;
    }
    func_0x000107c6142c(uStack_58);
  }
  return;
}



/* Entry: 10331857c; end: 10331876b;  */

undefined8 FUN_10331857c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_70;
  long lStack_68;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x30);
  if (uVar7 != 0) {
    uVar8 = uVar7 & 0xffffffffffffff8;
    uVar3 = param_2;
    if (uVar7 >> 0x3e == 0) {
      uStack_70 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uStack_70 = uVar7;
      if (-1 < (long)uVar7) {
        uStack_70 = uVar8;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar7);
    uVar9 = 0;
    do {
      if (uStack_70 == uVar9) {
        func_0x000107c6142c(uVar7);
        return 0;
      }
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103318758);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
        uVar6 = uVar3;
      }
      else {
        uVar2 = uVar9;
        uVar6 = uVar7;
        func_0x000100ff3f88();
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103318754);
        (*pcVar1)();
      }
      uVar3 = uVar2;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if ((uVar4 == param_1) && (uVar6 == param_2)) {
        func_0x000107c6142c(uVar7);
        func_0x000107c61170(uVar2);
        uVar7 = uVar6;
        break;
      }
      uVar3 = uVar6;
      func_0x000107c605b8(uVar4,uVar6,param_1,param_2,0);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar6);
      uVar9 = uVar9 + 1;
    } while ((uVar4 & 1) == 0);
    func_0x000107c6142c(uVar7);
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 != 0) {
      func_0x000104501ac4(0);
      func_0x000104500ea0(param_1,param_2,0,0,0);
      func_0x000107c3e02c(lStack_68);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lStack_68);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 *)(unaff_x20 + 0x38) = 0;
      func_0x000107c61170(uVar5);
      return 1;
    }
  }
  return 0;
}



/* Entry: 10331876c; end: 1033187c3;  */

void FUN_10331876c(void)

{
  long unaff_x20;
  
  FUN_1033187c4();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1033187c4; end: 10331887f;  */

void FUN_1033187c4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long alStack_48 [3];
  
  func_0x0001000d224c(alStack_48);
  if (alStack_48[0] != 0) {
    func_0x000107c61428(unaff_x20 + 0x48,alStack_48,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c5fe08();
    func_0x000107c6142c(uVar2);
    func_0x000107c3fa54(alStack_48[0]);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(alStack_48[0]);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined **)(unaff_x20 + 0x48) = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x000107c6142c(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 103318880; end: 1033188bf;  */

void FUN_103318880(void)

{
  FUN_10331876c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033188c0; end: 1033188e3;  */

void FUN_1033188c0(undefined8 param_1,undefined8 param_2)

{
  FUN_103318bfc(param_2);
  return;
}



/* Entry: 1033188e4; end: 103318b7b;  */

undefined * FUN_1033188e4(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  func_0x000107c40808();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar5 = param_1;
    FUN_103318b7c(param_1,0);
    func_0x000107c6157c();
  }
  uVar10 = *(ulong *)(puVar5 + 0x18);
  puVar6 = puVar5;
  func_0x000107c61574(puVar5);
  func_0x000107c600f4(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103318b74);
    (*pcVar2)();
  }
  uVar10 = uVar10 >> 1;
  puVar8 = puVar5 + 0x20;
  puVar7 = puVar6;
  if (param_1 != (undefined *)0x0) {
    func_0x000100e15a08();
    uVar10 = uVar10 - (long)param_1;
    do {
      func_0x000107c601c0(auStack_80,lVar4,puVar6);
      if (lStack_68 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103318b7c);
        (*pcVar2)();
      }
      func_0x0001000bb420(auStack_80,auStack_a0);
      func_0x000100102924(auStack_a0,puVar8);
      puVar8 = puVar8 + 0x20;
      puVar7 = auStack_80;
      func_0x000100183ab8(puVar7);
      param_1 = param_1 + -1;
    } while (param_1 != (undefined *)0x0);
  }
  lStack_a8 = lVar11;
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_a0,lVar4,puVar7);
  if (lStack_88 != 0) {
    puVar6 = puVar5;
    do {
      func_0x000100102924(auStack_a0,auStack_80);
      puVar5 = puVar6;
      if (uVar10 == 0) {
        uVar10 = *(ulong *)(puVar6 + 0x18);
        if ((long)((uVar10 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103318b70);
          (*pcVar2)();
        }
        uVar9 = uVar10 & 0xfffffffffffffffe;
        if ((long)uVar10 < 2) {
          uVar9 = 1;
        }
        puVar5 = (undefined *)0x112d38dc0;
        func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
        func_0x000107c613fc();
        puVar8 = puVar5;
        func_0x000107c610a4();
        puVar1 = puVar8 + -1;
        if (0x1f < (long)puVar8) {
          puVar1 = puVar8 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar9;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 5) << 1;
        puVar8 = puVar5 + 0x20;
        uVar10 = *(ulong *)(puVar6 + 0x18) >> 1;
        if (*(long *)(puVar6 + 0x10) != 0) {
          if ((puVar5 != puVar6) || (puVar6 + 0x20 + uVar10 * 0x20 <= puVar8)) {
            func_0x000107c610b8(puVar8,puVar6 + 0x20,uVar10 << 5);
          }
          *(undefined8 *)(puVar6 + 0x10) = 0;
        }
        puVar8 = puVar8 + uVar10 * 0x20;
        uVar10 = ((long)puVar1 >> 5 & 0x7fffffffffffffffU) - uVar10;
        func_0x000107c61574(puVar6);
      }
      bVar3 = SBORROW8(uVar10,1);
      uVar10 = uVar10 - 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103318b6c);
        (*pcVar2)();
      }
      func_0x000100102924(auStack_80,puVar8);
      puVar8 = puVar8 + 0x20;
      func_0x000107c601c0(auStack_a0,lVar4,puVar7);
      puVar6 = puVar5;
    } while (lStack_88 != 0);
  }
  (**(code **)(lStack_a8 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  func_0x00010006e7f4(auStack_a0);
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar9 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar9,uVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103318b78);
      (*pcVar2)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar9 - uVar10;
  }
  return puVar5;
}



/* Entry: 103318b7c; end: 103318bfb;  */

undefined * FUN_103318b7c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  return puVar2;
}



/* Entry: 103318bfc; end: 103318cb3;  */

undefined8 FUN_103318bfc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x0001000285a8(0x112f591d0,&UNK_10dbb1330);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c(1);
  lStack_40 = 2;
  uStack_38 = 0;
  func_0x000100087c34(&lStack_40);
  func_0x0001000d224c(&lStack_40);
  lVar1 = lStack_40;
  if (lStack_40 != 0) {
    func_0x000107c3d064(lStack_40);
    func_0x000107c615e8(lVar1);
  }
  FUN_103317d94(param_1,uVar2);
  return uVar2;
}



/* Entry: 103318cb4; end: 103318cc3;  */

void FUN_103318cb4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103318210();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103318cc4; end: 1033191af;  */

void FUN_103318cc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  code *pcVar10;
  long unaff_x20;
  long *plVar11;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_90;
  lVar1 = unaff_x20 + 0x20;
  func_0x000107c61618();
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 0x128);
    if (plVar11 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar11 + 0x208);
      plVar2 = plVar11;
      func_0x000107c6157c();
      (*pcVar10)();
      func_0x000107c615e8(lVar1);
      func_0x000107c61574(plVar11);
      if ((*(byte *)(unaff_x20 + 0x18) & 1) != 0) {
        func_0x0001000285a8(0x112f591c8,&UNK_10dbb1328);
        puStack_90 = (undefined *)0x0;
        uStack_88 = CONCAT71(uStack_88._1_7_,3);
        func_0x000100854cb0(&puStack_90);
        func_0x000107c615e8(plVar2);
        return;
      }
      *(undefined1 *)(unaff_x20 + 0x18) = 1;
      func_0x0001000285a8(0x112f591d0,&UNK_10dbb1330);
      func_0x000107c613fc();
      uVar3 = 1;
      func_0x00010008747c();
      puStack_90 = (undefined *)0x0;
      uStack_88 = uStack_88 & 0xffffffffffffff00;
      func_0x000100087c34(&puStack_90);
      puVar4 = &UNK_11063de50;
      func_0x000107c613fc(&UNK_11063de50,0x18,7);
      *(undefined8 *)(puVar4 + 0x10) = param_2;
      uVar5 = 0;
      FUN_103319604(0,0x112ea2a68,&PTR_PTR_1126ae6b0);
      func_0x000107c61174(param_2);
      pcVar10 = FUN_103319348;
      func_0x0001000bfde0(FUN_103319348,puVar4,uVar5);
      func_0x000107c61574(puVar4);
      puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
      func_0x000107c453e4();
      plVar11 = plVar2;
      func_0x000107c3e2c0(plVar2);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x0001004575f0();
      plVar7 = plVar11;
      func_0x000103319520();
      puVar4 = &UNK_11063de78;
      func_0x000107c613fc(&UNK_11063de78,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar8 = &UNK_11063dea0;
      func_0x000107c613fc(&UNK_11063dea0,0x28,7);
      *(long **)(puVar8 + 0x10) = plVar2;
      *(undefined **)(puVar8 + 0x18) = puVar4;
      *(undefined8 *)(puVar8 + 0x20) = uVar3;
      pcStack_70 = FUN_1033195d4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100288f10;
      puStack_78 = &UNK_11063deb8;
      puStack_68 = puVar8;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c615f0(plVar2);
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c4eec4(uVar5);
      func_0x000107c615e8(plVar2);
      func_0x000107c61574(pcVar10);
      func_0x000107c61170(puVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(plVar11);
      func_0x000107c61170(plVar7);
      return;
    }
    func_0x000107c615e8();
  }
  func_0x0001000285a8(0x112f591c8,&UNK_10dbb1328);
  puStack_90 = (undefined *)0x0;
  uStack_88 = CONCAT71(uStack_88._1_7_,3);
  func_0x000100854cb0(&puStack_90);
  return;
}



/* Entry: 1033191b0; end: 103319277;  */

void FUN_1033191b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11063def0;
  func_0x000107c613fc(&UNK_11063def0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  uStack_50 = 0x1033195fc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11063df08;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103319278; end: 1033192db;  */

void FUN_103319278(long param_1)

{
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    func_0x000107c61574();
  }
  uStack_48 = 0;
  uStack_40 = 1;
  func_0x000100087c34(&uStack_48);
  return;
}



/* Entry: 1033192dc; end: 103319327;  */

void FUN_1033192dc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000103319644(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103319328; end: 103319347;  */

void FUN_103319328(void)

{
  FUN_103318cc4();
  return;
}



/* Entry: 103319348; end: 103319363;  */

void FUN_103319348(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *(ulong *)(unaff_x20 + 0x10);
  uVar12 = *param_2;
  uVar4 = uVar11;
  if (uVar12 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar13 = uVar12;
    }
    func_0x000107c60480();
  }
  if (uVar13 == 0) {
    uVar3 = 0;
  }
  else {
    uVar14 = 0;
    do {
      if ((uVar12 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103319114);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
        uVar10 = uVar4;
      }
      else {
        uVar3 = uVar14;
        uVar10 = uVar12;
        FUN_103319364(uVar14,uVar12,&PTR_PTR_1126ae6a8,0x112d4d630);
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103319110);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c5faec();
      uVar9 = uVar10;
      func_0x000107c61170(uVar4);
      uVar4 = uVar11;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar6 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      if ((uVar5 == uVar6) && (uVar10 == uVar9)) {
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c(uVar9);
        goto LAB_103319130;
      }
      uVar4 = uVar10;
      func_0x000107c605b8(uVar5,uVar10,uVar6,uVar9,0);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uVar9);
      if ((uVar5 & 1) != 0) goto LAB_103319130;
      func_0x000107c61170(uVar3);
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar13);
    uVar3 = 0;
  }
LAB_103319130:
  puVar7 = PTR_PTR_1126ae6b0;
  func_0x000107c610f8();
  uVar8 = 0;
  FUN_103319604(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc48(uVar12,uVar8);
  func_0x000107c47440();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  *param_1 = puVar7;
  return;
}



/* Entry: 103319364; end: 1033195d3;  */

ulong FUN_103319364(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103319448);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10331944c);
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
  FUN_103319604(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103319520);
  (*pcVar2)();
}



/* Entry: 1033195d4; end: 103319603;  */

void FUN_1033195d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_70;
  puVar3 = &UNK_11063def0;
  func_0x000107c613fc(&UNK_11063def0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  uStack_50 = 0x1033195fc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11063df08;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 103319604; end: 103319667;  */

void FUN_103319604(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103319668; end: 10331966f;  */

void FUN_103319668(long param_1,long param_2)

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



/* Entry: 103319670; end: 1033197d3;  */

undefined * FUN_103319670(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 == 0) {
    puVar6 = (undefined8 *)0x112d4f920;
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    FUN_103319a2c();
    puVar7 = &UNK_1107ac098;
    func_0x000107c613f8(&UNK_1107ac098,puVar6,0,0);
    puVar6[1] = 1;
    *puVar6 = 0;
    puVar5 = puVar7;
    func_0x00010488904c();
    func_0x000107c614ac(puVar7);
  }
  else {
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    func_0x000107c4045c(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4b1c0(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&lStack_48);
    lVar3 = lVar2;
    func_0x000100759c94(lVar2,lStack_48);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lStack_48);
    uVar4 = 0;
    func_0x000100de1f70(0);
    puVar5 = (undefined *)0x0;
    func_0x000100759f5c(0,1,FUN_1033197d4,0,uVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(lVar3);
  }
  return puVar5;
}



/* Entry: 1033197d4; end: 1033197ff;  */

void FUN_1033197d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61174();
  return;
}



/* Entry: 103319800; end: 103319843;  */

void FUN_103319800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c40db8(0x3ff3333333333333);
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103319844; end: 10331988f;  */

void FUN_103319844(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103319890; end: 1033198af;  */

void FUN_103319890(void)

{
  FUN_103319670();
  return;
}



/* Entry: 1033198b0; end: 103319933;  */

undefined8 FUN_1033198b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  FUN_103319670();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0;
  func_0x000100de1f70(0);
  uVar2 = uStack_38;
  func_0x000100759f5c(uStack_38,1,FUN_103319800,0,uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(uStack_38);
  return uVar2;
}



/* Entry: 103319934; end: 1033199eb;  */

undefined8 FUN_103319934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  FUN_103319670();
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_11063df68;
  func_0x000107c613fc(&UNK_11063df68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000100de1f70(0);
  uVar3 = uStack_48;
  func_0x000100759f5c(uStack_48,1,FUN_1033199ec,puVar1,uVar2);
  func_0x000107c61574(param_3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar1);
  return uVar3;
}



/* Entry: 1033199ec; end: 103319a2b;  */

void FUN_1033199ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  func_0x000107c51850(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0);
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103319a2c; end: 103319a6b;  */

void FUN_103319a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f59408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3cbb0;
  func_0x000107c61520(&UNK_10dd3cbb0,&UNK_1107ac098);
  puRam0000000112f59408 = puVar1;
  return;
}



/* Entry: 103319a6c; end: 103319cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103319a6c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = _DAT_112f59420;
  ppuVar9 = &puStack_d0;
  lVar11 = *(long *)(unaff_x20 + _DAT_112f59420);
  lVar10 = lVar11;
  if (lVar11 == 0) {
    func_0x0001000285a8(0x112f59450,&UNK_10dbb14c0);
    func_0x000107c613fc();
    lVar4 = 1;
    func_0x00010008747c();
    uVar12 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar12);
    func_0x0001000d224c(&puStack_a0);
    puVar3 = puStack_a0;
    if (puStack_a0 == (undefined *)0x0) {
      lVar10 = 0x112f59458;
      func_0x0001000285a8(0x112f59458,&UNK_10dbb14c8);
      func_0x000100854cb0();
      func_0x000107c61574(lVar4);
    }
    else {
      puVar5 = &UNK_11063dfa8;
      func_0x000107c613fc(&UNK_11063dfa8,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      puVar6 = &UNK_11063dfd0;
      func_0x000107c613fc(&UNK_11063dfd0,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = param_1;
      puVar7 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8(PTR_PTR_1126aeaf8);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_103319ee0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100e1779c;
      puStack_88 = &UNK_11063dfe8;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      uStack_b0 = 0x103319ee8;
      puStack_d0 = puVar1;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_100e17304;
      puStack_b8 = &UNK_11063e010;
      puStack_a8 = puVar6;
      func_0x000107c60bc4(&puStack_d0);
      func_0x000107c615f4(param_1,2);
      func_0x000107c47be0(puVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_a8);
      func_0x000107c61574(puStack_78);
      func_0x0001000d224c(&puStack_a0);
      puVar5 = puStack_a0;
      func_0x000107c4ee90(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(puVar3);
      lVar10 = lVar4;
    }
  }
  func_0x000107c6157c(lVar11);
  return lVar10;
}



/* Entry: 103319cb4; end: 103319d03;  */

void FUN_103319cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  func_0x000107c5677c();
  func_0x000107c3e2c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103319d04; end: 103319da3;  */

void FUN_103319d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11063e038;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103319da4; end: 103319df7; -[_TtC23LensInfoCardIntegration27InfoCardAdInfoPagePresenter adInfoPageDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103319da4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f59420);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112f59420) = 0;
    func_0x000107c61174();
    func_0x000100087c34();
    func_0x0001048872ac();
    func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 103319df8; end: 103319e57; -[_TtC23LensInfoCardIntegration27InfoCardAdInfoPagePresenter init] */

void FUN_103319df8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardIntegration.InfoCardAdInfoPagePresenter",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103319e24);
  (*pcVar1)();
}



/* Entry: 103319e58; end: 103319e9f; -[_TtC23LensInfoCardIntegration27InfoCardAdInfoPagePresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103319e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103319e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103319e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f59410));
  return;
}



/* Entry: 103319ea0; end: 103319ebf;  */

void FUN_103319ea0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce160);
  return;
}



/* Entry: 103319ec0; end: 103319edf;  */

void FUN_103319ec0(void)

{
  FUN_103319a6c();
  return;
}



/* Entry: 103319ee0; end: 103319f1b;  */

void FUN_103319ee0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  func_0x000107c5677c();
  func_0x000107c3e2c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103319f1c; end: 10331a19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_103319f1c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = _DAT_112f59478;
  ppuVar10 = &puStack_d0;
  ppuVar11 = *(undefined ***)(unaff_x20 + _DAT_112f59478);
  ppuVar5 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    func_0x0001000285a8(0x112f594a8,&UNK_10dbb1500);
    func_0x000107c613fc();
    ppuVar5 = (undefined **)0x1;
    func_0x00010008747c();
    uVar12 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined ***)(unaff_x20 + lVar2) = ppuVar5;
    func_0x000107c6157c();
    func_0x000107c61574(uVar12);
    func_0x0001000d224c(&puStack_a0);
    puVar3 = puStack_a0;
    if (puStack_a0 != (undefined *)0x0) {
      func_0x0001000d224c(&puStack_a0);
      puVar4 = puStack_a0;
      if (puStack_a0 != (undefined *)0x0) {
        puVar6 = &UNK_11063e088;
        func_0x000107c613fc(&UNK_11063e088,0x18,7);
        *(undefined8 *)(puVar6 + 0x10) = param_1;
        puVar7 = &UNK_11063e0b0;
        func_0x000107c613fc(&UNK_11063e0b0,0x18,7);
        *(undefined8 *)(puVar7 + 0x10) = param_1;
        puVar8 = PTR_PTR_1126aeaf8;
        func_0x000107c610f8(PTR_PTR_1126aeaf8);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = FUN_10331a3e4;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100e1779c;
        puStack_88 = &UNK_11063e0c8;
        ppuVar9 = &puStack_a0;
        puStack_78 = puVar6;
        func_0x000107c60bc4(ppuVar9);
        uStack_b0 = 0x10331a3ec;
        puStack_d0 = puVar1;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_100e17304;
        puStack_b8 = &UNK_11063e0f0;
        puStack_a8 = puVar7;
        func_0x000107c60bc4(&puStack_d0);
        func_0x000107c615f4(param_1,2);
        func_0x000107c47be0(puVar8);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puStack_a8);
        func_0x000107c61574(puStack_78);
        func_0x0001000d224c(&puStack_a0);
        puVar6 = puStack_a0;
        func_0x000107c4efcc(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(puVar4);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(puVar3);
        goto LAB_10331a170;
      }
      func_0x000107c615e8(puVar3);
    }
    func_0x0001000285a8(0x112f594b0,&UNK_10dbb1508);
    puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
    ppuVar10 = &puStack_a0;
    func_0x000100854cb0(ppuVar10);
    func_0x000107c61574(ppuVar5);
    ppuVar5 = ppuVar10;
  }
LAB_10331a170:
  func_0x000107c6157c(ppuVar11);
  return ppuVar5;
}



/* Entry: 10331a1a0; end: 10331a1ef;  */

void FUN_10331a1a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  func_0x000107c5677c();
  func_0x000107c3e2c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10331a1f0; end: 10331a28f;  */

void FUN_10331a1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_11063e118;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10331a290; end: 10331a2eb; -[_TtC23LensInfoCardIntegration29InfoCardReportAdPagePresenter reportAdPageDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331a290(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + _DAT_112f59478);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112f59478) = 0;
    uStack_21 = param_3;
    func_0x000107c61174();
    func_0x000100087c34(&uStack_21);
    func_0x0001048872ac();
    func_0x000107c61574(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10331a2ec; end: 10331a34b; -[_TtC23LensInfoCardIntegration29InfoCardReportAdPagePresenter init] */

void FUN_10331a2ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardIntegration.InfoCardReportAdPagePresenter",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10331a318);
  (*pcVar1)();
}



/* Entry: 10331a34c; end: 10331a3a3; -[_TtC23LensInfoCardIntegration29InfoCardReportAdPagePresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010331a368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331a388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331a36c) */
/* WARNING: Removing unreachable block (ram,0x00010331a38c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331a34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f59460));
  return;
}



/* Entry: 10331a3a4; end: 10331a3c3;  */

void FUN_10331a3a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce230);
  return;
}



/* Entry: 10331a3c4; end: 10331a3e3;  */

void FUN_10331a3c4(void)

{
  FUN_103319f1c();
  return;
}



/* Entry: 10331a3e4; end: 10331a41f;  */

void FUN_10331a3e4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  func_0x000107c5677c();
  func_0x000107c3e2c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10331a420; end: 10331a527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331a420(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  func_0x0001000285a8(0x112f595d0,&UNK_10dbb15c8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000bda74();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar5 = 0;
  FUN_10331b47c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112f59600) = 0;
  *(undefined8 *)(lVar6 + _DAT_112f595d8) = param_2;
  *(undefined8 *)(lVar6 + _DAT_112f595e0) = param_3;
  *(undefined8 *)(lVar6 + _DAT_112f595e8) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112f595f0) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f595f8) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_60,puVar3);
  param_1[3] = lVar5;
  param_1[4] = &PTR_DAT_11063e1f8;
  *param_1 = plVar7;
  return;
}



/* Entry: 10331a528; end: 10331a6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331a528(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar8 = &lStack_50;
  func_0x0001000285a8(0x112f595b8,&UNK_10dbb15b0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112f595c0,&UNK_10dbb15b8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000bda74(uVar2);
  puVar3 = &UNK_11063e1b0;
  func_0x000107c613fc(&UNK_11063e1b0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c61174();
  uVar4 = 0x112f595c8;
  func_0x0001000285a8(0x112f595c8,&UNK_10dbb15c0);
  pcVar5 = FUN_10331abc8;
  func_0x0001000cb480(FUN_10331abc8,puVar3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11063e1d8;
  func_0x000107c613fc(&UNK_11063e1d8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x0001000285a8(0x112f595b0,&UNK_10dbb15a8);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  uVar4 = 0x10331abd0;
  func_0x0001000bdd8c(0x10331abd0,puVar3);
  lVar6 = 0;
  FUN_10331a3a4();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112f59478) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f59460) = uVar1;
  *(code **)(lVar7 + _DAT_112f59468) = pcVar5;
  *(undefined8 *)(lVar7 + _DAT_112f59470) = uVar4;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  param_1[3] = lVar6;
  param_1[4] = &PTR_DAT_11063e068;
  *param_1 = plVar8;
  return;
}



/* Entry: 10331a6d4; end: 10331a753;  */

void FUN_10331a6d4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (param_3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar1);
    }
    func_0x000107c3d42c();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10331a754; end: 10331a93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331a754(undefined8 *param_1,undefined8 param_2)

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
  
  plVar6 = &lStack_50;
  uVar1 = 0x112f595a8;
  func_0x0001000285a8(0x112f595a8,&UNK_10dbb15a0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000bda74(uVar2,uVar1);
  puVar3 = &UNK_11063e188;
  func_0x000107c613fc(&UNK_11063e188,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x0001000285a8(0x112f595b0,&UNK_10dbb15a8);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  uVar1 = 0x10331ab84;
  func_0x0001000bdd8c(0x10331ab84,puVar3);
  lVar4 = 0;
  FUN_103319ea0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f59420) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f59410) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f59418) = uVar1;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  param_1[3] = lVar4;
  param_1[4] = &PTR_DAT_11063df88;
  *param_1 = plVar6;
  return;
}



/* Entry: 10331a940; end: 10331a9db;  */

void FUN_10331a940(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10331a9dc; end: 10331aa3b;  */

void FUN_10331a9dc(void)

{
  FUN_10331a420();
  return;
}



/* Entry: 10331aa3c; end: 10331abc7;  */

void FUN_10331aa3c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  func_0x0001000285a8(0x112f595a0,&UNK_10dbb1598);
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar2 = *(undefined8 *)(lVar6 + 0x10);
  func_0x0001000bda74(uVar2);
  uVar3 = 0x112d51718;
  func_0x0001000285a8(0x112d51718,&UNK_10d918540);
  uVar4 = 0x10331a86c;
  func_0x0001000cb480(0x10331a86c,0,uVar3);
  func_0x000107c61574(uVar2);
  lVar5 = 0;
  func_0x00010331b910();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11063e228;
  *param_1 = lVar6;
  return;
}



/* Entry: 10331abc8; end: 10331abd3;  */

void FUN_10331abc8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = lVar2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar1);
    }
    func_0x000107c3d42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 10331abd4; end: 10331acd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10331abd4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uStack_48;
  
  lVar1 = _DAT_112f59600;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f59600);
  lVar3 = lVar5;
  if (lVar5 == 0) {
    func_0x0001000285a8(0x112f59630,&UNK_10dbb1600);
    func_0x000107c613fc();
    lVar3 = 1;
    func_0x00010008747c();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar6);
    iVar2 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f595d8);
    func_0x000107c4a400();
    if ((iVar2 != 0) && (func_0x0001000d224c(&uStack_48), uStack_48 != 0)) {
      uVar4 = uStack_48;
      func_0x000107c4b628();
      func_0x000107c615e8(uStack_48);
      if ((uVar4 & 1) != 0) {
        FUN_10331acd8(param_1);
        goto LAB_10331acb4;
      }
    }
    FUN_10331b1d4(param_1);
  }
LAB_10331acb4:
  func_0x000107c6157c(lVar5);
  return lVar3;
}



/* Entry: 10331acd8; end: 10331b1d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331acd8(void)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte **ppbVar12;
  long lVar13;
  long unaff_x20;
  byte *pbVar14;
  long lVar15;
  byte *pbStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  func_0x0001000d224c(&pbStack_80);
  pbVar3 = pbStack_80;
  if (pbStack_80 != (byte *)0x0) {
    pbVar6 = pbStack_80;
    func_0x000107c502d4();
    func_0x000107c61180();
    if (pbVar6 != (byte *)0x0) {
      pbVar5 = (byte *)0x0;
      func_0x000101c99710();
      pbVar14 = pbVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(pbVar6);
      if ((ulong)pbVar14 >> 0x3e == 0) {
        pbVar6 = *(byte **)(((ulong)pbVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        pbVar6 = (byte *)((ulong)pbVar14 & 0xffffffffffffff8);
        if ((byte *)0x7fffffffffffffff < pbVar14) {
          pbVar6 = pbVar14;
        }
        func_0x000107c60480();
      }
      if (pbVar6 != (byte *)0x0) {
        if (((ulong)pbVar14 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)pbVar14 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10331b188);
            (*pcVar4)();
          }
          pbVar6 = *(byte **)(pbVar14 + 0x20);
          func_0x000107c61174();
        }
        else {
          pbVar6 = (byte *)0x0;
          pbVar5 = pbVar14;
          func_0x000103319350();
        }
        func_0x000107c6142c(pbVar14);
        pbVar14 = pbVar6;
        func_0x000107c4f31c();
        func_0x000107c61180();
        if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10331b1d4);
          (*pcVar4)();
        }
        pbVar11 = pbVar14;
        func_0x000107c5faec();
        func_0x000107c61170(pbVar14);
        pbVar9 = (byte *)((ulong)pbVar11 & 0xffffffffffff);
        pbVar10 = (byte *)((ulong)pbVar5 >> 0x38 & 0xf);
        pbVar14 = pbVar9;
        if (((ulong)pbVar5 & 0x2000000000000000) != 0) {
          pbVar14 = pbVar10;
        }
        if (pbVar14 == (byte *)0x0) {
          func_0x000107c6142c(pbVar5);
        }
        else {
          if (((ulong)pbVar5 >> 0x3c & 1) == 0) {
            if (((ulong)pbVar5 >> 0x3d & 1) == 0) {
              if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
                pbVar9 = pbVar5;
                func_0x000107c60358();
              }
              else {
                pbVar11 = (byte *)(((ulong)pbVar5 & 0xfffffffffffffff) + 0x20);
              }
              if (*pbVar11 == 0x2b) {
                if ((long)pbVar9 < 1) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10331b1cc);
                  (*pcVar4)();
                }
                pbVar14 = pbVar9 + -1;
                if (pbVar14 != (byte *)0x0) {
                  lVar15 = 0;
                  do {
                    pbVar11 = pbVar11 + 1;
                    if (((9 < *pbVar11 - 0x30) ||
                        (lVar13 = lVar15 * 10,
                        SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*pbVar11 - 0x30), lVar15 = lVar13 + uVar1,
                       SCARRY8(lVar13,uVar1))) break;
                    pbVar14 = pbVar14 + -1;
                  } while (pbVar14 != (byte *)0x0);
                }
              }
              else if (*pbVar11 == 0x2d) {
                if ((long)pbVar9 < 1) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10331b1c4);
                  (*pcVar4)();
                }
                pbVar14 = pbVar9 + -1;
                if (pbVar14 != (byte *)0x0) {
                  lVar15 = 0;
                  while( true ) {
                    pbVar11 = pbVar11 + 1;
                    if ((9 < *pbVar11 - 0x30) ||
                       (lVar13 = lVar15 * 10,
                       SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar13 >> 0x3f)) break;
                    uVar1 = (ulong)(byte)(*pbVar11 - 0x30);
                    lVar15 = lVar13 - uVar1;
                    if ((SBORROW8(lVar13,uVar1)) || (pbVar14 = pbVar14 + -1, pbVar14 == (byte *)0x0)
                       ) break;
                  }
                }
              }
              else if (pbVar9 != (byte *)0x0) {
                lVar15 = 0;
                pbVar14 = pbVar11;
                while (pbVar14 != (byte *)0x0) {
                  if (((9 < *pbVar11 - 0x30) ||
                      (lVar13 = lVar15 * 10,
                      SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)(*pbVar11 - 0x30), lVar15 = lVar13 + uVar1,
                     SCARRY8(lVar13,uVar1))) break;
                  pbVar9 = pbVar9 + -1;
                  pbVar11 = pbVar11 + 1;
                  pbVar14 = pbVar9;
                }
              }
            }
            else {
              pbStack_80 = pbVar11;
              uStack_78 = (ulong)pbVar5 & 0xffffffffffffff;
              uVar2 = (uint)pbVar11 & 0xff;
              if (uVar2 == 0x2b) {
                if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10331b1d0);
                  (*pcVar4)();
                }
                pbVar10 = pbVar10 + -1;
                if (pbVar10 != (byte *)0x0) {
                  lVar15 = 0;
                  pbVar14 = (byte *)((ulong)&pbStack_80 | 1);
                  do {
                    if (((9 < *pbVar14 - 0x30) ||
                        (lVar13 = lVar15 * 10,
                        SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*pbVar14 - 0x30), lVar15 = lVar13 + uVar1,
                       SCARRY8(lVar13,uVar1))) break;
                    pbVar10 = pbVar10 + -1;
                    pbVar14 = pbVar14 + 1;
                  } while (pbVar10 != (byte *)0x0);
                }
              }
              else if (uVar2 == 0x2d) {
                if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10331b1c8);
                  (*pcVar4)();
                }
                pbVar10 = pbVar10 + -1;
                if (pbVar10 != (byte *)0x0) {
                  lVar15 = 0;
                  pbVar14 = (byte *)((ulong)&pbStack_80 | 1);
                  while( true ) {
                    if ((9 < *pbVar14 - 0x30) ||
                       (lVar13 = lVar15 * 10,
                       SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar13 >> 0x3f)) break;
                    uVar1 = (ulong)(byte)(*pbVar14 - 0x30);
                    lVar15 = lVar13 - uVar1;
                    if ((SBORROW8(lVar13,uVar1)) ||
                       (pbVar10 = pbVar10 + -1, pbVar14 = pbVar14 + 1, pbVar10 == (byte *)0x0))
                    break;
                  }
                }
              }
              else if (pbVar10 != (byte *)0x0) {
                lVar15 = 0;
                ppbVar12 = &pbStack_80;
                while( true ) {
                  if ((9 < *(byte *)ppbVar12 - 0x30) ||
                     (lVar13 = lVar15 * 10,
                     SUB168(SEXT816(lVar15) * SEXT816(10),8) != lVar13 >> 0x3f)) break;
                  uVar1 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30);
                  lVar15 = lVar13 + uVar1;
                  if ((SCARRY8(lVar13,uVar1)) ||
                     (pbVar10 = pbVar10 + -1, ppbVar12 = (byte **)((long)ppbVar12 + 1),
                     pbVar10 == (byte *)0x0)) break;
                }
              }
            }
          }
          else {
            pbVar9 = pbVar5;
            func_0x000100fb6b80(pbVar11,pbVar5,10);
          }
          func_0x000107c6142c(pbVar5);
        }
        pbVar5 = pbVar6;
        func_0x000107c5bee8();
        func_0x000107c61180();
        if (pbVar5 == (byte *)0x0) {
          pbVar14 = (byte *)0x0;
        }
        else {
          pbVar14 = pbVar5;
          func_0x000107c5faec();
          func_0x000107c61170(pbVar5);
          func_0x000107c5fadc(pbVar14,pbVar9);
          func_0x000107c6142c(pbVar9);
        }
        puVar7 = PTR_PTR_1126b0828;
        func_0x000107c610f8(PTR_PTR_1126b0828);
        func_0x000107c487ac();
        func_0x000107c61170(pbVar14);
        puVar8 = PTR_PTR_1126b0830;
        func_0x000107c610f8(PTR_PTR_1126b0830);
        func_0x000107c48324();
        func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f595f8));
        func_0x000107c615e8(pbVar3);
        func_0x000107c61170(pbVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar8);
        return;
      }
      func_0x000107c6142c(pbVar14);
    }
    func_0x000107c615e8(pbVar3);
  }
  lVar15 = *(long *)(unaff_x20 + _DAT_112f59600);
  if (lVar15 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f59600) = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x000100087c34(&pbStack_80);
    func_0x0001048872ac();
    func_0x000107c61574(lVar15);
  }
  return;
}



/* Entry: 10331b1d4; end: 10331b3b3;  */

/* WARNING: Possible PIC construction at 0x00010331b244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331b274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331b290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331b37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010331b398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331b380) */
/* WARNING: Removing unreachable block (ram,0x00010331b294) */
/* WARNING: Removing unreachable block (ram,0x00010331b344) */
/* WARNING: Removing unreachable block (ram,0x00010331b2d0) */
/* WARNING: Removing unreachable block (ram,0x00010331b30c) */
/* WARNING: Removing unreachable block (ram,0x00010331b31c) */
/* WARNING: Removing unreachable block (ram,0x00010331b324) */
/* WARNING: Removing unreachable block (ram,0x00010331b32c) */
/* WARNING: Removing unreachable block (ram,0x00010331b334) */
/* WARNING: Removing unreachable block (ram,0x00010331b33c) */
/* WARNING: Removing unreachable block (ram,0x00010331b34c) */
/* WARNING: Removing unreachable block (ram,0x00010331b278) */
/* WARNING: Removing unreachable block (ram,0x00010331b248) */
/* WARNING: Removing unreachable block (ram,0x00010331b27c) */
/* WARNING: Removing unreachable block (ram,0x00010331b280) */
/* WARNING: Removing unreachable block (ram,0x00010331b25c) */
/* WARNING: Removing unreachable block (ram,0x00010331b39c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331b1d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f595d8);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c610f8(PTR_PTR_1126ad0b0);
  func_0x000107c472d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10331b3b4; end: 10331b413; -[_TtC23LensInfoCardIntegration28InfoCardReportScopePresenter init] */

void FUN_10331b3b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensInfoCardIntegration.InfoCardReportScopePresenter",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10331b3e0);
  (*pcVar1)();
}



/* Entry: 10331b414; end: 10331b47b; -[_TtC23LensInfoCardIntegration28InfoCardReportScopePresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010331b440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331b444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331b414(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f595d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f595e8));
  return;
}



/* Entry: 10331b47c; end: 10331b49b;  */

void FUN_10331b47c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ce308);
  return;
}



/* Entry: 10331b49c; end: 10331b4bb;  */

void FUN_10331b49c(void)

{
  FUN_10331abd4();
  return;
}



/* Entry: 10331b4bc; end: 10331b55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331b4bc(ulong param_1)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  ulong auStack_58 [4];
  undefined1 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f595f8);
  lVar2 = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f59600);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f59600) = 0;
    auStack_58[0] = param_1 & 1;
    auStack_58[1] = 0;
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    uStack_38 = 0;
    func_0x000100087c34(auStack_58);
    func_0x0001048872ac();
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10331b55c; end: 10331b58b; -[_TtC23LensInfoCardIntegration28InfoCardReportScopePresenter reportDidComplete:] */

void FUN_10331b55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10331b4bc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10331b58c; end: 10331b62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331b58c(uint param_1)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  ulong auStack_58 [4];
  undefined1 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f595f0);
  lVar2 = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f59600);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f59600) = 0;
    auStack_58[0] = (ulong)~param_1 & 1;
    auStack_58[1] = 0;
    auStack_58[2] = 0;
    auStack_58[3] = 0;
    uStack_38 = 0;
    func_0x000100087c34(auStack_58);
    func_0x0001048872ac();
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10331b630; end: 10331b65f; -[_TtC23LensInfoCardIntegration28InfoCardReportScopePresenter reportDidCompleteWithCancelled:] */

void FUN_10331b630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10331b58c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10331b660; end: 10331b6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10331b660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f59600);
  if (lVar1 != 0) {
    uStack_38 = 1;
    uStack_58 = param_1;
    uStack_50 = param_2;
    uStack_48 = param_3;
    uStack_40 = param_4;
    func_0x000107c6157c(lVar1);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000100087c34(&uStack_58);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10331b6e8; end: 10331b76b; -[_TtC23LensInfoCardIntegration28InfoCardReportScopePresenter reportDidSubmitWithReasonId:comment:] */

/* WARNING: Possible PIC construction at 0x00010331b750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010331b754) */

void FUN_10331b6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_10331b660(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10331b76c; end: 10331b833;  */

void FUN_10331b76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c5cd9c(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 10331b834; end: 10331b877;  */

void FUN_10331b834(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10331b878; end: 10331b8e3;  */

void FUN_10331b878(void)

{
  FUN_10331b76c();
  return;
}



/* Entry: 10331b8e4; end: 10331b92f;  */

void FUN_10331b8e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10331b930; end: 10331b9d7;  */

void FUN_10331b930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar3 = *unaff_x20;
  func_0x0001000d224c(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c614f0(uStack_48);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar2 = &UNK_11063e248;
  func_0x000107c613fc(&UNK_11063e248,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_1);
  func_0x00010090569c(FUN_10331b9d8,puVar2,uVar1);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 10331b9d8; end: 10331b9df;  */

void FUN_10331b9d8(void)

{
  long unaff_x20;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28,*(undefined8 *)(unaff_x20 + 0x10));
  if (lStack_28 != 0) {
    func_0x000107c3eaec(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 10331b9e0; end: 10331bb5b;  */

undefined * FUN_10331b9e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = param_1;
  func_0x000107c44300();
  func_0x000107c61180();
  uVar4 = param_2;
  if (lVar1 == 0) {
LAB_10331ba44:
    lVar5 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3ec78();
    func_0x000107c61180();
    uVar4 = param_2;
    if (lVar2 == 0) goto LAB_10331ba44;
    lVar5 = lVar2;
    func_0x000107c5faec();
    uVar4 = param_2;
    func_0x000107c61170(lVar2);
  }
  puVar3 = PTR_PTR_1126c83e0;
  func_0x000107c61168();
  func_0x000107c3d2e0();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    uVar8 = 0;
    uVar9 = uVar4;
  }
  else {
    puVar7 = puVar3;
    func_0x000107c5faec();
    uVar9 = uVar4;
    func_0x000107c61170(puVar3);
    uVar8 = uVar4;
  }
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c3d470();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      lVar6 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      goto LAB_10331bae8;
    }
  }
  lVar6 = 0;
  uVar9 = 0;
LAB_10331bae8:
  uVar4 = 0;
  func_0x000103b48d70(0);
  func_0x000107c610f8();
  func_0x000103b4868c(uVar4,puVar7,uVar8,lVar5,param_2,lVar6,uVar9,0x13,0,0);
  func_0x000107c615e8(lVar1);
  return puVar7;
}



/* Entry: 10331bb5c; end: 10331bc0f;  */

code * FUN_10331bb5c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(unaff_x20 + 0x110);
  pcVar3 = pcVar1;
  if (pcVar1 == (code *)0x0) {
    uVar4 = 0x112d5a5f8;
    func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x0001000bda74(uVar2,uVar4);
    uVar4 = 0x112d51718;
    func_0x0001000285a8(0x112d51718,&UNK_10d918540);
    pcVar3 = FUN_10331bc10;
    func_0x0001000cb480(FUN_10331bc10,0,uVar4);
    func_0x000107c61574(uVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
    *(code **)(unaff_x20 + 0x110) = pcVar3;
    func_0x000107c6157c(pcVar3);
    func_0x000107c61574(uVar4);
    pcVar1 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar1);
  return pcVar3;
}



/* Entry: 10331bc10; end: 10331bc53;  */

void FUN_10331bc10(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_2;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "mainQueuePerformer";
    func_0x0001000c10c0();
  }
  else {
    func_0x000107c4c18c();
  }
  func_0x000107c61180();
  *param_1 = pcVar1;
  return;
}



/* Entry: 10331bc54; end: 10331be2b;  */

ulong FUN_10331bc54(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x118);
  uVar3 = uVar1;
  if (uVar1 == 0) {
    FUN_10331d908(unaff_x20 + 0x90,auStack_58,0x112f58f30,&UNK_10dbb11f0);
    func_0x00010331d7c0(auStack_58,0x112f58f30,&UNK_10dbb11f0);
    uVar1 = *(ulong *)(unaff_x20 + 0x18);
    uVar3 = (ulong)((uVar1 & 0x7440) != 0 || lStack_40 == 0);
    uVar2 = 0;
    FUN_103320e8c(0);
    func_0x000107c610f8();
    func_0x000103320ae8(uVar3,uVar1 >> 0xd & 1,uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
    *(ulong *)(unaff_x20 + 0x118) = uVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  return uVar3;
}



/* Entry: 10331be2c; end: 10331c257;  */

ulong * FUN_10331be2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  ulong *puVar14;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  ulong *puVar17;
  ulong auStack_b8 [3];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  ulong auStack_90 [3];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  FUN_10331c258();
  if (param_1 == 0) {
    puVar17 = (ulong *)0x0;
  }
  else {
    uVar1 = *(ulong *)(unaff_x20 + 0x10);
    uVar10 = param_2;
    func_0x000107c4b260();
    func_0x000107c61180();
    uVar16 = *(ulong *)(unaff_x20 + 0x18);
    uVar2 = uVar1;
    FUN_10331c4a8();
    uVar3 = uVar1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    func_0x0001000285a8(0x112f59920,&UNK_10dbb17e8);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x0001000bda74(uVar5);
    uVar8 = 0x112f59928;
    func_0x0001000285a8(0x112f59928,&UNK_10dbb17f0);
    pcVar6 = FUN_10331d0ac;
    func_0x0001000cb480(FUN_10331d0ac,0,uVar8);
    func_0x000107c61574(uVar5);
    func_0x00010331bd24();
    lVar15 = *(long *)(unaff_x20 + 0xe8);
    uVar7 = 0;
    FUN_103321580();
    uVar8 = uVar7;
    func_0x000107c610f8();
    func_0x000103320f8c(uVar4,uVar10,pcVar6,uVar5,lVar15 != 0,uVar8);
    uVar8 = 0;
    FUN_1033312fc();
    ppuStack_70 = &PTR_DAT_11063ecb0;
    ppuStack_98 = &PTR_DAT_11063e9d0;
    auStack_b8[0] = uVar4;
    uStack_a0 = uVar7;
    auStack_90[0] = uVar2;
    uStack_78 = uVar8;
    func_0x000107c6157c(uVar2);
    func_0x000107c61174();
    uVar3 = uVar4;
    func_0x00010331bdac();
    uVar8 = 0x112f59960;
    func_0x0001000285a8(0x112f59960,&UNK_10dbb17f8);
    func_0x000107c61538();
    func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
    uVar7 = *(undefined8 *)(unaff_x20 + 0xb8);
    func_0x0001000bda74();
    puVar9 = &UNK_11063e2a8;
    func_0x000107c613fc(&UNK_11063e2a8,0x20,7);
    *(ulong *)(puVar9 + 0x10) = uVar1;
    *(ulong *)(puVar9 + 0x18) = uVar16;
    func_0x000107c61174();
    uVar10 = 0x112f59968;
    func_0x0001000285a8(0x112f59968,&UNK_10dbb1808);
    pcVar6 = FUN_10331d800;
    func_0x0001000cb480(FUN_10331d800,puVar9,uVar10);
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_11063e2d0;
    func_0x000107c613fc(&UNK_11063e2d0,0x18,7);
    *(ulong *)(puVar9 + 0x10) = uVar1;
    func_0x000107c61174();
    uVar10 = 0x112f59970;
    func_0x0001000285a8(0x112f59970,&UNK_10dbb1810);
    pcVar11 = FUN_10331d860;
    func_0x0001000cb480(FUN_10331d860,puVar9,uVar10);
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_11063e2f8;
    func_0x000107c613fc(&UNK_11063e2f8,0x18,7);
    *(ulong *)(puVar9 + 0x10) = uVar1;
    func_0x000107c61174(uVar1);
    uVar10 = 0x112f59978;
    func_0x0001000285a8(0x112f59978,&UNK_10dbb1818);
    uVar5 = 0x10331d8b4;
    func_0x0001000cb480(0x10331d8b4,puVar9,uVar10);
    func_0x000107c61574(puVar9);
    func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
    uVar12 = *(undefined8 *)(unaff_x20 + 0xd8);
    func_0x000107c41b80();
    func_0x000107c61180();
    uVar10 = uVar12;
    func_0x0001000b637c();
    func_0x000107c61170(uVar12);
    pcVar13 = FUN_10331d0e0;
    func_0x0001000bfde0(FUN_10331d0e0,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    FUN_10331bb5c();
    FUN_103329268(0);
    func_0x000107c613fc();
    func_0x000107c6157c(param_3);
    func_0x000107c615f0(param_1);
    puVar17 = auStack_90;
    func_0x00010332724c(puVar17,param_1,param_2,param_3,auStack_b8,uVar3 & 0xffffffff,
                        uVar16 >> 0xd & 1,uVar8,uVar7,pcVar6,pcVar11,uVar5,pcVar13,uVar10);
    puVar14 = puVar17;
    (**(code **)(*puVar17 + 0x168))();
    func_0x000103dbf524();
    func_0x000107c615e8(param_1);
    func_0x000107c61574(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(puVar14);
  }
  return puVar17;
}



/* Entry: 10331c258; end: 10331c4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10331c258(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *plVar7;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0xe8);
  if (lVar6 == 0) {
    func_0x00010331d2dc();
    if ((((uint)param_2 ^ 0xffffffff) & 0xff) == 0) {
      plVar7 = (long *)0x0;
    }
    else if ((*(byte *)(unaff_x20 + 0x19) >> 5 & 1) == 0) {
      FUN_10333fbfc(0);
      func_0x000107c610f8();
      FUN_10333f09c(param_1,param_2,1,0);
      func_0x00010333f034();
      plVar7 = param_1;
    }
    else {
      lVar5 = 0;
      FUN_103313a04();
      lVar6 = lVar5;
      func_0x000107c610f8();
      FUN_10333fbfc(0);
      func_0x000107c610f8();
      FUN_10331d9d8(param_1,param_2);
      plVar7 = param_1;
      FUN_10333f09c(param_1,param_2,0,1);
      *(long **)(lVar6 + _DAT_112f58c80) = plVar7;
      plVar7 = &lStack_50;
      lStack_50 = lVar6;
      lStack_48 = lVar5;
      func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
      func_0x00010331d9ec(param_1,param_2);
      func_0x00010333f034();
    }
  }
  else {
    lVar1 = 0;
    FUN_103314380();
    lVar2 = lVar1;
    func_0x000107c610f8();
    lVar5 = _DAT_112f58ce0;
    func_0x0001000285a8(0x112f599f0,&UNK_10dbb1870);
    func_0x000107c613fc();
    lVar3 = lVar6;
    func_0x000107c61580(lVar6,2);
    func_0x0001000c2754();
    *(long *)(lVar2 + lVar5) = lVar3;
    *(undefined **)(lVar2 + _DAT_112f58ce8) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(lVar2 + _DAT_112f58cf0) = 0;
    *(long *)(lVar2 + _DAT_112f58cd8) = lVar6;
    plVar7 = &lStack_60;
    lStack_60 = lVar2;
    lStack_58 = lVar1;
    func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_70);
    uVar4 = uStack_70;
    func_0x000107c614f0(uStack_70);
    (**(code **)(lStack_68 + 8))();
    func_0x000107c615e8(uStack_70);
    func_0x0001000d5158(0x103313d94,0,&UNK_110640278);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(lVar6);
    func_0x000107c61170(plVar7);
  }
  return plVar7;
}



/* Entry: 10331c4a8; end: 10331d0ab;  */

long FUN_10331c4a8(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x12;
  uint uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long *plVar22;
  long alStack_3d0 [10];
  long *plStack_380;
  long lStack_378;
  long *plStack_370;
  long lStack_368;
  long *plStack_360;
  long lStack_358;
  long lStack_350;
  long *plStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 auStack_298 [3];
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined8 auStack_270 [3];
  undefined8 uStack_258;
  undefined **ppuStack_250;
  long alStack_248 [3];
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined1 auStack_220 [40];
  long alStack_1f8 [3];
  long lStack_1e0;
  undefined **ppuStack_1d8;
  long alStack_1d0 [3];
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 auStack_1a8 [3];
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 auStack_180 [3];
  undefined8 uStack_168;
  undefined **ppuStack_160;
  long alStack_158 [3];
  undefined8 uStack_140;
  undefined **ppuStack_138;
  long alStack_130 [3];
  long lStack_118;
  undefined **ppuStack_110;
  long alStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar2 = 0;
  FUN_103331784();
  uStack_2f0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = (long)&plStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_2e0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lStack_2a0 = lVar13;
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000bda74(uVar4);
  uVar8 = 0x112d51718;
  func_0x0001000285a8(0x112d51718,&UNK_10d918540);
  pcVar5 = FUN_10331d0e4;
  func_0x0001000cb480(FUN_10331d0e4,0,uVar8);
  func_0x000107c61574(uVar4);
  lVar6 = 0;
  func_0x000103319870();
  lVar2 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(code **)(lVar2 + 0x18) = pcVar5;
  func_0x0001000285a8(0x112f599b0,&UNK_10dbb1820);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000bda74(uVar3);
  uVar8 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar5 = FUN_10331d1b8;
  func_0x0001000cb480(FUN_10331d1b8,0,uVar8);
  func_0x000107c61574(uVar3);
  FUN_10331bb5c();
  uVar8 = 0;
  FUN_10332d394();
  uStack_2c0 = uVar8;
  func_0x000107c613fc();
  FUN_10332cbf8(lVar7,pcVar5,uVar3,uVar8);
  lStack_2a8 = lVar7;
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar8 = uVar16;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112f599b8,&UNK_10dbb1830);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x0001000bda74(uVar3);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar4 = 0;
  FUN_10332a5f0();
  uStack_300 = uVar4;
  func_0x000107c613fc();
  FUN_103329e48(uVar8,uVar3,uVar19,uVar21,uVar4);
  uStack_2b0 = uVar8;
  func_0x0001000285a8(0x112f599c0,&UNK_10dbb1838);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar19);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112f599c8,&UNK_10dbb1840);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x0001000bda74(uVar8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x110);
  ppuStack_c0 = &PTR_DAT_11063df38;
  uVar21 = *(undefined8 *)(unaff_x20 + 0xe0);
  puVar9 = &UNK_11063e320;
  lStack_2f8 = lVar6;
  lStack_e0 = lVar2;
  lStack_c8 = lVar6;
  func_0x000107c613fc(&UNK_11063e320,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar21;
  uVar3 = 0;
  FUN_10332adfc();
  uStack_318 = uVar3;
  func_0x000107c613fc();
  FUN_10332a6e4(uVar4,uVar8,uVar19,&lStack_e0,FUN_10331d950,puVar9,uVar3);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uStack_2b8 = uVar4;
  func_0x000107c61174(uVar21);
  lStack_2e8 = lVar2;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar19);
  lStack_2d8 = lVar6;
  func_0x000107c4b260();
  func_0x000107c61180();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000bda74(uVar16);
  uVar8 = 0x112f599d0;
  func_0x0001000285a8(0x112f599d0,&UNK_10dbb1848);
  pcVar5 = FUN_10331d24c;
  func_0x0001000cb480(FUN_10331d24c,0,uVar8);
  uVar8 = 0x112f599d8;
  func_0x0001000285a8(0x112f599d8,&UNK_10dbb1850);
  uVar3 = 0x10331d294;
  func_0x0001000cb480(0x10331d294,0,uVar8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x110);
  if (*(long *)(unaff_x20 + 0x60) == 0) {
    func_0x000107c6157c(uVar8);
    uVar14 = 1;
  }
  else {
    func_0x000107c6157c(uVar8);
    func_0x0001000d224c(&lStack_e0);
    lVar7 = lStack_e0;
    lVar15 = lStack_e0;
    func_0x000107c3dc60(lStack_e0);
    func_0x000107c615e8(lVar7);
    uVar14 = (uint)lVar15 ^ 1;
  }
  uVar4 = 0;
  FUN_10332cb94();
  uStack_328 = uVar4;
  func_0x000107c613fc();
  FUN_10332c6ac(lVar6,lVar2,uVar16,pcVar5,uVar3,uVar8,uVar14,uVar4);
  lStack_2c8 = lVar6;
  func_0x0001000285a8(0x112f599e0,&UNK_10dbb1858);
  uVar8 = *(undefined8 *)(unaff_x20 + 200);
  func_0x0001000bda74();
  lVar10 = 0;
  func_0x0001033145ec();
  lVar7 = lVar10;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar8;
  ppuStack_c0 = &PTR_DAT_11063db80;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x108);
  uVar3 = 0;
  lStack_e0 = lVar7;
  lStack_c8 = lVar10;
  FUN_10332c5d8();
  uVar8 = uVar3;
  func_0x000107c613fc();
  lVar15 = lVar2;
  FUN_10332af04(lVar2,&lStack_e0,uVar1,uVar8);
  func_0x0001000285a8(0x112f599e8,&UNK_10dbb1860);
  lVar17 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c6157c(lVar7);
  func_0x0001000bda74();
  lVar6 = lStack_2a8;
  lStack_c8 = uStack_2c0;
  ppuStack_c0 = &PTR_DAT_11063f9e8;
  ppuStack_e8 = &PTR_DAT_11063db80;
  lStack_e0 = lStack_2a8;
  ppuStack_110 = &PTR_DAT_11063f8c0;
  uVar8 = 0;
  lStack_330 = lVar10;
  alStack_130[0] = lVar15;
  lStack_118 = uVar3;
  alStack_108[0] = lVar7;
  lStack_f0 = lVar10;
  FUN_103329c68();
  uStack_338 = uVar8;
  func_0x000107c613fc();
  plVar11 = &lStack_e0;
  FUN_1033295a4(lVar17,plVar11,alStack_108,alStack_130,uVar8);
  lStack_308 = lVar7;
  lStack_2d0 = lVar17;
  func_0x000107c6157c(lVar7);
  func_0x000107c6157c(lVar6);
  lStack_310 = lVar15;
  func_0x000107c6157c(lVar15);
  lVar6 = lStack_2d8;
  func_0x000107c4b260();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar15 = lVar7;
  func_0x000107c5faec();
  plStack_348 = plVar11;
  lStack_340 = lVar15;
  func_0x000107c61170(lVar7);
  lVar15 = *(long *)(unaff_x20 + 0xd0);
  lVar7 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
LAB_10331caf0:
    plStack_360 = (long *)0xe000000000000000;
    lStack_358 = 0;
  }
  else {
    lVar10 = lVar7;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    if (lVar10 == 0) goto LAB_10331caf0;
    lVar7 = lVar10;
    func_0x000107c5faec();
    plStack_360 = plVar11;
    lStack_358 = lVar7;
    func_0x000107c61170(lVar10);
  }
  lVar7 = lVar6;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (lVar7 == 0) {
LAB_10331cb44:
    plStack_370 = (long *)0x0;
    lStack_368 = 0;
  }
  else {
    lVar10 = lVar7;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar10 == 0) goto LAB_10331cb44;
    lVar7 = lVar10;
    func_0x000107c5faec();
    plStack_370 = plVar11;
    lStack_368 = lVar7;
    func_0x000107c61170(lVar10);
  }
  lVar7 = lVar6;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (lVar7 == 0) {
LAB_10331cb94:
    plStack_380 = (long *)0x0;
    lStack_378 = 0;
  }
  else {
    lVar10 = lVar7;
    func_0x000107c4f8b8();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar10 == 0) goto LAB_10331cb94;
    lVar7 = lVar10;
    func_0x000107c5faec();
    plStack_380 = plVar11;
    lStack_378 = lVar7;
    func_0x000107c61170(lVar10);
  }
  puVar9 = PTR_PTR_1126c83e0;
  func_0x000107c61168();
  func_0x000107c3d2e0();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    plVar22 = (long *)0x0;
    plVar18 = plVar11;
  }
  else {
    puVar20 = puVar9;
    func_0x000107c5faec();
    plVar18 = plVar11;
    func_0x000107c61170(puVar9);
    plVar22 = plVar11;
  }
  lStack_320 = lVar6;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c3d470();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar7 != 0) {
      lVar6 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      goto LAB_10331cc3c;
    }
  }
  lVar6 = 0;
  plVar18 = (long *)0x0;
LAB_10331cc3c:
  lVar7 = lVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar7;
    func_0x000107c4b41c();
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar15 == 0) {
    lVar7 = -1;
  }
  else {
    lVar7 = lVar15;
    func_0x000107c5b3f0();
    func_0x000107c615e8(lVar15);
  }
  lStack_d8 = lStack_340;
  plStack_d0 = plStack_348;
  lStack_c8 = lStack_358;
  ppuStack_c0 = (undefined **)plStack_360;
  lStack_b8 = lStack_368;
  plStack_b0 = plStack_370;
  lStack_a8 = lStack_378;
  plStack_a0 = plStack_380;
  lStack_350 = lVar2;
  lStack_e0 = lVar2;
  puStack_98 = puVar20;
  plStack_90 = plVar22;
  lStack_88 = lVar6;
  plStack_80 = plVar18;
  lStack_78 = lVar10;
  lStack_70 = lVar7;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  func_0x0001000bda74();
  uVar8 = 0;
  FUN_103322f90();
  lStack_340 = uVar8;
  func_0x000107c613fc();
  FUN_103322a28(uVar3,&lStack_e0,uVar8);
  plStack_348 = (long *)uVar3;
  func_0x0001000d224c(alStack_108);
  ppuVar12 = ppuStack_e8;
  lVar2 = lStack_f0;
  func_0x0001000a8868(alStack_108,lStack_f0);
  (*(code *)ppuVar12[0x21])(lVar2,ppuVar12);
  lVar2 = lStack_2a0;
  func_0x000107c5edd0(lStack_2a0);
  func_0x000107c6142c(ppuVar12);
  func_0x0001000834e4(alStack_108);
  func_0x000107c5edd0(lVar2 + *(int *)(uStack_2f0 + 0x14),0xd000000000000013,0x800000010f13ee00);
  lVar17 = lStack_2d8;
  func_0x000107c4b260();
  func_0x000107c61180();
  lStack_2d8 = lVar17;
  func_0x00010331bdac();
  lVar10 = lStack_2a8;
  uVar3 = uStack_2b0;
  uVar8 = uStack_2b8;
  lVar15 = lStack_2c8;
  lVar7 = lStack_2d0;
  lVar6 = lStack_2e8;
  lVar2 = lStack_308;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)lVar17);
  lStack_f0 = uStack_338;
  ppuStack_e8 = &PTR_DAT_11063f590;
  alStack_108[0] = lStack_2d0;
  ppuStack_110 = &PTR_DAT_11063df38;
  lStack_118 = lStack_2f8;
  alStack_130[0] = lStack_2e8;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  ppuStack_138 = &PTR_DAT_11063f9e8;
  uStack_140 = uStack_2c0;
  alStack_158[0] = lStack_2a8;
  ppuStack_160 = &PTR_DAT_11063f668;
  uStack_168 = uStack_300;
  ppuStack_188 = &PTR_DAT_11063f790;
  auStack_180[0] = uStack_2b0;
  uStack_190 = uStack_318;
  auStack_1a8[0] = uStack_2b8;
  uStack_1b8 = uStack_328;
  ppuStack_1b0 = &PTR_DAT_11063f950;
  alStack_1d0[0] = lStack_2c8;
  lStack_1e0 = lStack_330;
  ppuStack_1d8 = &PTR_DAT_11063db80;
  alStack_1f8[0] = lStack_308;
  lStack_2f8 = uVar4;
  FUN_10331d908(unaff_x20 + 0x90,auStack_220,0x112f58f30,&UNK_10dbb11f0);
  func_0x000107c6157c(lVar6);
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(lVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c();
  func_0x00010331bd24();
  uVar3 = 0;
  FUN_103321bfc();
  uVar8 = uVar3;
  func_0x000107c610f8();
  func_0x000103321620(lVar15,uVar8);
  ppuStack_228 = &PTR_DAT_11063ea00;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x120);
  alStack_248[0] = lVar15;
  uStack_230 = uVar3;
  func_0x000107c61174();
  uVar8 = uVar4;
  func_0x00010331bc54();
  uVar3 = uVar8;
  func_0x000103320a08();
  func_0x000107c61170(uVar8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar8 = 0;
  FUN_1033225b8();
  func_0x000107c613fc();
  FUN_103321cd0(uVar4,uVar3,uVar16);
  lVar15 = lStack_2a0;
  lVar7 = lStack_2e0;
  plVar11 = plStack_348;
  ppuStack_250 = &PTR_DAT_11063eab8;
  uStack_280 = lStack_340;
  ppuStack_278 = &PTR_DAT_11063eb20;
  auStack_298[0] = plStack_348;
  auStack_270[0] = uVar4;
  uStack_258 = uVar8;
  FUN_10331d958(lStack_2a0,lStack_2e0);
  FUN_1033312fc();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(plVar11);
  func_0x000107c6157c();
  *(undefined8 **)(lVar13 + -0x10) = auStack_298;
  *(long *)(lVar13 + -8) = lVar7;
  *(long **)(lVar13 + -0x20) = alStack_248;
  *(undefined8 **)(lVar13 + -0x18) = auStack_270;
  *(long **)(lVar13 + -0x30) = alStack_1f8;
  *(undefined1 **)(lVar13 + -0x28) = auStack_220;
  *(undefined8 **)(lVar13 + -0x40) = auStack_1a8;
  *(long **)(lVar13 + -0x38) = alStack_1d0;
  *(long **)(lVar13 + -0x50) = alStack_158;
  *(undefined8 **)(lVar13 + -0x48) = auStack_180;
  lVar7 = lStack_2d8;
  func_0x00010332e45c(lStack_2d8,lStack_350,uStack_2f0 & 0xffffffff);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(lVar10);
  func_0x000107c61574(lStack_310);
  func_0x000107c61574(lStack_2d0);
  func_0x000107c61574(uStack_2b0);
  func_0x000107c61574(uStack_2b8);
  func_0x000107c61574(lStack_2c8);
  func_0x000107c61574(plVar11);
  func_0x000107c61170(lStack_320);
  func_0x00010331d99c(lVar15);
  return lVar7;
}



/* Entry: 10331d0ac; end: 10331d0df;  */

void FUN_10331d0ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c40a60();
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10331d0e0; end: 10331d0e3;  */

void FUN_10331d0e0(void)

{
  return;
}



/* Entry: 10331d0e4; end: 10331d1b7;  */

void FUN_10331d0e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined1 *)*param_2;
  if (puVar2 == (undefined1 *)0x0) {
    func_0x0001010415e8();
    (**(code **)(lVar4 + 0x68))
              (puVar3,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
               lVar1);
    puVar2 = puVar3;
    func_0x000104188018(puVar3,0,0);
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
  }
  else {
    func_0x000107c51f40();
    func_0x000107c61180();
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 10331d1b8; end: 10331d24b;  */

void FUN_10331d1b8(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c40a84(lVar1,param_3,2,0x1e);
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10331d24c; end: 10331d3cf;  */

void FUN_10331d24c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  (**(code **)(lVar2 + 0x20))(param_1,uVar1,lVar2);
  return;
}


