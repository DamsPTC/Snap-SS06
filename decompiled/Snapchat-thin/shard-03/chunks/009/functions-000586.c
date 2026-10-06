/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e34278; end: 102e342b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e34278(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1e580);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f1e580) = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 102e342b8; end: 102e342e7;  */

void FUN_102e342b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e342e8; end: 102e3434f;  */

void FUN_102e342e8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0448;
  func_0x000107c610f8();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f110d80);
  func_0x000107c478bc();
  func_0x000107c61170(uVar2);
  puRam0000000113805098 = puVar1;
  return;
}



/* Entry: 102e34350; end: 102e343af; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutFetcher init] */

void FUN_102e34350(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensExplorerDynamicLayoutImplementation.LensExplorerStackLayoutFetcher",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e3437c);
  (*pcVar1)();
}



/* Entry: 102e343b0; end: 102e343f7; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e343cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e343d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e343b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1e5d8));
  return;
}



/* Entry: 102e343f8; end: 102e34417;  */

void FUN_102e343f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a8a88);
  return;
}



/* Entry: 102e34418; end: 102e34663; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutFetcher layoutContainerAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e34418(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar1 = param_1 + _DAT_112f1e5e0;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  pcVar6 = *(code **)(lVar2 + 8);
  func_0x000107c61174(param_1);
  (*pcVar6)(uVar3,lVar2);
  puVar4 = &UNK_1105da1d0;
  func_0x000107c613fc(&UNK_1105da1d0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  uVar5 = 0;
  FUN_102e351c4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar6 = FUN_102e35310;
  func_0x0001000bfde0(FUN_102e35310,puVar4,uVar5);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102e34664; end: 102e3491f;  */

void FUN_102e34664(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar14 = (undefined1 *)*param_1;
  puVar6 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar6,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar9 = 0x112f1e620;
    func_0x0001000285a8(0x112f1e620,&UNK_10db56960);
    puStack_80 = puVar14;
    func_0x000100854cb0(&puStack_80,uVar9);
  }
  else {
    lVar12 = *(long *)(param_3 + 0x10);
    if (lVar12 != 0) {
      lVar16 = 0;
      puVar13 = (undefined1 *)((ulong)puVar14 & 0xffffffffffffff8);
      puVar2 = puVar13;
      if ((undefined1 *)0x7fffffffffffffff < puVar14) {
        puVar2 = puVar14;
      }
      do {
        plVar1 = (long *)(param_3 + 0x20 + lVar16 * 0x10);
        puVar3 = (undefined1 *)*plVar1;
        puVar18 = (undefined1 *)plVar1[1];
        if ((ulong)puVar14 >> 0x3e == 0) {
          puVar15 = *(undefined1 **)(puVar13 + 0x10);
        }
        else {
          puVar15 = puVar2;
          func_0x000107c60480();
        }
        lVar16 = lVar16 + 1;
        func_0x000107c61434(puVar18);
        puVar17 = (undefined1 *)0x0;
        do {
          if (puVar15 == puVar17) {
            func_0x000107c6142c(puVar18);
            puVar10 = &UNK_1105da1d0;
            func_0x000107c613fc(&UNK_1105da1d0,0x18,7);
            func_0x000107c61614(puVar10 + 0x10,param_2);
            uVar9 = 0x112f1e628;
            func_0x0001000285a8(0x112f1e628,&UNK_10db56968);
            func_0x000107c613fc();
            func_0x0001000b64ac(FUN_102e35204,puVar10,uVar9);
            goto LAB_102e348f0;
          }
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)(puVar13 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102e34920);
              (*pcVar4)();
            }
            puVar5 = *(undefined1 **)(puVar14 + (long)puVar17 * 8 + 0x20);
            func_0x000107c61174();
            puVar11 = puVar6;
          }
          else {
            puVar5 = puVar17;
            puVar11 = puVar14;
            FUN_102e3690c();
          }
          if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102e3491c);
            (*pcVar4)();
          }
          puVar6 = puVar5;
          func_0x000107c40374();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c4abf8();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          puVar8 = puVar7;
          func_0x000107c5faec();
          puVar6 = puVar11;
          func_0x000107c61170(puVar7);
          if ((puVar8 == puVar3) && (puVar11 == puVar18)) {
            func_0x000107c6142c(puVar18);
            func_0x000107c61170(puVar5);
            puVar18 = puVar11;
            break;
          }
          puVar6 = puVar11;
          func_0x000107c605b8(puVar8,puVar11,puVar3,puVar18,0);
          func_0x000107c61170(puVar5);
          func_0x000107c6142c(puVar11);
          puVar17 = puVar17 + 1;
        } while (((ulong)puVar8 & 1) == 0);
        func_0x000107c6142c(puVar18);
      } while (lVar16 != lVar12);
    }
    uVar9 = 0x112f1e620;
    func_0x0001000285a8(0x112f1e620,&UNK_10db56960);
    puStack_80 = puVar14;
    func_0x000100854cb0(&puStack_80,uVar9);
LAB_102e348f0:
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102e34920; end: 102e34983; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutFetcher fetchDynamicLayoutsWithIds:] */

void FUN_102e34920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102e34504(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e34984; end: 102e3498b;  */

void FUN_102e34984(undefined8 *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long unaff_x20;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  puVar16 = (undefined1 *)*param_1;
  puVar8 = auStack_78;
  func_0x000107c61428(lVar6 + 0x10,puVar8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) {
    uVar11 = 0x112f1e620;
    func_0x0001000285a8(0x112f1e620,&UNK_10db56960);
    puStack_80 = puVar16;
    func_0x000100854cb0(&puStack_80,uVar11);
  }
  else {
    lVar14 = *(long *)(lVar4 + 0x10);
    if (lVar14 != 0) {
      lVar18 = 0;
      puVar15 = (undefined1 *)((ulong)puVar16 & 0xffffffffffffff8);
      puVar2 = puVar15;
      if ((undefined1 *)0x7fffffffffffffff < puVar16) {
        puVar2 = puVar16;
      }
      do {
        plVar1 = (long *)(lVar4 + 0x20 + lVar18 * 0x10);
        puVar3 = (undefined1 *)*plVar1;
        puVar20 = (undefined1 *)plVar1[1];
        if ((ulong)puVar16 >> 0x3e == 0) {
          puVar17 = *(undefined1 **)(puVar15 + 0x10);
        }
        else {
          puVar17 = puVar2;
          func_0x000107c60480();
        }
        lVar18 = lVar18 + 1;
        func_0x000107c61434(puVar20);
        puVar19 = (undefined1 *)0x0;
        do {
          if (puVar17 == puVar19) {
            func_0x000107c6142c(puVar20);
            puVar12 = &UNK_1105da1d0;
            func_0x000107c613fc(&UNK_1105da1d0,0x18,7);
            func_0x000107c61614(puVar12 + 0x10,lVar6);
            uVar11 = 0x112f1e628;
            func_0x0001000285a8(0x112f1e628,&UNK_10db56968);
            func_0x000107c613fc();
            func_0x0001000b64ac(FUN_102e35204,puVar12,uVar11);
            goto LAB_102e348f0;
          }
          if (((ulong)puVar16 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)(puVar15 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102e34920);
              (*pcVar5)();
            }
            puVar7 = *(undefined1 **)(puVar16 + (long)puVar19 * 8 + 0x20);
            func_0x000107c61174();
            puVar13 = puVar8;
          }
          else {
            puVar7 = puVar19;
            puVar13 = puVar16;
            FUN_102e3690c();
          }
          if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102e3491c);
            (*pcVar5)();
          }
          puVar8 = puVar7;
          func_0x000107c40374();
          func_0x000107c61180();
          puVar9 = puVar8;
          func_0x000107c4abf8();
          func_0x000107c61180();
          func_0x000107c61170(puVar8);
          puVar10 = puVar9;
          func_0x000107c5faec();
          puVar8 = puVar13;
          func_0x000107c61170(puVar9);
          if ((puVar10 == puVar3) && (puVar13 == puVar20)) {
            func_0x000107c6142c(puVar20);
            func_0x000107c61170(puVar7);
            puVar20 = puVar13;
            break;
          }
          puVar8 = puVar13;
          func_0x000107c605b8(puVar10,puVar13,puVar3,puVar20,0);
          func_0x000107c61170(puVar7);
          func_0x000107c6142c(puVar13);
          puVar19 = puVar19 + 1;
        } while (((ulong)puVar10 & 1) == 0);
        func_0x000107c6142c(puVar20);
      } while (lVar18 != lVar14);
    }
    uVar11 = 0x112f1e620;
    func_0x0001000285a8(0x112f1e620,&UNK_10db56960);
    puStack_80 = puVar16;
    func_0x000100854cb0(&puStack_80,uVar11);
LAB_102e348f0:
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102e3498c; end: 102e34a27;  */

