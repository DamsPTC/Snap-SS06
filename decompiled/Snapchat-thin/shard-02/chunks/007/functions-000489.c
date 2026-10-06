/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020f2590; end: 1020f259b; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference deleteItems:] */

void FUN_1020f2590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_1020f2584(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f259c; end: 1020f25e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f259c(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,auStack_38,0x21,0);
  func_0x0001020ef378();
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1020f25e8; end: 1020f2653; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference deleteAllItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f25e8(long param_1)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + _DAT_112e587f8,auStack_48,0x21,0);
  func_0x000107c61174(param_1);
  func_0x0001020ef378();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f2654; end: 1020f265f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2654(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,auStack_58,0x21,0);
  (*(code *)0x1020ef734)(param_1,param_2);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1020f2660; end: 1020f2677; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference moveItem:beforeItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + _DAT_112e587f8,auStack_68,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x1020ef734)(param_3,param_4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f2678; end: 1020f268f; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference moveItem:afterItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2678(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + _DAT_112e587f8,auStack_68,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1020efbb0(param_3,param_4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f2690; end: 1020f26a7; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference insertSections:beforeSection:] */

void FUN_1020f2690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f2684)(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f26a8; end: 1020f2863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f26a8(ulong param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *apuStack_78 [3];
  
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
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020ea8b0(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f2864);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar6 = apuStack_78[0];
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar4 = *puVar8;
        uVar7 = *(ulong *)(puVar6 + 0x10);
        uVar1 = *(ulong *)(puVar6 + 0x18);
        apuStack_78[0] = puVar6;
        func_0x000107c61174();
        if (uVar1 >> 1 <= uVar7) {
          func_0x0001020ea8b0(1 < uVar1,uVar7 + 1,1);
          puVar6 = apuStack_78[0];
        }
        *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = uVar4;
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar6 = apuStack_78[0];
        uVar3 = uVar7;
        FUN_1020f3928(uVar7,param_1);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        apuStack_78[0] = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x0001020ea8b0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
        *(ulong *)(apuStack_78[0] + uVar1 * 8 + 0x20) = uVar3;
        puVar6 = apuStack_78[0];
      } while (uVar5 != uVar7);
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,apuStack_78,0x21,0);
  (*param_3)(puVar6,param_2);
  func_0x000107c614a8(apuStack_78);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1020f2864; end: 1020f287b; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference insertSections:afterSection:] */

void FUN_1020f2864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f269c)(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f287c; end: 1020f2887; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference deleteSections:] */

void FUN_1020f287c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f2870)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f2888; end: 1020f28eb;  */

void FUN_1020f2888(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f28ec; end: 1020f28f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f28ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,auStack_58,0x21,0);
  (*(code *)0x1020f04c0)(param_1,param_2);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1020f28f8; end: 1020f290f; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference moveSection:beforeSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f28f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + _DAT_112e587f8,auStack_68,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f04c0)(param_3,param_4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f2910; end: 1020f297f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2910(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,auStack_58,0x21,0);
  (*param_3)(param_1,param_2);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1020f2980; end: 1020f298b; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference moveSection:afterSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + _DAT_112e587f8,auStack_68,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f05e0)(param_3,param_4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f298c; end: 1020f2a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f298c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + _DAT_112e587f8,auStack_68,0x21,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(param_3,param_4);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f2a44; end: 1020f2a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2a44(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *apuStack_78 [3];
  
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
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020ea8b0(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f2c34);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar6 = apuStack_78[0];
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar4 = *puVar8;
        uVar7 = *(ulong *)(puVar6 + 0x10);
        uVar1 = *(ulong *)(puVar6 + 0x18);
        apuStack_78[0] = puVar6;
        func_0x000107c61174();
        if (uVar1 >> 1 <= uVar7) {
          func_0x0001020ea8b0(1 < uVar1,uVar7 + 1,1);
          puVar6 = apuStack_78[0];
        }
        *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = uVar4;
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar6 = apuStack_78[0];
        uVar3 = uVar7;
        FUN_1020f3928(uVar7,param_1);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        apuStack_78[0] = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x0001020ea8b0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
        *(ulong *)(apuStack_78[0] + uVar1 * 8 + 0x20) = uVar3;
        puVar6 = apuStack_78[0];
      } while (uVar5 != uVar7);
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,apuStack_78,0x21,0);
  FUN_1020f06f4(puVar6);
  func_0x000107c614a8(apuStack_78);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1020f2a50; end: 1020f2a67; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference appendSections:] */

void FUN_1020f2a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_1020f2a44(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f2a68; end: 1020f2a7f; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference reloadSections:] */

void FUN_1020f2a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f2a5c)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f2a80; end: 1020f2c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2a80(ulong param_1,code *param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *apuStack_78 [3];
  
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
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020ea8b0(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f2c34);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar6 = apuStack_78[0];
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar4 = *puVar8;
        uVar7 = *(ulong *)(puVar6 + 0x10);
        uVar1 = *(ulong *)(puVar6 + 0x18);
        apuStack_78[0] = puVar6;
        func_0x000107c61174();
        if (uVar1 >> 1 <= uVar7) {
          func_0x0001020ea8b0(1 < uVar1,uVar7 + 1,1);
          puVar6 = apuStack_78[0];
        }
        *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = uVar4;
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar6 = apuStack_78[0];
        uVar3 = uVar7;
        FUN_1020f3928(uVar7,param_1);
        uVar1 = *(ulong *)(puVar6 + 0x10);
        apuStack_78[0] = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          func_0x0001020ea8b0(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
        *(ulong *)(apuStack_78[0] + uVar1 * 8 + 0x20) = uVar3;
        puVar6 = apuStack_78[0];
      } while (uVar5 != uVar7);
    }
  }
  func_0x000107c61428(unaff_x20 + _DAT_112e587f8,apuStack_78,0x21,0);
  (*param_2)(puVar6);
  func_0x000107c614a8(apuStack_78);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1020f2c34; end: 1020f2c3f; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference reloadItems:] */

void FUN_1020f2c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  (*(code *)0x1020f2a74)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1020f2c40; end: 1020f2cef; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference copy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2c40(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar7 = param_1;
  FUN_1020f4e98();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined8 *)(lVar8 + _DAT_112e587f8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar3;
  puVar2[3] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61154(&lStack_68,puVar6);
  return;
}



/* Entry: 1020f2cf0; end: 1020f2daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2cf0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  FUN_1020f4e98();
  lVar7 = param_2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined8 *)(lVar7 + _DAT_112e587f8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar3;
  puVar2[3] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_78 = lVar7;
  lStack_70 = param_2;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  plVar8 = &lStack_78;
  func_0x000107c61154(plVar8,puVar6);
  param_1[3] = param_2;
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 1020f2db0; end: 1020f2e5f; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f2db0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar7 = param_1;
  FUN_1020f4e98();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined8 *)(lVar8 + _DAT_112e587f8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar3;
  puVar2[3] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61154(&lStack_68,puVar6);
  return;
}



/* Entry: 1020f2e60; end: 1020f3097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1020f2e60(undefined8 param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  uint uVar13;
  long alStack_98 [3];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    FUN_1020f4e98();
    plVar10 = alStack_98;
    func_0x000107c6147c(plVar10,auStack_80,PTR___sypN_11034f1a8 + 8,param_1,6);
    if (((ulong)plVar10 & 1) != 0) {
      puVar1 = (ulong *)(unaff_x20 + _DAT_112e587f8);
      func_0x000107c61428(puVar1,auStack_80,0,0);
      uVar3 = *puVar1;
      uVar6 = puVar1[1];
      uVar4 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined8 *)(alStack_98[0] + _DAT_112e587f8);
      func_0x000107c61428(puVar2,alStack_98,0,0);
      uVar5 = *puVar2;
      uVar8 = puVar2[1];
      uVar12 = puVar2[2];
      uVar9 = puVar2[3];
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar8);
      func_0x000107c61434(uVar12);
      func_0x000107c61434(uVar9);
      uVar11 = uVar3;
      FUN_1020f36a4(uVar3,uVar5);
      if (((uVar11 & 1) == 0) || (uVar11 = uVar6, FUN_1020f3718(uVar6,uVar8), (uVar11 & 1) == 0)) {
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(alStack_98[0]);
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar9);
      }
      else {
        uVar11 = uVar4;
        FUN_1020f0b4c(uVar4,uVar12);
        if ((uVar11 & 1) != 0) {
          uVar11 = uVar7;
          FUN_1020f0b4c(uVar7,uVar9);
          uVar13 = (uint)uVar11;
          func_0x000107c61170(alStack_98[0]);
          func_0x000107c6142c(uVar7);
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(uVar6);
          func_0x000107c6142c(uVar3);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar12);
          func_0x000107c6142c(uVar8);
          func_0x000107c6142c(uVar5);
          goto LAB_1020f302c;
        }
        func_0x000107c61170(alStack_98[0]);
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uVar6);
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar8);
        uVar12 = uVar5;
      }
      func_0x000107c6142c(uVar12);
    }
  }
  uVar13 = 0;
LAB_1020f302c:
  return uVar13 & 1;
}



/* Entry: 1020f3098; end: 1020f3117; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference isEqual:] */

uint FUN_1020f3098(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1020f2e60(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1020f3118; end: 1020f3147;  */

void FUN_1020f3118(void)

{
  FUN_1020f4e98();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020f3148; end: 1020f3193; -[_TtC21DiffableDataSourceKit35DiffableDataSourceSnapshotReference .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020f316c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020f317c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020f3170) */
/* WARNING: Removing unreachable block (ram,0x0001020f3180) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f3148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112e587f8 + 0x18));
  return;
}



/* Entry: 1020f3194; end: 1020f3323;  */

undefined8 FUN_1020f3194(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = unaff_x20[1];
  if (*(long *)(uVar2 + 0x10) != 0) {
    uVar3 = param_2;
    func_0x000107c61434(uVar2);
    uVar1 = param_2;
    FUN_1020f42f0();
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(uVar2 + 0x38) + uVar1 * 8);
      func_0x000107c61434(uVar4);
      func_0x000107c6142c(uVar2);
      func_0x000107c61174(param_2);
      func_0x000107c61434(param_1);
      uVar2 = unaff_x20[1];
      func_0x000107c61558(uVar2);
      uVar1 = unaff_x20[1];
      FUN_1020f449c(param_1,param_2,uVar2);
      func_0x000107c61170(param_2);
      unaff_x20[1] = uVar1;
      return uVar4;
    }
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c61174();
  func_0x000107c61434(param_1);
  uVar2 = unaff_x20[1];
  func_0x000107c61558(uVar2);
  uVar1 = unaff_x20[1];
  FUN_1020f449c(param_1,param_2,uVar2);
  func_0x000107c61170(param_2);
  unaff_x20[1] = uVar1;
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  func_0x000107c61558();
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    FUN_102100b8c(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
  }
  uVar2 = *(ulong *)(uVar1 + 0x10);
  uVar3 = uVar1;
  if (*(ulong *)(uVar1 + 0x18) >> 1 <= uVar2) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar1 + 0x18));
    FUN_102100b8c(uVar3,uVar2 + 1,1,uVar1);
  }
  *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
  *(ulong *)(uVar3 + uVar2 * 8 + 0x20) = param_2;
  *unaff_x20 = uVar3;
  func_0x000107c61174(param_2);
  return 0;
}



/* Entry: 1020f3324; end: 1020f348b;  */

