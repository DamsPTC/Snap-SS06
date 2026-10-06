/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a91abc; end: 101a91acf;  */

ulong FUN_101a91abc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91bb4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91bb8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bcd28;
    func_0x000107c61168(PTR_PTR_1126bcd28);
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
    puVar4 = PTR_PTR_1126bcd28;
    func_0x000107c61168(PTR_PTR_1126bcd28);
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
  FUN_101a92b70(0,0x112df41c0,&PTR_PTR_1126bcd28);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91c8c);
  (*pcVar2)();
}



/* Entry: 101a91ad0; end: 101a91c8b;  */

ulong FUN_101a91ad0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91bb4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91bb8);
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
  FUN_101a92b70(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91c8c);
  (*pcVar2)();
}



/* Entry: 101a91c8c; end: 101a91cb3;  */

ulong FUN_101a91c8c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91bb4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91bb8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bceb8;
    func_0x000107c61168(PTR_PTR_1126bceb8);
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
    puVar4 = PTR_PTR_1126bceb8;
    func_0x000107c61168(PTR_PTR_1126bceb8);
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
  FUN_101a92b70(0,0x112df41b0,&PTR_PTR_1126bceb8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91c8c);
  (*pcVar2)();
}



/* Entry: 101a91cb4; end: 101a9232b;  */

ulong FUN_101a91cb4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91d88);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91d8c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010401523c(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar3 = 0;
    func_0x00010401523c(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x654d6c65736e6954,0xeb00000000616964);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a91e58);
  (*pcVar2)();
}



/* Entry: 101a9232c; end: 101a92433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101a9232c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd120;
  func_0x000107c610f8(PTR_PTR_1126bd120);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c56498();
  func_0x000107c5ed70(_DAT_113803a68);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c564a4(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126a8740;
  func_0x000107c610f8(PTR_PTR_1126a8740);
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(param_1 + _DAT_113803a70);
  func_0x000107c5ee20(uVar3,((undefined8 *)(param_1 + _DAT_113803a70))[1]);
  func_0x000107c53ee4(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_113803a78);
  func_0x000107c5ee20(uVar3,((undefined8 *)(param_1 + _DAT_113803a78))[1]);
  func_0x000107c53ee0(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c52578(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101a92434; end: 101a9295b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101a92434(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar11 = (uint)(param_2 >> 0x3c) & 3;
  if (uVar11 < 2) {
    puVar9 = PTR_PTR_1126bd130;
    if (uVar11 == 0) {
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c59558();
      FUN_101a9232c();
      func_0x000107c52bec(puVar9);
    }
    else {
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c59558();
      func_0x000107c5ee20(param_1,param_2 & 0xcfffffffffffffff);
      func_0x000107c55494(puVar9);
    }
    func_0x000107c61170();
    func_0x000101a874d8();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined **)(param_1 + 0x20) = puVar9;
    puVar9 = param_1;
  }
  else if (uVar11 == 2) {
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar12 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar12 = param_1;
      if (-1 < (long)param_1) {
        puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      }
      func_0x000107c60480();
    }
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar12 != (undefined *)0x0) {
      apuStack_88[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar10 = (undefined *)((ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU));
      func_0x000101a89924(0,puVar10,0);
      if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a9295c);
        (*pcVar3)();
      }
      puVar14 = (undefined *)0x0;
      do {
        puVar9 = apuStack_88[0];
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          puVar15 = *(undefined **)(param_1 + (long)puVar14 * 8 + 0x20);
          func_0x000107c6157c(puVar15);
        }
        else {
          puVar15 = puVar14;
          puVar10 = param_1;
          func_0x000101a92190(puVar14,param_1);
        }
        puVar4 = PTR_PTR_1126bd130;
        func_0x000107c610f8();
        func_0x000107c453e4();
        func_0x000107c59558();
        puVar5 = PTR_PTR_1126bd120;
        func_0x000107c610f8(PTR_PTR_1126bd120);
        func_0x000107c453e4();
        puVar6 = puVar5;
        func_0x000107c56498();
        func_0x000107c5ed70(_DAT_113803a68);
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar10);
        func_0x000107c564a4(puVar5);
        func_0x000107c61170(puVar6);
        puVar6 = PTR_PTR_1126a8740;
        func_0x000107c610f8(PTR_PTR_1126a8740);
        func_0x000107c453e4();
        uVar7 = *(undefined8 *)(puVar15 + _DAT_113803a70);
        func_0x000107c5ee20(uVar7,*(undefined8 *)((long)(puVar15 + _DAT_113803a70) + 8));
        func_0x000107c53ee4(puVar6);
        func_0x000107c61170(uVar7);
        uVar7 = *(undefined8 *)(puVar15 + _DAT_113803a78);
        puVar10 = *(undefined **)((long)(puVar15 + _DAT_113803a78) + 8);
        func_0x000107c5ee20(uVar7);
        func_0x000107c53ee0(puVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c52578(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c52bec(puVar4);
        func_0x000107c61574(puVar15);
        func_0x000107c61170(puVar5);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puVar15 = (undefined *)(uVar1 + 1);
        apuStack_88[0] = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          puVar10 = puVar15;
          func_0x000101a89924(1 < *(ulong *)(puVar9 + 0x18),puVar15,1);
        }
        puVar14 = puVar14 + 1;
        *(undefined **)(apuStack_88[0] + 0x10) = puVar15;
        *(undefined **)(apuStack_88[0] + uVar1 * 8 + 0x20) = puVar4;
        puVar9 = apuStack_88[0];
      } while (puVar12 != puVar14);
    }
  }
  else {
    puVar12 = PTR_PTR_1126bd130;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59558();
    puVar10 = PTR_PTR_1126a8758;
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar13 = *(long *)(param_1 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar13 != 0) {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100c077e4(0,lVar13,0);
      param_1 = param_1 + 0x30;
      puVar9 = puStack_68;
      do {
        uVar7 = *(undefined8 *)(param_1 + -0x10);
        uVar2 = *(undefined8 *)(param_1 + -8);
        puVar14 = PTR_PTR_1126a8760;
        func_0x000107c610f8();
        func_0x00010006c00c(uVar7,uVar2);
        func_0x000107c453e4();
        uVar8 = uVar7;
        func_0x000107c5ee20(uVar7,uVar2);
        func_0x000107c55060(puVar14);
        func_0x000107c61170(uVar8);
        func_0x000107c57a78(puVar14);
        uVar8 = 0;
        FUN_101a92b70(0,0x112df4880,&PTR_PTR_1126a8760);
        uStack_70 = uVar8;
        func_0x00010006c090(uVar7,uVar2);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        apuStack_88[0] = puVar14;
        puStack_68 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          func_0x000100c077e4(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puStack_68;
        param_1 = param_1 + 0x18;
        *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
        func_0x000100102924(apuStack_88,puStack_68 + uVar1 * 0x20 + 0x20);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar15 = puVar9;
    func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar9);
    func_0x000107c45788(puVar14);
    func_0x000107c61170(puVar15);
    func_0x000107c54b8c(puVar10);
    func_0x000107c61170(puVar14);
    puVar9 = puVar12;
    func_0x000107c572c0();
    func_0x000101a874d8();
    func_0x000107c61170(puVar10);
    func_0x000107c613fc(puVar9,((ulong)*(uint *)(puVar9 + 0x30) + 7 & 0x1fffffff8) + 8,
                        *(ushort *)(puVar9 + 0x34) | 7);
    *(undefined8 *)(puVar9 + 0x18) = 3;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    *(undefined **)(puVar9 + 0x20) = puVar12;
  }
  return puVar9;
}



/* Entry: 101a9295c; end: 101a92983;  */

void FUN_101a9295c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101a92984; end: 101a92b27;  */

undefined1  [16] FUN_101a92984(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long lStack_18;
  
  uVar3 = 0x656e6f6e;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
LAB_101a92a38:
    uVar4 = 0xe400000000000000;
  }
  else {
    lStack_18 = *(long *)(param_1 + 0x20);
    plVar5 = (long *)(param_1 + 0x20);
    do {
      if (lVar6 == 0) {
        if (lStack_18 < 3) {
          if (lStack_18 == 0) goto LAB_101a92a38;
          if (lStack_18 == 1) {
            uVar4 = 0x800000010efce270;
            uVar3 = 0xd00000000000001c;
            goto LAB_101a92a3c;
          }
          if (lStack_18 == 2) {
            uVar4 = 0x800000010efce250;
            uVar3 = 0xd00000000000001d;
            goto LAB_101a92a3c;
          }
        }
        else if (lStack_18 < 5) {
          if (lStack_18 == 3) {
            uVar4 = 0x800000010efce230;
            uVar3 = 0xd000000000000014;
            goto LAB_101a92a3c;
          }
          if (lStack_18 == 4) {
            uVar3 = 0xd000000000000013;
            uVar4 = 0x800000010efce210;
            goto LAB_101a92a3c;
          }
        }
        else {
          if (lStack_18 == 5) {
            uVar4 = 0xec00000074696b5f;
            uVar3 = 0x6576697461657263;
            goto LAB_101a92a3c;
          }
          if (lStack_18 == 6) {
            uVar4 = 0xeb00000000617265;
            uVar3 = 0x6d61635f70616e73;
            goto LAB_101a92a3c;
          }
        }
        func_0x000107c60614(&UNK_110735378,&lStack_18,&UNK_110735378,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a92b08);
        (*pcVar2)();
      }
      lVar1 = *plVar5;
      lVar6 = lVar6 + -1;
      plVar5 = plVar5 + 1;
    } while ((int)lVar1 == (int)lStack_18);
    uVar4 = 0xe500000000000000;
    uVar3 = 0x646578696d;
  }
LAB_101a92a3c:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Entry: 101a92b28; end: 101a92b43;  */

void FUN_101a92b28(long param_1,long param_2)

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



/* Entry: 101a92b44; end: 101a92b6f;  */

void FUN_101a92b44(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a92b70; end: 101a92baf;  */

void FUN_101a92b70(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a92bb0; end: 101a92bbf;  */

void FUN_101a92bb0(long param_1,long param_2)

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



/* Entry: 101a92bc0; end: 101a92d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a92bc0(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_a8 [72];
  
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a92d38);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_2 + 0x20 + uVar6 * 8);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar6;
        func_0x000101a91ff4(uVar6,param_2);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a92d28);
        (*pcVar1)();
      }
      uVar6 = uVar6 + 1;
      if ((*(char *)(uVar2 + _DAT_113046d20 + 0x18) != '\x01') && (*(long *)(param_1 + 0x10) != 0))
      {
        uVar7 = *(ulong *)(uVar2 + _DAT_113046d20 + 0x10);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_1 + 0x28));
        uVar3 = uVar7;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar4 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        uVar3 = uVar3 & (uVar4 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
          do {
            if (*(ulong *)(*(long *)(param_1 + 0x30) + uVar3 * 8) == uVar7) {
              func_0x000107c61170(uVar2);
              return 1;
            }
            uVar3 = uVar3 + 1 & ~uVar4;
          } while ((*(ulong *)(param_1 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c61170();
    } while (uVar6 != uVar5);
  }
  return 0;
}



/* Entry: 101a92d7c; end: 101a92d9b;  */

void FUN_101a92d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a92d9c,0,0);
  return;
}