void FUN_102e3498c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined *)*param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    FUN_102e351c4();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
  }
  else {
    FUN_102e3500c();
    func_0x000107c61170(param_3);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 102e34a28; end: 102e34a2f;  */

void FUN_102e34a28(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar2 = (undefined *)*param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_102e351c4();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
  }
  else {
    FUN_102e3500c();
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 102e34a30; end: 102e34adf;  */

void FUN_102e34a30(undefined8 param_1,long param_2)

{
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puStack_50 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100087f6c(&puStack_50);
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    FUN_102e34ae0(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102e34ae0; end: 102e34ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102e34ae0(undefined *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  code *pcVar12;
  long unaff_x20;
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar10 = &puStack_70;
  pcVar12 = (code *)&puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar3 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    lVar1 = unaff_x20 + _DAT_112f1e5e0;
    uVar8 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar8);
    (**(code **)(lVar2 + 8))(uVar8,lVar2);
    plVar9 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(uVar8);
    pcVar13 = *(code **)(*plVar9 + 0x58);
    ppuVar10 = (undefined **)0x112f1e630;
    puStack_70 = param_1;
    func_0x0001000285a8(0x112f1e630,&UNK_10db56970);
    ppuVar11 = ppuVar10;
    FUN_102e3520c();
    (*pcVar13)(&puStack_70,ppuVar10,ppuVar11);
    func_0x000107c61574(plVar9);
  }
  else {
    lVar1 = unaff_x20 + _DAT_112f1e5e0;
    uVar8 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar8);
    (**(code **)(lVar2 + 8))(uVar8,lVar2);
    uVar4 = 1;
    func_0x00010061b458();
    func_0x000107c61574(uVar8);
    if (lRam0000000112f1e5d0 != -1) {
      func_0x000107c61568(0x112f1e5d0,&UNK_100c1413c);
    }
    if (lRam0000000112f1e5c8 != -1) {
      func_0x000107c61568(0x112f1e5c8,FUN_102e342e8,uRam0000000113805090);
    }
    func_0x000107c5c560(puStack_70);
    puVar5 = puStack_70;
    func_0x000107c61180();
    puVar6 = &UNK_1105da1d0;
    func_0x000107c613fc(&UNK_1105da1d0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_1105da220;
    func_0x000107c613fc(&UNK_1105da220,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined **)(puVar7 + 0x18) = param_1;
    *(undefined8 *)(puVar7 + 0x20) = uVar4;
    pcStack_50 = FUN_102e3525c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101297090;
    puStack_58 = &UNK_1105da238;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    puVar6 = puStack_48;
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c5dc64(puVar5);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(puVar5);
    func_0x0001000b6d30(0);
    puVar6 = &UNK_1105da270;
    func_0x000107c613fc(&UNK_1105da270,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = param_1;
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(uVar4);
    pcVar12 = FUN_102e352bc;
    func_0x000104885df0(FUN_102e352bc,puVar6);
    func_0x000107c61574(puVar6);
    func_0x000107c615e8(puVar3);
    func_0x000107c61574(uVar4);
    ppuVar10 = &PTR_DAT_1107aaa40;
  }
  auVar14._8_8_ = ppuVar10;
  auVar14._0_8_ = pcVar12;
  return auVar14;
}



/* Entry: 102e34ebc; end: 102e34ed7;  */

void FUN_102e34ebc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102e34ed8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102e34ed8; end: 102e3500b;  */

undefined * FUN_102e34ed8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e3500c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_102e36718();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102e351c4(0,0x112f1e618,&PTR_PTR_1126ac580);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102e3500c; end: 102e351c3;  */

undefined * FUN_102e3500c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    FUN_102e34ebc(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e351c4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar9 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar5 = *puVar9;
        func_0x000107c40374();
        func_0x000107c61180();
        uVar8 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar8) {
          FUN_102e34ebc(1 < *(ulong *)(puVar1 + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar8 + 1;
        *(undefined8 *)(puVar1 + uVar8 * 8 + 0x20) = uVar5;
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar7 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        FUN_102e3690c(uVar8,param_1);
        uVar4 = uVar3;
        func_0x000107c40374();
        func_0x000107c61180();
        func_0x000107c615e8(uVar3);
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          FUN_102e34ebc(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        uVar8 = uVar8 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        *(ulong *)(puVar1 + uVar3 * 8 + 0x20) = uVar4;
      } while (uVar7 != uVar8);
    }
  }
  uVar5 = 0;
  FUN_102e351c4(0,0x112f1e618,&PTR_PTR_1126ac580);
  puVar6 = puVar1;
  func_0x000107c5fc48(puVar1,uVar5);
  func_0x000107c6142c(puVar1);
  return puVar6;
}



/* Entry: 102e351c4; end: 102e35203;  */

void FUN_102e351c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e35204; end: 102e3520b;  */

void FUN_102e35204(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puStack_50 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100087f6c(&puStack_50);
    func_0x0001000b6d30(0);
    func_0x000104885df0(0,0);
  }
  else {
    FUN_102e34ae0(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102e3520c; end: 102e3525b;  */

void FUN_102e3520c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f1e638 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f1e630;
  func_0x00010002969c(0x112f1e630,&UNK_10db56970);
  puVar2 = &DAT_10dd3c860;
  func_0x000107c61520(&DAT_10dd3c860,uVar1);
  puRam0000000112f1e638 = puVar2;
  return;
}



/* Entry: 102e3525c; end: 102e35283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e3525c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long unaff_x20;
  code *pcVar7;
  undefined8 uVar8;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  plVar6 = *(long **)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_60;
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puStack_60 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100087f6c(&puStack_60);
  }
  else {
    pcVar7 = *(code **)(*plVar6 + 0x58);
    lVar3 = 0x112f1e630;
    puStack_60 = puVar1;
    func_0x0001000285a8(0x112f1e630,&UNK_10db56970);
    lVar4 = lVar3;
    FUN_102e3520c();
    (*pcVar7)(&puStack_60,lVar3,lVar4);
    func_0x000107c614f0();
    uVar8 = *(undefined8 *)(lVar2 + _DAT_112f1e5e8);
    pcVar7 = *(code **)(lVar3 + 0x10);
    func_0x000107c6157c(uVar8);
    (*pcVar7)();
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(ppuVar5);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 102e35284; end: 102e352bb;  */

void FUN_102e35284(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e352bc; end: 102e3530f;  */

void FUN_102e352bc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar1 = *puStack_38;
  pcVar2 = *(code **)(**(long **)(unaff_x20 + 0x10) + 0x78);
  FUN_102e3520c();
  (*pcVar2)(&puStack_38,uVar1,param_1);
  return;
}



/* Entry: 102e35310; end: 102e35313;  */

void FUN_102e35310(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar2 = (undefined *)*param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    FUN_102e351c4();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
  }
  else {
    FUN_102e3500c();
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 102e35314; end: 102e35357;  */

void FUN_102e35314(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e35358; end: 102e3571f;  */

undefined * FUN_102e35358(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = PTR_PTR_1126ac580;
  func_0x000107c610f8(PTR_PTR_1126ac580);
  func_0x000107c5fadc(uVar4,uVar5);
  func_0x000107c47118(puVar1);
  func_0x000107c61170(uVar4);
  puVar2 = PTR_PTR_1126ac588;
  func_0x000107c610f8();
  func_0x000107c48974(0x4000000000000000,0x4000000000000000,0x4000000000000000,0x4000000000000000);
  puVar3 = puVar2;
  func_0x000100673624();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 7;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  uVar4 = 0;
  FUN_102e357bc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = 1;
  func_0x000107c60110();
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar5 = 2;
  func_0x000107c60110();
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uVar5 = 3;
  func_0x000107c60110();
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  puVar6 = PTR_PTR_1126ac590;
  func_0x000107c610f8(PTR_PTR_1126ac590);
  puVar7 = puVar3;
  func_0x000107c5fc48(puVar3,uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c47cb8(0x3ff0000000000000,puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  func_0x000102e3667c();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 7;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  puVar2 = PTR_PTR_1126d0d70;
  func_0x000107c61168(PTR_PTR_1126d0d70);
  puVar3 = PTR_PTR_1126ac588;
  func_0x000107c610f8(PTR_PTR_1126ac588);
  func_0x000107c48974(0,0,0,0);
  puVar8 = PTR_PTR_1126ac598;
  func_0x000107c610f8(PTR_PTR_1126ac598);
  func_0x000107c48708(0x4000000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c45150(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar8 = PTR_PTR_1126ac578;
  func_0x000107c610f8();
  func_0x000107c46744(0);
  func_0x000107c61170(puVar3);
  *(undefined **)(puVar7 + 0x20) = puVar8;
  puVar3 = PTR_PTR_1126ac5a0;
  func_0x000107c610f8(PTR_PTR_1126ac5a0);
  func_0x000107c48b0c();
  puVar8 = puVar2;
  func_0x000107c5c8ac(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126ac578;
  func_0x000107c610f8();
  func_0x000107c46744(0);
  func_0x000107c61170(puVar8);
  *(undefined **)(puVar7 + 0x28) = puVar3;
  puVar3 = PTR_PTR_1126ac588;
  func_0x000107c610f8(PTR_PTR_1126ac588);
  func_0x000107c48974(0,0,0,0);
  puVar8 = PTR_PTR_1126ac598;
  func_0x000107c610f8(PTR_PTR_1126ac598);
  func_0x000107c48708(0x4000000000000000);
  func_0x000107c61170(puVar3);
  func_0x000107c45150(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar3 = PTR_PTR_1126ac578;
  func_0x000107c610f8();
  func_0x000107c46744(0);
  func_0x000107c61170(puVar2);
  *(undefined **)(puVar7 + 0x30) = puVar3;
  puVar2 = PTR_PTR_1126ac5a8;
  func_0x000107c610f8(PTR_PTR_1126ac5a8);
  uVar4 = 0;
  FUN_102e357bc(0,0x112f1e5b0,&PTR_PTR_1126ac578);
  puVar3 = puVar7;
  func_0x000107c5fc48(puVar7,uVar4);
  func_0x000107c61574(puVar7);
  func_0x000107c4605c(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 102e35720; end: 102e357bb;  */

long * FUN_102e35720(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_38;
  
  lVar1 = 0x112f1e620;
  func_0x0001000285a8(0x112f1e620,&UNK_10db56960);
  FUN_102e36658();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = lVar1;
  FUN_102e35358();
  *(long *)(lVar1 + 0x20) = lVar2;
  plVar3 = &lStack_38;
  lStack_38 = lVar1;
  func_0x000100854cb0(plVar3);
  func_0x000107c61574(lVar1);
  return plVar3;
}



/* Entry: 102e357bc; end: 102e357fb;  */

void FUN_102e357bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e357fc; end: 102e3582f;  */

void FUN_102e357fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e35830; end: 102e359df;  */

void FUN_102e35830(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_48;
  
  func_0x0001000d224c(&puStack_48);
  puVar1 = puStack_48;
  if (puStack_48 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_48);
    if (puStack_48 != (undefined *)0x0) {
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if (lVar8 == 0) {
        puVar3 = puStack_48;
        func_0x000107c614f0(puStack_48);
        puVar4 = puVar1;
        func_0x000107c61174();
        func_0x000100bcb214(puVar3);
        puVar5 = puVar4;
        func_0x00010673208c(puVar4,puVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
        *(undefined **)(unaff_x20 + 0x20) = puVar5;
        func_0x000107c61170(uVar6);
        lVar8 = *(long *)(unaff_x20 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e359e0);
          (*pcVar2)();
        }
      }
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      func_0x000107c61174(lVar8);
      lVar7 = lVar8;
      func_0x0001000b637c();
      func_0x000107c61170(lVar8);
      puVar3 = &UNK_1105da2c0;
      func_0x000107c613fc(&UNK_1105da2c0,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      uVar6 = 0x112f1e790;
      func_0x0001000285a8(0x112f1e790,&UNK_10db56a28);
      func_0x0001000bfde0(FUN_102e363e4,puVar3,uVar6);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(puStack_48);
      func_0x000107c61574(lVar7);
      func_0x000107c61574(puVar3);
      return;
    }
    func_0x000107c61170(puVar1);
  }
  func_0x0001000285a8(0x112f1e620,&UNK_10db56960);
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100854cb0(&puStack_48);
  return;
}



/* Entry: 102e359e0; end: 102e363c3;  */

void FUN_102e359e0(ulong *param_1,double param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  float fVar35;
  ulong uStack_100;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  uVar31 = *param_3;
  func_0x000107c61428(param_4 + 0x10,auStack_90,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    puStack_c8 = (undefined *)0x0;
    uVar6 = 0;
    FUN_102e3725c(0,0x112f1e798,&PTR_PTR_1126cd4a8);
    func_0x000107c5fc50(uVar31,&puStack_c8,uVar6);
    puVar4 = puStack_c8;
    if (puStack_c8 != (undefined *)0x0) {
      *param_1 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar32 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
      if ((ulong)puStack_c8 >> 0x3e == 0) {
        puVar7 = *(undefined **)(puVar32 + 0x10);
      }
      else {
        puVar7 = puStack_c8;
        if (-1 < (long)puStack_c8) {
          puVar7 = puVar32;
        }
        func_0x000107c60480();
      }
      if (puVar7 != (undefined *)0x0) {
        puVar30 = (undefined *)0x0;
        do {
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar32 + 0x10) <= puVar30) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102e3637c);
              (*pcVar5)();
            }
            puVar8 = *(undefined **)(puVar4 + (long)puVar30 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar8 = puVar30;
            FUN_102e36934(puVar30,puVar4,&PTR_PTR_1126cd4a8,0x112f1e798);
          }
          if (SCARRY8((long)puVar30,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36378);
            (*pcVar5)();
          }
          puVar30 = puVar30 + 1;
          puVar9 = puVar8;
          func_0x000107c4abbc();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) {
LAB_102e35ab4:
            func_0x000107c61170(puVar8);
          }
          else {
            puVar10 = puVar8;
            func_0x000107c508cc();
            func_0x000107c61180();
            if (puVar10 == (undefined *)0x0) {
              func_0x000107c61170(puVar8);
              puVar8 = puVar9;
              goto LAB_102e35ab4;
            }
            puVar11 = puVar8;
            func_0x000107c4ac28();
            func_0x000107c61180();
            if (puVar11 == (undefined *)0x0) {
              func_0x000107c61170(puVar10);
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar9);
            }
            else {
              uVar31 = 0;
              FUN_102e3725c(0,0x112f1e7a0,&PTR_PTR_1126cd4d0);
              puVar12 = puVar11;
              func_0x000107c5fc54(puVar11,uVar31);
              func_0x000107c61170(puVar11);
              func_0x000107c5d82c(puVar8);
              func_0x000107c5d848(puVar8);
              puVar11 = PTR_PTR_1126ac580;
              func_0x000107c610f8();
              func_0x000107c47118();
              func_0x000107c61170(puVar9);
              puVar9 = puVar10;
              FUN_102e36e7c();
              if ((ulong)puVar12 >> 0x3e == 0) {
                puVar34 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
                puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                puVar34 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar12) {
                  puVar34 = puVar12;
                }
                func_0x000107c60480();
                puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              PTR___swiftEmptyArrayStorage_11034f1c8 = puVar26;
              if (puVar34 != (undefined *)0x0) {
                uStack_100 = (ulong)puVar12 & 0xffffffffffffff8;
                puVar25 = (undefined *)0x0;
                do {
                  while( true ) {
                    if (((ulong)puVar12 & 0xc000000000000001) == 0) {
                      if (*(undefined **)(uStack_100 + 0x10) <= puVar25) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36368);
                        (*pcVar5)();
                      }
                      puVar13 = *(undefined **)(puVar12 + (long)puVar25 * 8 + 0x20);
                      func_0x000107c61174();
                    }
                    else {
                      puVar13 = puVar25;
                      FUN_102e36934(puVar25,puVar12,&PTR_PTR_1126cd4d0,0x112f1e7a0);
                    }
                    puVar1 = puVar25 + 1;
                    if (SCARRY8((long)puVar25,1)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36364);
                      (*pcVar5)();
                    }
                    puVar14 = puVar13;
                    func_0x000107c4a7bc();
                    func_0x000107c61180();
                    fVar35 = SUB84(param_2,0);
                    if (puVar14 != (undefined *)0x0) break;
                    func_0x000107c61170(puVar13);
LAB_102e35c04:
                    puVar25 = puVar25 + 1;
                    if (puVar1 == puVar34) goto LAB_102e36218;
                  }
                  lStack_98 = 0;
                  puVar15 = &UNK_1105da2e8;
                  func_0x000107c613fc(&UNK_1105da2e8,0x20,7);
                  *(long **)(puVar15 + 0x10) = &lStack_98;
                  *(long *)(puVar15 + 0x18) = param_4;
                  puVar16 = &UNK_1105da310;
                  func_0x000107c613fc(&UNK_1105da310,0x20,7);
                  *(code **)(puVar16 + 0x10) = FUN_102e37058;
                  *(undefined **)(puVar16 + 0x18) = puVar15;
                  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
                  pcStack_a8 = (code *)0x102e372c4;
                  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_c0 = 0x42000000;
                  pcStack_b8 = (code *)0x102e372a0;
                  puStack_b0 = &UNK_1105da328;
                  ppuVar17 = &puStack_c8;
                  puStack_a0 = puVar16;
                  func_0x000107c60bc4();
                  puVar18 = puStack_a0;
                  func_0x000107c6157c(puVar16);
                  func_0x000107c6157c(param_4);
                  func_0x000107c61574(puVar18);
                  puVar18 = &UNK_1105da360;
                  func_0x000107c613fc(&UNK_1105da360,0x20,7);
                  *(long **)(puVar18 + 0x10) = &lStack_98;
                  *(long *)(puVar18 + 0x18) = param_4;
                  puVar19 = &UNK_1105da388;
                  func_0x000107c613fc(&UNK_1105da388,0x20,7);
                  *(undefined8 *)(puVar19 + 0x10) = 0x102e3707c;
                  *(undefined **)(puVar19 + 0x18) = puVar18;
                  pcStack_a8 = (code *)0x102e372c0;
                  puStack_c8 = puVar3;
                  uStack_c0 = 0x42000000;
                  pcStack_b8 = FUN_102e3729c;
                  puStack_b0 = &UNK_1105da3a0;
                  ppuVar20 = &puStack_c8;
                  puStack_a0 = puVar19;
                  func_0x000107c60bc4(ppuVar20);
                  puVar21 = puStack_a0;
                  func_0x000107c6157c(param_4);
                  func_0x000107c6157c(puVar19);
                  func_0x000107c61574(puVar21);
                  puVar21 = &UNK_1105da3d8;
                  func_0x000107c613fc(&UNK_1105da3d8,0x20,7);
                  *(long **)(puVar21 + 0x10) = &lStack_98;
                  *(long *)(puVar21 + 0x18) = param_4;
                  puVar22 = &UNK_1105da400;
                  func_0x000107c613fc(&UNK_1105da400,0x20,7);
                  *(undefined8 *)(puVar22 + 0x10) = 0x102e37084;
                  *(undefined **)(puVar22 + 0x18) = puVar21;
                  pcStack_a8 = FUN_102e3708c;
                  puStack_c8 = puVar3;
                  uStack_c0 = 0x42000000;
                  pcStack_b8 = (code *)0x102e372a4;
                  puStack_b0 = &UNK_1105da418;
                  ppuVar23 = &puStack_c8;
                  puStack_a0 = puVar22;
                  func_0x000107c60bc4(ppuVar23);
                  puVar3 = puStack_a0;
                  func_0x000107c6157c(param_4);
                  func_0x000107c6157c(puVar22);
                  func_0x000107c61574(puVar3);
                  func_0x000107c4c64c(puVar14);
                  func_0x000107c60bd0(ppuVar23);
                  func_0x000107c60bd0(ppuVar20);
                  func_0x000107c60bd0(ppuVar17);
                  if (lStack_98 == 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e363c4);
                    (*pcVar5)();
                  }
                  lVar24 = lStack_98;
                  func_0x000107c61174();
                  func_0x000107c61170(puVar14);
                  lVar33 = lStack_98;
                  func_0x000107c61574(puVar15);
                  func_0x000107c61170(lVar33);
                  puVar14 = puVar16;
                  func_0x000107c61544(puVar16,"",0x7e,0x49,0xd,1);
                  func_0x000107c61574(puVar18);
                  func_0x000107c61574(puVar16);
                  if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e3636c);
                    (*pcVar5)();
                  }
                  puVar14 = puVar19;
                  func_0x000107c61544(puVar19,"",0x7e,0x4c,0x1a,1);
                  func_0x000107c61574(puVar21);
                  func_0x000107c61574(puVar19);
                  if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36370);
                    (*pcVar5)();
                  }
                  puVar14 = puVar22;
                  func_0x000107c61544(puVar22,"",0x7e,0x4f,0x19,1);
                  func_0x000107c61574(puVar22);
                  if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36374);
                    (*pcVar5)();
                  }
                  func_0x000107c42468(puVar13);
                  func_0x000107c5e29c(puVar13);
                  func_0x000107c3e1f8(puVar13);
                  puVar14 = puVar13;
                  func_0x000107c4a7bc();
                  func_0x000107c61180();
                  lVar33 = 0;
                  if (puVar14 != (undefined *)0x0) {
                    lStack_98 = 0;
                    puVar15 = &UNK_1105da450;
                    func_0x000107c613fc(&UNK_1105da450,0x20,7);
                    *(long **)(puVar15 + 0x10) = &lStack_98;
                    *(long *)(puVar15 + 0x18) = param_4;
                    puVar16 = &UNK_1105da478;
                    func_0x000107c613fc(&UNK_1105da478,0x20,7);
                    *(code **)(puVar16 + 0x10) = FUN_102e370ac;
                    *(undefined **)(puVar16 + 0x18) = puVar15;
                    pcStack_a8 = (code *)0x102e372c8;
                    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_c0 = 0x42000000;
                    pcStack_b8 = FUN_102e3729c;
                    puStack_b0 = &UNK_1105da490;
                    ppuVar17 = &puStack_c8;
                    puStack_a0 = puVar16;
                    func_0x000107c60bc4(ppuVar17);
                    puVar16 = puStack_a0;
                    func_0x000107c6157c(param_4);
                    func_0x000107c61174(puVar14);
                    func_0x000107c61574(puVar16);
                    func_0x000107c4c64c(puVar14);
                    func_0x000107c61170(puVar14);
                    func_0x000107c61170(puVar14);
                    func_0x000107c60bd0(ppuVar17);
                    lVar33 = lStack_98;
                    func_0x000107c61574(puVar15);
                  }
                  param_2 = (double)fVar35;
                  puVar14 = PTR_PTR_1126ac578;
                  func_0x000107c610f8();
                  func_0x000107c46744(param_2);
                  func_0x000107c61170(puVar13);
                  func_0x000107c61170(lVar33);
                  func_0x000107c61170(lVar24);
                  if (puVar14 == (undefined *)0x0) goto LAB_102e35c04;
                  puVar25 = puVar26;
                  func_0x000107c61550();
                  if ((((int)puVar25 == 0) || ((long)puVar26 < 0)) ||
                     (puVar25 = puVar26, ((ulong)puVar26 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar26 >> 0x3e == 0) {
                      puVar13 = *(undefined **)(((ulong)puVar26 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar13 = (undefined *)((ulong)puVar26 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar26) {
                        puVar13 = puVar26;
                      }
                      func_0x000107c60480(puVar13);
                    }
                    puVar25 = (undefined *)0x0;
                    FUN_102e36bdc(0,puVar13 + 1,1,puVar26,0x112f1e5b0,&PTR_PTR_1126ac578,0x112f1e7b8
                                  ,&UNK_10db56a40);
                  }
                  uVar28 = (ulong)puVar25 & 0xffffffffffffff8;
                  uVar2 = *(ulong *)(uVar28 + 0x10);
                  puVar26 = puVar25;
                  if (*(ulong *)(uVar28 + 0x18) >> 1 <= uVar2) {
                    puVar26 = (undefined *)(ulong)(1 < *(ulong *)(uVar28 + 0x18));
                    FUN_102e36bdc(puVar26,uVar2 + 1,1,puVar25,0x112f1e5b0,&PTR_PTR_1126ac578,
                                  0x112f1e7b8,&UNK_10db56a40);
                    uVar28 = (ulong)puVar26 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar28 + 0x10) = uVar2 + 1;
                  *(undefined **)(uVar28 + uVar2 * 8 + 0x20) = puVar14;
                  puVar25 = puVar1;
                } while (puVar1 != puVar34);
              }
LAB_102e36218:
              func_0x000107c6142c(puVar12);
              puVar12 = PTR_PTR_1126ac5a8;
              func_0x000107c610f8();
              uVar31 = 0;
              FUN_102e3725c(0,0x112f1e5b0,&PTR_PTR_1126ac578);
              puVar34 = puVar26;
              func_0x000107c5fc48(puVar26,uVar31);
              func_0x000107c6142c(puVar26);
              func_0x000107c4605c();
              func_0x000107c61170(puVar10);
              func_0x000107c61170(puVar8);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar34);
              if (puVar12 != (undefined *)0x0) {
                FUN_102e36b3c(0x112f1e7a8,&PTR_PTR_1126ac5a8,0x112f1e7b0,&UNK_10db56a30);
                uVar27 = *param_1;
                uVar29 = uVar27 & 0xffffffffffffff8;
                uVar2 = *(ulong *)(uVar29 + 0x10);
                uVar28 = uVar27;
                if (*(ulong *)(uVar29 + 0x18) >> 1 <= uVar2) {
                  uVar28 = (ulong)(1 < *(ulong *)(uVar29 + 0x18));
                  FUN_102e36bdc(uVar28,uVar2 + 1,1,uVar27,0x112f1e7a8,&PTR_PTR_1126ac5a8,0x112f1e7b0
                                ,&UNK_10db56a30);
                  uVar29 = uVar28 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar29 + 0x10) = uVar2 + 1;
                *(undefined **)(uVar29 + uVar2 * 8 + 0x20) = puVar12;
                *param_1 = uVar28;
              }
            }
          }
        } while (puVar30 != puVar7);
      }
      func_0x000107c6142c(puVar4);
      func_0x000107c61574(param_4);
      return;
    }
    func_0x000107c61574(param_4);
  }
  *param_1 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 102e363c4; end: 102e363e3;  */

void FUN_102e363c4(void)

{
  FUN_102e35830();
  return;
}



/* Entry: 102e363e4; end: 102e363eb;  */

void FUN_102e363e4(ulong *param_1,double param_2,undefined8 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puVar33;
  long unaff_x20;
  long lVar34;
  undefined *puVar35;
  float fVar36;
  ulong uStack_100;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  uVar32 = *param_3;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
  lVar6 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    puStack_c8 = (undefined *)0x0;
    uVar7 = 0;
    FUN_102e3725c(0,0x112f1e798,&PTR_PTR_1126cd4a8);
    func_0x000107c5fc50(uVar32,&puStack_c8,uVar7);
    puVar4 = puStack_c8;
    if (puStack_c8 != (undefined *)0x0) {
      *param_1 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar33 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
      if ((ulong)puStack_c8 >> 0x3e == 0) {
        puVar8 = *(undefined **)(puVar33 + 0x10);
      }
      else {
        puVar8 = puStack_c8;
        if (-1 < (long)puStack_c8) {
          puVar8 = puVar33;
        }
        func_0x000107c60480();
      }
      if (puVar8 != (undefined *)0x0) {
        puVar31 = (undefined *)0x0;
        do {
          if (((ulong)puVar4 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar33 + 0x10) <= puVar31) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102e3637c);
              (*pcVar5)();
            }
            puVar9 = *(undefined **)(puVar4 + (long)puVar31 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar9 = puVar31;
            FUN_102e36934(puVar31,puVar4,&PTR_PTR_1126cd4a8,0x112f1e798);
          }
          if (SCARRY8((long)puVar31,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36378);
            (*pcVar5)();
          }
          puVar31 = puVar31 + 1;
          puVar10 = puVar9;
          func_0x000107c4abbc();
          func_0x000107c61180();
          if (puVar10 == (undefined *)0x0) {
LAB_102e35ab4:
            func_0x000107c61170(puVar9);
          }
          else {
            puVar11 = puVar9;
            func_0x000107c508cc();
            func_0x000107c61180();
            if (puVar11 == (undefined *)0x0) {
              func_0x000107c61170(puVar9);
              puVar9 = puVar10;
              goto LAB_102e35ab4;
            }
            puVar12 = puVar9;
            func_0x000107c4ac28();
            func_0x000107c61180();
            if (puVar12 == (undefined *)0x0) {
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar10);
            }
            else {
              uVar32 = 0;
              FUN_102e3725c(0,0x112f1e7a0,&PTR_PTR_1126cd4d0);
              puVar13 = puVar12;
              func_0x000107c5fc54(puVar12,uVar32);
              func_0x000107c61170(puVar12);
              func_0x000107c5d82c(puVar9);
              func_0x000107c5d848(puVar9);
              puVar12 = PTR_PTR_1126ac580;
              func_0x000107c610f8();
              func_0x000107c47118();
              func_0x000107c61170(puVar10);
              puVar10 = puVar11;
              FUN_102e36e7c();
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar35 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
                puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                puVar35 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar13) {
                  puVar35 = puVar13;
                }
                func_0x000107c60480();
                puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              PTR___swiftEmptyArrayStorage_11034f1c8 = puVar27;
              if (puVar35 != (undefined *)0x0) {
                uStack_100 = (ulong)puVar13 & 0xffffffffffffff8;
                puVar26 = (undefined *)0x0;
                do {
                  while( true ) {
                    if (((ulong)puVar13 & 0xc000000000000001) == 0) {
                      if (*(undefined **)(uStack_100 + 0x10) <= puVar26) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36368);
                        (*pcVar5)();
                      }
                      puVar14 = *(undefined **)(puVar13 + (long)puVar26 * 8 + 0x20);
                      func_0x000107c61174();
                    }
                    else {
                      puVar14 = puVar26;
                      FUN_102e36934(puVar26,puVar13,&PTR_PTR_1126cd4d0,0x112f1e7a0);
                    }
                    puVar1 = puVar26 + 1;
                    if (SCARRY8((long)puVar26,1)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36364);
                      (*pcVar5)();
                    }
                    puVar15 = puVar14;
                    func_0x000107c4a7bc();
                    func_0x000107c61180();
                    fVar36 = SUB84(param_2,0);
                    if (puVar15 != (undefined *)0x0) break;
                    func_0x000107c61170(puVar14);
LAB_102e35c04:
                    puVar26 = puVar26 + 1;
                    if (puVar1 == puVar35) goto LAB_102e36218;
                  }
                  lStack_98 = 0;
                  puVar16 = &UNK_1105da2e8;
                  func_0x000107c613fc(&UNK_1105da2e8,0x20,7);
                  *(long **)(puVar16 + 0x10) = &lStack_98;
                  *(long *)(puVar16 + 0x18) = lVar6;
                  puVar17 = &UNK_1105da310;
                  func_0x000107c613fc(&UNK_1105da310,0x20,7);
                  *(code **)(puVar17 + 0x10) = FUN_102e37058;
                  *(undefined **)(puVar17 + 0x18) = puVar16;
                  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
                  pcStack_a8 = (code *)0x102e372c4;
                  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_c0 = 0x42000000;
                  pcStack_b8 = (code *)0x102e372a0;
                  puStack_b0 = &UNK_1105da328;
                  ppuVar18 = &puStack_c8;
                  puStack_a0 = puVar17;
                  func_0x000107c60bc4();
                  puVar19 = puStack_a0;
                  func_0x000107c6157c(puVar17);
                  func_0x000107c6157c(lVar6);
                  func_0x000107c61574(puVar19);
                  puVar19 = &UNK_1105da360;
                  func_0x000107c613fc(&UNK_1105da360,0x20,7);
                  *(long **)(puVar19 + 0x10) = &lStack_98;
                  *(long *)(puVar19 + 0x18) = lVar6;
                  puVar20 = &UNK_1105da388;
                  func_0x000107c613fc(&UNK_1105da388,0x20,7);
                  *(undefined8 *)(puVar20 + 0x10) = 0x102e3707c;
                  *(undefined **)(puVar20 + 0x18) = puVar19;
                  pcStack_a8 = (code *)0x102e372c0;
                  puStack_c8 = puVar3;
                  uStack_c0 = 0x42000000;
                  pcStack_b8 = FUN_102e3729c;
                  puStack_b0 = &UNK_1105da3a0;
                  ppuVar21 = &puStack_c8;
                  puStack_a0 = puVar20;
                  func_0x000107c60bc4(ppuVar21);
                  puVar22 = puStack_a0;
                  func_0x000107c6157c(lVar6);
                  func_0x000107c6157c(puVar20);
                  func_0x000107c61574(puVar22);
                  puVar22 = &UNK_1105da3d8;
                  func_0x000107c613fc(&UNK_1105da3d8,0x20,7);
                  *(long **)(puVar22 + 0x10) = &lStack_98;
                  *(long *)(puVar22 + 0x18) = lVar6;
                  puVar23 = &UNK_1105da400;
                  func_0x000107c613fc(&UNK_1105da400,0x20,7);
                  *(undefined8 *)(puVar23 + 0x10) = 0x102e37084;
                  *(undefined **)(puVar23 + 0x18) = puVar22;
                  pcStack_a8 = FUN_102e3708c;
                  puStack_c8 = puVar3;
                  uStack_c0 = 0x42000000;
                  pcStack_b8 = (code *)0x102e372a4;
                  puStack_b0 = &UNK_1105da418;
                  ppuVar24 = &puStack_c8;
                  puStack_a0 = puVar23;
                  func_0x000107c60bc4(ppuVar24);
                  puVar3 = puStack_a0;
                  func_0x000107c6157c(lVar6);
                  func_0x000107c6157c(puVar23);
                  func_0x000107c61574(puVar3);
                  func_0x000107c4c64c(puVar15);
                  func_0x000107c60bd0(ppuVar24);
                  func_0x000107c60bd0(ppuVar21);
                  func_0x000107c60bd0(ppuVar18);
                  if (lStack_98 == 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e363c4);
                    (*pcVar5)();
                  }
                  lVar25 = lStack_98;
                  func_0x000107c61174();
                  func_0x000107c61170(puVar15);
                  lVar34 = lStack_98;
                  func_0x000107c61574(puVar16);
                  func_0x000107c61170(lVar34);
                  puVar15 = puVar17;
                  func_0x000107c61544(puVar17,"",0x7e,0x49,0xd,1);
                  func_0x000107c61574(puVar19);
                  func_0x000107c61574(puVar17);
                  if (((ulong)puVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e3636c);
                    (*pcVar5)();
                  }
                  puVar15 = puVar20;
                  func_0x000107c61544(puVar20,"",0x7e,0x4c,0x1a,1);
                  func_0x000107c61574(puVar22);
                  func_0x000107c61574(puVar20);
                  if (((ulong)puVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36370);
                    (*pcVar5)();
                  }
                  puVar15 = puVar23;
                  func_0x000107c61544(puVar23,"",0x7e,0x4f,0x19,1);
                  func_0x000107c61574(puVar23);
                  if (((ulong)puVar15 & 1) != 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e36374);
                    (*pcVar5)();
                  }
                  func_0x000107c42468(puVar14);
                  func_0x000107c5e29c(puVar14);
                  func_0x000107c3e1f8(puVar14);
                  puVar15 = puVar14;
                  func_0x000107c4a7bc();
                  func_0x000107c61180();
                  lVar34 = 0;
                  if (puVar15 != (undefined *)0x0) {
                    lStack_98 = 0;
                    puVar16 = &UNK_1105da450;
                    func_0x000107c613fc(&UNK_1105da450,0x20,7);
                    *(long **)(puVar16 + 0x10) = &lStack_98;
                    *(long *)(puVar16 + 0x18) = lVar6;
                    puVar17 = &UNK_1105da478;
                    func_0x000107c613fc(&UNK_1105da478,0x20,7);
                    *(code **)(puVar17 + 0x10) = FUN_102e370ac;
                    *(undefined **)(puVar17 + 0x18) = puVar16;
                    pcStack_a8 = (code *)0x102e372c8;
                    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_c0 = 0x42000000;
                    pcStack_b8 = FUN_102e3729c;
                    puStack_b0 = &UNK_1105da490;
                    ppuVar18 = &puStack_c8;
                    puStack_a0 = puVar17;
                    func_0x000107c60bc4(ppuVar18);
                    puVar17 = puStack_a0;
                    func_0x000107c6157c(lVar6);
                    func_0x000107c61174(puVar15);
                    func_0x000107c61574(puVar17);
                    func_0x000107c4c64c(puVar15);
                    func_0x000107c61170(puVar15);
                    func_0x000107c61170(puVar15);
                    func_0x000107c60bd0(ppuVar18);
                    lVar34 = lStack_98;
                    func_0x000107c61574(puVar16);
                  }
                  param_2 = (double)fVar36;
                  puVar15 = PTR_PTR_1126ac578;
                  func_0x000107c610f8();
                  func_0x000107c46744(param_2);
                  func_0x000107c61170(puVar14);
                  func_0x000107c61170(lVar34);
                  func_0x000107c61170(lVar25);
                  if (puVar15 == (undefined *)0x0) goto LAB_102e35c04;
                  puVar26 = puVar27;
                  func_0x000107c61550();
                  if ((((int)puVar26 == 0) || ((long)puVar27 < 0)) ||
                     (puVar26 = puVar27, ((ulong)puVar27 >> 0x3e & 1) != 0)) {
                    if ((ulong)puVar27 >> 0x3e == 0) {
                      puVar14 = *(undefined **)(((ulong)puVar27 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar14 = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar27) {
                        puVar14 = puVar27;
                      }
                      func_0x000107c60480(puVar14);
                    }
                    puVar26 = (undefined *)0x0;
                    FUN_102e36bdc(0,puVar14 + 1,1,puVar27,0x112f1e5b0,&PTR_PTR_1126ac578,0x112f1e7b8
                                  ,&UNK_10db56a40);
                  }
                  uVar29 = (ulong)puVar26 & 0xffffffffffffff8;
                  uVar2 = *(ulong *)(uVar29 + 0x10);
                  puVar27 = puVar26;
                  if (*(ulong *)(uVar29 + 0x18) >> 1 <= uVar2) {
                    puVar27 = (undefined *)(ulong)(1 < *(ulong *)(uVar29 + 0x18));
                    FUN_102e36bdc(puVar27,uVar2 + 1,1,puVar26,0x112f1e5b0,&PTR_PTR_1126ac578,
                                  0x112f1e7b8,&UNK_10db56a40);
                    uVar29 = (ulong)puVar27 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar29 + 0x10) = uVar2 + 1;
                  *(undefined **)(uVar29 + uVar2 * 8 + 0x20) = puVar15;
                  puVar26 = puVar1;
                } while (puVar1 != puVar35);
              }
