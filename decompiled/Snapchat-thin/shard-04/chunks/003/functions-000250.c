/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033ca69c; end: 1033ca6cf;  */

void FUN_1033ca69c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033ca6d0; end: 1033ca6df; -[_TtC13GamesExplorer35GamesExplorerStaticPreviewDataStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ca6d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f629c0));
  return;
}



/* Entry: 1033ca6e0; end: 1033ca6ff;  */

void FUN_1033ca6e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6ac0);
  return;
}



/* Entry: 1033ca700; end: 1033ca723;  */

void FUN_1033ca700(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_48;
  
  lStack_48 = 0;
  uVar1 = 0;
  func_0x0001033caf90(0,0x112e56278,&PTR_PTR_1126ccc20);
  func_0x000107c5fc50(param_2,&lStack_48,uVar1);
  lVar3 = lStack_48;
  if (lStack_48 == 0) {
    lVar3 = 0;
    func_0x0001033caf90(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174();
  }
  else {
    lVar2 = lStack_48;
    FUN_1033ca194();
    func_0x000107c6142c(lVar3);
    param_2 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
    lVar3 = 0;
    func_0x0001033caf90(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  param_1[3] = lVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 1033ca724; end: 1033ca8df;  */

ulong FUN_1033ca724(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ca808);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ca80c);
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
  func_0x0001033caf90(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ca8e0);
  (*pcVar2)();
}



/* Entry: 1033ca8e0; end: 1033ca8f3;  */

ulong FUN_1033ca8e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ca808);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ca80c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ccc58;
    func_0x000107c61168(PTR_PTR_1126ccc58);
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
    puVar4 = PTR_PTR_1126ccc58;
    func_0x000107c61168(PTR_PTR_1126ccc58);
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
  func_0x0001033caf90(0,0x112f626c0,&PTR_PTR_1126ccc58);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033ca8e0);
  (*pcVar2)();
}



/* Entry: 1033ca8f4; end: 1033ca927;  */

void FUN_1033ca8f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1033ca928();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1033ca928; end: 1033caa63;  */

undefined *
FUN_1033ca928(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033caa64);
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
    (*param_5)();
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
    func_0x0001033caf90(0,param_6,param_7);
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



/* Entry: 1033caa64; end: 1033caa6f;  */

undefined * FUN_1033caa64(undefined *param_1,undefined *param_2)

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
    (*(code *)0x1033c25fc)();
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



/* Entry: 1033caa70; end: 1033caa8f;  */

void FUN_1033caa70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033caa90; end: 1033caa9b;  */

undefined * FUN_1033caa90(undefined *param_1,undefined *param_2)

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
    (*(code *)0x1033c27a4)();
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



/* Entry: 1033caa9c; end: 1033cab1b;  */

undefined * FUN_1033caa9c(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 1033cab1c; end: 1033caf63;  */

undefined * FUN_1033cab1c(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  func_0x000107c4a7d4();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x0001033caf90(0,0x112ea2a98,&PTR_PTR_1126ccd78);
  puVar4 = param_1;
  func_0x000107c5fc54(param_1,uVar3);
  func_0x000107c61170(param_1);
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar14 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c6142c(puVar4);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_103346338(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033caf58);
      (*pcVar2)();
    }
    puVar15 = (undefined *)0x0;
    do {
      puVar13 = puStack_78;
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= (long)puVar15) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033cae84);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar4 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar15;
        FUN_1033ca724(puVar15,puVar4,&PTR_PTR_1126ccd78,0x112ea2a98);
      }
      lStack_80 = 0;
      puVar6 = &UNK_11064d730;
      func_0x000107c613fc(&UNK_11064d730,0x18,7);
      *(long **)(puVar6 + 0x10) = &lStack_80;
      puVar7 = &UNK_11064d758;
      func_0x000107c613fc(&UNK_11064d758,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x1033caf64;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      uStack_90 = 0x1033cafec;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1020995dc;
      puStack_98 = &UNK_11064d770;
      ppuVar8 = &puStack_b0;
      puStack_88 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar9 = puStack_88;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c4c688(puVar5);
      func_0x000107c60bd0(ppuVar8);
      lVar10 = lStack_80;
      if (lStack_80 == 0) {
        func_0x000107c61574(puVar6);
        puVar6 = puVar7;
        func_0x000107c61544(puVar7,"",0x7d,0x4c,0x11,1);
        func_0x000107c61574(puVar7);
        puVar9 = puVar5;
        if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033cae88);
          (*pcVar2)();
        }
      }
      else {
        puVar9 = PTR_PTR_1126cce98;
        func_0x000107c61168();
        func_0x000107c61174(lVar10);
        func_0x000107c4b0d0();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033caf5c);
          (*pcVar2)();
        }
        puVar11 = puVar9;
        func_0x000107c5e434();
        func_0x000107c61180();
        func_0x000107c61170(puVar9);
        if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033caf60);
          (*pcVar2)();
        }
        puVar12 = puVar11;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033caf64);
          (*pcVar2)();
        }
        puVar9 = PTR_PTR_1126ccd78;
        func_0x000107c61168();
        func_0x000107c4b244();
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(puVar5);
        lVar10 = lStack_80;
        func_0x000107c61574(puVar6);
        func_0x000107c61170(lVar10);
        puVar5 = puVar7;
        func_0x000107c61544(puVar7,"",0x7d,0x4c,0x11,1);
        func_0x000107c61574(puVar7);
        if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033cae80);
          (*pcVar2)();
        }
      }
      uVar1 = *(ulong *)(puVar13 + 0x10);
      puStack_78 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
        FUN_103346338(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
      }
      puVar13 = puStack_78;
      puVar15 = puVar15 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_78 + uVar1 * 8 + 0x20) = puVar9;
    } while (puVar14 != puVar15);
    func_0x000107c6142c(puVar4);
  }
  puVar4 = PTR_PTR_1126cd128;
  func_0x000107c61168(PTR_PTR_1126cd128);
  func_0x000107c4b0b8();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c5fc48(puVar13,uVar3);
  func_0x000107c6142c(puVar13);
  puVar13 = puVar4;
  func_0x000107c5e614(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar14);
  puVar4 = puVar13;
  func_0x000107c3ecc8(puVar13);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  return puVar4;
}