/* Entry: 101a92d9c; end: 101a93b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a92d9c(void)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long unaff_x22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined8 uStack_100;
  undefined8 uStack_e8;
  undefined8 uStack_c8;
  undefined1 auStack_a8 [80];
  
  uVar17 = *(ulong *)(unaff_x22 + 0x68);
  if (uVar17 >> 0x3e == 0) {
    uVar20 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar20 = uVar17 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar17) {
      uVar20 = uVar17;
    }
    func_0x000107c60480();
  }
  uVar2 = *(ulong *)(*(long *)(unaff_x22 + 0x88) + 0x100);
  lVar22 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x108);
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    uVar28 = 0;
    lVar27 = *(long *)(unaff_x22 + 0x68);
    uVar16 = *(ulong *)(unaff_x22 + 0x70);
    uVar18 = uVar16 & 0xffffffffffffff8;
    uVar10 = uVar18;
    if (0x7fffffffffffffff < uVar16) {
      uVar10 = uVar16;
    }
    do {
      if ((uVar17 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93570);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(lVar27 + 0x20 + uVar28 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar28;
        func_0x000101a91cb4(uVar28,*(undefined8 *)(unaff_x22 + 0x68));
      }
      bVar5 = SCARRY8(uVar28,1);
      uVar28 = uVar28 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a9356c);
        (*pcVar4)();
      }
      iVar3 = *(int *)(uVar6 + _DAT_113046cf8);
      if (iVar3 == 2) {
        iVar21 = (int)*(undefined8 *)(lVar22 + 0x10);
        lVar7 = -0x2fffffffffffffe5;
        func_0x000107c5fadc(0xd00000000000001b,0x800000010efce840);
        func_0x000107c3ebd4();
        func_0x000107c61170();
        if (iVar21 != 0) {
          FUN_101a97f2c();
          if (uVar16 >> 0x3e == 0) {
            uVar26 = *(ulong *)(uVar18 + 0x10);
          }
          else {
            uVar26 = uVar10;
            func_0x000107c60480();
          }
          if (uVar26 != 0) {
            uVar25 = 0;
            do {
              if ((uVar16 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar18 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93560);
                  (*pcVar4)();
                }
                uVar8 = *(ulong *)(uVar16 + 0x20 + uVar25 * 8);
                func_0x000107c61174();
              }
              else {
                uVar8 = uVar25;
                func_0x000101a91ff4(uVar25,*(undefined8 *)(unaff_x22 + 0x70));
              }
              if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101a9355c);
                (*pcVar4)();
              }
              uVar25 = uVar25 + 1;
              if ((*(char *)(uVar8 + _DAT_113046d20 + 0x18) != '\x01') &&
                 (*(long *)(lVar7 + 0x10) != 0)) {
                uVar23 = *(ulong *)(uVar8 + _DAT_113046d20 + 0x10);
                func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
                uVar14 = uVar23;
                func_0x000107c60690();
                func_0x000107c606a8();
                uVar19 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
                uVar14 = uVar14 & (uVar19 ^ 0xffffffffffffffff);
                if ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
                  do {
                    if (*(ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 8) == uVar23) {
                      func_0x000107c61170(uVar8);
                      func_0x000107c61170(uVar6);
                      func_0x000107c6142c(lVar7);
                      goto LAB_101a92ea0;
                    }
                    uVar14 = uVar14 + 1 & ~uVar19;
                  } while ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) !=
                           0);
                }
              }
              func_0x000107c61170();
            } while (uVar25 != uVar26);
          }
          func_0x000107c6142c(lVar7);
        }
      }
      if (*(long *)(uVar6 + _DAT_113046cf0) - 1U < 5) {
        if (iVar3 != 1) goto LAB_101a93290;
        func_0x000107c61170(uVar6);
      }
      else {
        if (*(long *)(uVar6 + _DAT_113046cf0) == 6) {
          uVar9 = 0xd00000000000002f;
          func_0x000107c5fadc(0xd00000000000002f,0x800000010efce770);
          uVar26 = uVar2;
          func_0x000107c3ebd4();
          func_0x000107c61170(uVar9);
          if ((uVar26 & 1) != 0) {
            uVar11 = 0;
            func_0x000101a83aa4(0);
            uVar9 = uVar11;
            func_0x000101a968f0();
            lVar7 = 1;
            func_0x000107c5fe14(1,uVar11,uVar9);
            FUN_101a96934(auStack_a8,0xb);
            if (uVar16 >> 0x3e == 0) {
              uVar26 = *(ulong *)(uVar18 + 0x10);
            }
            else {
              uVar26 = uVar10;
              func_0x000107c60480();
            }
            if (uVar26 != 0) {
              uVar25 = 0;
              do {
                if ((uVar16 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar18 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93568);
                    (*pcVar4)();
                  }
                  uVar8 = *(ulong *)(uVar16 + 0x20 + uVar25 * 8);
                  func_0x000107c61174();
                }
                else {
                  uVar8 = uVar25;
                  func_0x000101a91ff4(uVar25,*(undefined8 *)(unaff_x22 + 0x70));
                }
                bVar5 = SCARRY8(uVar25,1);
                uVar25 = uVar25 + 1;
                if (bVar5) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93564);
                  (*pcVar4)();
                }
                if ((*(char *)(uVar8 + _DAT_113046d20 + 0x18) != '\x01') &&
                   (*(long *)(lVar7 + 0x10) != 0)) {
                  uVar23 = *(ulong *)(uVar8 + _DAT_113046d20 + 0x10);
                  func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
                  uVar14 = uVar23;
                  func_0x000107c60690();
                  func_0x000107c606a8();
                  uVar19 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
                  uVar14 = uVar14 & (uVar19 ^ 0xffffffffffffffff);
                  if ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
                    do {
                      if (*(ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 8) == uVar23) {
                        func_0x000107c6142c(lVar7);
                        func_0x000107c61170(uVar8);
                        func_0x000107c61170(uVar6);
                        goto LAB_101a92ea0;
                      }
                      uVar14 = uVar14 + 1 & ~uVar19;
                    } while ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1)
                             != 0);
                  }
                }
                func_0x000107c61170(uVar8);
              } while (uVar25 != uVar26);
            }
            func_0x000107c6142c(lVar7);
          }
        }
LAB_101a93290:
        puVar29 = puVar12;
        func_0x000107c61558();
        if (((ulong)puVar29 & 1) == 0) {
          func_0x000101a89908(0,*(long *)(puVar12 + 0x10) + 1,1);
        }
        uVar26 = *(ulong *)(puVar12 + 0x10);
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar26) {
          func_0x000101a89908(1 < *(ulong *)(puVar12 + 0x18),uVar26 + 1,1);
        }
        *(ulong *)(puVar12 + 0x10) = uVar26 + 1;
        *(ulong *)(puVar12 + uVar26 * 8 + 0x20) = uVar6;
      }
LAB_101a92ea0:
    } while (uVar28 != uVar20);
  }
  if (((long)puVar12 < 0) || (((ulong)puVar12 >> 0x3e & 1) != 0)) {
    puVar29 = puVar12;
    func_0x000107c60480();
  }
  else {
    puVar29 = *(undefined **)(puVar12 + 0x10);
  }
  if (puVar29 != (undefined *)0x0) {
    uVar28 = 0;
    lVar27 = *(long *)(unaff_x22 + 0x88);
    uStack_c8 = 0x800000010efce210;
    uStack_e8 = 0x800000010efce230;
    uStack_100 = 0xd000000000000014;
    do {
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar12 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93578);
          (*pcVar4)();
        }
        uVar10 = *(ulong *)(puVar12 + uVar28 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar28;
        func_0x000101a91cb4(uVar28,puVar12);
      }
      puVar1 = (undefined *)(uVar28 + 1);
      if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93574);
        (*pcVar4)();
      }
      uVar9 = *(undefined8 *)(lVar27 + 0xf0);
      lVar7 = *(long *)(lVar27 + 0xf8);
      func_0x0001000a8868(lVar27 + 0xd8,uVar9);
      lVar15 = *(long *)(uVar10 + _DAT_113046cf0);
      if (lVar15 < 3) {
        if (lVar15 == 0) {
          uVar24 = 0xe400000000000000;
          uVar11 = 0x656e6f6e;
        }
        else if (lVar15 == 1) {
          uVar24 = 0x800000010efce270;
          uVar11 = 0xd00000000000001c;
        }
        else {
          if (lVar15 != 2) goto LAB_101a9351c;
          uVar24 = 0x800000010efce250;
          uVar11 = 0xd00000000000001d;
        }
      }
      else if (lVar15 < 5) {
        uVar11 = uStack_100;
        uVar24 = uStack_e8;
        if (lVar15 != 3) {
          if (lVar15 != 4) {
LAB_101a9351c:
            *(long *)(unaff_x22 + 0x60) = lVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                      (&UNK_110735378,(long *)(unaff_x22 + 0x60),&UNK_110735378,PTR___sSiN_11034deb0
                      );
            return;
          }
          uVar11 = 0xd000000000000013;
          uVar24 = uStack_c8;
        }
      }
      else if (lVar15 == 5) {
        uVar24 = 0xec00000074696b5f;
        uVar11 = 0x6576697461657263;
      }
      else {
        if (lVar15 != 6) goto LAB_101a9351c;
        uVar24 = 0xeb00000000617265;
        uVar11 = 0x6d61635f70616e73;
      }
      (**(code **)(lVar7 + 0x18))(uVar11,uVar24,uVar9,lVar7);
      func_0x000107c6142c(uVar24);
      uVar9 = *(undefined8 *)(lVar27 + 0xa0);
      lVar7 = *(long *)(lVar27 + 0xa8);
      func_0x0001000a8868(lVar27 + 0x88,uVar9);
      (**(code **)(lVar7 + 0x10))(uVar10,uVar9,lVar7);
      func_0x000107c61170(uVar10);
      uVar28 = uVar28 + 1;
    } while (puVar1 != puVar29);
  }
  lVar27 = *(long *)(unaff_x22 + 0x68);
  uVar10 = *(ulong *)(unaff_x22 + 0x70);
  func_0x000107c61574();
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar16 = uVar10 & 0xffffffffffffff8;
  uVar28 = uVar16;
  if (0x7fffffffffffffff < uVar10) {
    uVar28 = uVar10;
  }
  *(undefined **)(unaff_x22 + 0x98) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar29 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    uVar18 = 0;
    do {
      if ((uVar17 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93b80);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(lVar27 + 0x20 + uVar18 * 8);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar18;
        func_0x000101a91cb4(uVar18,*(undefined8 *)(unaff_x22 + 0x68));
      }
      bVar5 = SCARRY8(uVar18,1);
      uVar18 = uVar18 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93b7c);
        (*pcVar4)();
      }
      iVar3 = *(int *)(uVar6 + _DAT_113046cf8);
      if (iVar3 == 2) {
        iVar21 = (int)*(undefined8 *)(lVar22 + 0x10);
        lVar7 = -0x2fffffffffffffe5;
        func_0x000107c5fadc(0xd00000000000001b,0x800000010efce840);
        func_0x000107c3ebd4();
        func_0x000107c61170();
        if (iVar21 != 0) {
          FUN_101a97f2c();
          if (uVar10 >> 0x3e == 0) {
            uVar26 = *(ulong *)(uVar16 + 0x10);
          }
          else {
            uVar26 = uVar28;
            func_0x000107c60480();
          }
          if (uVar26 != 0) {
            uVar25 = 0;
            do {
              if ((uVar10 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar16 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93b78);
                  (*pcVar4)();
                }
                uVar8 = *(ulong *)(uVar10 + 0x20 + uVar25 * 8);
                func_0x000107c61174();
              }
              else {
                uVar8 = uVar25;
                func_0x000101a91ff4(uVar25,*(undefined8 *)(unaff_x22 + 0x70));
              }
              if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93b74);
                (*pcVar4)();
              }
              uVar25 = uVar25 + 1;
              if ((*(char *)(uVar8 + _DAT_113046d20 + 0x18) != '\x01') &&
                 (*(long *)(lVar7 + 0x10) != 0)) {
                uVar23 = *(ulong *)(uVar8 + _DAT_113046d20 + 0x10);
                func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
                uVar14 = uVar23;
                func_0x000107c60690();
                func_0x000107c606a8();
                uVar19 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
                uVar14 = uVar14 & (uVar19 ^ 0xffffffffffffffff);
                if ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
                  do {
                    if (*(ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 8) == uVar23) {
                      func_0x000107c61170(uVar8);
                      func_0x000107c6142c(lVar7);
                      goto LAB_101a93a14;
                    }
                    uVar14 = uVar14 + 1 & ~uVar19;
                  } while ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) !=
                           0);
                }
              }
              func_0x000107c61170();
            } while (uVar25 != uVar26);
          }
          func_0x000107c6142c(lVar7);
        }
      }
      if (*(long *)(uVar6 + _DAT_113046cf0) - 1U < 5) {
        if (iVar3 != 1) goto LAB_101a9367c;
LAB_101a93a14:
        puVar12 = puVar29;
        func_0x000107c61558();
        if (((ulong)puVar12 & 1) == 0) {
          func_0x000101a89908(0,*(long *)(puVar29 + 0x10) + 1,1);
        }
        uVar26 = *(ulong *)(puVar29 + 0x10);
        if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar26) {
          func_0x000101a89908(1 < *(ulong *)(puVar29 + 0x18),uVar26 + 1,1);
        }
        *(ulong *)(puVar29 + 0x10) = uVar26 + 1;
        *(ulong *)(puVar29 + uVar26 * 8 + 0x20) = uVar6;
        *(undefined **)(unaff_x22 + 0x98) = puVar29;
      }
      else {
        if (*(long *)(uVar6 + _DAT_113046cf0) == 6) {
          uVar9 = 0xd00000000000002f;
          func_0x000107c5fadc(0xd00000000000002f,0x800000010efce770);
          uVar26 = uVar2;
          func_0x000107c3ebd4();
          func_0x000107c61170(uVar9);
          if ((uVar26 & 1) != 0) {
            uVar11 = 0;
            func_0x000101a83aa4(0);
            uVar9 = uVar11;
            func_0x000101a968f0();
            lVar7 = 1;
            func_0x000107c5fe14(1,uVar11,uVar9);
            FUN_101a96934(auStack_a8,0xb);
            if (uVar10 >> 0x3e == 0) {
              uVar26 = *(ulong *)(uVar16 + 0x10);
            }
            else {
              uVar26 = uVar28;
              func_0x000107c60480();
            }
            if (uVar26 != 0) {
              uVar25 = 0;
              do {
                if ((uVar10 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar16 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93b88);
                    (*pcVar4)();
                  }
                  uVar8 = *(ulong *)(uVar10 + 0x20 + uVar25 * 8);
                  func_0x000107c61174();
                }
                else {
                  uVar8 = uVar25;
                  func_0x000101a91ff4(uVar25,*(undefined8 *)(unaff_x22 + 0x70));
                }
                if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101a93b84);
                  (*pcVar4)();
                }
                uVar25 = uVar25 + 1;
                if ((*(char *)(uVar8 + _DAT_113046d20 + 0x18) != '\x01') &&
                   (*(long *)(lVar7 + 0x10) != 0)) {
                  uVar23 = *(ulong *)(uVar8 + _DAT_113046d20 + 0x10);
                  func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
                  uVar14 = uVar23;
                  func_0x000107c60690();
                  func_0x000107c606a8();
                  uVar19 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
                  uVar14 = uVar14 & (uVar19 ^ 0xffffffffffffffff);
                  if ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
                    do {
                      if (*(ulong *)(*(long *)(lVar7 + 0x30) + uVar14 * 8) == uVar23) {
                        func_0x000107c6142c(lVar7);
                        func_0x000107c61170(uVar8);
                        goto LAB_101a93a14;
                      }
                      uVar14 = uVar14 + 1 & ~uVar19;
                    } while ((*(ulong *)(lVar7 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1)
                             != 0);
                  }
                }
                func_0x000107c61170();
              } while (uVar25 != uVar26);
            }
            func_0x000107c6142c(lVar7);
          }
        }
LAB_101a9367c:
        func_0x000107c61170(uVar6);
      }
      puVar12 = puVar29;
    } while (uVar18 != uVar20);
  }
  if (((long)puVar12 < 0) || (((ulong)puVar12 >> 0x3e & 1) != 0)) {
    puVar29 = puVar12;
    func_0x000107c60480();
  }
  else {
    puVar29 = *(undefined **)(puVar12 + 0x10);
  }
  if ((long)puVar29 < 1) {
    func_0x000107c61574(puVar12);
                    /* WARNING: Could not recover jumptable at 0x000101a93b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(1);
    return;
  }
  plVar13 = (long *)0x1f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_101a93b94;
  lVar22 = *(long *)(unaff_x22 + 0x88);
  plVar13[0x33] = *(long *)(unaff_x22 + 0x70);
  plVar13[0x34] = lVar22;
  plVar13[0x32] = (long)puVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a94254,0,0);
  return;
}



/* Entry: 101a93b94; end: 101a93beb;  */