LAB_102e36218:
              func_0x000107c6142c(puVar13);
              puVar13 = PTR_PTR_1126ac5a8;
              func_0x000107c610f8();
              uVar32 = 0;
              FUN_102e3725c(0,0x112f1e5b0,&PTR_PTR_1126ac578);
              puVar35 = puVar27;
              func_0x000107c5fc48(puVar27,uVar32);
              func_0x000107c6142c(puVar27);
              func_0x000107c4605c();
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar12);
              func_0x000107c61170(puVar10);
              func_0x000107c61170(puVar35);
              if (puVar13 != (undefined *)0x0) {
                FUN_102e36b3c(0x112f1e7a8,&PTR_PTR_1126ac5a8,0x112f1e7b0,&UNK_10db56a30);
                uVar28 = *param_1;
                uVar30 = uVar28 & 0xffffffffffffff8;
                uVar2 = *(ulong *)(uVar30 + 0x10);
                uVar29 = uVar28;
                if (*(ulong *)(uVar30 + 0x18) >> 1 <= uVar2) {
                  uVar29 = (ulong)(1 < *(ulong *)(uVar30 + 0x18));
                  FUN_102e36bdc(uVar29,uVar2 + 1,1,uVar28,0x112f1e7a8,&PTR_PTR_1126ac5a8,0x112f1e7b0
                                ,&UNK_10db56a30);
                  uVar30 = uVar29 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar30 + 0x10) = uVar2 + 1;
                *(undefined **)(uVar30 + uVar2 * 8 + 0x20) = puVar13;
                *param_1 = uVar29;
              }
            }
          }
        } while (puVar31 != puVar8);
      }
      func_0x000107c6142c(puVar4);
      func_0x000107c61574(lVar6);
      return;
    }
    func_0x000107c61574(lVar6);
  }
  *param_1 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 102e363ec; end: 102e365c7;  */