/* Entry: 1033caf64; end: 1033cafcf;  */

void FUN_1033caf64(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033cafd0; end: 1033caffb;  */

void FUN_1033cafd0(long param_1,long param_2)

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



/* Entry: 1033caffc; end: 1033cb4d7;  */

undefined1  [16] FUN_1033caffc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe4;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f148a20);
  uVar3 = 0x70784573656d6147;
  func_0x000107c5fadc(0x70784573656d6147,0xed00007265726f6c);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033cb0cc);
  (*pcVar1)();
}



/* Entry: 1033cb4d8; end: 1033cb54f;  */

void FUN_1033cb4d8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1033cb550; end: 1033cb58b;  */

void FUN_1033cb550(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033cb58c; end: 1033cb5cf;  */

void FUN_1033cb58c(void)

{
  func_0x0001033cb334();
  return;
}



/* Entry: 1033cb5d0; end: 1033cb65b;  */

long FUN_1033cb5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 auStack_58 [3];
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  puStack_40 = &UNK_11064d8a0;
  ppuStack_38 = &PTR_DAT_11064d8b8;
  uVar2 = 0;
  auStack_58[0] = param_1;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + 0x48) = uVar2;
  *(undefined8 *)(param_4 + 0x50) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + 0x58) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + 0x60) = puVar1;
  FUN_1033cb67c(auStack_58,param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x38) = param_2;
  *(undefined8 *)(param_4 + 0x40) = param_3;
  return param_4;
}



/* Entry: 1033cb65c; end: 1033cb67b;  */

void FUN_1033cb65c(void)

{
  func_0x000107c61168(&PTR_PTR_112f62a30);
  return;
}



/* Entry: 1033cb67c; end: 1033cb6a3;  */

undefined8 * FUN_1033cb67c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1033cb6a4; end: 1033cb7cb;  */

long FUN_1033cb6a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c3f574();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar2 = param_1;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar3 = param_2;
  func_0x000107c3f75c(param_2);
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar3 = param_2;
  func_0x000107c5cbe4(param_2);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c40284(0x4000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_2);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return lVar1;
}



/* Entry: 1033cb7cc; end: 1033cb7e7;  */

void FUN_1033cb7cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c066fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*unaff_x20,PTR_s_insertSubview_atIndexInFrontOfLi_1125f7600,param_1,0);
  return;
}



/* Entry: 1033cb7e8; end: 1033cbac7;  */

void FUN_1033cb7e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 5;
    *(undefined8 *)(lVar2 + 0x10) = 2;
    lVar3 = param_1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar4 = lVar1;
    func_0x000107c3f75c(lVar1);
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    *(long *)(lVar2 + 0x20) = lVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c515ac(lVar1);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c40284(0xc020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
    *(long *)(lVar2 + 0x28) = lVar3;
  }
  return;
}



/* Entry: 1033cbac8; end: 1033cbb9b;  */

/* WARNING: Possible PIC construction at 0x0001033cbb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cbb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cbb68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033cbb4c) */
/* WARNING: Removing unreachable block (ram,0x0001033cbb54) */
/* WARNING: Removing unreachable block (ram,0x0001033cbb08) */
/* WARNING: Removing unreachable block (ram,0x0001033cbb84) */
/* WARNING: Removing unreachable block (ram,0x0001033cbb30) */
/* WARNING: Removing unreachable block (ram,0x0001033cbb6c) */
/* WARNING: Removing unreachable block (ram,0x0001033cbb88) */

void FUN_1033cbac8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1033cbb9c; end: 1033cbc53;  */

undefined1 * FUN_1033cbb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x0001000c6518(param_1,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(puVar2);
  FUN_1033cc188(puVar2,param_2,param_3);
  func_0x0001000834e4(param_1);
  return puVar2;
}



/* Entry: 1033cbc54; end: 1033cbcf3;  */