void FUN_101a93b94(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  *(undefined8 *)(lVar2 + 0xa8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a93bec,0,0);
  return;
}



/* Entry: 101a93bec; end: 101a93f43;  */

void FUN_101a93bec(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x22;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  if (*(long *)(lVar8 + 0x10) == 0) {
    func_0x000107c6142c(lVar8);
  }
  else {
    FUN_101a97264(*(long *)(unaff_x22 + 0x88) + 0xb0,unaff_x22 + 0x38,0x112df4960,&UNK_10d9c2f88);
    if (*(long *)(unaff_x22 + 0x50) != 0) {
      iVar6 = (int)*(undefined8 *)(unaff_x22 + 0x90);
      func_0x000100cc4434(unaff_x22 + 0x38,unaff_x22 + 0x10);
      uVar2 = 0xd00000000000002f;
      func_0x000107c5fadc(0xd00000000000002f,0x800000010efce770);
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar2);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (iVar6 != 0) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar8 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
        uVar3 = uVar9;
        func_0x000101a90c90();
        *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
        func_0x000107c6142c(uVar9);
        piVar5 = *(int **)(lVar8 + 0x10);
        iVar6 = *piVar5;
        plVar4 = (long *)(ulong)(uint)piVar5[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xb8) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_101a93f44;
                    /* WARNING: Could not recover jumptable at 0x000101a93d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar6 + (long)piVar5))
                  (uVar3,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),
                   *(undefined8 *)(unaff_x22 + 0x80),uVar2,lVar8);
        return;
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)(unaff_x22 + 0xa8);
      if (lVar8 == 0) {
        func_0x000107c6142c(lVar11);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x000101a898d0(0,lVar8,0);
        puVar12 = (undefined8 *)(lVar11 + 0x28);
        lVar11 = lVar8;
        do {
          uVar2 = puVar12[-1];
          uVar3 = *puVar12;
          FUN_101a84ef8(uVar2,uVar3);
          uVar13 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
            func_0x000101a898d0(1 < *(ulong *)(puVar7 + 0x18),uVar13 + 1,1);
          }
          puVar12 = puVar12 + 3;
          *(ulong *)(puVar7 + 0x10) = uVar13 + 1;
          *(undefined8 *)(puVar7 + uVar13 * 0x10 + 0x20) = uVar2;
          *(undefined8 *)(puVar7 + uVar13 * 0x10 + 0x28) = uVar3;
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        lVar11 = *(long *)(unaff_x22 + 0xa8);
        func_0x000101a89898(0,lVar8,0);
        puVar12 = (undefined8 *)(lVar11 + 0x30);
        uVar13 = *(ulong *)(puVar10 + 0x10);
        do {
          uVar2 = *puVar12;
          uVar1 = uVar13 + 1;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar13) {
            func_0x000101a89898(1 < *(ulong *)(puVar10 + 0x18),uVar1,1);
          }
          *(ulong *)(puVar10 + 0x10) = uVar1;
          *(undefined8 *)(puVar10 + uVar13 * 8 + 0x20) = uVar2;
          lVar8 = lVar8 + -1;
          puVar12 = puVar12 + 3;
          uVar13 = uVar1;
        } while (lVar8 != 0);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa8));
      }
      *(undefined **)(unaff_x22 + 0xc0) = puVar10;
      *(undefined **)(unaff_x22 + 200) = puVar7;
      uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar8 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
      piVar5 = *(int **)(lVar8 + 8);
      iVar6 = *piVar5;
      plVar4 = (long *)(ulong)(uint)piVar5[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101a93fd0;
                    /* WARNING: Could not recover jumptable at 0x000101a93f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar6 + (long)piVar5))
                (puVar7,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),puVar10,
                 *(undefined8 *)(unaff_x22 + 0x80),uVar2,lVar8);
      return;
    }
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x000101a972ac(unaff_x22 + 0x38,0x112df4960,&UNK_10d9c2f88);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a93d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101a93f44; end: 101a93fcf;  */

void FUN_101a93f44(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xb0);
  *(undefined1 *)(lVar2 + 0xd8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a93f9c,0,0);
  return;
}



/* Entry: 101a93fd0; end: 101a94033;  */

void FUN_101a93fd0(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 200);
  uVar3 = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined1 *)(lVar2 + 0xd9) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a94034,0,0);
  return;
}



/* Entry: 101a94034; end: 101a94067;  */

void FUN_101a94034(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101a94064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0xd9));
  return;
}



/* Entry: 101a94068; end: 101a94237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a94068(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  lVar2 = *(long *)(unaff_x20 + 0xf8);
  func_0x0001000a8868(unaff_x20 + 0xd8,uVar1);
  lStack_48 = *(long *)(param_1 + _DAT_113046cf0);
  if (lStack_48 < 3) {
    if (lStack_48 == 0) {
      uVar5 = 0xe400000000000000;
      uVar4 = 0x656e6f6e;
    }
    else if (lStack_48 == 1) {
      uVar5 = 0x800000010efce270;
      uVar4 = 0xd00000000000001c;
    }
    else {
      if (lStack_48 != 2) goto LAB_101a94214;
      uVar5 = 0x800000010efce250;
      uVar4 = 0xd00000000000001d;
    }
  }
  else if (lStack_48 < 5) {
    if (lStack_48 == 3) {
      uVar5 = 0x800000010efce230;
      uVar4 = 0xd000000000000014;
    }
    else {
      if (lStack_48 != 4) {
LAB_101a94214:
        func_0x000107c60614(&UNK_110735378,&lStack_48,&UNK_110735378,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a94238);
        (*pcVar3)();
      }
      uVar4 = 0xd000000000000013;
      uVar5 = 0x800000010efce210;
    }
  }
  else if (lStack_48 == 5) {
    uVar5 = 0xec00000074696b5f;
    uVar4 = 0x6576697461657263;
  }
  else {
    if (lStack_48 != 6) goto LAB_101a94214;
    uVar5 = 0xeb00000000617265;
    uVar4 = 0x6d61635f70616e73;
  }
  (**(code **)(lVar2 + 0x18))(uVar4,uVar5,uVar1,lVar2);
  func_0x000107c6142c(uVar5);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  lVar2 = *(long *)(unaff_x20 + 0xa8);
  func_0x0001000a8868(unaff_x20 + 0x88,uVar1);
  (**(code **)(lVar2 + 0x10))(param_1,uVar1,lVar2);
  return;
}



/* Entry: 101a94238; end: 101a94253;  */

void FUN_101a94238(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1a0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 400) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a94254,0,0);
  return;
}



/* Entry: 101a94254; end: 101a9470b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a94254(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x22;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 400);
  auVar22 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x198),
                     *(undefined1 (*) [16])(unaff_x22 + 0x198),8,1);
  *(long *)(unaff_x22 + 0x130) = auVar22._8_8_;
  *(long *)(unaff_x22 + 0x128) = auVar22._0_8_;
  iVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    uVar6 = 0x112df4970;
    func_0x0001000285a8(0x112df4970,&UNK_10d9c2fb0);
    plVar5 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1a8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101a9470c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar5,unaff_x22 + 0x170,uVar6,uVar6,0,0,&UNK_10d9c2fa8,unaff_x22 + 0x110,uVar6,uVar6);
    return;
  }
  lVar1 = unaff_x22 + 0x10;
  uVar18 = *(ulong *)(unaff_x22 + 400);
  uVar6 = 0x112df4970;
  func_0x0001000285a8(0x112df4970,&UNK_10d9c2fb0);
  func_0x000107c615ac(lVar1);
  *(long *)(unaff_x22 + 0x178) = lVar1;
  if (uVar18 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar18 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 400)) {
      uVar7 = *(ulong *)(unaff_x22 + 400);
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a9470c);
      (*pcVar3)();
    }
    uVar19 = 0;
    lVar14 = *(long *)(unaff_x22 + 400);
    do {
      if ((uVar18 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(lVar14 + 0x20 + uVar19 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar19;
        FUN_101a91cb4(uVar19,*(undefined8 *)(unaff_x22 + 400));
      }
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar16 = *(undefined8 *)(uVar8 + _DAT_113046cf0);
      FUN_101a956dc(uVar16,*(undefined8 *)(uVar8 + _DAT_113046cf8),
                    *(undefined8 *)(unaff_x22 + 0x198));
      lVar10 = 0x112d453c8;
      func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
      uVar12 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xf;
      uVar9 = uVar12 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar10 = 0;
      func_0x000107c5fd0c();
      lVar21 = *(long *)(lVar10 + -8);
      (**(code **)(lVar21 + 0x38))(uVar9,1,1,lVar10);
      puVar11 = &UNK_110438148;
      func_0x000107c613fc(&UNK_110438148,0x38,7);
      *(long *)(puVar11 + 0x10) = 0;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      *(undefined8 *)(puVar11 + 0x20) = uVar16;
      *(undefined8 *)(puVar11 + 0x28) = uVar2;
      *(ulong *)(puVar11 + 0x30) = uVar8;
      uVar12 = uVar12 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      FUN_101a97264(uVar9,uVar12,0x112d453c8,&UNK_10d90ac60);
      uVar17 = uVar12;
      (**(code **)(lVar21 + 0x30))(uVar12,1,lVar10);
      func_0x000107c6157c(uVar2);
      func_0x000107c61174(uVar8);
      if ((int)uVar17 == 1) {
        func_0x000101a972ac(uVar12,0x112d453c8,&UNK_10d90ac60);
        uVar17 = 0x3100;
      }
      else {
        uVar17 = uVar8;
        func_0x000107c5fd08();
        (**(code **)(lVar21 + 8))(uVar12,lVar10);
        uVar17 = uVar17 & 0xff | 0x3100;
      }
      func_0x000107c615c0(uVar12);
      lVar10 = *(long *)(puVar11 + 0x10);
      if (lVar10 == 0) {
        lVar21 = 0;
        lVar20 = 0;
      }
      else {
        lVar20 = *(long *)(puVar11 + 0x18);
        lVar21 = lVar10;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar10);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar10);
      }
      puVar13 = &UNK_110438170;
      func_0x000107c613fc(&UNK_110438170,0x20,7);
      *(undefined **)(puVar13 + 0x10) = &UNK_10d9c2fd0;
      *(undefined **)(puVar13 + 0x18) = puVar11;
      func_0x000107c6157c(puVar11);
      if (lVar20 == 0 && lVar21 == 0) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x138) = 0;
        *(undefined8 *)(unaff_x22 + 0x140) = 0;
        *(long *)(unaff_x22 + 0x148) = lVar21;
        *(long *)(unaff_x22 + 0x150) = lVar20;
        puVar15 = (undefined8 *)(unaff_x22 + 0x138);
      }
      uVar19 = uVar19 + 1;
      *(undefined8 *)(unaff_x22 + 0x158) = 1;
      *(undefined8 **)(unaff_x22 + 0x160) = puVar15;
      *(long *)(unaff_x22 + 0x168) = lVar1;
      func_0x000107c615bc(uVar17,unaff_x22 + 0x158,uVar6,&UNK_10d9c2fd8,puVar13);
      func_0x000107c61574(puVar11);
      func_0x000107c61170(uVar8);
      func_0x000107c61574(uVar17);
      func_0x000101a972ac(uVar9,0x112d453c8,&UNK_10d90ac60);
      func_0x000107c615c0(uVar9);
    } while (uVar7 != uVar19);
  }
  *(undefined **)(unaff_x22 + 0x170) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = 0x112df4978;
  func_0x0001000285a8(0x112df4978,&UNK_10d9c2fe0);
  *(long *)(unaff_x22 + 0x1b0) = lVar14;
  lVar10 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar10;
  uVar18 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar18;
  func_0x000107c5fcc4(uVar18,lVar1,uVar6);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a9475c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)(plVar5,unaff_x22 + 0x180,lVar14);
  return;
}



/* Entry: 101a9470c; end: 101a9475b;  */