uint FUN_1020f3324(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  ulong uVar4;
  long extraout_x12;
  undefined1 *puVar5;
  ulong uVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lStack_68 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar6 = (long)puVar5 - extraout_x12;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 == 0) || (param_1 == param_2)) {
      uVar7 = 1;
    }
    else {
      uVar4 = (ulong)*(byte *)(lStack_68 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lStack_68 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar4;
      param_2 = param_2 + uVar4;
      lVar9 = *(long *)(lStack_68 + 0x48);
      pcVar10 = *(code **)(lStack_68 + 0x10);
      do {
        lVar3 = lVar3 + -1;
        (*pcVar10)(uVar6,param_1,lVar1);
        puVar2 = puVar5;
        (*pcVar10)(puVar5,param_2,lVar1);
        FUN_1020f5298();
        uVar4 = uVar6;
        func_0x000107c5fab8(uVar6,puVar5,lVar1,puVar2);
        uVar7 = (uint)uVar4;
        pcVar8 = *(code **)(lStack_68 + 8);
        (*pcVar8)(puVar5,lVar1);
        (*pcVar8)(uVar6,lVar1);
        if ((uVar4 & 1) == 0) break;
        param_2 = param_2 + lVar9;
        param_1 = param_1 + lVar9;
      } while (lVar3 != 0);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7 & 1;
}



/* Entry: 1020f348c; end: 1020f35db;  */

uint FUN_1020f348c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long extraout_x12;
  long extraout_x13;
  undefined1 *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x0001020eb368();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = (long)puVar4 - extraout_x13;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar6 = 1;
    }
    else {
      uVar3 = (ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
              ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar3;
      param_2 = param_2 + uVar3;
      lVar7 = *(long *)(extraout_x12 + 0x48);
      do {
        lVar2 = lVar2 + -1;
        FUN_1020eb3a0(param_1,uVar5);
        FUN_1020eb3a0(param_2,puVar4);
        uVar3 = uVar5;
        func_0x000107c5efd8(uVar5,puVar4);
        if ((uVar3 & 1) == 0) {
          func_0x0001020eb3e4(puVar4);
          func_0x0001020eb3e4(uVar5);
          goto LAB_1020f35b8;
        }
        uVar3 = uVar5 + (long)*(int *)(lVar1 + 0x14);
        func_0x000107c5efd8(uVar3,puVar4 + *(int *)(lVar1 + 0x14));
        uVar6 = (uint)uVar3;
        func_0x0001020eb3e4(puVar4);
        func_0x0001020eb3e4(uVar5);
        if ((uVar3 & 1) == 0) break;
        param_2 = param_2 + lVar7;
        param_1 = param_1 + lVar7;
      } while (lVar2 != 0);
    }
  }
  else {
LAB_1020f35b8:
    uVar6 = 0;
  }
  return uVar6 & 1;
}



/* Entry: 1020f35dc; end: 1020f36a3;  */

bool FUN_1020f35dc(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    plVar2 = (long *)(param_1 + 0x20);
    plVar3 = (long *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *plVar2 == *plVar3;
      if (*plVar2 != *plVar3) {
        return bVar1;
      }
      plVar2 = plVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Entry: 1020f36a4; end: 1020f3717;  */

undefined8 FUN_1020f36a4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 != 0) && (param_1 != param_2)) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      lVar2 = lVar2 + -1;
      uVar1 = *puVar3;
      func_0x000107c49cec();
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
    return uVar1;
  }
  return 1;
}



/* Entry: 1020f3718; end: 1020f3927;  */

undefined8 FUN_1020f3718(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if (param_1 == param_2) {
    uVar10 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar14 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
    uVar4 = 0;
    func_0x000107c61438(param_1);
    func_0x000107c61434(param_2);
    lVar11 = 0;
    while( true ) {
      lVar12 = param_1;
      if (uVar14 == 0) {
        do {
          lVar13 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f3920);
            (*pcVar1)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar13) {
            uVar10 = 1;
            goto LAB_1020f38d8;
          }
          uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
          lVar11 = lVar11 + 1;
        } while (uVar14 == 0);
        uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
      }
      else {
        uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
        lVar13 = lVar11;
      }
      uVar5 = LZCOUNT(uVar5) | lVar13 << 6;
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + uVar5 * 8);
      lVar8 = *(long *)(*(long *)(param_1 + 0x38) + uVar5 * 8);
      func_0x000107c61174();
      func_0x000107c61434(lVar8);
      lVar11 = lVar3;
      FUN_1020f42f0();
      uVar5 = uVar4;
      func_0x000107c61170(lVar3);
      lVar3 = lVar8;
      lVar7 = param_2;
      if ((uVar4 & 1) == 0) break;
      lVar9 = *(long *)(*(long *)(param_2 + 0x38) + lVar11 * 8);
      lVar11 = *(long *)(lVar9 + 0x10);
      lVar3 = param_2;
      lVar7 = param_1;
      lVar12 = lVar8;
      if (lVar11 != *(long *)(lVar8 + 0x10)) break;
      if (lVar11 != 0 && lVar9 != lVar8) {
        func_0x000107c61434(lVar9);
        lVar12 = 4;
        do {
          if (*(ulong *)(lVar9 + 0x10) <= lVar12 - 4U) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f3924);
            (*pcVar1)();
          }
          if (*(ulong *)(lVar8 + 0x10) <= lVar12 - 4U) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f3928);
            (*pcVar1)();
          }
          iVar2 = (int)*(undefined8 *)(lVar9 + lVar12 * 8);
          func_0x000107c49cec();
          if (iVar2 == 0) {
            func_0x000107c6142c(lVar9);
            lVar3 = lVar8;
            lVar7 = param_2;
            lVar12 = param_1;
            goto LAB_1020f38d0;
          }
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        func_0x000107c6142c(lVar9);
      }
      func_0x000107c6142c(lVar8);
      uVar4 = uVar5;
      lVar11 = lVar13;
    }
LAB_1020f38d0:
    func_0x000107c6142c(lVar3);
    uVar10 = 0;
    param_2 = lVar7;
LAB_1020f38d8:
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(lVar12);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



/* Entry: 1020f3928; end: 1020f3adb;  */

ulong FUN_1020f3928(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f3a0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f3a10);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
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
    puVar4 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
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
  func_0x0001007bbbf8(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f3adc);
  (*pcVar2)();
}



/* Entry: 1020f3adc; end: 1020f3bf7;  */

undefined8 FUN_1020f3adc(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long alStack_98 [9];
  
  lVar5 = *unaff_x20;
  func_0x000107c6068c(alStack_98,*(undefined8 *)(lVar5 + 0x28));
  plVar1 = alStack_98;
  func_0x000107c6011c();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar4 = (ulong)plVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      uVar2 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
      func_0x000107c49cec();
      if ((uVar2 & 1) != 0) {
        func_0x000107c61170(param_2);
        *param_1 = *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
        func_0x000107c61174();
        return 0;
      }
      uVar4 = uVar4 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  func_0x000107c61558(*unaff_x20);
  alStack_98[0] = *unaff_x20;
  func_0x000107c61174();
  FUN_1020f3bf8();
  *unaff_x20 = alStack_98[0];
  *param_1 = param_2;
  return 1;
}



/* Entry: 1020f3bf8; end: 1020f3d2f;  */

void FUN_1020f3bf8(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auStack_88 [72];
  
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar4 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1020f3f4c();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1020f3d30(uVar4 + 1);
    }
    else {
      FUN_1020f409c();
    }
    lVar6 = *unaff_x20;
    func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar6 + 0x28));
    puVar3 = auStack_88;
    func_0x000107c6011c();
    func_0x000107c606a8();
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2 = (ulong)puVar3 & (uVar4 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        iVar2 = (int)*(undefined8 *)(*(long *)(lVar6 + 0x30) + param_2 * 8);
        func_0x000107c49cec();
        if (iVar2 != 0) {
          func_0x000107c60620(&UNK_1104cace0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f3d30);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar6 = lVar5 + (param_2 >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << (param_2 & 0x3f);
  *(undefined8 *)(*(long *)(lVar5 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f3d20);
  (*pcVar1)();
}



/* Entry: 1020f3d30; end: 1020f3f4b;  */

void FUN_1020f3d30(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112e58828;
  func_0x0001000285a8(0x112e58828,&UNK_10da5c768);
  lVar4 = lVar14;
  func_0x000107c602e0(lVar14,lVar1,0,uVar13);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_1020f3f14:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar4;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar14 + 0x38);
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f3f48);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_1020f3f14;
        uVar12 = ((ulong *)(lVar14 + 0x38))[lVar15];
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
    uVar13 = *(undefined8 *)(*(long *)(lVar14 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    func_0x000107c61174();
    puVar5 = auStack_a8;
    func_0x000107c6011c();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar10 = (ulong)puVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f3f4c);
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
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1020f3f4c; end: 1020f409b;  */

void FUN_1020f3f4c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x112e58828,&UNK_10da5c768);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_1020f4028;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_1020f4028:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f409c);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1020f4074;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_1020f4074:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1020f409c; end: 1020f42ef;  */

void FUN_1020f409c(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
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
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar15 = 0x112e58828;
  func_0x0001000285a8(0x112e58828,&UNK_10da5c768);
  lVar4 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar15);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1020f42bc:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f42ec);
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
          goto LAB_1020f42bc;
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
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    puVar5 = auStack_a8;
    func_0x000107c6011c();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar10 = (ulong)puVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f42f0);
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
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 1020f42f0; end: 1020f4347;  */

undefined1  [16] FUN_1020f42f0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auStack_78 [56];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar1 = auStack_78;
  func_0x000107c6011c();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar4 = (ulong)puVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    do {
      puVar2 = *(undefined1 **)(*(long *)(unaff_x20 + 0x30) + uVar4 * 8);
      func_0x000107c49cec(puVar2,puVar1,param_1);
      if (((ulong)puVar2 & 1) != 0) break;
      uVar4 = uVar4 + 1 & ~uVar3;
      puVar1 = puVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 1020f4348; end: 1020f43d7;  */

undefined1  [16] FUN_1020f4348(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar3 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    do {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar3 * 8);
      func_0x000107c49cec(uVar1,param_2,param_1);
      if ((uVar1 & 1) != 0) break;
      uVar3 = uVar3 + 1 & ~uVar2;
      param_2 = uVar1;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 1020f43d8; end: 1020f43eb;  */

/* WARNING: Removing unreachable block (ram,0x000102100ba8) */
/* WARNING: Removing unreachable block (ram,0x000102100bb8) */
/* WARNING: Removing unreachable block (ram,0x000102100c90) */
/* WARNING: Removing unreachable block (ram,0x000102100bc4) */
/* WARNING: Removing unreachable block (ram,0x000102100bcc) */
/* WARNING: Removing unreachable block (ram,0x000102100c44) */
/* WARNING: Removing unreachable block (ram,0x000102100c4c) */
/* WARNING: Removing unreachable block (ram,0x000102100c50) */
/* WARNING: Removing unreachable block (ram,0x000102100c54) */
/* WARNING: Removing unreachable block (ram,0x000102100c5c) */

undefined * FUN_1020f43d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e585b8;
    func_0x0001000285a8(0x112e585b8,&UNK_10da5c140);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar5,&UNK_1104cace0);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 1020f43ec; end: 1020f449b;  */

undefined8 FUN_1020f43ec(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  FUN_1020f42f0();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1020f45d0();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x0001020f49c0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 1020f449c; end: 1020f45cf;  */

void FUN_1020f449c(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1020f42f0();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f4560);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1020f4734(lVar5);
    uVar2 = param_2;
    FUN_1020f42f0();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1104cace0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f452c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1020f45d0();
    lVar5 = *unaff_x20;
    goto joined_r0x0001020f4574;
  }
  lVar5 = *unaff_x20;
joined_r0x0001020f4574:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f45d0);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1020f45d0; end: 1020f4733;  */