/* WARNING: Possible PIC construction at 0x000102e3643c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e36440) */

void FUN_102e363ec(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0d70;
  func_0x000107c61168(PTR_PTR_1126d0d70);
  FUN_102e36e7c(param_1);
  func_0x000107c44558(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e365c8; end: 102e36657;  */

undefined *
FUN_102e365c8(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102e366a0(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 102e36658; end: 102e3669f;  */

void FUN_102e36658(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f1e7b0;
  plVar5 = (long *)&UNK_10db56a30;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102e3725c(0,0x112f1e7a8,&PTR_PTR_1126ac5a8);
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



/* Entry: 102e366a0; end: 102e36717;  */

void FUN_102e366a0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102e3725c(0,param_1,param_2);
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



/* Entry: 102e36718; end: 102e3674f;  */

void FUN_102e36718(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f1e7d0;
  plVar5 = (long *)&UNK_10db56a50;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102e3725c(0,0x112f1e618,&PTR_PTR_1126ac580);
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



/* Entry: 102e36750; end: 102e3690b;  */

ulong FUN_102e36750(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36834);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36838);
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
  FUN_102e3725c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e3690c);
  (*pcVar2)();
}



/* Entry: 102e3690c; end: 102e36933;  */

ulong FUN_102e3690c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36a18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36a1c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ac5a8;
    func_0x000107c61168(PTR_PTR_1126ac5a8);
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
    puVar4 = PTR_PTR_1126ac5a8;
    func_0x000107c61168(PTR_PTR_1126ac5a8);
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
  FUN_102e3725c(0,0x112f1e7a8,&PTR_PTR_1126ac5a8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36af0);
  (*pcVar2)();
}



/* Entry: 102e36934; end: 102e36aef;  */

ulong FUN_102e36934(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36a18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36a1c);
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
  FUN_102e3725c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36af0);
  (*pcVar2)();
}