void FUN_101a9470c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 400);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1a8));
  *(undefined8 *)(lVar2 + 0x1e8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a94c08,0,0);
  return;
}



/* Entry: 101a9475c; end: 101a947a3;  */

void FUN_101a9475c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a947a4,0,0);
  return;
}



/* Entry: 101a947a4; end: 101a94973;  */

void FUN_101a947a4(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long unaff_x22;
  long lVar9;
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x22 + 0x180);
  if (lVar6 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
    (**(code **)(*(long *)(unaff_x22 + 0x1b8) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x1b0));
    func_0x000107c615c0(uVar3);
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1e0) = plVar4;
    func_0x0001000285a8(0x112df4980,&UNK_10d9c2fe8);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a94b7c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
    return;
  }
  uVar7 = *(ulong *)(lVar6 + 0x10);
  lVar9 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  if (!SCARRY8(lVar9,uVar7)) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61558();
    if (((int)puVar2 == 0) ||
       (uVar5 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar5 < (long)(lVar9 + uVar7))) {
      func_0x000101a86b58();
      uVar5 = *(ulong *)(puVar2 + 0x18) >> 1;
      puVar8 = puVar2;
    }
    *(undefined **)(unaff_x22 + 0x1d0) = puVar8;
    if (*(long *)(lVar6 + 0x10) == 0) {
      func_0x000107c6142c(lVar6);
      if (uVar7 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9496c);
        (*pcVar1)();
      }
    }
    else {
      lVar9 = *(long *)(puVar8 + 0x10);
      if (uVar5 - lVar9 < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a94970);
        (*pcVar1)();
      }
      uVar3 = 0x112df4178;
      func_0x0001000285a8(0x112df4178,&UNK_10d9c2ed0);
      func_0x000107c6140c(puVar8 + lVar9 * 0x18 + 0x20,lVar6 + 0x20,uVar7,uVar3);
      func_0x000107c6142c(lVar6);
      if (uVar7 != 0) {
        if (SCARRY8(*(long *)(puVar8 + 0x10),uVar7)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a94974);
          (*pcVar1)();
        }
        *(ulong *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + uVar7;
      }
    }
    *(undefined **)(unaff_x22 + 0x170) = puVar8;
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1d8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a94974;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar4,unaff_x22 + 0x180,*(undefined8 *)(unaff_x22 + 0x1b0));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a94968);
  (*pcVar1)();
}



/* Entry: 101a94974; end: 101a949bb;  */

void FUN_101a94974(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a949bc,0,0);
  return;
}



/* Entry: 101a949bc; end: 101a94b7b;  */

void FUN_101a949bc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0x180);
  if (lVar8 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1c0);
    (**(code **)(*(long *)(unaff_x22 + 0x1b8) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x1b0));
    func_0x000107c615c0(uVar3);
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1e0) = plVar4;
    func_0x0001000285a8(0x112df4980,&UNK_10d9c2fe8);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a94b7c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x1d0);
  uVar6 = *(ulong *)(lVar8 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x10);
  if (!SCARRY8(lVar9,uVar6)) {
    lVar2 = lVar7;
    func_0x000107c61558();
    if (((int)lVar2 == 0) ||
       (uVar5 = *(ulong *)(lVar7 + 0x18) >> 1, (long)uVar5 < (long)(lVar9 + uVar6))) {
      func_0x000101a86b58();
      uVar5 = *(ulong *)(lVar2 + 0x18) >> 1;
      lVar7 = lVar2;
    }
    *(long *)(unaff_x22 + 0x1d0) = lVar7;
    if (*(long *)(lVar8 + 0x10) == 0) {
      func_0x000107c6142c(lVar8);
      if (uVar6 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a94b74);
        (*pcVar1)();
      }
    }
    else {
      lVar9 = *(long *)(lVar7 + 0x10);
      if (uVar5 - lVar9 < uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a94b78);
        (*pcVar1)();
      }
      uVar3 = 0x112df4178;
      func_0x0001000285a8(0x112df4178,&UNK_10d9c2ed0);
      func_0x000107c6140c(lVar7 + lVar9 * 0x18 + 0x20,lVar8 + 0x20,uVar6,uVar3);
      func_0x000107c6142c(lVar8);
      if (uVar6 != 0) {
        if (SCARRY8(*(long *)(lVar7 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a94b7c);
          (*pcVar1)();
        }
        *(ulong *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + uVar6;
      }
    }
    *(long *)(unaff_x22 + 0x170) = lVar7;
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1d8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101a94974;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar4,unaff_x22 + 0x180,*(undefined8 *)(unaff_x22 + 0x1b0));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a94b70);
  (*pcVar1)();
}



/* Entry: 101a94b7c; end: 101a94c07;  */

void FUN_101a94b7c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a94bc4,0,0);
  return;
}



/* Entry: 101a94c08; end: 101a94edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a94c08(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar7 = *(ulong *)(unaff_x22 + 400);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x170);
  if (uVar7 >> 0x3e == 0) {
    uVar14 = *(ulong *)((*(ulong *)(unaff_x22 + 0x1e8) & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = *(ulong *)(unaff_x22 + 0x1e8) & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar14 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar14 != 0) {
    uVar7 = 0;
    uVar8 = *(ulong *)(unaff_x22 + 0x1e8);
    lVar9 = *(long *)(unaff_x22 + 400);
    lVar12 = *(long *)(unaff_x22 + 0x1a0);
    uStack_78 = 0x800000010efce230;
    uStack_70 = 0x800000010efce210;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101a94ea0);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(lVar9 + 0x20 + uVar7 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar7;
        FUN_101a91cb4(uVar7,*(undefined8 *)(unaff_x22 + 400));
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101a94e9c);
        (*pcVar4)();
      }
      uVar2 = *(undefined8 *)(lVar12 + 0xf0);
      lVar3 = *(long *)(lVar12 + 0xf8);
      func_0x0001000a8868(lVar12 + 0xd8,uVar2);
      lVar10 = *(long *)(uVar5 + _DAT_113046cf0);
      if (lVar10 < 3) {
        if (lVar10 == 0) {
          uVar13 = 0xe400000000000000;
          uVar6 = 0x656e6f6e;
        }
        else if (lVar10 == 1) {
          uVar6 = 0xd00000000000001c;
          uVar13 = 0x800000010efce270;
        }
        else {
          if (lVar10 != 2) goto LAB_101a94e58;
          uVar6 = 0xd00000000000001d;
          uVar13 = 0x800000010efce250;
        }
      }
      else if (lVar10 < 5) {
        if (lVar10 == 3) {
          uVar6 = 0xd000000000000014;
          uVar13 = uStack_78;
        }
        else {
          if (lVar10 != 4) {
LAB_101a94e58:
            *(long *)(unaff_x22 + 0x188) = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                      (&UNK_110735378,unaff_x22 + 0x188,&UNK_110735378,PTR___sSiN_11034deb0);
            return;
          }
          uVar6 = 0xd000000000000013;
          uVar13 = uStack_70;
        }
      }
      else if (lVar10 == 5) {
        uVar6 = 0x6576697461657263;
        uVar13 = 0xec00000074696b5f;
      }
      else {
        if (lVar10 != 6) goto LAB_101a94e58;
        uVar6 = 0x6d61635f70616e73;
        uVar13 = 0xeb00000000617265;
      }
      (**(code **)(lVar3 + 0x18))(uVar6,uVar13,uVar2,lVar3);
      func_0x000107c6142c(uVar13);
      uVar2 = *(undefined8 *)(lVar12 + 0xa0);
      lVar3 = *(long *)(lVar12 + 0xa8);
      func_0x0001000a8868(lVar12 + 0x88,uVar2);
      (**(code **)(lVar3 + 0x10))(uVar5,uVar2,lVar3);
      func_0x000107c61170(uVar5);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x000101a94edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar11);
  return;
}



/* Entry: 101a94ee0; end: 101a94f8b;  */

void FUN_101a94ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar3 = 0x112df4978;
  func_0x0001000285a8(0x112df4978,&UNK_10d9c2fe0);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a94f8c,0,0);
  return;
}



/* Entry: 101a94f8c; end: 101a952f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a94f8c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x22;
  ulong uVar19;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x60);
  if (uVar15 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar15 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar15) {
      uVar4 = uVar15;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a952f4);
      (*pcVar3)();
    }
    uVar17 = 0;
    lVar1 = *(long *)(unaff_x22 + 0x60);
    uVar11 = **(undefined8 **)(unaff_x22 + 0x58);
    do {
      if ((uVar15 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(lVar1 + 0x20 + uVar17 * 8);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar17;
        FUN_101a91cb4(uVar17,*(undefined8 *)(unaff_x22 + 0x60));
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar6 = *(undefined8 *)(uVar5 + _DAT_113046cf0);
      FUN_101a956dc(uVar6,*(undefined8 *)(uVar5 + _DAT_113046cf8),*(undefined8 *)(unaff_x22 + 0x70))
      ;
      lVar7 = 0;
      func_0x000107c5fd0c();
      lVar18 = *(long *)(lVar7 + -8);
      (**(code **)(lVar18 + 0x38))(uVar2,1,1,lVar7);
      puVar8 = &UNK_110438238;
      func_0x000107c613fc(&UNK_110438238,0x38,7);
      *(long *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x20) = uVar6;
      *(undefined8 *)(puVar8 + 0x28) = uVar16;
      *(ulong *)(puVar8 + 0x30) = uVar5;
      FUN_101a97264(uVar2,uVar14,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar18 + 0x30))(uVar14,1,lVar7);
      func_0x000107c6157c(uVar16);
      func_0x000107c61174();
      uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
      if ((int)uVar14 == 1) {
        func_0x000101a972ac(uVar16,0x112d453c8,&UNK_10d90ac60);
        uVar19 = 0x3100;
      }
      else {
        uVar19 = uVar5;
        func_0x000107c5fd08();
        (**(code **)(lVar18 + 8))(uVar16,lVar7);
        uVar19 = uVar19 & 0xff | 0x3100;
      }
      lVar7 = *(long *)(puVar8 + 0x10);
      if (lVar7 == 0) {
        lVar18 = 0;
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(puVar8 + 0x18);
        lVar18 = lVar7;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar7);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar7);
      }
      puVar9 = &UNK_110438260;
      func_0x000107c613fc(&UNK_110438260,0x20,7);
      *(undefined **)(puVar9 + 0x10) = &UNK_10d9c3058;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      func_0x000107c6157c(puVar8);
      uVar14 = 0x112df4970;
      func_0x0001000285a8(0x112df4970,&UNK_10d9c2fb0);
      puVar12 = (undefined8 *)0x0;
      if (lVar13 != 0 || lVar18 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar18;
        *(long *)(unaff_x22 + 0x28) = lVar13;
        puVar12 = (undefined8 *)(unaff_x22 + 0x10);
      }
      uVar17 = uVar17 + 1;
      uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar12;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
      func_0x000107c615bc(uVar19,unaff_x22 + 0x30,uVar14,&UNK_10d9c3060,puVar9);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(uVar19);
      func_0x000101a972ac(uVar16,0x112d453c8,&UNK_10d90ac60);
    } while (uVar4 != uVar17);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar14 = **(undefined8 **)(unaff_x22 + 0x58);
  uVar11 = 0x112df4970;
  func_0x0001000285a8(0x112df4970,&UNK_10d9c2fb0);
  func_0x000107c5fcc4(uVar16,uVar14,uVar11);
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101a952f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar10,unaff_x22 + 0x48,*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 101a952f4; end: 101a9533b;  */

void FUN_101a952f4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a9533c,0,0);
  return;
}



/* Entry: 101a9533c; end: 101a954f3;  */

void FUN_101a9533c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined *puVar12;
  
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(unaff_x22 + 0x48);
  if (lVar10 == 0) {
    lVar10 = *(long *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
    **(undefined8 **)(unaff_x22 + 0x50) = PTR___swiftEmptyArrayStorage_11034f1c8;
    (**(code **)(lVar10 + 8))(uVar1,uVar2);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101a95488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(ulong *)(lVar10 + 0x10);
  lVar9 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  if (!SCARRY8(lVar9,uVar8)) {
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61558();
    if (((int)puVar4 == 0) ||
       (uVar7 = *(ulong *)(puVar12 + 0x18) >> 1, (long)uVar7 < (long)(lVar9 + uVar8))) {
      func_0x000101a86b58();
      uVar7 = *(ulong *)(puVar4 + 0x18) >> 1;
      puVar12 = puVar4;
    }
    *(undefined **)(unaff_x22 + 0xa8) = puVar12;
    if (*(long *)(lVar10 + 0x10) == 0) {
      func_0x000107c6142c(lVar10);
      if (uVar8 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a954ec);
        (*pcVar3)();
      }
    }
    else {
      lVar9 = *(long *)(puVar12 + 0x10);
      if (uVar7 - lVar9 < uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a954f0);
        (*pcVar3)();
      }
      uVar5 = 0x112df4178;
      func_0x0001000285a8(0x112df4178,&UNK_10d9c2ed0);
      func_0x000107c6140c(puVar12 + lVar9 * 0x18 + 0x20,lVar10 + 0x20,uVar8,uVar5);
      func_0x000107c6142c(lVar10);
      if (uVar8 != 0) {
        if (SCARRY8(*(long *)(puVar12 + 0x10),uVar8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a954f4);
          (*pcVar3)();
        }
        *(ulong *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + uVar8;
      }
    }
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101a954f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar6,(long *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a954e8);
  (*pcVar3)();
}



/* Entry: 101a954f4; end: 101a9553b;  */

void FUN_101a954f4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a9553c,0,0);
  return;
}