void FUN_1020f45d0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112e58830,&UNK_10da5c770);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_1020f46ac;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar9;
        func_0x000107c61174();
        func_0x000107c61434(uVar9);
        if (uVar5 != 0) break;
LAB_1020f46ac:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f4734);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1020f470c;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1020f470c:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1020f4734; end: 1020f4b6b;  */

void FUN_1020f4734(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar15 = 0x112e58830;
  func_0x0001000285a8(0x112e58830,&UNK_10da5c770);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar15);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1020f498c:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar13 = uVar13 & *puVar14;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar17 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f49bc);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar13 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar13 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_1020f498c;
        }
        uVar13 = puVar14[lVar17];
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar17 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar17 << 6;
    uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar16);
      func_0x000107c61434(uVar15);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    puVar5 = auStack_a8;
    func_0x000107c6011c();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar10 = (ulong)puVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f49c0);
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
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar16;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar15;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar17;
  } while( true );
}



/* Entry: 1020f4b6c; end: 1020f4c5f;  */

undefined * FUN_1020f4b6c(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112e58830);
    puVar3 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar4 = puVar9[-1];
      uVar1 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61434(uVar1);
      uVar5 = uVar4;
      FUN_1020f42f0();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f4c5c);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f4c60);
        (*pcVar2)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1020f4c60; end: 1020f4e97;  */

undefined1  [16] FUN_1020f4c60(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1020f4b6c();
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    puVar14 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar5 = puVar14[-1];
      uVar2 = *puVar14;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61434(uVar2);
      puVar6 = puVar9;
      func_0x000107c61558();
      puVar10 = param_2;
      puVar8 = puVar9;
      if (((ulong)puVar6 & 1) == 0) {
        puVar10 = (undefined *)(*(long *)(puVar9 + 0x10) + 1);
        puVar8 = (undefined *)0x0;
        FUN_102100b8c(0,puVar10,1,puVar9);
      }
      uVar7 = *(ulong *)(puVar8 + 0x10);
      puVar6 = (undefined *)(uVar7 + 1);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar7) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        puVar10 = puVar6;
        FUN_102100b8c(puVar9,puVar6,1,puVar8);
      }
      *(undefined **)(puVar9 + 0x10) = puVar6;
      *(ulong *)(puVar9 + uVar7 * 8 + 0x20) = uVar5;
      func_0x000107c61174();
      func_0x000107c61434(uVar2);
      puVar6 = puVar4;
      func_0x000107c61558();
      uVar7 = uVar5;
      FUN_1020f42f0();
      uVar11 = (ulong)~(uint)puVar10 & 1;
      lVar1 = *(long *)(puVar4 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(puVar4 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f4e84);
        (*pcVar3)();
      }
      if (*(long *)(puVar4 + 0x18) < lVar1) {
        FUN_1020f4734(lVar1);
        uVar7 = uVar5;
        FUN_1020f42f0();
        param_2 = puVar6;
        if (((uint)puVar10 & 1) != ((uint)puVar6 & 1)) {
          func_0x000107c60624(&UNK_1104cace0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f4e98);
          (*pcVar3)();
        }
LAB_1020f4da8:
        if (((ulong)puVar10 & 1) != 0) goto LAB_1020f4cac;
LAB_1020f4db0:
        *(ulong *)(puVar4 + (uVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar4 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
        *(ulong *)(*(long *)(puVar4 + 0x30) + uVar7 * 8) = uVar5;
        *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar7 * 8) = uVar2;
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(uVar5);
        if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f4e88);
          (*pcVar3)();
        }
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      }
      else {
        param_2 = puVar10;
        if (((ulong)puVar6 & 1) != 0) goto LAB_1020f4da8;
        FUN_1020f45d0();
        if (((ulong)puVar10 & 1) == 0) goto LAB_1020f4db0;
LAB_1020f4cac:
        uVar12 = *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar7 * 8) = uVar2;
        func_0x000107c6142c(uVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar12);
      }
      puVar14 = puVar14 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  auVar15._8_8_ = puVar4;
  auVar15._0_8_ = puVar9;
  return auVar15;
}



/* Entry: 1020f4e98; end: 1020f4eb7;  */

void FUN_1020f4e98(void)

{
  func_0x000107c61168(&PTR_PTR_11281e240);
  return;
}



/* Entry: 1020f4eb8; end: 1020f4fa3;  */

long FUN_1020f4eb8(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = (uint)param_2;
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      if (*(long *)(param_3 + 0x10) != 0) {
        lVar2 = *(long *)(param_2 + 0x20 + lVar6 * 8);
        func_0x000107c61174();
        func_0x000107c61434(param_3);
        lVar8 = lVar2;
        FUN_1020f42f0();
        lVar4 = param_3;
        if ((uVar3 & 1) != 0) {
          lVar4 = *(long *)(*(long *)(param_3 + 0x38) + lVar8 * 8);
          func_0x000107c61434(lVar4);
          func_0x000107c6142c(param_3);
          lVar7 = *(long *)(lVar4 + 0x10);
          lVar8 = 0x20;
          while (lVar7 != 0) {
            iVar1 = (int)*(undefined8 *)(lVar4 + lVar8);
            func_0x000107c49cec();
            lVar8 = lVar8 + 8;
            lVar7 = lVar7 + -1;
            if (iVar1 != 0) {
              func_0x000107c6142c(lVar4);
              return lVar2;
            }
          }
        }
        func_0x000107c61170(lVar2);
        func_0x000107c6142c(lVar4);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar5);
  }
  return 0;
}



/* Entry: 1020f4fa4; end: 1020f505f;  */

long FUN_1020f4fa4(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  uVar4 = (uint)param_2;
  lVar5 = 0;
  lVar7 = *(long *)(param_1 + 0x10);
  plVar8 = (long *)(param_1 + 0x20);
  do {
    if ((lVar7 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
      return lVar5;
    }
    lVar3 = *plVar8;
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    lVar6 = lVar3;
    FUN_1020f42f0();
    if ((uVar4 & 1) == 0) {
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(param_2);
      return lVar5;
    }
    lVar6 = *(long *)(*(long *)(param_2 + 0x38) + lVar6 * 8);
    func_0x000107c61434(lVar6);
    func_0x000107c6142c(param_2);
    lVar9 = *(long *)(lVar6 + 0x10);
    func_0x000107c6142c(lVar6);
    func_0x000107c61170(lVar3);
    lVar7 = lVar7 + -1;
    bVar2 = SCARRY8(lVar5,lVar9);
    lVar5 = lVar5 + lVar9;
    plVar8 = plVar8 + 1;
  } while (!bVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f5034);
  (*pcVar1)();
}



/* Entry: 1020f5060; end: 1020f51ff;  */

undefined * FUN_1020f5060(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  lVar10 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    uVar5 = param_2;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    plVar11 = (long *)(param_1 + 0x20);
    do {
      if (*(long *)(param_2 + 0x10) == 0) {
        return puVar7;
      }
      lVar3 = *plVar11;
      func_0x000107c61174();
      func_0x000107c61434(param_2);
      lVar8 = lVar3;
      FUN_1020f42f0();
      if ((uVar5 & 1) == 0) {
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(param_2);
        return puVar7;
      }
      lVar8 = *(long *)(*(long *)(param_2 + 0x38) + lVar8 * 8);
      func_0x000107c61434(lVar8);
      func_0x000107c6142c(param_2);
      uVar9 = *(ulong *)(lVar8 + 0x10);
      uVar12 = *(ulong *)(puVar7 + 0x10);
      uVar1 = uVar12 + uVar9;
      if (SCARRY8(uVar12,uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f51f4);
        (*pcVar2)();
      }
      func_0x000107c61434(lVar8);
      puVar4 = puVar7;
      func_0x000107c61558();
      if (((int)puVar4 == 0) || (uVar6 = *(ulong *)(puVar7 + 0x18) >> 1, (long)uVar6 < (long)uVar1))
      {
        uVar5 = uVar12;
        if ((long)uVar12 <= (long)uVar1) {
          uVar5 = uVar1;
        }
        FUN_102100b8c();
        uVar6 = *(ulong *)(puVar4 + 0x18) >> 1;
        puVar7 = puVar4;
        if (*(long *)(lVar8 + 0x10) != 0) goto LAB_1020f516c;
LAB_1020f50a0:
        func_0x000107c6142c(lVar8);
        puVar4 = puVar7;
        if (uVar9 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f51f8);
          (*pcVar2)();
        }
      }
      else {
        puVar4 = puVar7;
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_1020f50a0;
LAB_1020f516c:
        if (uVar6 - *(long *)(puVar4 + 0x10) < uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f51fc);
          (*pcVar2)();
        }
        uVar5 = lVar8 + 0x20;
        func_0x000107c6140c(puVar4 + *(long *)(puVar4 + 0x10) * 8 + 0x20,uVar5,uVar9,&UNK_1104cace0)
        ;
        func_0x000107c6142c(lVar8);
        if (uVar9 != 0) {
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1020f5200);
            (*pcVar2)();
          }
          *(ulong *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + uVar9;
        }
      }
      func_0x000107c6142c(lVar8);
      func_0x000107c61170(lVar3);
      lVar10 = lVar10 + -1;
      puVar7 = puVar4;
      plVar11 = plVar11 + 1;
    } while (lVar10 != 0);
  }
  return puVar4;
}



/* Entry: 1020f5200; end: 1020f5297;  */

undefined1  [16] FUN_1020f5200(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  FUN_1020f5060(param_2,param_3);
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      if (*(ulong *)(param_2 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f5298);
        (*pcVar1)();
      }
      iVar2 = (int)*(undefined8 *)(param_2 + 0x20 + uVar3 * 8);
      func_0x000107c49cec();
      if (iVar2 != 0) {
        uVar4 = 0;
        goto LAB_1020f5270;
      }
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
  }
  uVar3 = 0;
  uVar4 = 1;
LAB_1020f5270:
  func_0x000107c6142c(param_2);
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 1020f5298; end: 1020f52db;  */

void FUN_1020f5298(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d604f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eff8(0xff);
  puVar2 = PTR___s10Foundation9IndexPathVSQAAMc_110350f10;
  func_0x000107c61520(PTR___s10Foundation9IndexPathVSQAAMc_110350f10,uVar1);
  puRam0000000112d604f0 = puVar2;
  return;
}



/* Entry: 1020f52dc; end: 1020f5587;  */

void FUN_1020f52dc(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1020f53cc);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 8;
  func_0x000107c61408(lVar1,lVar4,&UNK_1104cace0);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1020f53d0);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1020f53d4);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 8;
    uVar3 = lVar7 + 0x20 + param_2 * 8;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 8 <= uVar2) {
      func_0x000107c610b8(uVar2,uVar3,lVar4 * 8);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1020f53d8);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
  if (*(long *)(param_4 + 0x10) == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbffbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_arrayInitWithCopy_11034f238)(lVar1,param_4 + 0x20,param_3,&UNK_1104cace0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1020f53dc);
  (*pcVar6)();
}



/* Entry: 1020f5588; end: 1020f5597;  */