/* Entry: 102e36af0; end: 102e36b3b;  */

ulong FUN_102e36af0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36a18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36a1c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b8158;
    func_0x000107c61168(PTR_PTR_1126b8158);
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
    puVar4 = PTR_PTR_1126b8158;
    func_0x000107c61168(PTR_PTR_1126b8158);
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
  FUN_102e3725c(0,0x112f1e7c0,&PTR_PTR_1126b8158);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e36af0);
  (*pcVar2)();
}



/* Entry: 102e36b3c; end: 102e36bdb;  */

void FUN_102e36b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_102e36bdc(0,uVar1 + 1,1,uVar3,param_1,param_2,param_3,param_4);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102e36bdc; end: 102e36d3b;  */

ulong FUN_102e36bdc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e36d3c);
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
  FUN_102e365c8(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e36d38);
      (*pcVar1)();
    }
    FUN_102e36d60(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 102e36d3c; end: 102e36d5f;  */

ulong FUN_102e36d3c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e36d3c);
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
  FUN_102e365c8(uVar2,uVar4,0x112f1e7a0,&PTR_PTR_1126cd4d0,0x112f1e7c8,&UNK_10db56a48);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e36d38);
      (*pcVar1)();
    }
    FUN_102e36d60(0,uVar2,uVar3 + 0x20,param_4,0x112f1e7a0,&PTR_PTR_1126cd4d0);
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



/* Entry: 102e36d60; end: 102e36e7b;  */

long FUN_102e36d60(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e36e78);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e36e7c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102e3725c(0,param_5,param_6);
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
      FUN_102e3725c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e36e74);
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



/* Entry: 102e36e7c; end: 102e37057;  */

undefined * FUN_102e36e7c(float param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  func_0x000107c4e080();
  func_0x000107c3db0c();
  puVar1 = param_2;
  func_0x000107c4ac00();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    FUN_102e3725c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar3 = puVar1;
    func_0x000107c5fc54(puVar1,uVar2);
    func_0x000107c61170(puVar1);
  }
  puVar1 = param_2;
  func_0x000107c423e0();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ac588;
    func_0x000107c610f8(PTR_PTR_1126ac588);
    fVar6 = 0.0;
    func_0x000107c48974(0,0,0,0);
  }
  else {
    func_0x000107c61174();
    func_0x000107c5ba38();
    dVar7 = (double)param_1;
    func_0x000107c427dc(puVar1);
    dVar8 = (double)param_1;
    func_0x000107c5cbd8(puVar1);
    dVar9 = (double)param_1;
    func_0x000107c3ec10(puVar1);
    puVar4 = PTR_PTR_1126ac588;
    func_0x000107c610f8(PTR_PTR_1126ac588);
    func_0x000107c48974(dVar7,dVar8,dVar9,(double)param_1);
    fVar6 = SUB84(dVar7,0);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c4a7b4(param_2);
  puVar1 = PTR_PTR_1126ac590;
  func_0x000107c610f8(PTR_PTR_1126ac590);
  uVar2 = 0;
  FUN_102e3725c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,uVar2);
  func_0x000107c6142c(puVar3);
  func_0x000107c47cb8((double)fVar6,puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  return puVar1;
}



/* Entry: 102e37058; end: 102e3708b;  */

/* WARNING: Possible PIC construction at 0x000102e3643c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e36440) */