/* Entry: 101a9553c; end: 101a956db;  */

void FUN_101a9553c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)(unaff_x22 + 0x48);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  if (lVar11 == 0) {
    lVar11 = *(long *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    **(long **)(unaff_x22 + 0x50) = lVar8;
    (**(code **)(lVar11 + 8))(uVar1,uVar2);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101a95670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(ulong *)(lVar11 + 0x10);
  lVar9 = *(long *)(lVar8 + 0x10);
  if (!SCARRY8(lVar9,uVar10)) {
    lVar4 = lVar8;
    func_0x000107c61558();
    if (((int)lVar4 == 0) ||
       (uVar7 = *(ulong *)(lVar8 + 0x18) >> 1, (long)uVar7 < (long)(lVar9 + uVar10))) {
      func_0x000101a86b58();
      uVar7 = *(ulong *)(lVar4 + 0x18) >> 1;
      lVar8 = lVar4;
    }
    *(long *)(unaff_x22 + 0xa8) = lVar8;
    if (*(long *)(lVar11 + 0x10) == 0) {
      func_0x000107c6142c(lVar11);
      if (uVar10 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a956d4);
        (*pcVar3)();
      }
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x10);
      if (uVar7 - lVar9 < uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a956d8);
        (*pcVar3)();
      }
      uVar5 = 0x112df4178;
      func_0x0001000285a8(0x112df4178,&UNK_10d9c2ed0);
      func_0x000107c6140c(lVar8 + lVar9 * 0x18 + 0x20,lVar11 + 0x20,uVar10,uVar5);
      func_0x000107c6142c(lVar11);
      if (uVar10 != 0) {
        if (SCARRY8(*(long *)(lVar8 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a956dc);
          (*pcVar3)();
        }
        *(ulong *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + uVar10;
      }
    }
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101a954f4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar6,(long *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101a956d0);
  (*pcVar3)();
}



/* Entry: 101a956dc; end: 101a9596b;  */

undefined * FUN_101a956dc(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  int iVar8;
  undefined1 auStack_78 [40];
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 == 2) {
    iVar8 = (int)*(undefined8 *)(*(long *)(unaff_x20 + 0x108) + 0x10);
    uVar1 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010efce840);
    func_0x000107c3ebd4();
    func_0x000107c61170();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (iVar8 != 0) {
      FUN_101a97f2c();
      uVar2 = uVar1;
      FUN_101a92bc0();
      func_0x000107c6142c(uVar1);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((uVar2 & 1) != 0) {
        FUN_101a973d8(unaff_x20 + 0x60,auStack_78);
        puVar3 = (undefined *)0x0;
        FUN_101a86e08(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar1 = *(ulong *)(puVar3 + 0x10);
        puVar7 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
          FUN_101a86e08(puVar7,uVar1 + 1,1,puVar3);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        func_0x000100cc4434(auStack_78,puVar7 + uVar1 * 0x28 + 0x20);
      }
    }
  }
  if ((param_1 < 6) || (param_1 != 6)) {
    if (param_2 != 1) {
      return puVar7;
    }
    lVar4 = unaff_x20 + 0x10;
  }
  else {
    iVar8 = (int)*(undefined8 *)(unaff_x20 + 0x100);
    uVar5 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010efce770);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar5);
    if (iVar8 == 0) {
      return puVar7;
    }
    uVar1 = 0x112df4190;
    func_0x0001000285a8(0x112df4190,&UNK_10d9c2980);
    func_0x000107c61538();
    FUN_101a976d8();
    uVar2 = uVar1;
    FUN_101a92bc0();
    func_0x000107c6142c(uVar1);
    if ((uVar2 & 1) == 0) {
      return puVar7;
    }
    lVar4 = unaff_x20 + 0x38;
  }
  FUN_101a973d8(lVar4,auStack_78);
  puVar3 = puVar7;
  func_0x000107c61558();
  puVar6 = puVar7;
  if (((ulong)puVar3 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_101a86e08(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
  }
  uVar1 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_101a86e08(puVar7,uVar1 + 1,1,puVar6);
  }
  *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
  func_0x000100cc4434(auStack_78,puVar7 + uVar1 * 0x28 + 0x20);
  return puVar7;
}



/* Entry: 101a9596c; end: 101a9598f;  */

void FUN_101a9596c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x228) = param_6;
  *(undefined8 *)(unaff_x22 + 0x220) = param_5;
  *(undefined8 *)(unaff_x22 + 0x218) = param_4;
  *(undefined8 *)(unaff_x22 + 0x210) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a95990,0,0);
  return;
}



/* Entry: 101a95990; end: 101a95def;  */

void FUN_101a95990(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x228);
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    uVar4 = 0x112df4988;
    func_0x0001000285a8(0x112df4988,&UNK_10d9c3008);
    uVar15 = 0x112df4970;
    func_0x0001000285a8(0x112df4970,&UNK_10d9c2fb0);
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x230) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101a95df0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar3,*(undefined8 *)(unaff_x22 + 0x210),uVar4,uVar15,0,0,&UNK_10d9c3000,unaff_x22 + 0x110,
      uVar4,uVar15);
    return;
  }
  lVar1 = unaff_x22 + 0x10;
  lVar14 = *(long *)(unaff_x22 + 0x218);
  uVar4 = 0x112df4988;
  func_0x0001000285a8(0x112df4988,&UNK_10d9c3008);
  func_0x000107c615ac(lVar1);
  *(long *)(unaff_x22 + 0x208) = lVar1;
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0x218) + 0x20;
    do {
      lVar7 = 0x112d453c8;
      uVar12 = *(ulong *)(unaff_x22 + 0x228);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
      FUN_101a973d8(lVar5,unaff_x22 + 0x138);
      func_0x000100cc4434(unaff_x22 + 0x138,unaff_x22 + 0x160);
      func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
      uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
      uVar6 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar7 = 0;
      func_0x000107c5fd0c();
      lVar17 = *(long *)(lVar7 + -8);
      (**(code **)(lVar17 + 0x38))(uVar6,1,1,lVar7);
      FUN_101a973d8(unaff_x22 + 0x160,unaff_x22 + 0x188);
      puVar8 = &UNK_110438198;
      func_0x000107c613fc(&UNK_110438198,0x58,7);
      *(long *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x20) = uVar15;
      *(ulong *)(puVar8 + 0x28) = uVar12;
      func_0x000100cc4434(unaff_x22 + 0x188,puVar8 + 0x30);
      uVar9 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      FUN_101a97264(uVar6,uVar9,0x112d453c8,&UNK_10d90ac60);
      uVar16 = uVar9;
      (**(code **)(lVar17 + 0x30))(uVar9,1,lVar7);
      func_0x000107c6157c(uVar15);
      func_0x000107c61174(uVar12);
      if ((int)uVar16 == 1) {
        func_0x000101a972ac(uVar9,0x112d453c8,&UNK_10d90ac60);
        uVar16 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar17 + 8))(uVar9,lVar7);
        uVar16 = uVar12 & 0xff | 0x3100;
      }
      func_0x000107c615c0(uVar9);
      lVar7 = *(long *)(puVar8 + 0x10);
      if (lVar7 == 0) {
        lVar17 = 0;
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(puVar8 + 0x18);
        lVar17 = lVar7;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar7);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar7);
      }
      puVar10 = &UNK_1104381c0;
      func_0x000107c613fc(&UNK_1104381c0,0x20,7);
      *(undefined **)(puVar10 + 0x10) = &UNK_10d9c3020;
      *(undefined **)(puVar10 + 0x18) = puVar8;
      func_0x000107c6157c(puVar8);
      if (lVar13 == 0 && lVar17 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
        *(long *)(unaff_x22 + 0x1c0) = lVar17;
        *(long *)(unaff_x22 + 0x1c8) = lVar13;
        puVar11 = (undefined8 *)(unaff_x22 + 0x1b0);
      }
      *(undefined8 *)(unaff_x22 + 0x1f0) = 1;
      *(undefined8 **)(unaff_x22 + 0x1f8) = puVar11;
      *(long *)(unaff_x22 + 0x200) = lVar1;
      func_0x000107c615bc(uVar16,unaff_x22 + 0x1f0,uVar4,&UNK_10d9c3028,puVar10);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(uVar16);
      func_0x000101a972ac(uVar6,0x112d453c8,&UNK_10d90ac60);
      func_0x0001000834e4(unaff_x22 + 0x160);
      func_0x000107c615c0(uVar6);
      lVar5 = lVar5 + 0x28;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  lVar14 = 0x112df4990;
  func_0x0001000285a8(0x112df4990,&UNK_10d9c3030);
  *(long *)(unaff_x22 + 0x238) = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x240) = lVar14;
  uVar9 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x248) = uVar9;
  func_0x000107c5fcc4(uVar9,lVar1,uVar4);
  *(undefined **)(unaff_x22 + 0x250) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 600) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a95e2c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar3,unaff_x22 + 0x1d0,*(undefined8 *)(unaff_x22 + 0x238));
  return;
}



/* Entry: 101a95df0; end: 101a95e73;  */

void FUN_101a95df0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x000101a95e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a95e74; end: 101a96043;  */

void FUN_101a95e74(void)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  cVar1 = *(char *)(unaff_x22 + 0x1e9);
  if (cVar1 == '\x01') {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
    lVar6 = *(long *)(unaff_x22 + 0x240);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
    **(undefined8 **)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x250);
    (**(code **)(lVar6 + 8))(uVar7,uVar5);
    func_0x000107c615c0(uVar7);
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x260) = plVar3;
    func_0x0001000285a8(0x112df4998,&UNK_10d9c3038);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101a96044;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
    return;
  }
  cVar2 = *(char *)(unaff_x22 + 0x1e8);
  if (cVar2 != '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar9 = *(ulong *)(unaff_x22 + 0x250);
    FUN_101a97508(uVar5,uVar7,uVar8,cVar2);
    func_0x000107c61558();
    uVar10 = *(ulong *)(unaff_x22 + 0x250);
    uVar4 = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar4 = 0;
      func_0x000101a86b58(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar9 = *(ulong *)(uVar4 + 0x10);
    uVar10 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar9) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000101a86b58(uVar10,uVar9 + 1,1,uVar4);
    }
    *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
    lVar6 = uVar10 + uVar9 * 0x18;
    *(undefined8 *)(lVar6 + 0x20) = uVar5;
    *(undefined8 *)(lVar6 + 0x28) = uVar7;
    *(undefined8 *)(lVar6 + 0x30) = uVar8;
    func_0x000101a97518(uVar5,uVar7,uVar8,cVar2,cVar1);
    *(ulong *)(unaff_x22 + 0x250) = uVar10;
  }
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 600) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a95e2c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar3,unaff_x22 + 0x1d0,*(undefined8 *)(unaff_x22 + 0x238));
  return;
}



/* Entry: 101a96044; end: 101a96167;  */

void FUN_101a96044(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x260));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a9608c,0,0);
  return;
}



/* Entry: 101a96168; end: 101a96473;  */

void FUN_101a96168(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0xf0) + 0x10);
  if (lVar8 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0xf0) + 0x20;
    uVar6 = **(undefined8 **)(unaff_x22 + 0xe8);
    do {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar13 = *(ulong *)(unaff_x22 + 0x100);
      FUN_101a973d8(lVar2,unaff_x22 + 0x10);
      func_0x000100cc4434(unaff_x22 + 0x10,unaff_x22 + 0x38);
      lVar3 = 0;
      func_0x000107c5fd0c();
      lVar11 = *(long *)(lVar3 + -8);
      (**(code **)(lVar11 + 0x38))(uVar1,1,1,lVar3);
      FUN_101a973d8(unaff_x22 + 0x38,unaff_x22 + 0x60);
      puVar4 = &UNK_1104381e8;
      func_0x000107c613fc(&UNK_1104381e8,0x58,7);
      plVar12 = (long *)(puVar4 + 0x10);
      *plVar12 = 0;
      *(undefined8 *)(puVar4 + 0x18) = 0;
      *(undefined8 *)(puVar4 + 0x20) = uVar10;
      *(ulong *)(puVar4 + 0x28) = uVar13;
      func_0x000100cc4434(unaff_x22 + 0x60,puVar4 + 0x30);
      FUN_101a97264(uVar1,uVar9,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar11 + 0x30))(uVar9,1,lVar3);
      func_0x000107c6157c(uVar10);
      func_0x000107c61174(uVar13);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
      if ((int)uVar9 == 1) {
        func_0x000101a972ac(uVar10,0x112d453c8,&UNK_10d90ac60);
        uVar13 = 0x3100;
        lVar3 = *plVar12;
        if (lVar3 == 0) goto LAB_101a96314;
LAB_101a96348:
        lVar14 = *(long *)(puVar4 + 0x18);
        lVar11 = lVar3;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar3);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar3);
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar11 + 8))(uVar10,lVar3);
        uVar13 = uVar13 & 0xff | 0x3100;
        lVar3 = *plVar12;
        if (lVar3 != 0) goto LAB_101a96348;