undefined1  [16] FUN_1020f5588(void)

{
  return ZEXT816(0x1104cace0);
}



/* Entry: 1020f5598; end: 1020f5633;  */

void FUN_1020f5598(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6011c(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020f5634; end: 1020f564f;  */

void FUN_1020f5634(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000107c49cec(*param_1,param_2,*param_2);
  return;
}



/* Entry: 1020f5650; end: 1020f5653;  */

void FUN_1020f5650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5c790;
  func_0x000107c61520(&UNK_10da5c790,&UNK_1104cace0);
  puRam0000000112e58840 = puVar1;
  return;
}



/* Entry: 1020f5654; end: 1020f5693;  */

void FUN_1020f5654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5c790;
  func_0x000107c61520(&UNK_10da5c790,&UNK_1104cace0);
  puRam0000000112e58840 = puVar1;
  return;
}



/* Entry: 1020f5694; end: 1020f586b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020f5694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  uVar7 = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e58508);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e58510);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e58518);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001020f0ce8();
  puVar4 = puVar3;
  FUN_1020f4c60();
  func_0x000107c6142c(puVar3);
  lVar2 = _DAT_112e586b0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = _DAT_112e586b8;
  func_0x0001000285a8(0x112e588a0,&UNK_10da5c858);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e586c0);
  *puVar1 = puVar4;
  puVar1[1] = uVar7;
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1[2] = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1[3] = puVar3;
  func_0x0001000285a8(0x112e588a8,&UNK_10da5c860);
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c53e08(param_1);
  lVar2 = _DAT_112e58508;
  func_0x000107c61428(puVar6 + _DAT_112e58508,auStack_88,1,0);
  func_0x000107c61604(puVar6 + lVar2,param_1);
  func_0x000107c61170(param_1);
  puVar1 = (undefined8 *)(puVar6 + _DAT_112e58510);
  func_0x000107c61428(puVar1,auStack_a0,1,0);
  uVar5 = *puVar1;
  uVar7 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000100ce3aa8(uVar5,uVar7);
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 1020f586c; end: 1020f5b93;  */

void FUN_1020f586c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  lVar2 = 0;
  uStack_88 = param_4;
  uStack_70 = param_2;
  puStack_68 = param_1;
  func_0x000107c5eff8();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar2 = 0;
  func_0x0001020eb368();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_3);
  if ((param_5 & 0xff00) == 0x100) {
    if ((param_5 & 0xff) == 1) {
      func_0x000107c5efe0(lVar7,uStack_70,param_6);
      puVar1 = puStack_68;
      uVar5 = *puStack_68;
      uVar3 = uVar5;
      func_0x000107c61558();
      uVar4 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x000101161644(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar5 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000101161644(uVar5,uVar3 + 1,1,uVar4);
      }
      *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
      (**(code **)(lStack_80 + 0x20))
                (uVar5 + ((ulong)*(byte *)(lStack_80 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lStack_80 + 0x50) ^ 0xffffffffffffffff)) +
                 *(long *)(lStack_80 + 0x48) * uVar3,lVar7,lStack_78);
      *puVar1 = uVar5;
    }
    else {
      func_0x000107c5efe0(lVar8,uStack_70,param_6);
      func_0x000107c5efe0(lVar8 + *(int *)(lVar2 + 0x14),uStack_88,param_6);
      puVar1 = puStack_68;
      uVar5 = puStack_68[2];
      uVar3 = uVar5;
      func_0x000107c61558();
      uVar4 = uVar5;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        func_0x0001021009f8(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      }
      uVar3 = *(ulong *)(uVar4 + 0x10);
      uVar5 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x0001021009f8(uVar5,uVar3 + 1,1,uVar4);
      }
      *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
      FUN_1020eb440(lVar8,uVar5 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
                          *(long *)(lVar9 + 0x48) * uVar3);
      puVar1[2] = uVar5;
    }
  }
  else if ((param_5 & 0xff) == 1) {
    func_0x000107c5efe0(puVar6,uStack_70,param_6);
    puVar1 = puStack_68;
    uVar5 = puStack_68[1];
    uVar3 = uVar5;
    func_0x000107c61558();
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      func_0x000101161644(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000101161644(uVar5,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    (**(code **)(lStack_80 + 0x20))
              (uVar5 + ((ulong)*(byte *)(lStack_80 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lStack_80 + 0x50) ^ 0xffffffffffffffff)) +
               *(long *)(lStack_80 + 0x48) * uVar3,puVar6,lStack_78);
    puVar1[1] = uVar5;
  }
  func_0x000107c61170();
  return;
}