void FUN_102e37058(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126d0d70;
  func_0x000107c61168(PTR_PTR_1126d0d70,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  FUN_102e36e7c(param_1);
  func_0x000107c44558(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e3708c; end: 102e370ab;  */

void FUN_102e3708c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e370ac; end: 102e370b3;  */

/* WARNING: Possible PIC construction at 0x000102e3659c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e365a0) */

void FUN_102e370ac(long param_1)

{
  long *plVar1;
  long unaff_x20;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5a930(param_1,plVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = *plVar1;
    *plVar1 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5a928();
    func_0x000107c3fdb8();
    func_0x000107c610f8(PTR_PTR_1126ac5b0);
    func_0x000107c4865c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e370b4; end: 102e371df;  */

undefined * FUN_102e370b4(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  func_0x000107c5b08c();
  fVar3 = param_1;
  func_0x000107c423e0();
  func_0x000107c61180();
  if (param_2 == 0) {
    puVar1 = PTR_PTR_1126ac588;
    func_0x000107c610f8(PTR_PTR_1126ac588);
    func_0x000107c48974(0,0,0,0);
  }
  else {
    func_0x000107c61174();
    func_0x000107c5ba38();
    dVar4 = (double)fVar3;
    func_0x000107c427dc(param_2);
    dVar5 = (double)fVar3;
    func_0x000107c5cbd8(param_2);
    dVar6 = (double)fVar3;
    func_0x000107c3ec10(param_2);
    puVar1 = PTR_PTR_1126ac588;
    func_0x000107c610f8(PTR_PTR_1126ac588);
    func_0x000107c48974(dVar4,dVar5,dVar6,(double)fVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_2);
  }
  func_0x000107c5caa4();
  puVar2 = PTR_PTR_1126ac598;
  func_0x000107c610f8(PTR_PTR_1126ac598);
  func_0x000107c48708((double)param_1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 102e371e0; end: 102e3725b;  */

void FUN_102e371e0(undefined8 param_1)

{
  func_0x000107c5c224();
  func_0x000107c3db0c(param_1);
  func_0x000107c5c838(param_1);
  func_0x000107c4b654(param_1);
  func_0x000107c610f8(PTR_PTR_1126ac5a0);
                    /* WARNING: Could not recover jumptable at 0x00010c04eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102e3725c; end: 102e3729b;  */

void FUN_102e3725c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e3729c; end: 102e372d3;  */

void FUN_102e3729c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e372d4; end: 102e37373;  */

void FUN_102e372d4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e37374; end: 102e37383;  */

void FUN_102e37374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102e37384; end: 102e373e3; -[_TtC41SCLensExplorerDynamicLayoutImplementation29StackLayoutDeltaSyncProcessor init] */

void FUN_102e37384(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensExplorerDynamicLayoutImplementation.StackLayoutDeltaSyncProcessor",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e373b0);
  (*pcVar1)();
}



/* Entry: 102e373e4; end: 102e373f3; -[_TtC41SCLensExplorerDynamicLayoutImplementation29StackLayoutDeltaSyncProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e373e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f1e7d8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1e7d8));
  return;
}



/* Entry: 102e373f4; end: 102e37433; -[_TtC41SCLensExplorerDynamicLayoutImplementation29StackLayoutDeltaSyncProcessor type] */

void FUN_102e373f4(void)

{
  if (lRam0000000112f1e5c8 != -1) {
    func_0x000107c61568(0x112f1e5c8,FUN_102e342e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113805098);
  return;
}



/* Entry: 102e37434; end: 102e3751b; -[_TtC41SCLensExplorerDynamicLayoutImplementation29StackLayoutDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

/* WARNING: Possible PIC construction at 0x000102e37500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e37504) */

void FUN_102e37434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100c14068(0,0x112d6e3e8,&PTR_PTR_1126b8148);
  func_0x000107c5fc54(param_5,uVar1);
  uVar1 = 0;
  func_0x000100c14068(0,0x112f1e7c0,&PTR_PTR_1126b8158);
  func_0x000107c5fc54(param_6,uVar1);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  FUN_102e38098(param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 102e3751c; end: 102e37697;  */

undefined1  [16] FUN_102e3751c(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar5 = &puStack_70;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar6 == 0) {
    uVar2 = 0;
    uVar7 = 0;
  }
  else {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e37698);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      func_0x000102e36b04(0,param_1);
    }
    uStack_40 = 0;
    uStack_38 = 0;
    uVar7 = uVar2;
    func_0x000107c44fdc();
    func_0x000107c61180();
    puVar3 = &UNK_1105da5c0;
    func_0x000107c613fc(&UNK_1105da5c0,0x18,7);
    *(undefined8 **)(puVar3 + 0x10) = &uStack_40;
    puVar4 = &UNK_1105da5e8;
    func_0x000107c613fc(&UNK_1105da5e8,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x102e384ac;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    uStack_50 = 0x102e384a8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100de58f0;
    puStack_58 = &UNK_1105da600;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4c6ac(uVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar7);
    uVar7 = uStack_38;
    uVar2 = uStack_40;
    func_0x000107c61574(puVar3);
  }
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 102e37698; end: 102e37757;  */

code * FUN_102e37698(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  code *unaff_x20;
  long unaff_x21;
  undefined *puVar10;
  code *pcVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  ulong uStack_98;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar1 = 0;
  if (unaff_x20 == (code *)0x0) {
    lVar4 = lVar1;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    lVar4 = lVar1;
    lVar1 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar9 = lVar4;
  func_0x000107c4a794();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c61174();
    lVar5 = lVar9;
    func_0x000107c4e43c();
    func_0x000107c61180();
    uVar2 = 0;
    func_0x000100c14068(0,0x112dc5d20,&PTR_PTR_1126b0440);
    lVar3 = lVar5;
    func_0x000107c5fc54(lVar5,uVar2);
    func_0x000107c61170(lVar5);
    FUN_102e3751c(lVar3);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar9);
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(uVar2);
  }
  uStack_98 = 0xf000000000000000;
  lStack_a0 = 0;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000100c14068(0,0x112d6e3f0,&PTR_PTR_1126b8138);
  lVar9 = lVar4;
  func_0x000107c5f9e8(lVar4,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(lVar4);
  if (*(long *)(lVar9 + 0x10) == 0) {
    func_0x000107c6142c(lVar9);
LAB_102e379ec:
    puVar10 = (undefined *)0x0;
    pcVar11 = (code *)0x0;
  }
  else {
    func_0x000107c61434(lVar9);
    lVar4 = 0x626f6c62;
    uVar8 = 0;
    func_0x000100029284();
    if ((uVar8 & 1) == 0) {
      func_0x000107c61430(lVar9,2);
      goto LAB_102e379ec;
    }
    lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + lVar4 * 8);
    func_0x000107c61174(lVar5);
    func_0x000107c61430(lVar9,2);
    puVar10 = &UNK_1105da548;
    func_0x000107c613fc(&UNK_1105da548,0x18,7);
    *(long **)(puVar10 + 0x10) = &lStack_a0;
    puVar6 = &UNK_1105da570;
    func_0x000107c613fc(&UNK_1105da570,0x20,7);
    pcVar11 = FUN_102e382e4;
    *(code **)(puVar6 + 0x10) = FUN_102e382e4;
    *(undefined **)(puVar6 + 0x18) = puVar10;
    uStack_b0 = 0x102e38314;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_10174554c;
    puStack_b8 = &UNK_1105da588;
    ppuVar7 = &puStack_d0;
    puStack_a8 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_a8);
    func_0x000107c4c740(lVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar5);
    uVar8 = uStack_98;
    lVar4 = lStack_a0;
    lVar9 = lVar5;
    if (uStack_98 >> 0x3c < 0xf) {
      func_0x000107c610f8(PTR_PTR_1126ac5b8);
      func_0x00010006c00c(lVar4,uVar8);
      lVar9 = lVar4;
      FUN_102e37698(lVar4,uVar8);
      if (lVar1 == 0) {
        if (lVar9 != 0) {
          lVar1 = lVar9;
          FUN_102e38a20();
          func_0x000107c61170(lVar9);
          if (lVar1 != 0) {
            lVar9 = lVar1;
            func_0x000106734b90(lVar1,0);
            func_0x000107c61180();
            func_0x000107c5c28c();
            func_0x000107c61180();
            if (param_2 == 0) {
              func_0x0001000b44c0(lVar4,uVar8);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar9);
              uStack_c8 = 0;
              puStack_d0 = (undefined *)0x0;
              puStack_b8 = (undefined *)0x0;
              puStack_c0 = (undefined *)0x0;
            }
            else {
              func_0x000107c60234(&puStack_d0);
              func_0x0001000b44c0(lVar4,uVar8);
              func_0x000107c615e8(param_2);
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar9);
            }
            func_0x00010006e7f4(&puStack_d0);
            func_0x0001000b44c0(lStack_a0,uStack_98);
            pcVar11 = FUN_102e382e4;
            goto LAB_102e37a28;
          }
        }
      }
      else {
        func_0x000107c614ac(lVar1);
      }
      func_0x0001000b44c0(lVar4,uVar8);
      pcVar11 = FUN_102e382e4;
      lVar9 = lVar4;
    }
  }
  FUN_102e382a4();
  func_0x000107c613f8(&UNK_1105da6a8,lVar9,0,0);
  func_0x000107c61654();
  func_0x0001000b44c0(lStack_a0,uStack_98);
LAB_102e37a28:
  func_0x00010130f8ec(pcVar11,puVar10);
  return pcVar11;
}



/* Entry: 102e37758; end: 102e37b0f;  */

void FUN_102e37758(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long unaff_x21;
  undefined *puVar8;
  code *pcVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  ulong uStack_58;
  
  lVar1 = param_1;
  func_0x000107c4a794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar3 = lVar1;
    func_0x000107c4e43c();
    func_0x000107c61180();
    uVar2 = 0;
    func_0x000100c14068(0,0x112dc5d20,&PTR_PTR_1126b0440);
    lVar4 = lVar3;
    func_0x000107c5fc54(lVar3,uVar2);
    func_0x000107c61170(lVar3);
    FUN_102e3751c(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(lVar4);
    func_0x000107c6142c(uVar2);
  }
  uStack_58 = 0xf000000000000000;
  lStack_60 = 0;
  func_0x000107c4f4ec();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000100c14068(0,0x112d6e3f0,&PTR_PTR_1126b8138);
  lVar1 = param_1;
  func_0x000107c5f9e8(param_1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(param_1);
  if (*(long *)(lVar1 + 0x10) == 0) {
    func_0x000107c6142c(lVar1);
LAB_102e379ec:
    puVar8 = (undefined *)0x0;
    pcVar9 = (code *)0x0;
  }
  else {
    func_0x000107c61434(lVar1);
    lVar3 = 0x626f6c62;
    uVar7 = 0;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      func_0x000107c61430(lVar1,2);
      goto LAB_102e379ec;
    }
    lVar4 = *(long *)(*(long *)(lVar1 + 0x38) + lVar3 * 8);
    func_0x000107c61174(lVar4);
    func_0x000107c61430(lVar1,2);
    puVar8 = &UNK_1105da548;
    func_0x000107c613fc(&UNK_1105da548,0x18,7);
    *(long **)(puVar8 + 0x10) = &lStack_60;
    puVar5 = &UNK_1105da570;
    func_0x000107c613fc(&UNK_1105da570,0x20,7);
    pcVar9 = FUN_102e382e4;
    *(code **)(puVar5 + 0x10) = FUN_102e382e4;
    *(undefined **)(puVar5 + 0x18) = puVar8;
    uStack_70 = 0x102e38314;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10174554c;
    puStack_78 = &UNK_1105da588;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c740(lVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    uVar7 = uStack_58;
    lVar3 = lStack_60;
    lVar1 = lVar4;
    if (uStack_58 >> 0x3c < 0xf) {
      func_0x000107c610f8(PTR_PTR_1126ac5b8);
      func_0x00010006c00c(lVar3,uVar7);
      lVar1 = lVar3;
      FUN_102e37698(lVar3,uVar7);
      if (unaff_x21 == 0) {
        if (lVar1 != 0) {
          lVar4 = lVar1;
          FUN_102e38a20();
          func_0x000107c61170(lVar1);
          if (lVar4 != 0) {
            lVar1 = lVar4;
            func_0x000106734b90(lVar4,0);
            func_0x000107c61180();
            func_0x000107c5c28c();
            func_0x000107c61180();
            if (param_2 == 0) {
              func_0x0001000b44c0(lVar3,uVar7);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar1);
              uStack_88 = 0;
              puStack_90 = (undefined *)0x0;
              puStack_78 = (undefined *)0x0;
              puStack_80 = (undefined *)0x0;
            }
            else {
              func_0x000107c60234(&puStack_90);
              func_0x0001000b44c0(lVar3,uVar7);
              func_0x000107c615e8(param_2);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar1);
            }
            func_0x00010006e7f4(&puStack_90);
            func_0x0001000b44c0(lStack_60,uStack_58);
            pcVar9 = FUN_102e382e4;
            goto LAB_102e37a28;
          }
        }
      }
      else {
        func_0x000107c614ac();
      }
      func_0x0001000b44c0(lVar3,uVar7);
      pcVar9 = FUN_102e382e4;
      lVar1 = lVar3;
    }
  }
  FUN_102e382a4();
  func_0x000107c613f8(&UNK_1105da6a8,lVar1,0,0);
  func_0x000107c61654();
  func_0x0001000b44c0(lStack_60,uStack_58);
LAB_102e37a28:
  func_0x00010130f8ec(pcVar9,puVar8);
  return;
}



/* Entry: 102e37b10; end: 102e38097;  */

void FUN_102e37b10(ulong param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_d0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar12 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e37bd4);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar13;
        func_0x000101298244(uVar13,param_1);
      }
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e37bd0);
        (*pcVar3)();
      }
      uVar14 = uVar13 + 1;
      FUN_102e37758();
      func_0x000107c61170(uVar4);
      if (unaff_x21 != 0) {
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar12);
  }
  if (param_2 >> 0x3e == 0) {
    uVar12 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar12 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar12 != 0) {
    uVar13 = 0;
    puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      while( true ) {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e38028);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_2 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar13;
          func_0x000102e36af0(uVar13,param_2);
        }
        uVar14 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e38024);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c4e43c();
        func_0x000107c61180();
        uVar6 = 0;
        func_0x000100c14068(0,0x112dc5d20,&PTR_PTR_1126b0440);
        uVar7 = uVar5;
        func_0x000107c5fc54(uVar5,uVar6);
        func_0x000107c61170(uVar5);
        if (uVar7 >> 0x3e != 0) break;
        if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_102e37ce8;
LAB_102e37c44:
        func_0x000107c6142c(uVar7);
        func_0x000107c61170(uVar4);
LAB_102e37c54:
        uVar13 = uVar13 + 1;
        if (uVar14 == uVar12) goto LAB_102e37ea8;
      }
      uVar5 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar5 = uVar7;
      }
      func_0x000107c60480();
      if (uVar5 == 0) goto LAB_102e37c44;
LAB_102e37ce8:
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e3802c);
          (*pcVar3)();
        }
        uVar6 = *(undefined8 *)(uVar7 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = 0;
        func_0x000102e36b04(0,uVar7);
      }
      uStack_70 = 0;
      lStack_68 = 0;
      uVar8 = uVar6;
      func_0x000107c44fdc();
      func_0x000107c61180();
      puVar11 = &UNK_1105da4d0;
      func_0x000107c613fc(&UNK_1105da4d0,0x18,7);
      *(undefined8 **)(puVar11 + 0x10) = &uStack_70;
      puVar9 = &UNK_1105da4f8;
      func_0x000107c613fc(&UNK_1105da4f8,0x20,7);
      *(code **)(puVar9 + 0x10) = FUN_102e38284;
      *(undefined **)(puVar9 + 0x18) = puVar11;
      uStack_80 = 0x102e384a4;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100de58f0;
      puStack_88 = &UNK_1105da510;
      ppuVar10 = &puStack_a0;
      puStack_78 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      func_0x000107c61574(puStack_78);
      func_0x000107c4c6ac(uVar8);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(uVar7);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(uVar8);
      lVar2 = lStack_68;
      uVar6 = uStack_70;
      func_0x000107c61574(puVar11);
      if (lVar2 == 0) goto LAB_102e37c54;
      puVar11 = puStack_d0;
      func_0x000107c61558();
      if (((ulong)puVar11 & 1) == 0) {
        plVar1 = (long *)(puStack_d0 + 0x10);
        puStack_d0 = (undefined *)0x0;
        func_0x0001000d182c(0,*plVar1 + 1,1);
      }
      uVar13 = *(ulong *)(puStack_d0 + 0x10);
      if (*(ulong *)(puStack_d0 + 0x18) >> 1 <= uVar13) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_d0 + 0x18));
        func_0x0001000d182c(puVar11,uVar13 + 1,1,puStack_d0);
        puStack_d0 = puVar11;
      }
      *(ulong *)(puStack_d0 + 0x10) = uVar13 + 1;
      *(undefined8 *)(puStack_d0 + uVar13 * 0x10 + 0x20) = uVar6;
      *(long *)(puStack_d0 + uVar13 * 0x10 + 0x28) = lVar2;
      uVar13 = uVar14;
    } while (uVar14 != uVar12);
LAB_102e37ea8:
    puVar11 = puStack_d0;
    func_0x000100403a6c(puStack_d0);
    func_0x000107c6142c(puStack_d0);
    puVar9 = puVar11;
    func_0x000107c5fe08(puVar11,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar11);
    uVar12 = param_3;
    func_0x000106731d80(param_3,puVar9);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    uVar6 = 0;
    func_0x000100c14068(0,0x112f1e798,&PTR_PTR_1126cd4a8);
    uVar13 = uVar12;
    func_0x000107c5fc54(uVar12,uVar6);
    func_0x000107c61170(uVar12);
    if (uVar13 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar13 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar13) {
        uVar12 = uVar13;
      }
      func_0x000107c60480();
    }
    if (uVar12 != 0) {
      uVar4 = 0;
      do {
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e38034);
            (*pcVar3)();
          }
          uVar14 = *(ulong *)(uVar13 + uVar4 * 8 + 0x20);
          func_0x000107c61174(uVar14);
        }
        else {
          uVar14 = uVar4;
          func_0x000102e36920(uVar4,uVar13);
        }
        uVar5 = uVar4 + 1;
        if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e38030);
          (*pcVar3)();
        }
        puVar11 = PTR_PTR_1126cd4b8;
        func_0x000107c61168(PTR_PTR_1126cd4b8);
        func_0x000106734b1c();
        func_0x000107c61180();
        uVar7 = param_3;
        func_0x000107c5c28c();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        if (uVar7 == 0) {
          func_0x000107c61170(uVar14);
          uStack_98 = 0;
          puStack_a0 = (undefined *)0x0;
          puStack_88 = (undefined *)0x0;
          puStack_90 = (undefined *)0x0;
        }
        else {
          func_0x000107c60234(&puStack_a0,uVar7);
          func_0x000107c615e8(uVar7);
          func_0x000107c61170(uVar14);
        }
        func_0x00010006e7f4(&puStack_a0);
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar12);
    }
    func_0x000107c6142c(uVar13);
  }
  return;
}