LAB_101a96314:
        lVar11 = 0;
        lVar14 = 0;
      }
      puVar5 = &UNK_110438210;
      func_0x000107c613fc(&UNK_110438210,0x20,7);
      *(undefined **)(puVar5 + 0x10) = &UNK_10d9c3040;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      func_0x000107c6157c(puVar4);
      uVar9 = 0x112df4988;
      func_0x0001000285a8(0x112df4988,&UNK_10d9c3008);
      puVar7 = (undefined8 *)0x0;
      if (lVar14 != 0 || lVar11 != 0) {
        *(undefined8 *)(unaff_x22 + 0x88) = 0;
        *(undefined8 *)(unaff_x22 + 0x90) = 0;
        *(long *)(unaff_x22 + 0x98) = lVar11;
        *(long *)(unaff_x22 + 0xa0) = lVar14;
        puVar7 = (undefined8 *)(unaff_x22 + 0x88);
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
      *(undefined8 *)(unaff_x22 + 200) = 1;
      *(undefined8 **)(unaff_x22 + 0xd0) = puVar7;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar6;
      func_0x000107c615bc(uVar13,unaff_x22 + 200,uVar9,&UNK_10d9c3048,puVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar13);
      func_0x000101a972ac(uVar10,0x112d453c8,&UNK_10d90ac60);
      func_0x0001000834e4(unaff_x22 + 0x38);
      lVar2 = lVar2 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar9 = **(undefined8 **)(unaff_x22 + 0xe8);
  uVar6 = 0x112df4988;
  func_0x0001000285a8(0x112df4988,&UNK_10d9c3008);
  func_0x000107c5fcc4(uVar10,uVar9,uVar6);
  *(undefined **)(unaff_x22 + 0x130) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar12 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101a96474;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar12,unaff_x22 + 0xa8,*(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Entry: 101a96474; end: 101a964bb;  */

void FUN_101a96474(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a964bc,0,0);
  return;
}



/* Entry: 101a964bc; end: 101a96663;  */

void FUN_101a964bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  ulong uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  cVar4 = *(char *)(unaff_x22 + 0xc1);
  if (cVar4 == '\x01') {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar8 = *(long *)(unaff_x22 + 0x110);
    **(undefined8 **)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x130);
    (**(code **)(lVar8 + 8))(uVar1,uVar2);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a9654c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  cVar5 = *(char *)(unaff_x22 + 0xc0);
  if (cVar5 != '\x01') {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(ulong *)(unaff_x22 + 0x130);
    FUN_101a97508(uVar10,uVar1,uVar2,cVar5);
    func_0x000107c61558();
    uVar11 = *(ulong *)(unaff_x22 + 0x130);
    uVar7 = uVar11;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
      func_0x000101a86b58(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    }
    uVar9 = *(ulong *)(uVar7 + 0x10);
    uVar11 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar9) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000101a86b58(uVar11,uVar9 + 1,1,uVar7);
    }
    *(ulong *)(uVar11 + 0x10) = uVar9 + 1;
    lVar8 = uVar11 + uVar9 * 0x18;
    *(undefined8 *)(lVar8 + 0x20) = uVar10;
    *(undefined8 *)(lVar8 + 0x28) = uVar1;
    *(undefined8 *)(lVar8 + 0x30) = uVar2;
    func_0x000101a97518(uVar10,uVar1,uVar2,cVar5,cVar4);
    *(ulong *)(unaff_x22 + 0x130) = uVar11;
  }
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a96474;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar6,(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x108));
  return;
}



/* Entry: 101a96664; end: 101a9667f;  */

void FUN_101a96664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a96680,0,0);
  return;
}



/* Entry: 101a96680; end: 101a9670b;  */

void FUN_101a96680(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a9670c;
                    /* WARNING: Could not recover jumptable at 0x000101a96708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x20),lVar7 + 0x88,uVar2,lVar3);
  return;
}



/* Entry: 101a9670c; end: 101a9684b;  */

void FUN_101a9670c(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined8 *)(lVar1 + 0x40) = param_2;
  *(undefined2 *)(lVar1 + 0x48) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a96760,0,0);
  return;
}



/* Entry: 101a9684c; end: 101a968af;  */

void FUN_101a9684c(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a968b0;
                    /* WARNING: Could not recover jumptable at 0x000101a968ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 101a968b0; end: 101a96933;  */

void FUN_101a968b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a968ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a96934; end: 101a96a1f;  */

undefined8 FUN_101a96934(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *unaff_x20;
  ulong uVar3;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar3 = param_2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(ulong *)(*(long *)(lVar4 + 0x30) + uVar3 * 8) == param_2) {
        uVar1 = 0;
        goto LAB_101a96a04;
      }
      uVar3 = uVar3 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_101a96a9c(param_2,uVar3,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
LAB_101a96a04:
  *param_1 = param_2;
  return uVar1;
}



/* Entry: 101a96a20; end: 101a96a9b;  */

void FUN_101a96a20(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101a9788c;
  plVar4[0xd] = lVar1;
  plVar4[0xe] = lVar6;
  plVar4[0xb] = param_2;
  plVar4[0xc] = lVar5;
  plVar4[10] = param_1;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
  lVar5 = 0x112df4978;
  func_0x0001000285a8(0x112df4978,&UNK_10d9c2fe0);
  plVar4[0x11] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x12] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a94f8c,0,0);
  return;
}



/* Entry: 101a96a9c; end: 101a96bdb;  */

void FUN_101a96a9c(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_88 [72];
  
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar2 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_101a96dec();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_101a96bdc(uVar2 + 1);
    }
    else {
      FUN_101a96f2c();
    }
    lVar4 = *unaff_x20;
    func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar2 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      func_0x000101a83aa4(0);
      do {
        if (*(ulong *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == param_1) {
          func_0x000107c60620();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101a96bdc);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar2;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar3 = *unaff_x20;
  lVar4 = lVar3 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar3 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a96bd4);
  (*pcVar1)();
}



/* Entry: 101a96bdc; end: 101a96deb;  */

void FUN_101a96bdc(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112df49d0;
  func_0x0001000285a8(0x112df49d0,&UNK_10d9c3068);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101a96db4:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a96de8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_101a96db4;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a96dec);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 101a96dec; end: 101a96f2b;  */

void FUN_101a96dec(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112df49d0,&UNK_10d9c3068);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101a96f2c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_101a96f0c;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_101a96f0c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 101a96f2c; end: 101a9717f;  */

void FUN_101a96f2c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112df49d0;
  func_0x0001000285a8(0x112df49d0,&UNK_10d9c3068);
  lVar5 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101a9714c:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a9717c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_101a9714c;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a97180);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 101a97180; end: 101a971e3;  */

void FUN_101a97180(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101a97888;
                    /* WARNING: Could not recover jumptable at 0x000101a971e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 101a971e4; end: 101a97263;  */

void FUN_101a971e4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x270;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a97890;
  plVar3[0x45] = lVar4;
  plVar3[0x44] = lVar2;
  plVar3[0x43] = lVar1;
  plVar3[0x42] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a95990,0,0);
  return;
}



/* Entry: 101a97264; end: 101a972eb;  */

undefined8 FUN_101a97264(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101a972ec; end: 101a9735b;  */

void FUN_101a972ec(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a9787c;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x101a97888;
                    /* WARNING: Could not recover jumptable at 0x000101a971e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101a9735c; end: 101a973d7;  */

void FUN_101a9735c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101a97894;
  plVar4[0x1f] = lVar1;
  plVar4[0x20] = lVar6;
  plVar4[0x1d] = param_2;
  plVar4[0x1e] = lVar5;
  plVar4[0x1c] = param_1;
  lVar5 = 0x112df4990;
  func_0x0001000285a8(0x112df4990,&UNK_10d9c3030);
  plVar4[0x21] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x22] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x23] = uVar2;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x24] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x25] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a96168,0,0);
  return;
}



/* Entry: 101a973d8; end: 101a9741b;  */

long FUN_101a973d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101a9741c; end: 101a97497;  */

void FUN_101a9741c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a97898;
  plVar3[4] = lVar2;
  plVar3[5] = unaff_x20 + 0x30;
  plVar3[2] = param_1;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a96680,0,0);
  return;
}



/* Entry: 101a97498; end: 101a97507;  */

void FUN_101a97498(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101a97880;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101a968b0;
                    /* WARNING: Could not recover jumptable at 0x000101a968ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101a97508; end: 101a97537;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101a97508(ulong param_1,ulong param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_4 != '\0') {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1c & 3;
  if (1 < uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  if (uVar2 != 0) {
    uVar1 = uVar1 >> 0x1e;
    if (uVar1 == 1) {
      param_1 = param_2 & 0xfffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 101a97538; end: 101a97573;  */

void FUN_101a97538(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a97574; end: 101a975ef;  */

void FUN_101a97574(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a975f0;
  plVar3[4] = lVar2;
  plVar3[5] = unaff_x20 + 0x30;
  plVar3[2] = param_1;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a96680,0,0);
  return;
}



/* Entry: 101a975f0; end: 101a9762b;  */

void FUN_101a975f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a97628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a9762c; end: 101a9769b;  */

void FUN_101a9762c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101a9769c;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101a968b0;
                    /* WARNING: Could not recover jumptable at 0x000101a968ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101a9769c; end: 101a976d7;  */

void FUN_101a9769c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a976d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a976d8; end: 101a9774f;  */

void FUN_101a976d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  func_0x000101a83aa4(0);
  uVar2 = uVar1;
  func_0x000101a968f0();
  lVar3 = lVar4;
  func_0x000107c5fe14(lVar4,uVar1,uVar2);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x20);
    lStack_38 = lVar3;
    do {
      FUN_101a96934(auStack_40,*puVar5);
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 101a97750; end: 101a9778b;  */

void FUN_101a97750(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a9778c; end: 101a9780b;  */

void FUN_101a9778c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x270;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101a9789c;
  plVar3[0x45] = lVar4;
  plVar3[0x44] = lVar2;
  plVar3[0x43] = lVar1;
  plVar3[0x42] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a95990,0,0);
  return;
}



/* Entry: 101a9780c; end: 101a9787b;  */

void FUN_101a9780c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101a97884;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x101a97888;
                    /* WARNING: Could not recover jumptable at 0x000101a971e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 101a9787c; end: 101a9789f;  */

void FUN_101a9787c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a976d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a978a0; end: 101a97907;  */

void FUN_101a978a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 101a97908; end: 101a97953;  */

void FUN_101a97908(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = 0;
    func_0x000101a8b92c();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = param_1;
    *(undefined8 *)(lVar2 + 0x18) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a97954);
  (*pcVar1)();
}



/* Entry: 101a97954; end: 101a97963;  */

void FUN_101a97954(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = 0;
    func_0x000101a8b92c();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar3;
    *(undefined8 *)(lVar2 + 0x18) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a97954);
  (*pcVar1)();
}



/* Entry: 101a97964; end: 101a9799b;  */

void FUN_101a97964(long param_1)

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



/* Entry: 101a9799c; end: 101a979d7;  */

/* WARNING: Possible PIC construction at 0x000101a979a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a979b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a979c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a979bc) */
/* WARNING: Removing unreachable block (ram,0x000101a979ac) */
/* WARNING: Removing unreachable block (ram,0x000101a979cc) */

void FUN_101a9799c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a979d8; end: 101a97a67;  */

void FUN_101a979d8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a97a68; end: 101a97a8b;  */

void FUN_101a97a68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101a97a8c; end: 101a97f2b;  */