/* Entry: 1020f5b94; end: 1020f6b0b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f5b94(undefined *param_1,undefined *param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long lVar20;
  long extraout_x8_01;
  ulong *puVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  ulong *puVar26;
  ulong *puVar27;
  long unaff_x20;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  code *pcVar32;
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined *puVar36;
  undefined *puVar37;
  ulong auStack_1a0 [4];
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_158;
  undefined *puStack_110;
  undefined *puStack_100;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar29 = 0x112e58888;
  func_0x0001000285a8(0x112e58888,&UNK_10da5c848);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar29 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = ((long)auStack_1a0 - extraout_x8) - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5eff8();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar6 = _DAT_112e58508;
  puVar21 = (ulong *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + _DAT_112e58508,auStack_90,0,0);
  lVar6 = unaff_x20 + lVar6;
  func_0x000107c61618();
  puVar26 = (ulong *)(unaff_x20 + _DAT_112e586c0);
  if (lVar6 == 0) {
    func_0x000107c61428(puVar26,auStack_a8,1,0);
    uVar35 = *puVar26;
    uVar10 = puVar26[1];
    uVar34 = puVar26[2];
    uVar23 = puVar26[3];
    *puVar26 = (ulong)param_1;
    puVar26[1] = (ulong)param_2;
    puVar26[2] = param_3;
    puVar26[3] = param_4;
    func_0x000107c61438(param_1,2);
    func_0x000107c61438(param_2,2);
    func_0x000107c61438(param_3,2);
    func_0x000107c61438(param_4,2);
    func_0x000107c6142c(uVar23);
    func_0x000107c6142c(uVar34);
    func_0x000107c6142c(uVar10);
    func_0x000107c6142c(uVar35);
    uVar33 = *(undefined8 *)(unaff_x20 + _DAT_112e586b8);
    puStack_d8 = param_1;
    puStack_d0 = param_2;
    puStack_c8 = (undefined *)param_3;
    puStack_c0 = (undefined *)param_4;
    func_0x000107c6157c(uVar33);
    func_0x000100087c34(&puStack_d8);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_1);
    func_0x000107c61574(uVar33);
    return;
  }
  lVar17 = 0;
  auStack_1a0[2] = (long)auStack_1a0 - extraout_x8;
  auStack_1a0[3] = lVar29;
  lStack_180 = lVar6;
  uStack_178 = param_5;
  uStack_170 = param_6;
  func_0x000107c61428(puVar26,auStack_a8,0,0);
  uVar35 = *puVar26;
  uVar10 = puVar26[1];
  uVar34 = puVar26[2];
  uVar23 = puVar26[3];
  func_0x000107c61434(uVar35);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar34);
  func_0x000107c61434(uVar23);
  uVar5 = uVar35;
  puVar15 = param_1;
  FUN_1020f86e4();
  puVar37 = puVar15;
  func_0x000107c61434(puVar15);
  puVar11 = puVar15;
  func_0x000101164de8();
  func_0x000107c6142c(puVar15);
  puVar22 = *(undefined **)(param_1 + 0x10);
  if (puVar22 != (undefined *)0x0) {
    puVar36 = (undefined *)0x0;
    puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1020f5dd4:
    puVar8 = puVar36;
    puVar28 = puVar36;
    if (puVar36 <= puVar22) {
      puVar28 = puVar22;
    }
    do {
      if (puVar8 == puVar28) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x1020f6b0c);
        (*pcVar32)();
      }
      if (*(long *)(param_2 + 0x10) == 0) {
        func_0x000107c6142c(uVar35);
        goto LAB_1020f6124;
      }
      lVar6 = *(long *)(param_1 + (long)puVar8 * 8 + 0x20);
      func_0x000107c61174();
      func_0x000107c61434(param_2);
      lVar29 = lVar6;
      FUN_1020f42f0();
      if (((ulong)puVar37 & 1) == 0) {
        func_0x000107c6142c(uVar35);
        func_0x000107c6142c(puVar11);
        func_0x000107c61170(lVar6);
        puVar11 = param_2;
        goto LAB_1020f6124;
      }
      puVar36 = puVar8 + 1;
      uVar33 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar29 * 8);
      func_0x000107c61434(uVar33);
      func_0x000107c6142c(param_2);
      if (*(long *)(puVar11 + 0x10) != 0) {
        uVar7 = *(ulong *)(puVar11 + 0x28);
        puVar37 = puVar8;
        func_0x000107c60688();
        uVar24 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
        uVar7 = uVar7 & (uVar24 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar11 + (uVar7 >> 6) * 8 + 0x38) >> (uVar7 & 0x3f) & 1) != 0) {
          do {
            if (*(undefined **)(*(long *)(puVar11 + 0x30) + uVar7 * 8) == puVar8)
            goto LAB_1020f5de4;
            uVar7 = uVar7 + 1 & ~uVar24;
          } while ((*(ulong *)(puVar11 + (uVar7 >> 6) * 8 + 0x38) >> (uVar7 & 0x3f) & 1) != 0);
        }
      }
      if (*(long *)(uVar10 + 0x10) == 0) {
LAB_1020f5de4:
        func_0x000107c6142c(uVar33);
        func_0x000107c61170(lVar6);
      }
      else {
        func_0x000107c61434(uVar10);
        lVar29 = lVar6;
        FUN_1020f42f0();
        if (((ulong)puVar37 & 1) != 0) goto LAB_1020f5ef4;
        func_0x000107c6142c(uVar33);
        func_0x000107c61170(lVar6);
        func_0x000107c6142c(uVar10);
      }
      puVar8 = puVar36;
      if (puVar36 == puVar22) goto LAB_1020f611c;
    } while( true );
  }
  puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1020f611c:
  func_0x000107c6142c(uVar35);
LAB_1020f6124:
  func_0x000107c6142c(puVar11);
  func_0x000107c6142c(uVar23);
  func_0x000107c6142c(uVar34);
  func_0x000107c6142c(uVar10);
  puVar26 = (ulong *)(param_3 + 0x38);
  uVar34 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar35 = 0xffffffffffffffff;
  if (-uVar34 < 0x40) {
    uVar35 = ~(-1L << (-uVar34 & 0x3f));
  }
  uVar35 = uVar35 & *puVar26;
  func_0x000107c61434(param_3);
  lVar29 = 0;
  lVar6 = lVar29;
  puStack_100 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x0001020f61a4:
  if (uVar35 != 0) {
    uVar10 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar35 = uVar35 - 1 & uVar35;
    uVar33 = *(undefined8 *)
              (*(long *)(param_3 + 0x30) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 8 +
              lVar29 * 0x200);
    func_0x000107c61174(uVar33);
    lVar6 = lVar29;
    if (puVar22 != (undefined *)0x0) {
      puVar37 = (undefined *)0x0;
      do {
        uVar10 = *(ulong *)(param_1 + (long)puVar37 * 8 + 0x20);
        func_0x000107c49cec();
        if ((uVar10 & 1) != 0) {
          func_0x000107c61170(uVar33);
          puVar11 = puStack_100;
          func_0x000107c61558();
          if (((ulong)puVar11 & 1) == 0) {
            plVar25 = (long *)(puStack_100 + 0x10);
            puStack_100 = (undefined *)0x0;
            func_0x000101755b54(0,*plVar25 + 1,1);
          }
          uVar10 = *(ulong *)(puStack_100 + 0x10);
          if (*(ulong *)(puStack_100 + 0x18) >> 1 <= uVar10) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_100 + 0x18));
            func_0x000101755b54(puVar11,uVar10 + 1,1,puStack_100);
            puStack_100 = puVar11;
          }
          *(ulong *)(puStack_100 + 0x10) = uVar10 + 1;
          *(undefined **)(puStack_100 + uVar10 * 8 + 0x20) = puVar37;
          goto joined_r0x0001020f61a4;
        }
        puVar37 = puVar37 + 1;
      } while (puVar22 != puVar37);
    }
    func_0x000107c61170(uVar33);
    goto joined_r0x0001020f61a4;
  }
  bVar2 = SCARRY8(lVar29,1);
  lVar29 = lVar29 + 1;
  if (bVar2) {
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x1020f6afc);
    (*pcVar32)();
  }
  if (lVar29 < (long)(0x3f - uVar34 >> 6)) {
    uVar35 = puVar26[lVar29];
    goto joined_r0x0001020f61a4;
  }
  func_0x0001020f8f58(param_3,puVar26,~uVar34,lVar6,0);
  uVar35 = *(ulong *)(puStack_100 + 0x10);
  puVar37 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar35 != 0) {
    uVar34 = 0;
    uVar10 = *(ulong *)(puVar15 + 0x10);
LAB_1020f6350:
    if (*(ulong *)(puStack_100 + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x1020f6b04);
      (*pcVar32)();
    }
    uVar23 = 0;
    lVar29 = *(long *)(puStack_100 + uVar34 * 8 + 0x20);
    uVar34 = uVar34 + 1;
    do {
      if (uVar10 == uVar23) {
        lVar6 = *(long *)(uVar5 + 0x10);
        plVar25 = (long *)(uVar5 + 0x20);
        goto LAB_1020f639c;
      }
      if (*(ulong *)(puVar15 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x1020f6af4);
        (*pcVar32)();
      }
      lVar6 = uVar23 * 8;
      uVar23 = uVar23 + 1;
    } while (*(long *)(puVar15 + lVar6 + 0x20) != lVar29);
    goto LAB_1020f63e8;
  }
LAB_1020f6448:
  func_0x000107c6142c(puStack_100);
  puVar27 = (ulong *)(param_4 + 0x38);
  uVar34 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar35 = 0xffffffffffffffff;
  if (-uVar34 < 0x40) {
    uVar35 = ~(-1L << (-uVar34 & 0x3f));
  }
  uVar35 = uVar35 & *puVar27;
  func_0x000107c61434();
  lVar29 = 0;
  lVar6 = lVar29;
  puStack_110 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x0001020f64b8:
  while (uVar35 == 0) {
    bVar2 = SCARRY8(lVar29,1);
    lVar29 = lVar29 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x1020f6b00);
      (*pcVar32)();
    }
    if ((long)(0x3f - uVar34 >> 6) <= lVar29) {
      func_0x0001020f8f58(param_4,puVar27,~uVar34,lVar6,0);
      puVar11 = &UNK_1104cae08;
      puVar36 = puVar11;
      func_0x000107c613fc(&UNK_1104cae08,0x18,7);
      func_0x000107c61614(puVar36 + 0x10,unaff_x20);
      puVar22 = &UNK_1104cae30;
      func_0x000107c613fc(&UNK_1104cae30,0x70,7);
      lVar29 = lStack_180;
      *(undefined **)(puVar22 + 0x10) = puVar36;
      *(undefined **)(puVar22 + 0x18) = param_1;
      *(undefined **)(puVar22 + 0x20) = param_2;
      *(ulong *)(puVar22 + 0x28) = param_3;
      *(ulong *)(puVar22 + 0x30) = param_4;
      *(ulong *)(puVar22 + 0x38) = uVar5;
      *(undefined **)(puVar22 + 0x40) = puVar15;
      *(long *)(puVar22 + 0x48) = lVar17;
      *(long *)(puVar22 + 0x50) = lStack_180;
      *(undefined **)(puVar22 + 0x58) = puVar37;
      *(undefined **)(puVar22 + 0x60) = puStack_158;
      *(undefined **)(puVar22 + 0x68) = puStack_110;
      puVar37 = &UNK_1104cae58;
      func_0x000107c613fc(&UNK_1104cae58,0x20,7);
      *(code **)(puVar37 + 0x10) = FUN_1020f8f60;
      *(undefined **)(puVar37 + 0x18) = puVar22;
      pcStack_b8 = FUN_1020f8f9c;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d0 = (undefined *)0x42000000;
      puStack_c8 = &UNK_10006eb60;
      puStack_c0 = &UNK_1104cae70;
      ppuVar13 = &puStack_d8;
      puStack_b0 = puVar37;
      func_0x000107c60bc4();
      puVar37 = puStack_b0;
      func_0x000107c61434(param_3);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_1);
      func_0x000107c61434(param_2);
      func_0x000107c61174(lVar29);
      func_0x000107c61574(puVar37);
      func_0x000107c613fc(&UNK_1104cae08,0x18,7);
      func_0x000107c61614(puVar11 + 0x10,unaff_x20);
      puVar37 = &UNK_1104caea8;
      func_0x000107c613fc(&UNK_1104caea8,0x48,7);
      uVar18 = uStack_170;
      uVar33 = uStack_178;
      *(undefined **)(puVar37 + 0x10) = puVar11;
      *(undefined **)(puVar37 + 0x18) = param_1;
      *(undefined **)(puVar37 + 0x20) = param_2;
      *(ulong *)(puVar37 + 0x28) = param_3;
      *(ulong *)(puVar37 + 0x30) = param_4;
      *(undefined8 *)(puVar37 + 0x38) = uStack_178;
      *(undefined8 *)(puVar37 + 0x40) = uStack_170;
      pcStack_b8 = (code *)0x1020f8fa4;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_d0 = (undefined *)0x42000000;
      puStack_c8 = &UNK_100288f10;
      puStack_c0 = &UNK_1104caec0;
      ppuVar14 = &puStack_d8;
      puStack_b0 = puVar37;
      func_0x000107c60bc4(ppuVar14);
      puVar37 = puStack_b0;
      func_0x000107c61434(param_3);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_1);
      func_0x000107c61434(param_2);
      func_0x000100ce3a98(uVar33,uVar18);
      func_0x000107c61574(puVar37);
      func_0x000107c4e54c(lVar29);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c61574(puVar22);
      func_0x000107c61170(lVar29);
      return;
    }
    uVar35 = puVar27[lVar29];
  }
  uVar10 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
  uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  lVar6 = *(long *)(*(long *)(param_4 + 0x30) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 8 +
                   lVar29 * 0x200);
  func_0x000107c61174(lVar6);
  if (puVar22 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar12 = *(long *)(param_1 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
        func_0x000107c61434(param_2);
        lVar31 = lVar12;
        FUN_1020f42f0();
        puVar36 = param_2;
        if (((ulong)puVar26 & 1) != 0) {
          puVar36 = *(undefined **)(*(long *)(param_2 + 0x38) + lVar31 * 8);
          func_0x000107c61434(puVar36);
          func_0x000107c6142c(param_2);
          uVar23 = *(ulong *)(puVar36 + 0x10);
          uVar10 = 0;
          while (uVar23 != uVar10) {
            if (*(ulong *)(puVar36 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar32 = (code *)SoftwareBreakpoint(1,0x1020f6af8);
              (*pcVar32)();
            }
            iVar3 = (int)*(undefined8 *)(puVar36 + uVar10 * 8 + 0x20);
            func_0x000107c49cec();
            uVar10 = uVar10 + 1;
            if (iVar3 != 0) {
              func_0x000107c6142c(puVar36);
              puVar11 = (undefined *)0x0;
              goto LAB_1020f65c8;
            }
          }
        }
        func_0x000107c61170(lVar12);
        func_0x000107c6142c(puVar36);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar22);
  }
  goto LAB_1020f66a8;
LAB_1020f5ef4:
  puVar28 = *(undefined **)(*(long *)(uVar10 + 0x38) + lVar29 * 8);
  func_0x000107c61434(puVar28);
  func_0x000107c6142c(uVar10);
  puVar16 = puVar28;
  uVar18 = uVar33;
  func_0x0001020f8a9c();
  puVar37 = puVar16;
  func_0x000107c6142c(uVar33);
  func_0x000107c61170(lVar6);
  func_0x000107c6142c(puVar28);
  puVar28 = puStack_158;
  func_0x000107c61558();
  puVar9 = puStack_158;
  if (((ulong)puVar28 & 1) == 0) {
    puVar37 = (undefined *)(*(long *)(puStack_158 + 0x10) + 1);
    puVar9 = (undefined *)0x0;
    func_0x000102100c94(0,puVar37,1,puStack_158);
  }
  uVar7 = *(ulong *)(puVar9 + 0x10);
  puVar28 = (undefined *)(uVar7 + 1);
  puStack_158 = puVar9;
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
    puStack_158 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    puVar37 = puVar28;
    func_0x000102100c94(puStack_158,puVar28,1,puVar9);
  }
  *(undefined **)(puStack_158 + 0x10) = puVar28;
  *(undefined **)(puStack_158 + uVar7 * 0x18 + 0x20) = puVar8;
  *(undefined **)(puStack_158 + uVar7 * 0x18 + 0x28) = puVar16;
  *(undefined8 *)(puStack_158 + uVar7 * 0x18 + 0x30) = uVar18;
  if (puVar36 == puVar22) goto LAB_1020f611c;
  goto LAB_1020f5dd4;
  while( true ) {
    lVar31 = *plVar25;
    lVar6 = lVar6 + -1;
    plVar25 = plVar25 + 1;
    if (lVar31 == lVar29) break;
LAB_1020f639c:
    if (lVar6 == 0) {
      lVar6 = *(long *)(lVar17 + 0x10) + 1;
      plVar25 = (long *)(lVar17 + 0x28);
      goto LAB_1020f63cc;
    }
  }
  goto LAB_1020f63e8;
  while (plVar1 = plVar25 + -1, lVar31 = *plVar25, plVar25 = plVar25 + 2,
        *plVar1 != lVar29 && lVar31 != lVar29) {
LAB_1020f63cc:
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) goto LAB_1020f6344;
  }
LAB_1020f63e8:
  puVar11 = puVar37;
  func_0x000107c61558();
  puStack_d8 = puVar37;
  if (((ulong)puVar11 & 1) == 0) {
    puVar26 = (ulong *)(*(long *)(puVar37 + 0x10) + 1);
    func_0x000100dd4260(0,puVar26,1);
  }
  uVar23 = *(ulong *)(puStack_d8 + 0x10);
  puVar27 = (ulong *)(uVar23 + 1);
  if (*(ulong *)(puStack_d8 + 0x18) >> 1 <= uVar23) {
    puVar26 = puVar27;
    func_0x000100dd4260(1 < *(ulong *)(puStack_d8 + 0x18),puVar27,1);
  }
  *(ulong **)(puStack_d8 + 0x10) = puVar27;
  *(long *)(puStack_d8 + uVar23 * 8 + 0x20) = lVar29;
  puVar37 = puStack_d8;
LAB_1020f6344:
  if (uVar34 == uVar35) goto LAB_1020f6448;
  goto LAB_1020f6350;
  while (puVar11 = puVar11 + 1, puVar22 != puVar11) {
LAB_1020f65c8:
    lVar30 = *(long *)(param_1 + (long)puVar11 * 8 + 0x20);
    lVar31 = lVar30;
    func_0x000107c49cec();
    if ((int)lVar31 != 0) {
      if (*(long *)(param_2 + 0x10) == 0) {
        lVar31 = 0;
        uVar10 = uRam0000000000000010;
      }
      else {
        func_0x000107c61434(param_2);
        func_0x000107c61174();
        lVar31 = lVar30;
        FUN_1020f42f0();
        if (((ulong)puVar26 & 1) == 0) {
          lVar31 = 0;
        }
        else {
          lVar31 = *(long *)(*(long *)(param_2 + 0x38) + lVar31 * 8);
          func_0x000107c61434(lVar31);
        }
        func_0x000107c61170(lVar30);
        func_0x000107c6142c(param_2);
        uVar10 = *(ulong *)(lVar31 + 0x10);
      }
      if (uVar10 == 0) goto LAB_1020f6694;
      uVar23 = 0;
      goto LAB_1020f6668;
    }
  }
  func_0x000107c61170(lVar12);
  goto LAB_1020f66a8;
  while (uVar23 = uVar23 + 1, uVar10 != uVar23) {
LAB_1020f6668:
    if (*(ulong *)(lVar31 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x1020f6b08);
      (*pcVar32)();
    }
    iVar3 = (int)*(undefined8 *)(lVar31 + uVar23 * 8 + 0x20);
    func_0x000107c49cec();
    if (iVar3 != 0) {
      func_0x000107c6142c(lVar31);
      uVar10 = auStack_1a0[2];
      auStack_1a0[1] = (ulong)*(int *)(auStack_1a0[3] + 0x30);
      func_0x000107c5efe8(auStack_1a0[2] + auStack_1a0[1],uVar23,puVar11);
      (**(code **)(lVar20 + 0x20))(lVar19,uVar10 + auStack_1a0[1],lVar4);
      (**(code **)(lVar20 + 0x38))(lVar19,0,1,lVar4);
      func_0x000107c61170(lVar6);
      goto LAB_1020f66d8;
    }
  }
LAB_1020f6694:
  func_0x000107c61170(lVar12);
  func_0x000107c6142c(lVar31);
LAB_1020f66a8:
  (**(code **)(lVar20 + 0x38))(lVar19,1,1,lVar4);
  lVar12 = lVar6;
LAB_1020f66d8:
  uVar35 = uVar35 - 1 & uVar35;
  func_0x000107c61170(lVar12);
  puVar26 = (ulong *)0x1;
  lVar31 = lVar19;
  (**(code **)(lVar20 + 0x30))(lVar19,1,lVar4);
  lVar6 = lVar29;
  if ((int)lVar31 == 1) {
    FUN_1020f8fb8(lVar19);
  }
  else {
    pcVar32 = *(code **)(lVar20 + 0x20);
    (*pcVar32)(puVar21,lVar19,lVar4);
    puVar11 = puStack_110;
    func_0x000107c61558();
    if (((ulong)puVar11 & 1) == 0) {
      plVar25 = (long *)((long)puStack_110 + 0x10);
      puStack_110 = (undefined *)0x0;
      func_0x000101161644(0,*plVar25 + 1,1);
    }
    uVar10 = *(ulong *)(puStack_110 + 0x10);
    if (*(ulong *)(puStack_110 + 0x18) >> 1 <= uVar10) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_110 + 0x18));
      func_0x000101161644(puVar11,uVar10 + 1,1,puStack_110);
      puStack_110 = puVar11;
    }
    *(ulong *)(puStack_110 + 0x10) = uVar10 + 1;
    puVar26 = puVar21;
    (*pcVar32)(puStack_110 +
               *(long *)(lVar20 + 0x48) * uVar10 +
               ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff)),puVar21,lVar4);
  }
  goto joined_r0x0001020f64b8;
}



/* Entry: 1020f6b0c; end: 1020f703b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f6b0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  long param_10,long param_11,undefined8 param_12)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  uStack_e8 = param_2;
  lStack_e0 = param_3;
  lStack_c8 = param_6;
  lStack_c0 = param_7;
  func_0x0001020eb368();
  lStack_d8 = *(long *)(lVar1 + -8);
  lStack_d0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  puVar10 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ef8c();
  lStack_b0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar12 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar13 = (undefined8 *)(param_1 + _DAT_112e586c0);
    lStack_f0 = param_8;
    lStack_b8 = param_4;
    func_0x000107c61428(puVar13,auStack_98,1,0);
    lVar9 = lStack_e0;
    uVar4 = uStack_e8;
    puStack_f8 = (undefined1 *)*puVar13;
    uStack_100 = puVar13[1];
    uStack_108 = puVar13[2];
    uStack_110 = puVar13[3];
    *puVar13 = uStack_e8;
    puVar13[1] = lStack_e0;
    puVar13[2] = lStack_b8;
    puVar13[3] = param_5;
    uStack_118 = param_5;
    func_0x000107c61174();
    func_0x000107c61434(uVar4);
    func_0x000107c61434(lVar9);
    func_0x000107c61434(lStack_b8);
    func_0x000107c61434(uStack_118);
    lStack_e0 = param_1;
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uStack_110);
    func_0x000107c6142c(uStack_108);
    func_0x000107c6142c(uStack_100);
    puVar2 = puStack_f8;
    func_0x000107c6142c(puStack_f8);
    lVar11 = lStack_c8;
    lVar9 = *(long *)(lStack_c8 + 0x10);
    puVar3 = puVar2;
    if (lVar9 != 0) {
      FUN_101d7e430();
      func_0x000107c60260(lVar14 - extraout_x12_00,lVar1,puVar2);
      puVar13 = (undefined8 *)(lVar11 + 0x20);
      do {
        uStack_a8 = *puVar13;
        puVar3 = auStack_a0;
        func_0x000107c60254(puVar3,&uStack_a8,lVar1,puVar2);
        lVar9 = lVar9 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar9 != 0);
      func_0x000107c5ef70();
      (**(code **)(lStack_b0 + 8))(lVar14 - extraout_x12_00,lVar1);
      func_0x000107c41728(param_9);
      func_0x000107c61170(puVar3);
    }
    lVar11 = lStack_c0;
    lVar9 = *(long *)(lStack_c0 + 0x10);
    if (lVar9 != 0) {
      FUN_101d7e430();
      func_0x000107c60260(lVar14,lVar1,puVar3);
      puVar13 = (undefined8 *)(lVar11 + 0x20);
      do {
        uStack_a8 = *puVar13;
        puVar2 = auStack_a0;
        func_0x000107c60254(puVar2,&uStack_a8,lVar1,puVar3);
        lVar9 = lVar9 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar9 != 0);
      func_0x000107c5ef70();
      (**(code **)(lStack_b0 + 8))(lVar14,lVar1);
      func_0x000107c4975c(param_9);
      func_0x000107c61170(puVar2);
    }
    lVar9 = lStack_b0;
    for (lVar14 = *(long *)(lStack_f0 + 0x10); lStack_b0 = lVar9, lVar14 != 0; lVar14 = lVar14 + -1)
    {
      func_0x000107c4d144(param_9);
      lVar9 = lStack_b0;
    }
    uStack_e8 = param_12;
    lVar14 = *(long *)(param_10 + 0x10);
    if (lVar14 != 0) {
      puVar13 = (undefined8 *)(param_10 + 0x20);
      do {
        uVar4 = *puVar13;
        func_0x000107c5ef80(lVar12,uVar4);
        func_0x000107c5ef70();
        (**(code **)(lVar9 + 8))(lVar12,lVar1);
        func_0x000107c4fda4(param_9);
        func_0x000107c61170(uVar4);
        lVar14 = lVar14 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar14 != 0);
    }
    lStack_c0 = *(long *)(param_11 + 0x10);
    if (lStack_c0 != 0) {
      lVar1 = 0;
      lStack_c8 = param_11 + 0x20;
      do {
        plVar8 = (long *)(lStack_c8 + lVar1 * 0x18);
        lVar12 = *plVar8;
        lVar14 = plVar8[1];
        lVar9 = plVar8[2];
        if (*(long *)(lVar12 + 0x10) == 0) {
          func_0x000107c61434(lVar12);
          func_0x000107c61434(lVar14);
          func_0x000107c61434(lVar9);
        }
        else {
          uVar4 = 0;
          func_0x000107c5eff8(0);
          func_0x000107c61434(lVar12);
          func_0x000107c61434(lVar14);
          func_0x000107c61434(lVar9);
          lVar11 = lVar12;
          func_0x000107c5fc48(lVar12,uVar4);
          func_0x000107c416f8(param_9);
          func_0x000107c61170(lVar11);
        }
        lStack_b0 = lVar12;
        if (*(long *)(lVar14 + 0x10) != 0) {
          uVar4 = 0;
          func_0x000107c5eff8(0);
          lVar12 = lVar14;
          func_0x000107c5fc48(lVar14,uVar4);
          func_0x000107c4973c(param_9);
          func_0x000107c61170(lVar12);
        }
        lVar12 = *(long *)(lVar9 + 0x10);
        lStack_b8 = lVar14;
        if (lVar12 != 0) {
          lVar14 = lVar9 + ((ulong)*(byte *)(lStack_d8 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lStack_d8 + 0x50) ^ 0xffffffffffffffff));
          lVar11 = *(long *)(lStack_d8 + 0x48);
          do {
            lVar5 = lVar14;
            FUN_1020eb3a0(lVar14,puVar10);
            func_0x000107c5efd4();
            lVar6 = lVar5;
            func_0x000107c5efd4();
            func_0x000107c4d134(param_9);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar6);
            func_0x0001020eb3e4(puVar10);
            lVar14 = lVar14 + lVar11;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        lVar1 = lVar1 + 1;
        func_0x000107c6142c(lVar9);
        func_0x000107c6142c(lStack_b8);
        func_0x000107c6142c(lStack_b0);
      } while (lVar1 != lStack_c0);
    }
    uVar7 = 0;
    func_0x000107c5eff8(0);
    uVar4 = uStack_e8;
    func_0x000107c5fc48(uStack_e8,uVar7);
    func_0x000107c4fd90(param_9);
    func_0x000107c61170(lStack_e0);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 1020f703c; end: 1020f70fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f703c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e586b8);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_88 = param_3;
    uStack_80 = param_4;
    uStack_78 = param_5;
    uStack_70 = param_6;
    func_0x000100087c34(&uStack_88);
    func_0x000107c61574(uVar1);
  }
  if (param_7 != (code *)0x0) {
    (*param_7)();
  }
  return;
}



/* Entry: 1020f70fc; end: 1020f749b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f70fc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e586c0);
  puVar8 = auStack_78;
  func_0x000107c61428(plVar1,puVar8,0,0);
  lVar6 = *plVar1;
  lVar10 = plVar1[1];
  lVar17 = plVar1[2];
  lVar2 = plVar1[3];
  lVar19 = *(long *)(lVar6 + 0x10);
  func_0x000107c61434(lVar6);
  func_0x000107c61434(lVar10);
  func_0x000107c61434(lVar17);
  func_0x000107c61434(lVar2);
  if (lVar19 != 0) {
    lVar9 = 0;
    do {
      if (*(long *)(lVar10 + 0x10) != 0) {
        lVar13 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
        func_0x000107c61434(lVar10);
        func_0x000107c61174();
        lVar14 = lVar13;
        FUN_1020f42f0();
        lVar18 = lVar10;
        if (((ulong)puVar8 & 1) != 0) {
          lVar18 = *(long *)(*(long *)(lVar10 + 0x38) + lVar14 * 8);
          func_0x000107c61434(lVar18);
          func_0x000107c6142c(lVar10);
          lVar16 = *(long *)(lVar18 + 0x10);
          lVar14 = 0x20;
          while (lVar16 != 0) {
            iVar4 = (int)*(undefined8 *)(lVar18 + lVar14);
            func_0x000107c49cec();
            lVar14 = lVar14 + 8;
            lVar16 = lVar16 + -1;
            if (iVar4 != 0) {
              func_0x000107c6142c(lVar2);
              func_0x000107c6142c(lVar17);
              func_0x000107c6142c(lVar10);
              func_0x000107c6142c(lVar6);
              func_0x000107c6142c(lVar18);
              lVar6 = *plVar1;
              lVar10 = plVar1[1];
              lVar17 = plVar1[2];
              lVar2 = plVar1[3];
              lVar19 = *(long *)(lVar6 + 0x10);
              func_0x000107c61434(lVar6);
              func_0x000107c61434(lVar10);
              func_0x000107c61434(lVar17);
              func_0x000107c61434(lVar2);
              if (lVar19 == 0) goto LAB_1020f72a8;
              lVar9 = 4;
              goto LAB_1020f7278;
            }
          }
        }
        func_0x000107c61170(lVar13);
        func_0x000107c6142c(lVar18);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar19);
  }
  func_0x000107c6142c(lVar2);
  goto LAB_1020f72cc;
  while (uVar12 = uVar12 + 1, uVar5 != uVar12) {
LAB_1020f742c:
    if (*(ulong *)(lVar6 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f7498);
      (*pcVar3)();
    }
    uVar7 = *(ulong *)(lVar6 + uVar12 * 8 + 0x20);
    func_0x000107c49cec();
    if ((uVar7 & 1) != 0) {
      func_0x000107c6142c(lVar6);
      func_0x000107c5efe8(param_1,uVar12,uVar15);
      func_0x000107c61170(lVar13);
      uVar11 = 0;
      goto LAB_1020f72e8;
    }
  }
LAB_1020f7458:
  func_0x000107c61170(lVar13);
  goto LAB_1020f72d8;
  while (lVar9 = lVar9 + 1, lVar9 - lVar19 != 4) {
LAB_1020f7278:
    uVar15 = lVar9 - 4;
    if (*(ulong *)(lVar6 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f7494);
      (*pcVar3)();
    }
    uVar5 = *(ulong *)(lVar6 + lVar9 * 8);
    func_0x000107c49cec();
    if ((uVar5 & 1) != 0) {
      func_0x000107c6142c(lVar2);
      func_0x000107c6142c(lVar17);
      func_0x000107c6142c(lVar10);
      func_0x000107c6142c(lVar6);
      lVar17 = *plVar1;
      if (*(ulong *)(lVar17 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f749c);
        (*pcVar3)();
      }
      lVar2 = plVar1[1];
      lVar10 = plVar1[2];
      lVar19 = plVar1[3];
      lVar9 = *(long *)(lVar17 + lVar9 * 8);
      if (*(long *)(lVar2 + 0x10) == 0) {
        func_0x000107c61434(lVar17);
        func_0x000107c61434(lVar2);
        func_0x000107c61434(lVar10);
        func_0x000107c61434(lVar19);
        func_0x000107c61174(lVar9);
LAB_1020f73f4:
        lVar6 = 0;
      }
      else {
        uVar5 = 0;
        func_0x000107c61438(lVar2);
        func_0x000107c61434(lVar17);
        func_0x000107c61434(lVar10);
        func_0x000107c61434(lVar19);
        lVar6 = lVar9;
        func_0x000107c61174();
        FUN_1020f42f0();
        if ((uVar5 & 1) == 0) {
          func_0x000107c6142c(lVar2);
          goto LAB_1020f73f4;
        }
        lVar6 = *(long *)(*(long *)(lVar2 + 0x38) + lVar6 * 8);
        func_0x000107c61434(lVar6);
        func_0x000107c6142c(lVar2);
      }
      func_0x000107c61170(lVar9);
      func_0x000107c6142c(lVar19);
      func_0x000107c6142c(lVar10);
      func_0x000107c6142c(lVar2);
      func_0x000107c6142c(lVar17);
      uVar5 = *(ulong *)(lVar6 + 0x10);
      if (uVar5 == 0) goto LAB_1020f7458;
      uVar12 = 0;
      goto LAB_1020f742c;
    }
  }
LAB_1020f72a8:
  func_0x000107c61170(lVar13);
  func_0x000107c6142c(lVar2);
LAB_1020f72cc:
  func_0x000107c6142c(lVar17);
  func_0x000107c6142c(lVar10);
LAB_1020f72d8:
  func_0x000107c6142c(lVar6);
  uVar11 = 1;
LAB_1020f72e8:
  lVar6 = 0;
  func_0x000107c5eff8();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,uVar11,1,lVar6);
  return;
}



/* Entry: 1020f749c; end: 1020f754b; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference supplementaryViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f749c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112e58848);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_1020f75a4;
    puStack_60 = &UNK_1104cadd0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1020f754c; end: 1020f75a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1020f754c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112e58848);
  func_0x000107c61428(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100ce3a98(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1020f75a4; end: 1020f769f;  */