/* Entry: 102e38098; end: 102e38283;  */

/* WARNING: Removing unreachable block (ram,0x000102e3824c) */

void FUN_102e38098(ulong param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61434(param_3);
  }
  else {
    uVar8 = param_4;
    func_0x000106731c68();
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000100c14068(0,0x112f1e798,&PTR_PTR_1126cd4a8);
    uVar4 = uVar8;
    func_0x000107c5fc54(uVar8,uVar3);
    func_0x000107c61170(uVar8);
    if (uVar4 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar8 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102e38208);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
          func_0x000107c61174(uVar5);
        }
        else {
          uVar5 = uVar9;
          func_0x000102e36920(uVar9,uVar4);
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e38204);
          (*pcVar2)();
        }
        puVar6 = PTR_PTR_1126cd4b8;
        func_0x000107c61168(PTR_PTR_1126cd4b8);
        func_0x000106734b1c();
        func_0x000107c61180();
        uVar7 = param_4;
        func_0x000107c5c28c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        if (uVar7 == 0) {
          func_0x000107c61170(uVar5);
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          func_0x000107c60234(&uStack_90,uVar7);
          func_0x000107c615e8(uVar7);
          func_0x000107c61170(uVar5);
        }
        func_0x00010006e7f4(&uStack_90);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar8);
    }
    func_0x000107c6142c(uVar4);
    param_3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  FUN_102e37b10(param_2,param_3,param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 102e38284; end: 102e382a3;  */

void FUN_102e38284(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102e382a4; end: 102e382e3;  */

void FUN_102e382a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1e808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db56af8;
  func_0x000107c61520(&UNK_10db56af8,&UNK_1105da6a8);
  puRam0000000112f1e808 = puVar1;
  return;
}



/* Entry: 102e382e4; end: 102e38363;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102e382e4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  long unaff_x20;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x10);
  uVar2 = *puVar4;
  uVar1 = puVar4[1];
  *puVar4 = param_1;
  puVar4[1] = param_2;
  func_0x000100de78a0();
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102e38364; end: 102e38453;  */

uint FUN_102e38364(uint *param_1,int param_2)

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



/* Entry: 102e38454; end: 102e38493;  */

void FUN_102e38454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1e810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db56ad0;
  func_0x000107c61520(&UNK_10db56ad0,&UNK_1105da6a8);
  puRam0000000112f1e810 = puVar1;
  return;
}



/* Entry: 102e38494; end: 102e384bf;  */

void FUN_102e38494(long param_1,long param_2)

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



/* Entry: 102e384c0; end: 102e3855f;  */

void FUN_102e384c0(int param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = 0;
  FUN_102e38f7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar3 = (long)param_1;
  func_0x000107c60110(lVar3,uVar2);
  func_0x000102e36b18();
  uVar4 = *param_4 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    func_0x000101d1802c(uVar4,uVar1 + 1,1);
    *param_4 = uVar4;
    uVar4 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(long *)(uVar4 + uVar1 * 8 + 0x20) = lVar3;
  return;
}



/* Entry: 102e38560; end: 102e38817;  */

undefined * FUN_102e38560(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  func_0x000107c4e080();
  func_0x000107c3db0c();
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar2 = param_2;
  func_0x000107c4abe4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    pcVar1 = (code *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &UNK_1105da738;
    func_0x000107c613fc(&UNK_1105da738,0x18,7);
    *(undefined ***)(puVar7 + 0x10) = &puStack_88;
    puVar8 = &UNK_1105da760;
    func_0x000107c613fc(&UNK_1105da760,0x20,7);
    pcVar1 = FUN_102e38f38;
    *(code **)(puVar8 + 0x10) = FUN_102e38f38;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    pcStack_98 = FUN_102e38f40;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 0x42000000;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10104fffc;
    puStack_a0 = &UNK_1105da778;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar8;
    func_0x000107c60bc4(ppuVar3);
    puVar4 = puStack_90;
    func_0x000107c6157c(puVar8);
    func_0x000107c61574(puVar4);
    func_0x000107c429d8(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar2);
    puVar4 = puVar8;
    func_0x000107c61544(puVar8,"",0x8e,0x34,0x42,1);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e386b0);
      (*pcVar1)();
    }
  }
  lVar2 = param_2;
  func_0x000107c4e22c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5ba38();
    uVar9 = param_1;
    func_0x000107c427dc(lVar2);
    uVar10 = uVar9;
    func_0x000107c5cbd8(lVar2);
    uVar11 = uVar10;
    func_0x000107c3ec10(lVar2);
    puVar8 = PTR_PTR_1126cd4c8;
    func_0x000107c610f8(PTR_PTR_1126cd4c8);
    func_0x000107c48974(param_1,uVar9,uVar10,uVar11);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c5b6a8(param_2);
  puVar4 = puStack_88;
  puVar5 = PTR_PTR_1126cd4c0;
  func_0x000107c610f8(PTR_PTR_1126cd4c0);
  FUN_102e38f7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar6 = puVar4;
  func_0x000107c61434(puVar4);
  func_0x000107c5fc48();
  func_0x000107c6142c(puVar4);
  func_0x000107c47cb4(param_1,puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c6142c(puStack_88);
  FUN_102e38fbc(pcVar1,puVar7);
  return puVar5;
}



/* Entry: 102e38818; end: 102e389a3;  */

undefined * FUN_102e38818(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c5b08c();
  lVar1 = param_2;
  uVar5 = param_1;
  func_0x000107c4e22c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5ba38();
    uVar6 = uVar5;
    func_0x000107c427dc(lVar1);
    uVar7 = uVar6;
    func_0x000107c5cbd8(lVar1);
    uVar8 = uVar7;
    func_0x000107c3ec10(lVar1);
    puVar3 = PTR_PTR_1126cd4c8;
    func_0x000107c610f8(PTR_PTR_1126cd4c8);
    func_0x000107c48974(uVar5,uVar6,uVar7,uVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c5a930();
  func_0x000107c61180();
  if (param_2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5a928();
    func_0x000107c3fdb8();
    puVar4 = PTR_PTR_1126cd4e0;
    func_0x000107c610f8(PTR_PTR_1126cd4e0);
    func_0x000107c4865c();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_2);
  }
  func_0x000107c5caa4();
  puVar2 = PTR_PTR_1126cd4d8;
  func_0x000107c610f8(PTR_PTR_1126cd4d8);
  func_0x000107c48704(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 102e389a4; end: 102e38a1f;  */

void FUN_102e389a4(undefined8 param_1)

{
  func_0x000107c5c8a4();
  func_0x000107c5c834(param_1);
  func_0x000107c5c838(param_1);
  func_0x000107c5c874(param_1);
  func_0x000107c610f8(PTR_PTR_1126cd4e8);
                    /* WARNING: Could not recover jumptable at 0x00010c04eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102e38a20; end: 102e38f37;  */

void FUN_102e38a20(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  long lStack_80;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar4 = param_2;
  func_0x000107c4abf8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = param_2;
    func_0x000107c508cc();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c61174();
      lVar6 = lVar5;
      FUN_102e38560();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar5);
      lVar5 = param_2;
      func_0x000107c4ac2c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar6);
      }
      else {
        lStack_108 = param_2;
        lStack_100 = lVar5;
        lStack_f8 = lVar15;
        lStack_f0 = lVar6;
        lStack_e8 = lVar4;
        func_0x000107c600f4(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000100e15a08();
        func_0x000107c601c0(auStack_98,lVar3,lVar5);
        puVar14 = PTR___sypN_11034f1a8;
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lStack_80 != 0) {
          func_0x000100102924(auStack_98,auStack_b8);
          func_0x0001000bb420(auStack_b8,auStack_d8);
          uVar7 = 0;
          FUN_102e38f7c(0,0x112f1e8b0,&PTR_PTR_1126cd4f0);
          plVar8 = &lStack_e0;
          func_0x000107c6147c(plVar8,auStack_d8,puVar14 + 8,uVar7,6);
          lVar4 = lStack_e0;
          if ((int)plVar8 == 0) {
LAB_102e38b48:
            func_0x000100183ab8(auStack_b8);
          }
          else {
            lVar15 = lStack_e0;
            func_0x000107c4ac0c();
            iVar2 = (int)lVar15;
            lVar15 = lVar4;
            if (iVar2 != 6) {
              if (iVar2 == 5) {
                func_0x000107c450c0();
                func_0x000107c61180();
                if (lVar15 != 0) {
                  puVar14 = PTR_PTR_1126cd4b0;
                  func_0x000107c61168(PTR_PTR_1126cd4b0);
                  func_0x000107c61174(lVar15);
                  lVar6 = lVar15;
                  FUN_102e38818();
                  func_0x000107c450c4(puVar14);
                  goto LAB_102e38cb4;
                }
              }
              else if (iVar2 == 4) {
                func_0x000107c4450c();
                func_0x000107c61180();
                if (lVar15 != 0) {
                  puVar14 = PTR_PTR_1126cd4b0;
                  func_0x000107c61168(PTR_PTR_1126cd4b0);
                  func_0x000107c61174(lVar15);
                  lVar6 = lVar15;
                  FUN_102e38560();
                  func_0x000107c44510(puVar14);
                  goto LAB_102e38cb4;
                }
              }
LAB_102e38b40:
              func_0x000107c61170(lVar4);
              goto LAB_102e38b48;
            }
            func_0x000107c5c86c();
            func_0x000107c61180();
            if (lVar15 == 0) goto LAB_102e38b40;
            puVar14 = PTR_PTR_1126cd4b0;
            func_0x000107c61168(PTR_PTR_1126cd4b0);
            func_0x000107c61174(lVar15);
            lVar6 = lVar15;
            FUN_102e389a4();
            func_0x000107c5c870(puVar14);
LAB_102e38cb4:
            func_0x000107c61180();
            func_0x000107c61170(lVar15);
            func_0x000107c61170(lVar15);
            func_0x000107c61170(lVar6);
            func_0x000107c42468(lVar4);
            func_0x000107c5e29c(lVar4);
            func_0x000107c3e1f4(lVar4);
            puVar9 = PTR_PTR_1126cd4d0;
            func_0x000107c610f8();
            func_0x000107c46748(param_1);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(puVar14);
            func_0x000100183ab8(auStack_b8);
            puVar14 = PTR___sypN_11034f1a8;
            if (puVar9 != (undefined *)0x0) {
              puVar11 = puVar12;
              func_0x000107c61550();
              puVar14 = PTR___sypN_11034f1a8;
              if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
                 (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar12 >> 0x3e == 0) {
                  puVar10 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar10 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar12) {
                    puVar10 = puVar12;
                  }
                  func_0x000107c60480(puVar10);
                }
                puVar11 = (undefined *)0x0;
                FUN_102e36d3c(0,puVar10 + 1,1,puVar12);
              }
              uVar13 = (ulong)puVar11 & 0xffffffffffffff8;
              uVar1 = *(ulong *)(uVar13 + 0x10);
              puVar12 = puVar11;
              if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
                puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
                FUN_102e36d3c(puVar12,uVar1 + 1,1,puVar11);
                uVar13 = (ulong)puVar12 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
              *(undefined **)(uVar13 + uVar1 * 8 + 0x20) = puVar9;
            }
          }
          func_0x000107c601c0(auStack_98,lVar3,lVar5);
        }
        func_0x000107c61170(lStack_100);
        (**(code **)(lStack_f8 + 8))(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3)
        ;
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar14 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          lVar4 = lStack_108;
        }
        else {
          puVar14 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar12) {
            puVar14 = puVar12;
          }
          func_0x000107c60480();
          lVar4 = lStack_108;
        }
        lStack_108 = lVar4;
        if (puVar14 != (undefined *)0x0) {
          func_0x000107c5d82c(lVar4);
          func_0x000107c43bc8(lVar4);
          puVar14 = PTR_PTR_1126cd4a8;
          func_0x000107c610f8(PTR_PTR_1126cd4a8);
          uVar7 = 0;
          FUN_102e38f7c(0,0x112f1e7a0,&PTR_PTR_1126cd4d0);
          lVar3 = lStack_f0;
          func_0x000107c61174(lStack_f0);
          puVar9 = puVar12;
          func_0x000107c5fc48(puVar12,uVar7);
          func_0x000107c6142c(puVar12);
          lVar4 = lStack_e8;
          func_0x000107c47114(puVar14);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(puVar9);
          return;
        }
        func_0x000107c61170(lStack_f0);
        func_0x000107c6142c(puVar12);
        lVar4 = lStack_e8;
      }
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102e38f38; end: 102e38f3f;  */