undefined * FUN_101a97a8c(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long extraout_x8;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  byte bStack_b9;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lStack_c8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  uVar18 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(unaff_x20 + 0x10);
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efce8b0);
  lVar14 = -0x7ffffffef1031720;
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010);
  lVar7 = lVar17;
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  lVar9 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(lVar7);
  if (lVar9 != 0x454e4f || lVar14 != -0x1d00000000000000) {
    uVar8 = 0x454e4f;
    func_0x000107c605b8(0x454e4f,0xe300000000000000,lVar9,lVar14,0);
    if ((uVar8 & 1) == 0) {
      uVar8 = 0x4f505f5443415845;
      if ((lVar9 == 0x4f505f5443415845) && (lVar14 == -0x10acb1b0b6abb6ad)) {
        func_0x000107c6142c(0xef534e4f49544953);
      }
      else {
        func_0x000107c605b8(0x4f505f5443415845,0xef534e4f49544953,lVar9,lVar14,0);
        func_0x000107c6142c(lVar14);
        if ((uVar8 & 1) == 0) {
          return (undefined *)0x0;
        }
      }
      uVar5 = 0xd00000000000001d;
      func_0x000107c5fadc(0xd00000000000001d,0x800000010efce900);
      uVar6 = 0;
      uVar15 = 0xe000000000000000;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5c1dc(lVar17);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      lVar7 = lVar17;
      func_0x000107c5faec(lVar17);
      func_0x000107c61170(lVar17);
      uStack_80 = 0x2c;
      uStack_78 = 0xe100000000000000;
      puStack_a0 = &uStack_80;
      lVar9 = 0x7fffffffffffffff;
      func_0x0001014784b8(0x7fffffffffffffff,1,0x101a981dc,&uStack_b0,lVar7,uVar15);
      uVar8 = *(ulong *)(lVar9 + 0x10);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar8 == 0) {
LAB_101a97f0c:
        func_0x000107c6142c(lVar9);
        return puVar13;
      }
      uVar16 = 0;
      lVar7 = lVar9 + 0x38;
      uStack_e0 = uVar8 - 1;
      lStack_d8 = lVar7;
LAB_101a97d14:
      puVar20 = (undefined8 *)(lVar7 + uVar16 * 0x20);
      uVar19 = uVar16;
      puStack_d0 = puVar13;
      do {
        if (*(ulong *)(lVar9 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a97f2c);
          (*pcVar3)();
        }
        puStack_a0 = (ulong *)puVar20[-1];
        uVar5 = *puVar20;
        uStack_a8 = puVar20[-2];
        uStack_b0 = puVar20[-3];
        uVar6 = uVar5;
        uStack_98 = uVar5;
        func_0x000107c61434(uVar5);
        func_0x000107c5eb68(uVar18);
        func_0x000101478db0();
        uVar16 = uVar18;
        puVar13 = PTR___sSsN_11034e1d8;
        func_0x000107c601f0(uVar18,PTR___sSsN_11034e1d8,uVar6);
        (**(code **)(lStack_c8 + 8))(uVar18,lVar4);
        uStack_b8 = 0;
        puStack_a0 = &uStack_b8;
        if (((ulong)puVar13 >> 0x3c & 1) == 0) {
          if (((ulong)puVar13 >> 0x3d & 1) == 0) {
            if ((uVar16 >> 0x3c & 1) == 0) goto LAB_101a97e4c;
            puVar10 = (ulong *)(puVar13 + 0x20);
            if (0x20 < (byte)*puVar10 || (1L << ((ulong)(byte)*puVar10 & 0x3f) & 0x100003e01U) == 0)
            goto LAB_101a97e30;
          }
          else {
            uStack_78 = (ulong)puVar13 & 0xffffffffffffff;
            uStack_80 = uVar16;
            if (0x20 < ((uint)uVar16 & 0xff) || (1L << (uVar16 & 0x3f) & 0x100003e01U) == 0) {
              puVar10 = &uStack_80;
LAB_101a97e30:
              func_0x000107c60eb4(puVar10,&uStack_b8);
              if (puVar10 != (ulong *)0x0) {
                bStack_b9 = (byte)*puVar10 == 0;
                goto LAB_101a97e00;
              }
            }
          }
          bStack_b9 = 0;
        }
        else {
LAB_101a97e4c:
          func_0x000107c602f0(&bStack_b9,FUN_101a981f4,&uStack_b0,uVar16,puVar13,
                              PTR___sSbN_11034dd40);
        }
LAB_101a97e00:
        func_0x000107c6142c(puVar13);
        func_0x000107c6142c(uVar5);
        uVar2 = uStack_b8;
        puVar13 = puStack_d0;
        if ((bStack_b9 & 1) != 0) goto LAB_101a97e74;
        uVar19 = uVar19 + 1;
        puVar20 = puVar20 + 4;
        if (uVar8 == uVar19) goto LAB_101a97f0c;
      } while( true );
    }
  }
  func_0x000107c6142c(lVar14);
  return (undefined *)0x1;
LAB_101a97e74:
  puVar11 = puStack_d0;
  func_0x000107c61558();
  puVar12 = puVar13;
  if (((ulong)puVar11 & 1) == 0) {
    puVar12 = (undefined *)0x0;
    func_0x0001014dd0d8(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
  }
  lVar7 = lStack_d8;
  uVar1 = *(ulong *)(puVar12 + 0x10);
  puVar13 = puVar12;
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    func_0x0001014dd0d8(puVar13,uVar1 + 1,1,puVar12);
  }
  uVar16 = uVar19 + 1;
  *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
  *(ulong *)(puVar13 + uVar1 * 8 + 0x20) = uVar2;
  if (uStack_e0 == uVar19) goto LAB_101a97f0c;
  goto LAB_101a97d14;
}



/* Entry: 101a97f2c; end: 101a981b7;  */

undefined * FUN_101a97f2c(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efce920);
  uVar5 = 0x43494c425550;
  uVar11 = 0xe600000000000000;
  func_0x000107c5fadc(0x43494c425550,0xe600000000000000);
  func_0x000107c5c1dc(uVar13);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar4 = uVar13;
  func_0x000107c5faec(uVar13);
  func_0x000107c61170(uVar13);
  uStack_70 = 0x2c;
  uStack_68 = 0xe100000000000000;
  puStack_90 = &uStack_70;
  lVar6 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_101a9873c,&uStack_a0,uVar4,uVar11);
  uStack_b0 = 0;
  uVar16 = 0;
  uVar14 = *(ulong *)(lVar6 + 0x10);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    lVar12 = uVar16 << 5;
    do {
      if (uVar14 == uVar16) {
        func_0x000107c6142c(lVar6);
        puVar8 = puStack_a8;
        puVar9 = puStack_a8;
        FUN_101a976d8(puStack_a8);
        func_0x000107c6142c(puVar8);
        return puVar9;
      }
      if (*(ulong *)(lVar6 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a981b8);
        (*pcVar2)();
      }
      uVar16 = uVar16 + 1;
      lVar7 = lVar6 + lVar12;
      puStack_90 = *(undefined8 **)(lVar7 + 0x30);
      uVar4 = *(undefined8 *)(lVar7 + 0x38);
      uStack_98 = *(undefined8 *)(lVar7 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar7 + 0x20);
      uVar5 = uVar4;
      uStack_88 = uVar4;
      func_0x000107c61434(uVar4);
      func_0x000107c5eb68(lVar15);
      func_0x000101478db0();
      lVar7 = lVar15;
      puVar8 = PTR___sSsN_11034e1d8;
      func_0x000107c601f0(lVar15,PTR___sSsN_11034e1d8,uVar5);
      uVar10 = (uint)puVar8;
      (**(code **)(lVar17 + 8))(lVar15,lVar3);
      FUN_101a982c0();
      func_0x000107c6142c(uVar4);
      lVar12 = lVar12 + 0x20;
    } while ((uVar10 & 0xff) == 1);
    puVar8 = puStack_a8;
    func_0x000107c61558();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_101a86d08(0,*(long *)(puStack_a8 + 0x10) + 1,1);
      puStack_a8 = puVar8;
    }
    uVar1 = *(ulong *)(puStack_a8 + 0x10);
    if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_a8 + 0x18));
      FUN_101a86d08(puVar8,uVar1 + 1,1,puStack_a8);
      puStack_a8 = puVar8;
    }
    *(ulong *)(puStack_a8 + 0x10) = uVar1 + 1;
    *(long *)(puStack_a8 + uVar1 * 8 + 0x20) = lVar7;
  } while( true );
}



/* Entry: 101a981b8; end: 101a981f3;  */

void FUN_101a981b8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a981f4; end: 101a9826b;  */