void FUN_1020f75a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  
  lVar3 = 0;
  uVar5 = param_2;
  func_0x000107c5eff8();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5faec(param_3);
  func_0x000107c5efdc(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar4 = param_2;
  (*pcVar1)();
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar5);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1020f76a0; end: 1020f775b; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference setSupplementaryViewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f76a0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1104cadb8;
    func_0x000107c613fc(&UNK_1104cadb8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x1020f8f34;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112e58848);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x000100ce3aa8(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f775c; end: 1020f7833;  */

long FUN_1020f775c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5fadc(param_2,param_3);
  uVar1 = param_2;
  func_0x000107c5efd4();
  (**(code **)(param_5 + 0x10))(param_5,param_1,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  return param_5;
}



/* Entry: 1020f7834; end: 1020f7873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1020f7834(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112e58848;
  func_0x000107c61428(unaff_x20 + _DAT_112e58848,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1020f7874;
  return auVar2;
}



/* Entry: 1020f7874; end: 1020f7877;  */

void FUN_1020f7874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1020f7878; end: 1020f796b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020f7878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e58848);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = &UNK_1104cad40;
  func_0x000107c613fc(&UNK_1104cad40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x0001000285a8(0x112e58850,&UNK_10da5c800);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(param_3);
  uVar3 = param_1;
  FUN_1020f5694(param_1,FUN_1020f796c,puVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112e58858) = uVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
  return puVar4;
}