void FUN_1033cbc54(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = uVar1;
    func_0x000104366314(uVar1,uVar2,0,1);
    if ((uVar3 & 1) == 0) {
      FUN_1033cbcf4();
    }
    lVar4 = *(long *)(param_2 + 0x50);
    if (lVar4 != 0) {
      func_0x000107c6157c(lVar4);
      FUN_1033cc354(uVar1,uVar2);
      func_0x000107c61574(lVar4);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1033cbcf4; end: 1033cbe3f;  */

void FUN_1033cbcf4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    return;
  }
  puVar2 = (undefined *)0x0;
  FUN_1033ccc00();
  func_0x000107c613fc();
  FUN_1033cc954();
  puVar3 = puVar2;
  FUN_1033cc77c();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
  (**(code **)(lVar1 + 8))(puVar3,uVar6,lVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
  puVar4 = puVar3;
  (**(code **)(lVar1 + 0x10))(puVar3,uVar6,lVar1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined **)(unaff_x20 + 0x58) = puVar4;
  func_0x000107c6142c(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar6);
  puVar5 = puVar3;
  (**(code **)(lVar1 + 0x18))(puVar3,uVar6,lVar1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined **)(unaff_x20 + 0x60) = puVar4;
  func_0x000107c6142c(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined **)(unaff_x20 + 0x50) = puVar2;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(uVar6);
  FUN_1033cbe84(0);
  func_0x0001033cbfb0();
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1033cbe40; end: 1033cbe83;  */

void FUN_1033cbe40(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x50);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_1033cc354(0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1033cbe84; end: 1033cc0d7;  */

/* WARNING: Possible PIC construction at 0x0001033cbf14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033cbf18) */

void FUN_1033cbe84(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x60);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  }
  PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50 = puVar3;
  if (uVar6 == 0) {
    func_0x000107c61168(puVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
    func_0x000100847984(0);
    uVar4 = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar2);
    func_0x000107c3d048(puVar3);
  }
  else {
    lVar1 = 0x58;
    if ((param_1 & 1) == 0) {
      lVar1 = 0x60;
    }
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61434(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar2 = 0;
    func_0x000100847984(0);
    uVar4 = uVar7;
    func_0x000107c5fc48(uVar7,uVar2);
    func_0x000107c6142c(uVar7);
    func_0x000107c413a0(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1033cc0d8; end: 1033cc133;  */

void FUN_1033cc0d8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1033cbe84(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1033cc134; end: 1033cc187;  */

void FUN_1033cc134(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033cc188; end: 1033cc22b;  */

long FUN_1033cc188(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = param_5;
  uStack_48 = param_6;
  func_0x0001000c5db4(auStack_68);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))();
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + 0x48) = uVar2;
  *(undefined8 *)(param_4 + 0x50) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + 0x58) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_4 + 0x60) = puVar1;
  FUN_1033cb67c(auStack_68,param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x38) = param_2;
  *(undefined8 *)(param_4 + 0x40) = param_3;
  return param_4;
}



/* Entry: 1033cc22c; end: 1033cc2e3;  */

void FUN_1033cc22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c613fc(param_4,0x68,7);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_5);
  FUN_1033cc188(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1033cc2e4; end: 1033cc323;  */

void FUN_1033cc2e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f62aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcef320;
  func_0x000107c61520(&UNK_10dcef320,&UNK_11075eee0);
  puRam0000000112f62aa8 = puVar1;
  return;
}



/* Entry: 1033cc324; end: 1033cc32b;  */

void FUN_1033cc324(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar4 = uVar1;
    func_0x000104366314(uVar1,uVar2,0,1);
    if ((uVar4 & 1) == 0) {
      FUN_1033cbcf4();
    }
    lVar5 = *(long *)(lVar3 + 0x50);
    if (lVar5 != 0) {
      func_0x000107c6157c(lVar5);
      FUN_1033cc354(uVar1,uVar2);
      func_0x000107c61574(lVar5);
    }
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1033cc32c; end: 1033cc34b;  */

void FUN_1033cc32c(void)

{
  func_0x000107c61168(&PTR_PTR_112f62af0);
  return;
}



/* Entry: 1033cc34c; end: 1033cc353;  */

void FUN_1033cc34c(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_1033cbe84(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1033cc354; end: 1033cc637;  */

/* WARNING: Possible PIC construction at 0x0001033cc3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cc400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cc5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cc524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033cc600) */
/* WARNING: Removing unreachable block (ram,0x0001033cc404) */
/* WARNING: Removing unreachable block (ram,0x0001033cc3e0) */
/* WARNING: Removing unreachable block (ram,0x0001033cc528) */

void FUN_1033cc354(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (param_2 != 1) {
    if (param_2 == 2) {
      FUN_1033ccc20();
      uVar2 = param_1;
      FUN_1033cc66c();
      uVar1 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c59c6c(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      FUN_1033cc77c();
      func_0x000107c5fadc(param_1,param_2);
    }
    else {
      FUN_1033cc66c();
      uVar1 = param_1;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c4fe68(uVar1);
      func_0x000107c61170(uVar1);
      param_1 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c526c0(0x3ff0000000000000,param_1);
      func_0x0001033cccec();
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c61174(uVar2);
      uVar1 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c59c6c(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      FUN_1033cc77c();
      func_0x000107c5fadc(param_1,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setAccessibilityLabel__112635e28,param_1);
    return;
  }
  FUN_1033cc66c();
  uVar1 = param_1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c4fe68(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1033cc77c();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1033cc638; end: 1033cc66b;  */

undefined8 FUN_1033cc638(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1033cc954();
  return unaff_x20;
}



/* Entry: 1033cc66c; end: 1033cc6c3;  */

long FUN_1033cc66c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_1033cc6c4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1033cc6c4; end: 1033cc77b;  */

undefined * FUN_1033cc6c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0x55);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1,param_2,1);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c52518(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  func_0x000107c5a050(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 1033cc77c; end: 1033cc953;  */

long FUN_1033cc77c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001033cc7d4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x18) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1033cc954; end: 1033ccb83;  */

void FUN_1033cc954(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  FUN_1033cc77c();
  uVar5 = param_1;
  FUN_1033cc66c();
  func_0x000107c3d89c(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 9;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4acb0(uVar4);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5ce8c(uVar4);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5cbe4(uVar4);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c3ec1c(uVar4);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c40284(0xc020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(puVar2 + 0x38) = uVar5;
  uVar5 = 0;
  func_0x000100847984(0);
  puVar6 = puVar2;
  func_0x000107c5fc48(puVar2,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1033ccb84; end: 1033ccbaf;  */

void FUN_1033ccb84(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033ccbb0; end: 1033ccbe3;  */

void FUN_1033ccbb0(undefined8 param_1)

{
  FUN_1033cc66c();
  func_0x000107c526c0(0x3fd6666666666666);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033ccbe4; end: 1033ccbff;  */

void FUN_1033ccbe4(long param_1,long param_2)

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



/* Entry: 1033ccc00; end: 1033ccc1f;  */

void FUN_1033ccc00(void)

{
  func_0x000107c61168(&PTR_PTR_112f62bc0);
  return;
}



/* Entry: 1033ccc20; end: 1033ccdb7;  */

undefined1  [16] FUN_1033ccc20(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f148a60);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f148a90);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033cccec);
  (*pcVar1)();
}



/* Entry: 1033ccdb8; end: 1033ccf23;  */

void FUN_1033ccdb8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puRam0000000113807290 = puVar1;
  return;
}



/* Entry: 1033ccf24; end: 1033ccf47;  */

void FUN_1033ccf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1033ccf48,0,0);
  return;
}



/* Entry: 1033ccf48; end: 1033cd0ef;  */

void FUN_1033ccf48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar3;
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar4 = PTR_PTR_1126afd38;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(unaff_x22 + 0x98) = puVar4;
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c5e868(puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(uVar5);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c5e458(puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(uVar6);
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c5fadc(uVar6,*(undefined8 *)(unaff_x22 + 0x80));
      func_0x000107c5e780(puVar4);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(uVar6);
    }
    func_0x000107c5e89c(puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5e848(puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c5e770(puVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1033cd0f0;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_1033cd16c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001033cd0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1033cd0f0; end: 1033cd16b;  */

void FUN_1033cd0f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1033cd130,0,0);
  return;
}



/* Entry: 1033cd16c; end: 1033cd267;  */

void FUN_1033cd16c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c3ecc8(param_3);
  func_0x000107c61180();
  uVar1 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar2 = &UNK_11064d9c0;
  func_0x000107c613fc(&UNK_11064d9c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_40 = FUN_1033cd2ac;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1010a2bbc;
  puStack_48 = &UNK_11064d9d8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4329c(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1033cd268; end: 1033cd2ab;  */

void FUN_1033cd268(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033cd2ac; end: 1033cd2db;  */

void FUN_1033cd2ac(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1033cd2dc; end: 1033cd2f7;  */

void FUN_1033cd2dc(long param_1,long param_2)

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



/* Entry: 1033cd2f8; end: 1033cd977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033cd2f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long *plVar6;
  code *pcVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f62d00) = 0;
  lVar1 = unaff_x20 + _DAT_112f62d08;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f62d10,0);
  lVar1 = _DAT_112f62d18;
  uVar3 = 0;
  func_0x0001000c6560();
  uVar9 = uVar3;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar9;
  lVar1 = _DAT_112f62d20;
  func_0x000107c613fc(uVar3,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112f62d28;
  auStack_88[0] = 0;
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  puVar4 = auStack_88;
  func_0x00010042e6a0();
  *(undefined1 **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f62d30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62d38) = 0;
  *(long *)(unaff_x20 + _DAT_112f62d40) = param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f62d48);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f62d50);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f62d58);
  *puVar2 = param_6;
  puVar2[1] = param_7;
  FUN_1033cd978(param_8,unaff_x20 + _DAT_112f62d60);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(param_2);
  func_0x00010076eed0(param_6,param_7);
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61428(param_1 + 0x90,auStack_88,1,0);
  *(undefined ***)(param_1 + 0x98) = &PTR_DAT_11064daa8;
  func_0x000107c61604(param_1 + 0x90,puVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar9);
  plVar6 = (long *)PTR___sSbSQsWP_11034dd50;
  puVar5 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar9);
  func_0x000104884898();
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_11064da10;
  func_0x000107c613fc(&UNK_11064da10,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar4);
  func_0x000107c61170(puVar4);
  pcVar7 = FUN_1033cda4c;
  puVar8 = puVar5;
  (**(code **)(*plVar6 + 0x60))(FUN_1033cda4c);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c614f0(pcVar7);
  uVar9 = *(undefined8 *)(puVar4 + _DAT_112f62d18);
  pcVar10 = *(code **)(puVar8 + 0x10);
  func_0x000107c6157c(uVar9);
  (*pcVar10)();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(pcVar7);
  func_0x000107c61574(uVar9);
  FUN_1033b3a38(param_6,param_7);
  func_0x000107c61574(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_4);
  FUN_1033cda54(param_8);
  return puVar4;
}



/* Entry: 1033cd978; end: 1033cd9c7;  */

undefined8 FUN_1033cd978(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f62d68;
  func_0x0001000285a8(0x112f62d68,&UNK_10dbbf120);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1033cd9c8; end: 1033cda4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cd9c8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112f62d00);
    if (lVar2 != 0) {
      func_0x000107c6157c(lVar2);
      func_0x00010434ca44(uVar1);
      func_0x000107c61574(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1033cda4c; end: 1033cda53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cda4c(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + _DAT_112f62d00);
    if (lVar2 != 0) {
      func_0x000107c6157c(lVar2);
      func_0x00010434ca44(uVar1);
      func_0x000107c61574(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1033cda54; end: 1033cda9b;  */

undefined8 FUN_1033cda54(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f62d68;
  func_0x0001000285a8(0x112f62d68,&UNK_10dbbf120);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1033cda9c; end: 1033cdbf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1033cda9c(code *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar1 = _DAT_112f62d00;
  pcVar6 = *(code **)(unaff_x20 + _DAT_112f62d00);
  pcVar2 = pcVar6;
  if (pcVar6 == (code *)0x0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112f62d50);
    if (lVar7 != 0) {
      lVar8 = ((long *)(unaff_x20 + _DAT_112f62d50))[1];
      func_0x000107c614f0(lVar7);
      param_1 = FUN_1033ce0d4;
      param_2 = 0;
      (**(code **)(lVar8 + 0x18))(FUN_1033ce0d4,0,lVar7,lVar8);
    }
    FUN_1033cdbf8();
    pcVar2 = param_1;
    func_0x0001033cdc90();
    pcVar3 = pcVar2;
    FUN_1033dd334();
    puVar4 = &UNK_11064da10;
    func_0x000107c613fc(&UNK_11064da10,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar5 = 0;
    func_0x00010434d014(0);
    func_0x000107c613fc();
    func_0x00010434cbd0(uVar5,param_1,pcVar2,pcVar3,param_2,0xd00000000000001c,0x800000010f148ae0,
                        0x4040000000000000,0,0x1033ce730,puVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = param_1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar5);
    pcVar2 = param_1;
  }
  func_0x000107c6157c(pcVar6);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = pcVar2;
  return auVar9;
}



/* Entry: 1033cdbf8; end: 1033cddcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033cdbf8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f62d30;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f62d30);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1033cddd0; end: 1033cdfa7;  */

/* WARNING: Possible PIC construction at 0x0001033cde34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cdeb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cded0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cdf1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033cded4) */
/* WARNING: Removing unreachable block (ram,0x0001033cdebc) */
/* WARNING: Removing unreachable block (ram,0x0001033cde38) */
/* WARNING: Removing unreachable block (ram,0x0001033cdf78) */
/* WARNING: Removing unreachable block (ram,0x0001033cde3c) */
/* WARNING: Removing unreachable block (ram,0x0001033cdf20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cddd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f62d10,param_1);
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f62d20);
  *(undefined8 *)(unaff_x20 + _DAT_112f62d20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1033cdfa8; end: 1033ce0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cdfa8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f62d28);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_2);
    uStack_49 = uVar1;
    func_0x0001007d6d78(&uStack_49);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1033ce0d4; end: 1033ce0d7;  */

void FUN_1033ce0d4(void)

{
  return;
}



/* Entry: 1033ce0d8; end: 1033ce2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033ce0d8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar8 = unaff_x20 + _DAT_112f62d10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    pcVar1 = "presentLeaderboard: no active lens";
    uVar5 = 0xd000000000000022;
  }
  else {
    lVar7 = lVar8;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    lVar3 = lVar7;
    func_0x000107c5faec(lVar7);
    func_0x000107c61170(lVar7);
    lVar8 = unaff_x20 + _DAT_112f62d08;
    lVar7 = lVar8;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar8 + 8);
      lVar4 = lVar7;
      func_0x000107c614f0();
      (**(code **)(lVar6 + 0x10))();
      func_0x000107c615e8(lVar7);
      if (lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_112f62d40) + 0x68;
        func_0x000107c61618();
        if (lVar2 != 0) {
          lVar7 = lVar2;
          func_0x000107c4e360();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar7 != 0) {
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar4);
            func_0x000107c6142c(param_2);
            return 1;
          }
        }
        lVar2 = lVar8;
        func_0x000107c61618();
        if (lVar2 == 0) {
          lVar8 = 0;
        }
        else {
          lVar7 = *(long *)(lVar8 + 8);
          lVar8 = lVar2;
          func_0x000107c614f0();
          (**(code **)(lVar7 + 0x18))();
          func_0x000107c615e8(lVar2);
        }
        FUN_1033d2f28(lVar3,param_2,lVar4,lVar8);
        func_0x000107c6142c(param_2);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar8);
        return 1;
      }
    }
    func_0x000107c6142c(param_2);
    pcVar1 = "presentLeaderboard: no hosting view controller";
    uVar5 = 0xd00000000000002e;
  }
  func_0x0001007d6c6c(2,uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,lVar2,&PTR_DAT_11064dac8)
  ;
  return 0;
}



/* Entry: 1033ce2d0; end: 1033ce32f; -[_TtC17LensLeaderboardUI31GamesActionBarLeaderboardPlugin init] */

void FUN_1033ce2d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardUI.GamesActionBarLeaderboardPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033ce2fc);
  (*pcVar1)();
}



/* Entry: 1033ce330; end: 1033ce41b; -[_TtC17LensLeaderboardUI31GamesActionBarLeaderboardPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033ce400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033ce404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce330(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f62d40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f62d48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f62d50));
  FUN_1033b3a38(*(undefined8 *)(param_1 + _DAT_112f62d58),
                ((undefined8 *)(param_1 + _DAT_112f62d58))[1]);
  FUN_1033cda54(param_1 + _DAT_112f62d60);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f62d00));
  FUN_1033ce760(param_1 + _DAT_112f62d08);
  func_0x000107c61610(param_1 + _DAT_112f62d10);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f62d18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f62d20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f62d28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f62d30));
  return;
}



/* Entry: 1033ce41c; end: 1033ce42b;  */

undefined8 FUN_1033ce41c(void)

{
  return 4;
}



/* Entry: 1033ce42c; end: 1033ce443;  */

void FUN_1033ce42c(void)

{
  FUN_1033cda9c();
  return;
}



/* Entry: 1033ce444; end: 1033ce457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce444(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f62d28));
  return;
}



/* Entry: 1033ce458; end: 1033ce4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce458(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  FUN_1033d2cc0();
  FUN_1033cd978(unaff_x20 + _DAT_112f62d60,auStack_58);
  if (lStack_40 == 0) {
    FUN_1033cda54(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x38))();
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 1033ce4f4; end: 1033ce50b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce4f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  lVar1 = unaff_x20 + _DAT_112f62d08;
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  FUN_1033cd978(unaff_x20 + _DAT_112f62d60,auStack_58);
  if (lStack_40 == 0) {
    FUN_1033cda54(auStack_58);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x30))();
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 1033ce50c; end: 1033ce597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce50c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f62d40) + 0x68;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e360();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1033ce598; end: 1033ce59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033ce598(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar8 = unaff_x20 + _DAT_112f62d10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    pcVar1 = "presentLeaderboard: no active lens";
    uVar5 = 0xd000000000000022;
  }
  else {
    lVar7 = lVar8;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    lVar3 = lVar7;
    func_0x000107c5faec(lVar7);
    func_0x000107c61170(lVar7);
    lVar8 = unaff_x20 + _DAT_112f62d08;
    lVar7 = lVar8;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar8 + 8);
      lVar4 = lVar7;
      func_0x000107c614f0();
      (**(code **)(lVar6 + 0x10))();
      func_0x000107c615e8(lVar7);
      if (lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_112f62d40) + 0x68;
        func_0x000107c61618();
        if (lVar2 != 0) {
          lVar7 = lVar2;
          func_0x000107c4e360();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          if (lVar7 != 0) {
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar4);
            func_0x000107c6142c(param_2);
            return 1;
          }
        }
        lVar2 = lVar8;
        func_0x000107c61618();
        if (lVar2 == 0) {
          lVar8 = 0;
        }
        else {
          lVar7 = *(long *)(lVar8 + 8);
          lVar8 = lVar2;
          func_0x000107c614f0();
          (**(code **)(lVar7 + 0x18))();
          func_0x000107c615e8(lVar2);
        }
        FUN_1033d2f28(lVar3,param_2,lVar4,lVar8);
        func_0x000107c6142c(param_2);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar8);
        return 1;
      }
    }
    func_0x000107c6142c(param_2);
    pcVar1 = "presentLeaderboard: no hosting view controller";
    uVar5 = 0xd00000000000002e;
  }
  func_0x0001007d6c6c(2,uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,lVar2,&PTR_DAT_11064dac8)
  ;
  return 0;
}



/* Entry: 1033ce59c; end: 1033ce617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce59c(void)

{
  long lVar1;
  long unaff_x20;
  code *pcVar2;
  
  pcVar2 = *(code **)(unaff_x20 + _DAT_112f62d58);
  if (pcVar2 != (code *)0x0) {
    lVar1 = unaff_x20 + _DAT_112f62d10;
    func_0x000107c61618(lVar1);
    (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1033ce618; end: 1033ce707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce618(void)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f62d40);
  lVar1 = lVar6 + 0x68;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e360();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if ((lVar2 != 0) && (func_0x000107c61170(lVar2), *(char *)(lVar6 + 0x60) == '\x01')) {
      puVar3 = (ulong *)(lVar6 + 0x68);
      func_0x000107c61618();
      if (puVar3 != (ulong *)0x0) {
        uVar4 = 0;
        FUN_1033d0e1c(0);
        puVar5 = puVar3;
        func_0x000107c61480(puVar3,uVar4);
        if ((puVar5 == (ulong *)0x0) ||
           ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x110))(),
           ((ulong)puVar5 & 1) == 0)) {
          func_0x000107c61170(puVar3);
        }
        else {
          FUN_1033d11b0();
          func_0x000107c61170(puVar3);
          if (puVar5 != (ulong *)0x0) {
            FUN_1033d2cc0();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1033ce708; end: 1033ce73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce708(void)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f62d40);
  lVar1 = lVar6 + 0x68;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e360();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if ((lVar2 != 0) && (func_0x000107c61170(lVar2), *(char *)(lVar6 + 0x60) == '\x01')) {
      puVar3 = (ulong *)(lVar6 + 0x68);
      func_0x000107c61618();
      if (puVar3 != (ulong *)0x0) {
        uVar4 = 0;
        FUN_1033d0e1c(0);
        puVar5 = puVar3;
        func_0x000107c61480(puVar3,uVar4);
        if ((puVar5 == (ulong *)0x0) ||
           ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x110))(),
           ((ulong)puVar5 & 1) == 0)) {
          func_0x000107c61170(puVar3);
        }
        else {
          FUN_1033d11b0();
          func_0x000107c61170(puVar3);
          if (puVar5 != (ulong *)0x0) {
            FUN_1033d2cc0();
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1033ce740; end: 1033ce75f;  */

void FUN_1033ce740(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6b80);
  return;
}



/* Entry: 1033ce760; end: 1033ce783;  */

undefined8 FUN_1033ce760(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1033ce784; end: 1033ce78f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ce784(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + _DAT_112f62d00);
    if (lVar2 != 0) {
      func_0x000107c6157c(lVar2);
      func_0x00010434ca44(uVar1);
      func_0x000107c61574(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1033ce790; end: 1033ce7ef;  */

void FUN_1033ce790(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar3 = 0x40;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  lVar2 = lVar1;
  func_0x0001033dd400();
  *(long *)(lVar1 + 0x20) = lVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  func_0x0001033dd4d0();
  *(long *)(lVar1 + 0x30) = lVar2;
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  lRam0000000112f62e20 = lVar1;
  return;
}



/* Entry: 1033ce7f0; end: 1033cf1ef;  */

/* WARNING: Possible PIC construction at 0x0001033ce9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ceaa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ceaf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ceba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cec78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cecc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cecd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ced08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ced98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cede0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cee9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cefb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cf008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cf030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cf064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cf0b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033cf0c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033cf0bc) */
/* WARNING: Removing unreachable block (ram,0x0001033cf068) */
/* WARNING: Removing unreachable block (ram,0x0001033cf034) */
/* WARNING: Removing unreachable block (ram,0x0001033cf00c) */
/* WARNING: Removing unreachable block (ram,0x0001033cefb8) */
/* WARNING: Removing unreachable block (ram,0x0001033cef64) */
/* WARNING: Removing unreachable block (ram,0x0001033ceea0) */
/* WARNING: Removing unreachable block (ram,0x0001033cede4) */
/* WARNING: Removing unreachable block (ram,0x0001033ced9c) */
/* WARNING: Removing unreachable block (ram,0x0001033ced0c) */
/* WARNING: Removing unreachable block (ram,0x0001033cecd8) */
/* WARNING: Removing unreachable block (ram,0x0001033cecc4) */
/* WARNING: Removing unreachable block (ram,0x0001033cec7c) */
/* WARNING: Removing unreachable block (ram,0x0001033cebac) */
/* WARNING: Removing unreachable block (ram,0x0001033ceaf8) */
/* WARNING: Removing unreachable block (ram,0x0001033ceb44) */
/* WARNING: Removing unreachable block (ram,0x0001033ceb0c) */
/* WARNING: Removing unreachable block (ram,0x0001033ceb28) */
/* WARNING: Removing unreachable block (ram,0x0001033ceb64) */
/* WARNING: Removing unreachable block (ram,0x0001033ceaac) */
/* WARNING: Removing unreachable block (ram,0x0001033ceb2c) */
/* WARNING: Removing unreachable block (ram,0x0001033ceac4) */
/* WARNING: Removing unreachable block (ram,0x0001033ce9c8) */
/* WARNING: Removing unreachable block (ram,0x0001033cf18c) */
/* WARNING: Removing unreachable block (ram,0x0001033ce9f0) */
/* WARNING: Removing unreachable block (ram,0x0001033ceb70) */
/* WARNING: Removing unreachable block (ram,0x0001033cea08) */
/* WARNING: Removing unreachable block (ram,0x0001033cea3c) */
/* WARNING: Removing unreachable block (ram,0x0001033cf0f8) */
/* WARNING: Removing unreachable block (ram,0x0001033cea48) */
/* WARNING: Removing unreachable block (ram,0x0001033cf0cc) */

void FUN_1033ce7f0(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_1 + 0x40);
  if (1 < lVar9) {
    lVar3 = lVar9 + -1;
    FUN_1033cf248(lVar3,0x3032342c31,0xe500000000000000,0x65736165742d626c,0xef65766f62612d72);
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar4 = puVar8;
      }
      func_0x000107c60480(puVar4);
    }
    puVar5 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar4 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar7 + 0x10);
    puVar8 = puVar5;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001023b5804(puVar8,uVar1 + 1,1,puVar5);
      uVar7 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
    *(long *)(uVar7 + uVar1 * 8 + 0x20) = lVar3;
  }
  func_0x0001033cf530();
  puVar4 = puVar8;
  func_0x000107c61550();
  if ((((int)puVar4 == 0) || ((long)puVar8 < 0)) ||
     (puVar4 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar5 = puVar8;
      }
      func_0x000107c60480(puVar5);
    }
    puVar4 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar5 + 1,1,puVar8);
  }
  puVar8 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
  uVar1 = *(ulong *)(puVar8 + 0x10);
  puVar5 = puVar4;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
    puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x0001023b5804(puVar5,uVar1 + 1,1,puVar4);
    puVar8 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  }
  *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
  *(long *)(puVar8 + uVar1 * 8 + 0x20) = param_1;
  lVar3 = lVar9 + 1;
  if (!SCARRY8(lVar9,1)) {
    FUN_1033cf248(lVar3,0x303436,0xe300000000000000,0x65736165742d626c,0xef776f6c65622d72);
    puVar4 = puVar5;
    if ((ulong)puVar5 >> 0x3e != 0) {
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar8 = puVar5;
      }
      func_0x000107c60480(puVar8);
      puVar4 = (undefined *)0x0;
      func_0x0001023b5804(0,puVar8 + 1,1,puVar5);
      puVar8 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    }
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      func_0x0001023b5804(puVar5,uVar1 + 1,1,puVar4);
      puVar8 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(long *)(puVar8 + uVar1 * 8 + 0x20) = lVar3;
    puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
    uVar6 = 0;
    FUN_1033d037c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c5fc48(puVar5,uVar6);
    func_0x000107c45784(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033cf124);
  (*pcVar2)();
}



/* Entry: 1033cf1f0; end: 1033cf247; -[_TtC17LensLeaderboardUI20LeaderboardOptInView initWithCoder:] */

void FUN_1033cf1f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/LeaderboardOptInView.swift",0x2c,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033cf248);
  (*pcVar1)();
}



/* Entry: 1033cf248; end: 1033cf807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1033cf248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar1 = 0;
  uVar3 = param_2;
  FUN_1033dc430();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = param_5;
  func_0x000107c61434();
  func_0x0001033dd59c();
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f62da0);
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  uStack_c0 = uVar2;
  uStack_b8 = uVar3;
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  func_0x000107c61434(param_3);
  FUN_1033da7d8(&uStack_d0,uVar9);
  func_0x0001021383b8(&uStack_d0);
  func_0x000107c5a378(uVar1);
  func_0x000107c520e8(uVar1);
  uVar2 = uVar1;
  FUN_1033d0048();
  uVar3 = uVar2;
  FUN_1033d02c0(0);
  func_0x000107c3d89c(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar9 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x000107c5cbe4(uVar2);
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  uVar9 = uVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x000107c3ec1c(uVar2);
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar5 + 0x28) = uVar7;
  uVar9 = uVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x000107c4acb0(uVar2);
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  uVar9 = uVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x000107c5ce8c(uVar2);
  func_0x000107c61180();
  uVar7 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar5 + 0x38) = uVar7;
  uVar9 = 0;
  FUN_1033d037c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar5;
  func_0x000107c5fc48(puVar5,uVar9);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar8);
  return uVar2;
}



/* Entry: 1033cf808; end: 1033cf883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cf808(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + _DAT_112f62d98);
    uVar2 = ((undefined8 *)(param_2 + _DAT_112f62d98))[1];
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_2);
    (*pcVar1)();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1033cf884; end: 1033cf8e3; -[_TtC17LensLeaderboardUI20LeaderboardOptInView initWithFrame:] */

void FUN_1033cf884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardUI.LeaderboardOptInView",0x26,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033cf8b0);
  (*pcVar1)();
}



/* Entry: 1033cf8e4; end: 1033cf91f; -[_TtC17LensLeaderboardUI20LeaderboardOptInView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033cf904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033cf908) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cf8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f62d98 + 8));
  return;
}



/* Entry: 1033cf920; end: 1033cf93f;  */

void FUN_1033cf920(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6ca0);
  return;
}



/* Entry: 1033cf940; end: 1033cfc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033cf940(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar1 = _DAT_112f62dd0;
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c46734();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f62de8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62dd8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f62de0) = param_1;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a378();
  lVar1 = _DAT_112f62dd0;
  func_0x000107c5a050(*(undefined8 *)(puVar3 + _DAT_112f62dd0));
  func_0x000107c3d89c(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c5cbe4(puVar3);
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c3ec1c(puVar3);
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c4acb0(puVar3);
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c5ce8c(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar4 + 0x38) = uVar7;
  uVar7 = 0;
  FUN_1033d037c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar4;
  func_0x000107c5fc48(puVar4,uVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar8);
  return puVar3;
}



/* Entry: 1033cfc18; end: 1033cfca3; -[_TtC17LensLeaderboardUIP33_B4BC05495D9DAC71F311643F52994FEF16VariableBlurView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cfc18(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112f62dd0;
  puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c46734();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112f62de8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/LeaderboardOptInView.swift",0x2c,2,0xc3,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033cfca4);
  (*pcVar2)();
}



/* Entry: 1033cfca4; end: 1033cfe07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cfca4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_didMoveToWindow_112527020);
  lVar2 = unaff_x20;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    lVar2 = _DAT_112f62de8;
    if (*(long *)(unaff_x20 + _DAT_112f62de8) != 0) {
      func_0x000107c5be08();
    }
    func_0x000107c54418(*(undefined8 *)(unaff_x20 + _DAT_112f62dd0));
    puVar3 = &UNK_11064db58;
    func_0x000107c613fc(&UNK_11064db58,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    func_0x000107c610f8();
    pcStack_60 = FUN_1033d03bc;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11064db70;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar1 = puStack_58;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c4670c(0x3ff0000000000000);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c54b70(*(undefined8 *)(unaff_x20 + _DAT_112f62de0),puVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined **)(unaff_x20 + lVar2) = puVar4;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1033cfe08; end: 1033cfecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cfe08(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f62dd0);
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    func_0x000107c61174(uVar2);
    func_0x000107c42448(puVar1);
    func_0x000107c61180();
    func_0x000107c54418(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1033cfecc; end: 1033cff4b; -[_TtC17LensLeaderboardUIP33_B4BC05495D9DAC71F311643F52994FEF16VariableBlurView didMoveToWindow] */

void FUN_1033cfecc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033cfca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033cff4c; end: 1033cffc3; -[_TtC17LensLeaderboardUIP33_B4BC05495D9DAC71F311643F52994FEF16VariableBlurView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cff4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112f62de8);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5be08(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033cffc4; end: 1033cfffb; -[_TtC17LensLeaderboardUIP33_B4BC05495D9DAC71F311643F52994FEF16VariableBlurView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033cffe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033cffe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033cffc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f62dd0));
  return;
}



/* Entry: 1033cfffc; end: 1033d0047; -[_TtC17LensLeaderboardUIP33_B4BC05495D9DAC71F311643F52994FEF16VariableBlurView initWithFrame:] */

void FUN_1033cfffc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardUI.VariableBlurView",0x22,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0028);
  (*pcVar1)();
}