void FUN_101a981f4(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb4(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101a9826c; end: 101a982bf;  */

uint FUN_101a9826c(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 101a982c0; end: 101a9873b;  */

undefined1  [16] FUN_101a982c0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = 0x4e574f4e4b4e55;
  lVar2 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c(param_2);
  if (((param_1 == 0x4e574f4e4b4e55) && (lVar2 == -0x1900000000000000)) ||
     (func_0x000107c605b8(0x4e574f4e4b4e55,0xe700000000000000,param_1,lVar2,0), (uVar3 & 1) != 0)) {
    func_0x000107c6142c(lVar2);
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x524548544f;
    if (((param_1 == 0x524548544f) && (lVar2 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x524548544f,0xe500000000000000,param_1,lVar2,0), (uVar3 & 1) != 0)) {
      func_0x000107c6142c(lVar2);
      uVar3 = 0;
      uVar1 = 1;
    }
    else {
      if ((param_1 != 0x594d) || (lVar2 != -0x1e00000000000000)) {
        uVar3 = 0x594d;
        func_0x000107c605b8(0x594d,0xe200000000000000,param_1,lVar2,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = 0;
          if (((param_1 == 0x43494c425550) && (lVar2 == -0x1a00000000000000)) ||
             (func_0x000107c605b8(0x43494c425550,0xe600000000000000,param_1,lVar2,0),
             (uVar3 & 1) != 0)) {
            func_0x000107c6142c(lVar2);
            uVar3 = 0;
            uVar1 = 3;
          }
          else {
            if ((param_1 != -0x2fffffffffffffed) || (lVar2 != -0x7ffffffef10316c0)) {
              uVar3 = 0xd000000000000013;
              func_0x000107c605b8(0xd000000000000013,0x800000010efce940,param_1,lVar2,0);
              if ((uVar3 & 1) == 0) {
                if ((param_1 != -0x2fffffffffffffed) || (lVar2 != -0x7ffffffef10316a0)) {
                  uVar3 = 0xd000000000000013;
                  func_0x000107c605b8(0xd000000000000013,0x800000010efce960,param_1,lVar2,0);
                  if ((uVar3 & 1) == 0) {
                    if ((param_1 != 0x4556494c) || (lVar2 != -0x1c00000000000000)) {
                      uVar3 = 0;
                      func_0x000107c605b8(0x4556494c,0xe400000000000000,param_1,lVar2,0);
                      if ((uVar3 & 1) == 0) {
                        uVar3 = 0x48535f50554f5247;
                        if (((param_1 == 0x48535f50554f5247) && (lVar2 == -0x13ffffffbbbaadbf)) ||
                           (func_0x000107c605b8(0x48535f50554f5247,0xec00000044455241,param_1,lVar2,
                                                0), (uVar3 & 1) != 0)) {
                          func_0x000107c6142c(lVar2);
                          uVar3 = 0;
                          uVar1 = 7;
                        }
                        else {
                          uVar3 = 0x52505f50554f5247;
                          if (((param_1 == 0x52505f50554f5247) && (lVar2 == -0x12ffffbaabbea9b7)) ||
                             (func_0x000107c605b8(0x52505f50554f5247,0xed00004554415649,param_1,
                                                  lVar2,0), (uVar3 & 1) != 0)) {
                            func_0x000107c6142c(lVar2);
                            uVar3 = 0;
                            uVar1 = 8;
                          }
                          else {
                            uVar3 = 0;
                            if (((param_1 == -0x2fffffffffffffea) && (lVar2 == -0x7ffffffef1031680))
                               || (func_0x000107c605b8(0xd000000000000016,0x800000010efce980,param_1
                                                       ,lVar2,0), (uVar3 & 1) != 0)) {
                              func_0x000107c6142c(lVar2);
                              uVar3 = 0;
                              uVar1 = 9;
                            }
                            else {
                              uVar3 = 0x55435f50554f5247;
                              if (((param_1 == 0x55435f50554f5247) && (lVar2 == -0x13ffffffb2b0abad)
                                  ) || (func_0x000107c605b8(0x55435f50554f5247,0xec0000004d4f5453,
                                                            param_1,lVar2,0), (uVar3 & 1) != 0)) {
                                func_0x000107c6142c(lVar2);
                                uVar3 = 0;
                                uVar1 = 10;
                              }
                              else {
                                uVar3 = 0x4847494c544f5053;
                                if (((param_1 == 0x4847494c544f5053) &&
                                    (lVar2 == -0x16ffffffffffffac)) ||
                                   (func_0x000107c605b8(0x4847494c544f5053,0xe900000000000054,
                                                        param_1,lVar2,0), (uVar3 & 1) != 0)) {
                                  func_0x000107c6142c(lVar2);
                                  uVar3 = 0;
                                  uVar1 = 0xb;
                                }
                                else {
                                  uVar3 = 0;
                                  if ((param_1 == 0x4f5f444e45495246) &&
                                     (lVar2 == -0x10afaab0adb8a0ba)) {
                                    func_0x000107c6142c(0xef50554f52475f46);
                                    uVar3 = 0;
                                    uVar1 = 0xc;
                                  }
                                  else {
                                    func_0x000107c605b8(0x4f5f444e45495246,0xef50554f52475f46,
                                                        param_1,lVar2,0);
                                    func_0x000107c6142c(lVar2);
                                    uVar1 = 0xc;
                                    if ((uVar3 & 1) == 0) {
                                      uVar1 = 0;
                                    }
                                    uVar3 = (ulong)(((uint)uVar3 ^ 0xffffffff) & 1);
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_101a98338;
                      }
                    }
                    func_0x000107c6142c(lVar2);
                    uVar3 = 0;
                    uVar1 = 6;
                    goto LAB_101a98338;
                  }
                }
                func_0x000107c6142c(lVar2);
                uVar3 = 0;
                uVar1 = 5;
                goto LAB_101a98338;
              }
            }
            func_0x000107c6142c(lVar2);
            uVar3 = 0;
            uVar1 = 4;
          }
          goto LAB_101a98338;
        }
      }
      func_0x000107c6142c(lVar2);
      uVar3 = 0;
      uVar1 = 2;
    }
  }
LAB_101a98338:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 101a9873c; end: 101a98753;  */

uint FUN_101a9873c(uint param_1)

{
  func_0x000101a981dc();
  return param_1 & 1;
}



/* Entry: 101a98754; end: 101a98bb7;  */

long FUN_101a98754(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  double dVar16;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&pcStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x12;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) == 1) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = uVar1;
    lStack_a8 = lVar3;
    func_0x00010006c00c();
    func_0x00010011df08();
    func_0x000107c61180();
    uVar8 = uVar10;
    lVar4 = lVar3;
    if (lVar3 == 0) {
      func_0x000107c5faec();
      uVar8 = uVar10;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
    }
    func_0x000107c5faec();
    puVar5 = PTR_PTR_1126b08b8;
    lStack_c0 = lVar3;
    uStack_b8 = uVar8;
    func_0x000107c610f8();
    func_0x000107c4766c();
    puStack_b0 = puVar5;
    func_0x000107c61170(lVar4);
    uVar6 = *(ulong *)(unaff_x20 + 0x40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar6 == 0) {
      dVar16 = 86400.0;
    }
    else {
      uVar7 = uVar6;
      func_0x000107c42c9c();
      func_0x000107c615e8(uVar6);
      dVar16 = (double)uVar7;
    }
    func_0x000107c5eea0(lVar11);
    func_0x000107c5ee6c(lVar12,dVar16);
    pcVar14 = *(code **)(lVar13 + 8);
    (*pcVar14)(lVar11,lVar2);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar3 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar10);
    if ((long)param_2 < 3) {
      if (param_2 == (undefined *)0x0) {
        uVar15 = 0xe400000000000000;
        uVar8 = 0x656e6f6e;
      }
      else if (param_2 == (undefined *)0x1) {
        uVar15 = 0x800000010efce270;
        uVar8 = 0xd00000000000001c;
      }
      else {
        if (param_2 != (undefined *)0x2) goto LAB_101a98b94;
        uVar15 = 0x800000010efce250;
        uVar8 = 0xd00000000000001d;
      }
    }
    else if ((long)param_2 < 5) {
      if (param_2 == (undefined *)0x3) {
        uVar15 = 0x800000010efce230;
        uVar8 = 0xd000000000000014;
      }
      else {
        if (param_2 != (undefined *)0x4) {
LAB_101a98b94:
          puStack_a0 = param_2;
          func_0x000107c60614(&UNK_110735378,&puStack_a0,&UNK_110735378,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101a98bb8);
          (*pcVar14)();
        }
        uVar8 = 0xd000000000000013;
        uVar15 = 0x800000010efce210;
      }
    }
    else if (param_2 == (undefined *)0x5) {
      uVar15 = 0xec00000074696b5f;
      uVar8 = 0x6576697461657263;
    }
    else {
      if (param_2 != (undefined *)0x6) goto LAB_101a98b94;
      uVar15 = 0xeb00000000617265;
      uVar8 = 0x6d61635f70616e73;
    }
    (**(code **)(lVar3 + 8))(uVar8,uVar15,uVar10,lVar3);
    func_0x000107c6142c(uVar15);
    lVar13 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar11 = lStack_a8;
    if (lVar13 == 0) {
      func_0x00010006c090(lStack_a8,uVar1);
      func_0x000107c6142c(uStack_b8);
      func_0x000107c61170(puStack_b0);
      (*pcVar14)(lVar12,lVar2);
      lVar3 = 0;
    }
    else {
      lVar3 = lStack_a8;
      lStack_c8 = lVar2;
      func_0x000107c5ee20(lStack_a8,uVar1);
      lVar2 = lVar3;
      func_0x000107c5ee70();
      puVar5 = &UNK_1104384b0;
      func_0x000107c613fc(&UNK_1104384b0,0x20,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = param_2;
      pcStack_80 = FUN_101a99fc0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100ab47f8;
      puStack_88 = &UNK_1104384c8;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar9);
      puVar5 = puStack_78;
      pcStack_d0 = pcVar14;
      func_0x000107c6157c();
      func_0x000107c61574(puVar5);
      puVar5 = puStack_b0;
      func_0x000107c5168c(lVar13);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar2);
      func_0x00010401523c(0);
      func_0x000107c610f8();
      lVar3 = lStack_c0;
      func_0x000104011c9c(lStack_c0,uStack_b8,param_2,1,0,0);
      func_0x00010006c090(lVar11,uVar1);
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(puVar5);
      (*pcStack_d0)(lVar12,lStack_c8);
    }
  }
  return lVar3;
}



/* Entry: 101a98bb8; end: 101a98d5b;  */

void FUN_101a98bb8(ulong param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  if ((param_1 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  func_0x0001000a8868(param_2 + 0x18,uVar1);
  if (param_3 < 3) {
    if (param_3 == 0) {
      uVar5 = 0xe400000000000000;
      uVar4 = 0x656e6f6e;
    }
    else if (param_3 == 1) {
      uVar5 = 0x800000010efce270;
      uVar4 = 0xd00000000000001c;
    }
    else {
      if (param_3 != 2) goto LAB_101a98d38;
      uVar5 = 0x800000010efce250;
      uVar4 = 0xd00000000000001d;
    }
  }
  else if (param_3 < 5) {
    if (param_3 == 3) {
      uVar5 = 0x800000010efce230;
      uVar4 = 0xd000000000000014;
    }
    else {
      if (param_3 != 4) {
LAB_101a98d38:
        lStack_38 = param_3;
        func_0x000107c60614(&UNK_110735378,&lStack_38,&UNK_110735378,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a98d5c);
        (*pcVar3)();
      }
      uVar4 = 0xd000000000000013;
      uVar5 = 0x800000010efce210;
    }
  }
  else if (param_3 == 5) {
    uVar5 = 0xec00000074696b5f;
    uVar4 = 0x6576697461657263;
  }
  else {
    if (param_3 != 6) goto LAB_101a98d38;
    uVar5 = 0xeb00000000617265;
    uVar4 = 0x6d61635f70616e73;
  }
  (**(code **)(lVar2 + 0x10))(1,uVar4,uVar5,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 101a98d5c; end: 101a9907b;  */

/* WARNING: Possible PIC construction at 0x000101a98de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a98eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a98ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a98ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a99050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a98f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a98fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a98ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a98f54) */
/* WARNING: Removing unreachable block (ram,0x000101a99000) */
/* WARNING: Removing unreachable block (ram,0x000101a98f68) */
/* WARNING: Removing unreachable block (ram,0x000101a99054) */
/* WARNING: Removing unreachable block (ram,0x000101a98ed8) */
/* WARNING: Removing unreachable block (ram,0x000101a98ec8) */
/* WARNING: Removing unreachable block (ram,0x000101a98eb4) */
/* WARNING: Removing unreachable block (ram,0x000101a98de8) */
/* WARNING: Removing unreachable block (ram,0x000101a99020) */
/* WARNING: Removing unreachable block (ram,0x000101a98e14) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101a98fe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a98d5c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_113046d00);
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113046ce8);
    uVar1 = ((undefined8 *)(param_1 + _DAT_113046ce8))[1];
    puVar2 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c4766c(puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113046ce8);
    uVar1 = ((undefined8 *)(param_1 + _DAT_113046ce8))[1];
    puVar2 = PTR_PTR_1126b25b8;
    func_0x000107c610f8(PTR_PTR_1126b25b8);
    func_0x000107c61174(lVar4);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c46814(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101a9907c; end: 101a99167;  */

bool FUN_101a9907c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000101a87490();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    uVar1 = 0;
    func_0x000101a99f80(0,0x112d512f8,&PTR_PTR_1126b25d8);
    func_0x000107c61174(param_3);
    lVar2 = param_1;
    func_0x000107c5fc48(param_1,uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c4feb4(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(lVar2);
  }
  return lStack_48 == 0;
}



/* Entry: 101a99168; end: 101a99437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a99168(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  uVar11 = *(undefined8 *)(param_2 + _DAT_113046ce8);
  uVar1 = ((undefined8 *)(param_2 + _DAT_113046ce8))[1];
  puVar3 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(uVar11,uVar1);
  func_0x000107c4766c(puVar3);
  func_0x000107c61170(uVar11);
  puVar4 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar4);
  func_0x000107c61170(puVar5);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
LAB_101a99360:
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a993a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x38))(param_1,1,1,lVar2);
    return;
  }
  lVar7 = lVar6;
  func_0x000107c50764();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000107c615e8(lVar6);
    goto LAB_101a99360;
  }
  lVar8 = lVar7;
  func_0x000107c4407c();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  else {
    lVar9 = lVar8;
    lStack_70 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    uStack_68 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
    func_0x000107c5edd0(lVar13,lVar9,puVar10);
    func_0x000107c6142c(puVar10);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    lVar7 = lVar13;
    (**(code **)(lVar14 + 0x30))(lVar13,1,lVar2);
    lVar6 = lStack_70;
    if ((int)lVar7 != 1) {
      pcVar12 = *(code **)(lVar14 + 0x20);
      (*pcVar12)(lStack_70,lVar13,lVar2);
      param_1 = uStack_68;
      (*pcVar12)(uStack_68,lVar6,lVar2);
      pcVar12 = *(code **)(lVar14 + 0x38);
      uVar11 = 0;
      goto LAB_101a9940c;
    }
    func_0x0001000293e4(lVar13);
    param_1 = uStack_68;
  }
  pcVar12 = *(code **)(lVar14 + 0x38);
  uVar11 = 1;
LAB_101a9940c:
  (*pcVar12)(param_1,uVar11,1,lVar2);
  return;
}



/* Entry: 101a99438; end: 101a9944f;  */

void FUN_101a99438(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a99450,0,0);
  return;
}



/* Entry: 101a99450; end: 101a99783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a99450(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(unaff_x22 + 0x90);
  lVar8 = *(long *)(lVar7 + _DAT_113046d00);
  *(long *)(unaff_x22 + 0xa0) = lVar8;
  if (lVar8 == 0) {
LAB_101a995fc:
    lVar8 = *(long *)(unaff_x22 + 0x98);
    uVar9 = *(undefined8 *)(lVar7 + _DAT_113046ce8);
    uVar10 = ((undefined8 *)(lVar7 + _DAT_113046ce8))[1];
    puVar1 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(uVar9,uVar10);
    func_0x000107c4766c(puVar1);
    func_0x000107c61170(uVar9);
    puVar2 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar2);
    func_0x000107c61170(puVar3);
    lVar8 = *(long *)(lVar8 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c61170(puVar2);
      goto LAB_101a99734;
    }
    lVar7 = lVar8;
    func_0x000107c50764();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar4 = lVar7;
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c5ee30();
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar1);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar4);
        goto LAB_101a99764;
      }
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(lVar8);
  }
  else {
    puVar1 = *(undefined **)(lVar7 + _DAT_113046d08);
    *(undefined **)(unaff_x22 + 0xa8) = puVar1;
    if (puVar1 == (undefined *)0x0) goto LAB_101a995fc;
    func_0x000107c61174();
    func_0x000107c61174(lVar8);
    func_0x0001000d224c(unaff_x22 + 0x50);
    lVar7 = *(long *)(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 0xb0) = lVar7;
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      puVar1 = PTR_PTR_1126b1060;
      func_0x000107c610f8();
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c47d08();
      *(undefined **)(unaff_x22 + 0xb8) = puVar1;
      func_0x000107c61170(puVar2);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101a99784;
      lVar8 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar8,0);
      puVar1 = &UNK_1104383e8;
      func_0x000107c613fc(&UNK_1104383e8,0x20,7);
      *(long *)(puVar1 + 0x10) = lVar8;
      *(undefined8 *)(puVar1 + 0x18) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x101a99f4c;
      *(undefined **)(unaff_x22 + 0x78) = puVar1;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_101a11da0;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110438400;
      lVar8 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c6157c(uVar9);
      func_0x000107c61574(uVar10);
      func_0x000107c507c0(lVar7);
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c60bd0(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(lVar8);
LAB_101a99734:
    func_0x000107c61170(puVar1);
  }
  lVar5 = 0;
  puVar6 = (undefined *)0xf000000000000000;
LAB_101a99764:
                    /* WARNING: Could not recover jumptable at 0x000101a99780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5,puVar6);
  return;
}



/* Entry: 101a99784; end: 101a997c3;  */

void FUN_101a99784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a997c4,0,0);
  return;
}



/* Entry: 101a997c4; end: 101a9981b;  */

void FUN_101a997c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a99818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 101a9981c; end: 101a998ff;  */

/* WARNING: Possible PIC construction at 0x000101a998d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a998dc) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101a9981c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2;
  func_0x000107c43fb4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c44314();
    if (lVar3 == 0) {
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (param_1 == 0) {
        lVar3 = 0;
        lVar4 = -0x1000000000000000;
      }
      else {
        lVar3 = param_1;
        func_0x000107c5ee30();
        func_0x000107c61170(param_1);
      }
      func_0x000100de78a0(lVar3,lVar4);
      plVar2 = *(long **)(*(long *)(param_2 + 0x40) + 0x28);
      *plVar2 = lVar3;
      plVar2[1] = lVar4;
      goto code_r0x000107c6144c;
    }
    func_0x000107c615e8(param_1);
  }
  puVar1 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
code_r0x000107c6144c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 101a99900; end: 101a9991b;  */

void FUN_101a99900(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a9991c,0,0);
  return;
}