/* Entry: 1020f796c; end: 1020f798f;  */

void FUN_1020f796c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1,param_2,*param_3);
  return;
}



/* Entry: 1020f7990; end: 1020f79af;  */

void FUN_1020f7990(void)

{
  func_0x000107c61168(&PTR_PTR_11281e3e8);
  return;
}



/* Entry: 1020f79b0; end: 1020f7acb; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference initWithCollectionView:cellProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020f79b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c60bc4();
  puVar2 = &UNK_1104cad68;
  func_0x000107c613fc(&UNK_1104cad68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112e58848);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = &UNK_1104cad90;
  func_0x000107c613fc(&UNK_1104cad90,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1020f8f2c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e58850,&UNK_10da5c800);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  uVar4 = param_3;
  FUN_1020f5694(param_3,0x1020f9070,puVar3);
  *(undefined8 *)(param_1 + _DAT_112e58858) = uVar4;
  FUN_1020f7990();
  lStack_50 = param_1;
  uStack_48 = uVar4;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar2);
  return (undefined1 *)plVar5;
}



/* Entry: 1020f7acc; end: 1020f7b33;  */

long FUN_1020f7acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c5efd4();
  (**(code **)(param_4 + 0x10))(param_4,param_1,uVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return param_4;
}



/* Entry: 1020f7b34; end: 1020f7c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f7b34(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e58858);
  puVar1 = (undefined8 *)(param_1 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  func_0x000107c61174(uVar6);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  FUN_1020f5b94(uVar2,uVar4,uVar3,uVar5,0,0);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1020f7c0c; end: 1020f7d1b; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference apply:animatingDifferences:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f7c0c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_112e58858);
  puVar1 = (undefined8 *)(param_3 + _DAT_112e587f8);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar6);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  FUN_1020f5b94(uVar2,uVar4,uVar3,uVar5,0,0);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1020f7d1c; end: 1020f7de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f7d1c(void)

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
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e58858) + _DAT_112e586c0);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  lVar7 = 0;
  FUN_1020f4e98();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e587f8);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61154(&lStack_68,puVar6);
  return;
}



/* Entry: 1020f7de4; end: 1020f7eab; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference snapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f7de4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_112e58858) + _DAT_112e586c0);
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  lVar7 = 0;
  FUN_1020f4e98();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112e587f8);
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = uVar5;
  puVar6 = PTR_s_init_1125d9248;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  func_0x000107c61154(&lStack_68,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020f7eac; end: 1020f8053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f7eac(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112e58858);
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000107c5eff4();
  puVar1 = (ulong *)(uVar5 + _DAT_112e586c0);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8048);
    (*pcVar4)();
  }
  uVar8 = *puVar1;
  if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f804c);
    (*pcVar4)();
  }
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar9 = puVar1[3];
  lVar10 = *(long *)(uVar8 + uVar6 * 8 + 0x20);
  if (*(long *)(uVar2 + 0x10) == 0) {
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar9);
    func_0x000107c61174(lVar10);
  }
  else {
    uVar6 = 0;
    func_0x000107c61438(uVar2);
    func_0x000107c61434(uVar8);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar9);
    lVar11 = lVar10;
    func_0x000107c61174();
    FUN_1020f42f0();
    if ((uVar6 & 1) != 0) {
      lVar11 = *(long *)(*(long *)(uVar2 + 0x38) + lVar11 * 8);
      func_0x000107c61434(lVar11);
      func_0x000107c6142c(uVar2);
      goto LAB_1020f7fc4;
    }
    func_0x000107c6142c(uVar2);
  }
  lVar11 = 0;
LAB_1020f7fc4:
  func_0x000107c61170(lVar10);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c();
  func_0x000107c5efec();
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8050);
    (*pcVar4)();
  }
  if (uVar8 < *(ulong *)(lVar11 + 0x10)) {
    uVar7 = *(undefined8 *)(lVar11 + uVar8 * 8 + 0x20);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c6142c(lVar11);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8054);
  (*pcVar4)();
}



/* Entry: 1020f8054; end: 1020f80ff; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference itemIdentifierFor:] */

void FUN_1020f8054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_3);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_1020f7eac(puVar3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1020f8100; end: 1020f814b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f8100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e58858);
  func_0x000107c61174(uVar1);
  FUN_1020f70fc(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1020f814c; end: 1020f8263; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference indexPathFor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f814c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112e58858);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar4);
  FUN_1020f70fc(puVar3,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  uVar4 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5efd4(0);
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1020f8264; end: 1020f82b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f8264(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e586c0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e58858);
  func_0x000107c61428(lVar2 + _DAT_112e586c0,auStack_38,0,0);
  return *(undefined8 *)(*(long *)(lVar2 + lVar1) + 0x10);
}