void FUN_102e38f38(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long unaff_x20;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x10);
  uVar2 = 0;
  FUN_102e38f7c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar3 = (long)param_1;
  func_0x000107c60110(lVar3,uVar2);
  func_0x000102e36b18();
  uVar5 = *puVar4 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar5 + 0x10);
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x000101d1802c(uVar5,uVar1 + 1,1);
    *puVar4 = uVar5;
    uVar5 = uVar5 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  *(long *)(uVar5 + uVar1 * 8 + 0x20) = lVar3;
  return;
}



/* Entry: 102e38f40; end: 102e38f5f;  */

void FUN_102e38f40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e38f60; end: 102e38f7b;  */

void FUN_102e38f60(long param_1,long param_2)

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



/* Entry: 102e38f7c; end: 102e38fbb;  */

void FUN_102e38f7c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e38fbc; end: 102e38fcb;  */

void FUN_102e38fbc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102e38fcc; end: 102e39067;  */

void FUN_102e38fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 102e39068; end: 102e39187;  */

undefined * FUN_102e39068(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar6 = &UNK_1105da890;
  func_0x000107c613fc(&UNK_1105da890,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  pcStack_60 = FUN_102e39260;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_102e3926c;
  puStack_68 = &UNK_1105da8a8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = PTR_PTR_1126ac5c0;
  func_0x000107c610f8(PTR_PTR_1126ac5c0);
  func_0x000107c473e0();
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 102e39188; end: 102e3925f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e39188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = 0;
  FUN_102e3a938();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f1e9c8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f1e9a0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(lVar4 + _DAT_112f1e9a8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f1e9b0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112f1e9b8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112f1e9c0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 102e39260; end: 102e3926b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e39260(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = 0;
  FUN_102e3a938();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112f1e9c8) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f1e9a0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(lVar8 + _DAT_112f1e9a8) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112f1e9b0) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112f1e9b8) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112f1e9c0) = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_50 = lVar8;
  lStack_48 = lVar7;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_50,puVar6);
  return;
}



/* Entry: 102e3926c; end: 102e392a3;  */

void FUN_102e3926c(long param_1)

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



/* Entry: 102e392a4; end: 102e392bf;  */

void FUN_102e392a4(long param_1,long param_2)

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



/* Entry: 102e392c0; end: 102e392eb;  */

/* WARNING: Possible PIC construction at 0x000102e392cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e392dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e392d0) */
/* WARNING: Removing unreachable block (ram,0x000102e392e0) */

void FUN_102e392c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e392ec; end: 102e3936b;  */

void FUN_102e392ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e3936c; end: 102e393eb;  */

void FUN_102e3936c(undefined8 param_1)

{
  if (lRam0000000112f1e8e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e733eac);
  return;
}



/* Entry: 102e393ec; end: 102e39477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e393ec(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1e9c8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f1e9c8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ac5c8;
    func_0x000107c610f8();
    func_0x000107c47394();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102e39478; end: 102e397cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e39478(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1e9a0);
  if (puVar1[1] == 0) {
    *puVar1 = 0;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    func_0x000107c6157c(param_5);
    uVar2 = param_2;
    FUN_102e3a554();
    if ((uVar2 & 1) == 0) {
      func_0x000102e3a6a0(param_2,0);
      if (param_2 == 0) {
        return;
      }
      uVar2 = param_2;
      FUN_102e393ec();
      lVar5 = param_3;
      func_0x000107c4b56c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000100c70ba8();
        lVar3 = 0;
        func_0x000107c5fc54(0,lVar5);
        lVar5 = lVar3;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar3);
      }
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      func_0x000107c4ee68(param_3);
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126ae6b0;
      func_0x000107c610f8(PTR_PTR_1126ae6b0);
      func_0x000107c47440();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar5);
      func_0x000107c4a8a4(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = &UNK_1105da8f8;
      func_0x000107c613fc(&UNK_1105da8f8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      pcStack_60 = FUN_102e3a7f8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100288f10;
      puStack_68 = &UNK_1105da910;
      ppuVar8 = &puStack_80;
      puStack_58 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_58);
      func_0x000107c4eec4(uVar2);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar2);
    }
    else {
      lVar5 = param_3;
      func_0x000107c4b56c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000100c70ba8();
        lVar3 = 0;
        func_0x000107c5fc54(0,lVar5);
        lVar5 = lVar3;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c4ee68(param_3);
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126b5b58;
      func_0x000107c610f8();
      func_0x000107c4743c();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar5);
      puVar7 = &UNK_1105da8f8;
      func_0x000107c613fc(&UNK_1105da8f8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar4 = &UNK_1105da948;
      func_0x000107c613fc(&UNK_1105da948,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar7;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(ulong *)(puVar4 + 0x20) = param_2;
      *(undefined **)(puVar4 + 0x28) = puVar6;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      pcStack_60 = (code *)0x102e3a81c;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105da960;
      ppuVar8 = &puStack_80;
      puStack_58 = puVar4;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_58;
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c61174(puVar6);
      func_0x000107c61574(puVar7);
      func_0x0001000d76cc(&UNK_10db56c30,ppuVar8);
      func_0x000107c60bd0(ppuVar8);
    }
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102e397cc; end: 102e39b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e397cc(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1e9a0);
  if (puVar1[1] == 0) {
    *puVar1 = 0;
    puVar1[1] = param_5;
    puVar1[2] = param_6;
    func_0x000107c6157c(param_6);
    uVar2 = param_2;
    FUN_102e3a554();
    if ((uVar2 & 1) == 0) {
      func_0x000102e3a6a0(param_2,0);
      if (param_2 == 0) {
        return;
      }
      uVar2 = param_2;
      FUN_102e393ec();
      lVar5 = param_3;
      func_0x000107c4b56c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000100c70ba8();
        lVar3 = 0;
        func_0x000107c5fc54(0,lVar5);
        lVar5 = lVar3;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar3);
      }
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      func_0x000107c4ee68(param_3);
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126ae6b0;
      func_0x000107c610f8(PTR_PTR_1126ae6b0);
      func_0x000107c47440();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar5);
      func_0x000107c4a8a4(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = &UNK_1105da8f8;
      func_0x000107c613fc(&UNK_1105da8f8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      uStack_70 = 0x102e3abdc;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100288f10;
      puStack_78 = &UNK_1105da988;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_68);
      func_0x000107c4eec4(uVar2);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar2);
    }
    else {
      lVar5 = param_3;
      func_0x000107c4b56c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000100c70ba8();
        lVar3 = 0;
        func_0x000107c5fc54(0,lVar5);
        lVar5 = lVar3;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c4ee68(param_3);
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126b5b58;
      func_0x000107c610f8();
      func_0x000107c4743c();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar5);
      puVar7 = &UNK_1105da8f8;
      func_0x000107c613fc(&UNK_1105da8f8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar4 = &UNK_1105da9c0;
      func_0x000107c613fc(&UNK_1105da9c0,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar7;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(ulong *)(puVar4 + 0x20) = param_2;
      *(undefined **)(puVar4 + 0x28) = puVar6;
      *(undefined8 *)(puVar4 + 0x30) = 0;
      uStack_70 = 0x102e3abf0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105da9d8;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_68;
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c61174(puVar6);
      func_0x000107c61574(puVar7);
      func_0x0001000d76cc(&UNK_10db56c30,ppuVar8);
      func_0x000107c60bd0(ppuVar8);
    }
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102e39b34; end: 102e39c03; -[_TtC33SCLensReplyCameraPresentationImpl24LensReplyCameraPresenter presentCameraWithPresentingViewController:replyConfiguration:lensData:dismissBlock:] */

void FUN_102e39b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105dab58;
  func_0x000107c613fc(&UNK_1105dab58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102e39478(param_3,param_4,param_5,0x102e3abd8,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102e39c04; end: 102e39f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e39c04(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1e9a0);
  if (puVar1[1] == 0) {
    *puVar1 = 0;
    puVar1[1] = param_6;
    puVar1[2] = param_7;
    func_0x000107c6157c(param_7);
    uVar2 = param_2;
    FUN_102e3a554();
    if ((uVar2 & 1) == 0) {
      func_0x000102e3a6a0(param_2,param_5);
      if (param_2 == 0) {
        return;
      }
      uVar2 = param_2;
      FUN_102e393ec();
      lVar5 = param_3;
      func_0x000107c4b56c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000100c70ba8();
        lVar3 = 0;
        func_0x000107c5fc54(0,lVar5);
        lVar5 = lVar3;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar3);
      }
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      func_0x000107c4ee68(param_3);
      func_0x000107c61180();
      puVar7 = PTR_PTR_1126ae6b0;
      func_0x000107c610f8(PTR_PTR_1126ae6b0);
      func_0x000107c47440();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar5);
      func_0x000107c4a8a4(puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = &UNK_1105da8f8;
      func_0x000107c613fc(&UNK_1105da8f8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      uStack_70 = 0x102e3abe0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100288f10;
      puStack_78 = &UNK_1105daa00;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_68);
      func_0x000107c4eec4(uVar2);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar2);
    }
    else {
      lVar5 = param_3;
      func_0x000107c4b56c();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000100c70ba8();
        lVar3 = 0;
        func_0x000107c5fc54(0,lVar5);
        lVar5 = lVar3;
        func_0x000107c5fc48();
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c4ee68(param_3);
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126b5b58;
      func_0x000107c610f8();
      func_0x000107c4743c();
      func_0x000107c61170(param_3);
      func_0x000107c61170(lVar5);
      puVar7 = &UNK_1105da8f8;
      func_0x000107c613fc(&UNK_1105da8f8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar4 = &UNK_1105daa38;
      func_0x000107c613fc(&UNK_1105daa38,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar7;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(ulong *)(puVar4 + 0x20) = param_2;
      *(undefined **)(puVar4 + 0x28) = puVar6;
      *(undefined8 *)(puVar4 + 0x30) = param_5;
      uStack_70 = 0x102e3abf4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105daa50;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_68;
      func_0x000107c61174(param_5);
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c61174(puVar6);
      func_0x000107c61574(puVar7);
      func_0x0001000d76cc(&UNK_10db56c30,ppuVar8);
      func_0x000107c60bd0(ppuVar8);
    }
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102e39f78; end: 102e3a057; -[_TtC33SCLensReplyCameraPresentationImpl24LensReplyCameraPresenter presentCameraWithPresentingViewController:replyConfiguration:lensData:activationSource:dismissBlock:] */

void FUN_102e39f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105dab30;
  func_0x000107c613fc(&UNK_1105dab30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_102e397cc(param_3,param_4,param_5,param_6,0x102e3abd4,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102e3a058; end: 102e3a157; -[_TtC33SCLensReplyCameraPresentationImpl24LensReplyCameraPresenter presentCameraWithPresentingViewController:replyConfiguration:lensData:activationSource:musicApplicationData:dismissBlock:] */

void FUN_102e3a058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105dab08;
  func_0x000107c613fc(&UNK_1105dab08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar2 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  FUN_102e39c04(param_3,param_4,param_5,param_6,param_7,0x102e3aa74,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102e3a158; end: 102e3a237;  */

/* WARNING: Possible PIC construction at 0x000102e3a200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e3a204) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e3a158(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f1e9a0);
  pcVar4 = (code *)puVar1[1];
  if (pcVar4 == (code *)0x0) {
    return param_1;
  }
  uVar5 = *puVar1;
  uVar6 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112f1e9a8);
  lVar2 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  lVar3 = 0;
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar3 = lVar7;
  }
  FUN_102e393ec();
  func_0x000107c4202c();
  func_0x000107c61170(lVar3);
  func_0x000107c6157c(uVar6);
  (*pcVar4)(0);
  if (pcVar4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar6);
    return uVar6;
  }
  return uVar5;
}



/* Entry: 102e3a238; end: 102e3a25f; -[_TtC33SCLensReplyCameraPresentationImpl24LensReplyCameraPresenter dismissCamera] */

void FUN_102e3a238(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e3a158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e3a260; end: 102e3a2bf; -[_TtC33SCLensReplyCameraPresentationImpl24LensReplyCameraPresenter init] */

void FUN_102e3a260(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensReplyCameraPresentationImpl.LensReplyCameraPresenter",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e3a28c);
  (*pcVar1)();
}