/* Entry: 1020f82b8; end: 1020f830b; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference numberOfSectionsIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f82b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e586c0;
  lVar2 = *(long *)(param_1 + _DAT_112e58858);
  func_0x000107c61428(lVar2 + _DAT_112e586c0,auStack_38,0,0);
  return *(undefined8 *)(*(long *)(lVar2 + lVar1) + 0x10);
}



/* Entry: 1020f830c; end: 1020f8313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f830c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112e58858);
  plVar1 = (long *)(lVar6 + _DAT_112e586c0);
  func_0x000107c61428(plVar1,auStack_68,0,0);
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8e48);
    (*pcVar4)();
  }
  lVar8 = *plVar1;
  if (*(ulong *)(lVar8 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8e4c);
    (*pcVar4)();
  }
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  lVar9 = plVar1[3];
  lVar10 = *(long *)(lVar8 + param_2 * 8 + 0x20);
  if (*(long *)(lVar2 + 0x10) == 0) {
    func_0x000107c61174(lVar6);
    func_0x000107c61434(lVar8);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar9);
    func_0x000107c61174(lVar10);
  }
  else {
    uVar5 = 0;
    func_0x000107c61438(lVar2);
    func_0x000107c61174(lVar6);
    func_0x000107c61434(lVar8);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar9);
    lVar11 = lVar10;
    func_0x000107c61174();
    FUN_1020f42f0();
    if ((uVar5 & 1) != 0) {
      lVar11 = *(long *)(*(long *)(lVar2 + 0x38) + lVar11 * 8);
      func_0x000107c61434(lVar11);
      func_0x000107c6142c(lVar2);
      goto LAB_1020f8de8;
    }
    func_0x000107c6142c(lVar2);
  }
  lVar11 = 0;
LAB_1020f8de8:
  func_0x000107c61170(lVar10);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(lVar8);
  uVar7 = *(undefined8 *)(lVar11 + 0x10);
  func_0x000107c61170(lVar6);
  func_0x000107c6142c(lVar11);
  return uVar7;
}



/* Entry: 1020f8314; end: 1020f8373; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference collectionView:numberOfItemsInSection:] */

undefined8
FUN_1020f8314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1020f8cd4(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 1020f8374; end: 1020f837b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020f8374(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112e58508;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e58858);
  func_0x000107c61428(lVar4 + _DAT_112e58508,auStack_48,0,0);
  lVar4 = lVar4 + lVar2;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x000107c5efd4();
    lVar3 = lVar4;
    func_0x000107c3f730();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "DiffableDataSourceKit/SCUICollectionViewDiffableDataSourceReference.swift",
                      0x49,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f8f2c);
  (*pcVar1)();
}



/* Entry: 1020f837c; end: 1020f843f; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference collectionView:cellForItemAt:] */

void FUN_1020f837c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  FUN_1020f8e4c(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1020f8440; end: 1020f8553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020f8440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e58858);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e58518);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61174(lVar4);
  }
  else {
    uVar2 = puVar1[1];
    func_0x000107c61174(lVar4);
    func_0x000100ce3a98(pcVar3,uVar2);
    (*pcVar3)(param_1,param_2,param_3,param_4);
    func_0x000100ce3aa8(pcVar3,uVar2);
    if (param_1 != 0) {
      func_0x000107c61170(lVar4);
      return param_1;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "DiffableDataSourceKit/CollectionViewDiffableDataSource.swift",0x3c,2,0x101,0)
  ;
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020f8554);
  (*pcVar3)();
}



/* Entry: 1020f8554; end: 1020f864b; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference collectionView:viewForSupplementaryElementOfKind:at:] */

void FUN_1020f8554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_4);
  func_0x000107c5efdc(puVar3,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1020f8440(param_3,param_4,param_2,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1020f864c; end: 1020f86a7; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference init] */

void FUN_1020f864c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiffableDataSourceKit.SCUICollectionViewDiffableDataSourceReference",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f8678);
  (*pcVar1)();
}



/* Entry: 1020f86a8; end: 1020f86e3; -[_TtC21DiffableDataSourceKit45SCUICollectionViewDiffableDataSourceReference .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020f86a8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e58858));
  if (*(long *)(param_1 + _DAT_112e58848) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112e58848))[1]);
    return;
  }
  return;
}



/* Entry: 1020f86e4; end: 1020f8cd3;  */

undefined * FUN_1020f86e4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  char cVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  undefined8 uVar17;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = (undefined8 *)0x112e58890;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x0001000285a8(0x112e58890,&UNK_10da5c850);
  puVar6 = puVar5;
  FUN_1020f9000();
  puVar7 = puVar6;
  FUN_1020f5654();
  puVar8 = &uStack_70;
  FUN_102107370(puVar8,puVar5,puVar5,puVar6,puVar6,puVar7);
  puVar6 = puVar8;
  FUN_1020eb328();
  puVar7 = puVar8;
  puVar12 = puVar5;
  FUN_1021031dc(puVar8,puVar5,&UNK_1104cace0,puVar6);
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(puVar8);
  puVar5 = puVar7;
  FUN_102102294(puVar7,puVar12,&UNK_1104cace0);
  puVar8 = puVar7;
  FUN_10210229c(puVar7,puVar12,&UNK_1104cace0);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != puVar8) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar15 = puVar12[2];
      uVar14 = (long)puVar5 - uVar15;
      if ((long)puVar5 < (long)uVar15) {
        uVar14 = uVar15 - ((long)puVar5 + 1);
        if (SBORROW8(uVar15,(long)puVar5 + 1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8a94);
          (*pcVar4)();
        }
        puVar8 = puVar12;
        if (uVar15 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8a9c);
          (*pcVar4)();
        }
      }
      else {
        puVar8 = puVar7;
        if ((ulong)puVar7[2] <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8a98);
          (*pcVar4)();
        }
      }
      cVar13 = *(char *)((long)puVar8 + uVar14 * 0x20 + 0x39);
      cVar16 = *(char *)(puVar8 + uVar14 * 4 + 7);
      uVar2 = puVar8[uVar14 * 4 + 5];
      uVar3 = puVar8[uVar14 * 4 + 6];
      uVar17 = puVar8[uVar14 * 4 + 4];
      FUN_1021022fc(puVar5,puVar7,puVar12,&UNK_1104cace0);
      if (cVar13 == '\x01') {
        if (cVar16 == '\x01') {
          FUN_1020f9050(uVar17,uVar2,uVar3,1,1);
          func_0x000107c61174(uVar2);
          puVar11 = puVar9;
          func_0x000107c61558();
          puVar10 = puVar9;
          if (((ulong)puVar11 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x000101755b54(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar14 = *(ulong *)(puVar10 + 0x10);
          puVar9 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar14) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            func_0x000101755b54(puVar9,uVar14 + 1,1,puVar10);
          }
          *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puVar9 + uVar14 * 8 + 0x20) = uVar17;
          cVar16 = '\x01';
        }
        else {
          FUN_1020f9050(uVar17,uVar2,uVar3,cVar16,1);
          func_0x000107c61174(uVar2);
          puVar11 = puStack_78;
          func_0x000107c61558();
          if (((ulong)puVar11 & 1) == 0) {
            plVar1 = (long *)(puStack_78 + 0x10);
            puStack_78 = (undefined *)0x0;
            FUN_1021009e4(0,*plVar1 + 1,1);
          }
          uVar14 = *(ulong *)(puStack_78 + 0x10);
          if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar14) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_78 + 0x18));
            FUN_1021009e4(puVar11,uVar14 + 1,1,puStack_78);
            puStack_78 = puVar11;
          }
          *(ulong *)(puStack_78 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puStack_78 + uVar14 * 0x10 + 0x20) = uVar17;
          *(undefined8 *)(puStack_78 + uVar14 * 0x10 + 0x28) = uVar3;
        }
        cVar13 = '\x01';
LAB_1020f8830:
        func_0x0001020f9058(uVar17,uVar2,uVar3,cVar16,cVar13);
      }
      else {
        if (cVar16 == '\x01') {
          FUN_1020f9050(uVar17,uVar2,uVar3,1,cVar13);
          func_0x000107c61174(uVar2);
          puVar11 = puStack_80;
          func_0x000107c61558();
          if (((ulong)puVar11 & 1) == 0) {
            plVar1 = (long *)(puStack_80 + 0x10);
            puStack_80 = (undefined *)0x0;
            func_0x000101755b54(0,*plVar1 + 1,1);
          }
          uVar14 = *(ulong *)(puStack_80 + 0x10);
          if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar14) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
            func_0x000101755b54(puVar11,uVar14 + 1,1,puStack_80);
            puStack_80 = puVar11;
          }
          *(ulong *)(puStack_80 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puStack_80 + uVar14 * 8 + 0x20) = uVar17;
          cVar16 = '\x01';
          goto LAB_1020f8830;
        }
        func_0x000107c61174(uVar2);
      }
      func_0x000107c61170(uVar2);
      puVar8 = puVar7;
      FUN_10210229c(puVar7,puVar12,&UNK_1104cace0);
    } while (puVar5 != puVar8);
  }
  func_0x000107c6142c(puVar12);
  func_0x000107c6142c(puVar7);
  return puVar9;
}



/* Entry: 1020f8cd4; end: 1020f8e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1020f8cd4(ulong param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112e58858);
  plVar1 = (long *)(lVar6 + _DAT_112e586c0);
  func_0x000107c61428(plVar1,auStack_68,0,0);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8e48);
    (*pcVar4)();
  }
  lVar8 = *plVar1;
  if (*(ulong *)(lVar8 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020f8e4c);
    (*pcVar4)();
  }
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  lVar9 = plVar1[3];
  lVar10 = *(long *)(lVar8 + param_1 * 8 + 0x20);
  if (*(long *)(lVar2 + 0x10) == 0) {
    func_0x000107c61174(lVar6);
    func_0x000107c61434(lVar8);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar9);
    func_0x000107c61174(lVar10);
  }
  else {
    uVar5 = 0;
    func_0x000107c61438(lVar2);
    func_0x000107c61174(lVar6);
    func_0x000107c61434(lVar8);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar9);
    lVar11 = lVar10;
    func_0x000107c61174();
    FUN_1020f42f0();
    if ((uVar5 & 1) != 0) {
      lVar11 = *(long *)(*(long *)(lVar2 + 0x38) + lVar11 * 8);
      func_0x000107c61434(lVar11);
      func_0x000107c6142c(lVar2);
      goto LAB_1020f8de8;
    }
    func_0x000107c6142c(lVar2);
  }
  lVar11 = 0;
LAB_1020f8de8:
  func_0x000107c61170(lVar10);
  func_0x000107c6142c(lVar9);
  func_0x000107c6142c(lVar3);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(lVar8);
  uVar7 = *(undefined8 *)(lVar11 + 0x10);
  func_0x000107c61170(lVar6);
  func_0x000107c6142c(lVar11);
  return uVar7;
}



/* Entry: 1020f8e4c; end: 1020f8f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1020f8e4c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112e58508;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e58858);
  func_0x000107c61428(lVar4 + _DAT_112e58508,auStack_48,0,0);
  lVar4 = lVar4 + lVar2;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x000107c5efd4();
    lVar3 = lVar4;
    func_0x000107c3f730();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "DiffableDataSourceKit/SCUICollectionViewDiffableDataSourceReference.swift",
                      0x49,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020f8f2c);
  (*pcVar1)();
}


