/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038f0aa0; end: 1038f0b1f;  */

void FUN_1038f0aa0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1038f0b20;
  plVar7[4] = lVar3;
  plVar7[5] = lVar8;
  plVar7[3] = param_1;
  lVar8 = 0;
  func_0x000107c5fcbc();
  plVar7[6] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar7[7] = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[8] = uVar4;
  plVar5 = (long *)0x2f0;
  func_0x000107c615b8();
  plVar7[9] = (long)plVar5;
  *plVar5 = (long)plVar7;
  plVar5[1] = (long)FUN_1038efb8c;
  plVar5[0x4b] = lVar6;
  plVar5[0x4a] = lVar3;
  plVar5[0x49] = lVar1;
  plVar5[0x48] = lVar2;
  lVar6 = 0;
  func_0x000107c5fcbc();
  plVar5[0x4c] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x4d] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x4e] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038efe9c,0,0);
  return;
}



/* Entry: 1038f0b20; end: 1038f0b5b;  */

void FUN_1038f0b20(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001038f0b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1038f0b5c; end: 1038f0bbb; -[_TtC34MemoriesSemanticSearchServicesImpl29MemoriesSemanticSearchManager init] */

void FUN_1038f0b5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSemanticSearchServicesImpl.MemoriesSemanticSearchManager",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f0b88);
  (*pcVar1)();
}



/* Entry: 1038f0bbc; end: 1038f0bcb;  */

undefined1  [16] FUN_1038f0bbc(void)

{
  return ZEXT816(0x1106a92b8);
}



/* Entry: 1038f0bcc; end: 1038f0c33; -[_TtC34MemoriesSemanticSearchServicesImpl29MemoriesSemanticSearchManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038f0be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038f0c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038f0bec) */
/* WARNING: Removing unreachable block (ram,0x0001038f0c0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f0bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fad520));
  return;
}



/* Entry: 1038f0c34; end: 1038f0c53;  */

void FUN_1038f0c34(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff100);
  return;
}



/* Entry: 1038f0c54; end: 1038f0e37;  */

undefined * FUN_1038f0c54(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 != 0) && (uVar12 = *(ulong *)(param_1 + 0x10), uVar12 != 0)) {
    uVar13 = 0;
    do {
      uVar1 = uVar13;
      if (uVar13 <= uVar12) {
        uVar1 = uVar12;
      }
      plVar14 = (long *)(param_1 + 0x28 + uVar13 * 0x10);
      uVar13 = uVar13 + 1;
      while( true ) {
        if (uVar13 - uVar1 == 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f0e38);
          (*pcVar3)();
        }
        lVar6 = plVar14[-1];
        lVar2 = *plVar14;
        func_0x000107c61434(lVar2);
        lVar4 = lVar6;
        lVar8 = lVar2;
        func_0x000103ee34e0();
        if (((uint)param_3 & 0xff) != 1) break;
        func_0x000107c6142c(lVar2);
        uVar13 = uVar13 + 1;
        plVar14 = plVar14 + 2;
        if (uVar13 - uVar12 == 1) {
          return puVar10;
        }
      }
      lVar5 = lVar6;
      lVar9 = lVar2;
      func_0x000107c5fb1c();
      if (lVar6 == lVar5 && lVar2 == lVar9) {
        func_0x000107c6142c(lVar2);
        func_0x000107c6142c(lVar9);
        bVar11 = 0;
      }
      else {
        func_0x000107c605b8(lVar6,lVar2,lVar5,lVar9,0);
        func_0x000107c6142c(lVar2);
        func_0x000107c6142c(lVar9);
        bVar11 = (byte)lVar6 ^ 1;
        param_3 = lVar5;
      }
      puVar7 = puVar10;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        param_3 = 1;
        FUN_1038f9c1c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
        puVar10 = puVar7;
      }
      uVar1 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        param_3 = 1;
        FUN_1038f9c1c(puVar7,uVar1 + 1,1,puVar10);
        puVar10 = puVar7;
      }
      *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
      *(long *)(puVar10 + uVar1 * 0x28 + 0x20) = lVar4;
      *(long *)(puVar10 + uVar1 * 0x28 + 0x28) = lVar8;
      puVar10[uVar1 * 0x28 + 0x30] = bVar11 & 1;
      *(undefined8 *)(puVar10 + uVar1 * 0x28 + 0x40) = 0xc000000000000000;
      *(undefined8 *)(puVar10 + uVar1 * 0x28 + 0x38) = 0;
    } while (uVar13 != uVar12);
  }
  return puVar10;
}



/* Entry: 1038f0e38; end: 1038f0f2f;  */

undefined8 FUN_1038f0e38(undefined8 param_1)

{
  FUN_1038ff53c();
  return param_1;
}



/* Entry: 1038f0f30; end: 1038f1067;  */

/* WARNING: Possible PIC construction at 0x0001038f104c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038f1050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f0f30(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fad558);
  uVar3 = 0x73756c7033;
  if (param_1 == 0) {
    uVar3 = 0x30;
  }
  uVar1 = 0xe500000000000000;
  if (param_1 == 0) {
    uVar1 = 0xe100000000000000;
  }
  uVar2 = 0x31;
  if (param_1 != 1) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe100000000000000;
  if (param_1 != 1) {
    uVar3 = uVar1;
  }
  uVar1 = 0x32;
  if (param_1 != 2) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe100000000000000;
  if (param_1 != 2) {
    uVar2 = uVar3;
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  uVar3 = 0x756c705f74786574;
  if (param_1 < 1) {
    uVar3 = 0x6c6e6f5f74786574;
  }
  uVar2 = 0xef74656361665f73;
  if (param_1 < 1) {
    uVar2 = 0xe900000000000079;
  }
  if ((param_2 & 1) == 0) {
    uVar2 = 0xea0000000000796c;
    uVar3 = 0x6e6f5f7465636166;
  }
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000106db2754(uVar4,uVar1,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1038f1068; end: 1038f10ab; -[_TtC34MemoriesSemanticSearchServicesImpl35MemoriesSemanticSearchMetricsLogger recordSubmitWithFacetCount:hasText:] */

void FUN_1038f1068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1038f0f30(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038f10ac; end: 1038f120b;  */

/* WARNING: Possible PIC construction at 0x0001038f11c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038f11cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f10ac(long param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fad558);
  uVar2 = 0x756c705f74786574;
  if (param_1 < 1) {
    uVar2 = 0x6c6e6f5f74786574;
  }
  uVar5 = 0xe900000000000079;
  uVar3 = 0xef74656361665f73;
  if (param_1 < 1) {
    uVar3 = 0xe900000000000079;
  }
  if ((param_2 & 1) == 0) {
    uVar3 = 0xea0000000000796c;
    uVar2 = 0x6e6f5f7465636166;
  }
  func_0x000107c5fadc(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  if (param_3 == 0) {
    uVar3 = 0x74706d655f6e6f6e;
  }
  else if (param_3 == 2) {
    uVar5 = 0xe500000000000000;
    uVar3 = 0x726f727265;
  }
  else {
    if (param_3 != 1) {
      lStack_48 = param_3;
      func_0x000107c60614(&UNK_1106a92d8,&lStack_48,&UNK_1106a92d8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f120c);
      (*pcVar1)();
    }
    uVar5 = 0xe500000000000000;
    uVar3 = 0x7974706d65;
  }
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000106db223c(uVar4,uVar2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1038f120c; end: 1038f1257; -[_TtC34MemoriesSemanticSearchServicesImpl35MemoriesSemanticSearchMetricsLogger recordResultPublishedWithFacetCount:hasText:outcome:] */

void FUN_1038f120c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_1038f10ac(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038f1258; end: 1038f1333; -[_TtC34MemoriesSemanticSearchServicesImpl35MemoriesSemanticSearchMetricsLogger recordSubmitLatencyWithFacetCount:hasText:durationMs:] */

/* WARNING: Possible PIC construction at 0x0001038f1318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038f131c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f1258(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fad558);
  uVar1 = 0x756c705f74786574;
  if (param_3 < 1) {
    uVar1 = 0x6c6e6f5f74786574;
  }
  uVar2 = 0xef74656361665f73;
  if (param_3 < 1) {
    uVar2 = 0xe900000000000079;
  }
  if (param_4 == 0) {
    uVar2 = 0xea0000000000796c;
    uVar1 = 0x6e6f5f7465636166;
  }
  func_0x000107c61174();
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000106db2984(uVar3,uVar1,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038f1334; end: 1038f144b; -[_TtC34MemoriesSemanticSearchServicesImpl35MemoriesSemanticSearchMetricsLogger recordUnresolvableIDsWithCount:path:] */

/* WARNING: Possible PIC construction at 0x0001038f1404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038f1408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f1334(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fad558);
  if (param_4 == 0) {
    uVar3 = 0xed00007972746e65;
    uVar4 = 0x5f646e656b636162;
  }
  else if (param_4 == 2) {
    uVar3 = 0xed00006873657266;
    uVar4 = 0x65725f6c61636f6c;
  }
  else {
    if (param_4 != 1) {
      lStack_48 = param_4;
      func_0x000107c61174();
      func_0x000107c60614(&UNK_1106a92f8,&lStack_48,&UNK_1106a92f8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f144c);
      (*pcVar1)();
    }
    uVar3 = 0xea00000000007061;
    uVar4 = 0x6e735f7465636166;
  }
  func_0x000107c61174();
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000106db2af8(uVar2,uVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038f144c; end: 1038f14af; -[_TtC34MemoriesSemanticSearchServicesImpl35MemoriesSemanticSearchMetricsLogger init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f144c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112fad558;
  puVar3 = PTR_PTR_1126ad7f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038f14b0; end: 1038f14e3;  */

void FUN_1038f14b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038f14e4; end: 1038f14f7; -[_TtC34MemoriesSemanticSearchServicesImpl35MemoriesSemanticSearchMetricsLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f14e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fad558));
  return;
}



/* Entry: 1038f14f8; end: 1038f1537;  */

void FUN_1038f14f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fad560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc203d0;
  func_0x000107c61520(&UNK_10dc203d0,&UNK_1106a92d8);
  puRam0000000112fad560 = puVar1;
  return;
}



/* Entry: 1038f1538; end: 1038f153b;  */

void FUN_1038f1538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fad568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc20470;
  func_0x000107c61520(&UNK_10dc20470,&UNK_1106a92f8);
  puRam0000000112fad568 = puVar1;
  return;
}



/* Entry: 1038f153c; end: 1038f157b;  */

void FUN_1038f153c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fad568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc20470;
  func_0x000107c61520(&UNK_10dc20470,&UNK_1106a92f8);
  puRam0000000112fad568 = puVar1;
  return;
}



/* Entry: 1038f157c; end: 1038f159b;  */

undefined1  [16] FUN_1038f157c(void)

{
  return ZEXT816(0x1106a92d8);
}



/* Entry: 1038f159c; end: 1038f15bb;  */

void FUN_1038f159c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff1e0);
  return;
}



/* Entry: 1038f15bc; end: 1038f15eb;  */

bool FUN_1038f15bc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038f15ec; end: 1038f166f;  */

void FUN_1038f15ec(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = (uint)param_3;
  lVar2 = *param_2;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    FUN_1038f179c();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar1 & 1) != 0) {
      puVar3 = *(undefined **)(*(long *)(lVar2 + 0x38) + param_3 * 8);
      func_0x000107c61434(puVar3);
    }
    func_0x000107c6142c(lVar2);
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1038f1670; end: 1038f16b7;  */

void FUN_1038f1670(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1038f16b8; end: 1038f16fb;  */

void FUN_1038f16b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038f16fc; end: 1038f170b;  */

undefined1  [16] FUN_1038f16fc(void)

{
  return ZEXT816(0x1106a9370);
}



/* Entry: 1038f170c; end: 1038f1783;  */

undefined8 FUN_1038f170c(undefined1 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x10);
  uStack_40 = param_1;
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112fad638;
  func_0x0001000285a8(0x112fad638,&UNK_10dc20900);
  func_0x000100075034(&uStack_38,FUN_1038f1784,auStack_50,uVar1);
  func_0x000107c61574(uVar2);
  return uStack_38;
}



/* Entry: 1038f1784; end: 1038f179b;  */

void FUN_1038f1784(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1038f15ec(param_1,*(undefined1 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038f179c; end: 1038f1843;  */

void FUN_1038f179c(char param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  if (param_1 == '\0') {
    uVar1 = 0xe400000000000000;
    uVar2 = 0x72616579;
  }
  else {
    uVar2 = 0x68746e6f6d;
    if (param_1 != '\x01') {
      uVar2 = 0x6e6f697461636f6c;
    }
    uVar1 = 0xe500000000000000;
    if (param_1 != '\x01') {
      uVar1 = 0xe800000000000000;
    }
  }
  func_0x000107c5fb58(auStack_78,uVar2,uVar1);
  func_0x000107c6142c();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(char *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
        return;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
    return;
  }
  return;
}



/* Entry: 1038f1844; end: 1038f18ab;  */

void FUN_1038f1844(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 1038f18ac; end: 1038f18bb;  */

undefined1  [16] FUN_1038f18ac(void)

{
  return ZEXT816(0x1106a93b0);
}



/* Entry: 1038f18bc; end: 1038f1b63;  */

undefined * FUN_1038f18bc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    FUN_1038ed310(0,lVar15,0);
    uVar1 = param_1 + 0x40;
    uVar6 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar17 = 0;
    iVar3 = *(int *)(param_1 + 0x24);
    do {
      if (uVar6 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f1b50);
        (*pcVar5)();
      }
      uVar16 = uVar6 >> 6;
      uVar12 = 1L << (uVar6 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar16 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f1b54);
        (*pcVar5)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f1b58);
        (*pcVar5)();
      }
      uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10 + 8);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar6 * 0x18);
      uVar7 = *puVar9;
      uVar2 = puVar9[1];
      uVar18 = puVar9[2];
      func_0x000103a730a0(0);
      func_0x000107c610f8();
      func_0x000107c61438(uVar2,2);
      func_0x000107c61434(uVar19);
      func_0x000103a72838(uVar7,uVar2,3);
      uVar8 = 0;
      func_0x000103a763d0(0);
      func_0x000107c610f8();
      func_0x000103a76004(uVar7,uVar18,uVar8);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar19);
      uVar14 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar14) {
        FUN_1038ed310(1 < *(ulong *)(puVar4 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puVar4 + uVar14 * 8 + 0x20) = uVar7;
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar14 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f1b5c);
        (*pcVar5)();
      }
      uVar10 = *(ulong *)(uVar1 + uVar16 * 8);
      if ((uVar10 & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f1b60);
        (*pcVar5)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f1b64);
        (*pcVar5)();
      }
      uVar10 = uVar10 & -2L << (uVar6 & 0x3f);
      if (uVar10 == 0) {
        lVar13 = uVar16 << 6;
        puVar11 = (ulong *)(param_1 + 0x48 + uVar16 * 8);
        do {
          uVar16 = uVar16 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar16) {
            FUN_1038f4414(uVar6,iVar3,0);
            goto LAB_1038f1960;
          }
          uVar12 = *puVar11;
          lVar13 = lVar13 + 0x40;
          puVar11 = puVar11 + 1;
        } while (uVar12 == 0);
        FUN_1038f4414(uVar6,iVar3,0);
        uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + lVar13;
      }
      else {
        uVar16 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
LAB_1038f1960:
      lVar17 = lVar17 + 1;
      uVar6 = uVar14;
    } while (lVar17 != lVar15);
  }
  return puVar4;
}



/* Entry: 1038f1b64; end: 1038f1c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1038f1b64(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = _DAT_112fda0f0;
  lVar7 = _DAT_112fd9ff0;
  lVar5 = *param_2;
  lVar3 = *(long *)(*param_1 + _DAT_112fda0f8);
  lVar4 = *(long *)(lVar5 + _DAT_112fda0f8);
  if (lVar3 == lVar4) {
    plVar1 = (long *)(*(long *)(*param_1 + _DAT_112fda0f0) + _DAT_112fd9ff0);
    if ((char)plVar1[2] == '\x03') {
      lVar3 = *plVar1;
      lVar4 = plVar1[1];
      func_0x000107c61434(lVar4);
    }
    else {
      lVar3 = 0;
      lVar4 = -0x2000000000000000;
    }
    plVar1 = (long *)(*(long *)(lVar5 + lVar6) + lVar7);
    if ((char)plVar1[2] == '\x03') {
      lVar7 = *plVar1;
      lVar6 = plVar1[1];
      func_0x000107c61434(lVar6);
    }
    else {
      lVar7 = 0;
      lVar6 = -0x2000000000000000;
    }
    if ((lVar3 == lVar7) && (lVar4 == lVar6)) {
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar6);
      uVar2 = 0;
    }
    else {
      func_0x000107c605b8(lVar3,lVar4,lVar7,lVar6,1);
      func_0x000107c6142c(lVar4);
      func_0x000107c6142c(lVar6);
      uVar2 = (uint)lVar3 & 1;
    }
  }
  else {
    uVar2 = (uint)(lVar4 < lVar3);
  }
  return uVar2;
}



/* Entry: 1038f1c8c; end: 1038f1d97;  */

uint FUN_1038f1c8c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *param_1;
  uVar2 = param_1[1];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = uVar8;
  uVar9 = uVar2;
  func_0x000107c5fb1c();
  uVar6 = uVar1;
  uVar10 = uVar3;
  func_0x000107c5fb1c();
  if ((uVar5 == uVar6 && uVar9 == uVar10) ||
     (uVar7 = uVar5, func_0x000107c605b8(uVar5,uVar9,uVar6,uVar10,0), (uVar7 & 1) != 0)) {
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(uVar10);
    if (uVar8 == uVar1 && uVar2 == uVar3) {
      uVar4 = 0;
    }
    else {
      func_0x000107c605b8(uVar8,uVar2,uVar1,uVar3,1);
      uVar4 = (uint)uVar8 & 1;
    }
  }
  else {
    func_0x000107c605b8(uVar5,uVar9,uVar6,uVar10,1);
    func_0x000107c6142c(uVar9);
    func_0x000107c6142c(uVar10);
    uVar4 = (uint)uVar5 & 1;
  }
  return uVar4;
}



/* Entry: 1038f1d98; end: 1038f1e97;  */

void FUN_1038f1d98(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1038fd4cc();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x000103a763d0(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1038f1fa4(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1038f2c54(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1038f1e98; end: 1038f1fa3;  */

void FUN_1038f1e98(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x0001038fd4e0();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112fad640;
      func_0x0001000285a8(0x112fad640,&UNK_10dc207c0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1038f25a8(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1038f2df4(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1038f1fa4; end: 1038f25a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f1fa4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long unaff_x21;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar28 = param_3[1];
  if (0 < lVar28) {
    lVar11 = 0;
    do {
      lVar26 = lVar11 + 1;
      if (lVar26 < lVar28) {
        lVar18 = *param_3;
        uVar5 = *(undefined8 *)(lVar18 + lVar26 * 8);
        uVar20 = *(undefined8 *)(lVar18 + lVar11 * 8);
        uStack_70 = uVar20;
        uStack_68 = uVar5;
        func_0x000107c61174();
        func_0x000107c61174(uVar20);
        puVar6 = &uStack_68;
        FUN_1038f1b64(puVar6,&uStack_70);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar20);
        if (unaff_x21 != 0) goto LAB_1038f253c;
        plVar19 = (long *)(lVar18 + lVar11 * 8 + 0x10);
        lVar18 = lVar11 + 2;
        do {
          lVar27 = lVar18;
          lVar10 = _DAT_112fda0f0;
          lVar18 = _DAT_112fd9ff0;
          lVar26 = lVar28;
          if (lVar28 == lVar27) break;
          lVar26 = plVar19[-1];
          lVar12 = *(long *)(*plVar19 + _DAT_112fda0f8);
          lVar14 = *(long *)(lVar26 + _DAT_112fda0f8);
          if (lVar12 == lVar14) {
            plVar17 = (long *)(*(long *)(*plVar19 + _DAT_112fda0f0) + _DAT_112fd9ff0);
            if ((char)plVar17[2] == '\x03') {
              lVar12 = *plVar17;
              lVar14 = plVar17[1];
              func_0x000107c61434(lVar14);
            }
            else {
              lVar12 = 0;
              lVar14 = -0x2000000000000000;
            }
            plVar17 = (long *)(*(long *)(lVar26 + lVar10) + lVar18);
            if ((char)plVar17[2] == '\x03') {
              lVar26 = *plVar17;
              lVar18 = plVar17[1];
              func_0x000107c61434(lVar18);
              if (lVar12 != lVar26) goto LAB_1038f2140;
LAB_1038f2130:
              if (lVar14 != lVar18) goto LAB_1038f2140;
              uVar25 = 0;
            }
            else {
              lVar26 = 0;
              lVar18 = -0x2000000000000000;
              if (lVar12 == 0) goto LAB_1038f2130;
LAB_1038f2140:
              func_0x000107c605b8(lVar12,lVar14,lVar26,lVar18,1);
              uVar25 = (uint)lVar12;
            }
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar18);
          }
          else {
            uVar25 = (uint)(lVar14 < lVar12);
          }
          plVar19 = plVar19 + 1;
          lVar18 = lVar27 + 1;
          lVar26 = lVar27;
        } while ((((uint)puVar6 ^ uVar25) & 1) == 0);
        if (((ulong)puVar6 & 1) != 0) {
          if (lVar26 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f2584);
            (*pcVar3)();
          }
          if (lVar11 < lVar26) {
            lVar10 = *param_3;
            puVar13 = (undefined8 *)(lVar10 + lVar26 * 8);
            puVar6 = (undefined8 *)(lVar10 + lVar11 * 8);
            lVar18 = lVar26;
            lVar28 = lVar11;
            do {
              puVar13 = puVar13 + -1;
              lVar18 = lVar18 + -1;
              if (lVar28 != lVar18) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f259c);
                  (*pcVar3)();
                }
                uVar5 = *puVar6;
                *puVar6 = *puVar13;
                *puVar13 = uVar5;
              }
              lVar28 = lVar28 + 1;
              puVar6 = puVar6 + 1;
            } while (lVar28 < lVar18);
          }
        }
      }
      lVar28 = param_3[1];
      lVar18 = lVar26;
      if (lVar26 < lVar28) {
        if (SBORROW8(lVar26,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f2578);
          (*pcVar3)();
        }
        if (lVar26 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f257c);
            (*pcVar3)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar28 <= lVar11 + param_4) {
            lVar10 = lVar28;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f2580);
            (*pcVar3)();
          }
          if (lVar26 != lVar10) {
            lVar28 = *param_3;
            plVar19 = (long *)(lVar28 + lVar26 * 8 + -8);
            lVar27 = lVar11 - lVar26;
            do {
              lVar12 = *(long *)(lVar28 + lVar26 * 8);
              plVar17 = plVar19;
              lVar18 = lVar27;
              do {
                lVar2 = _DAT_112fda0f0;
                lVar14 = _DAT_112fd9ff0;
                lVar22 = *plVar17;
                lVar15 = *(long *)(lVar22 + _DAT_112fda0f8);
                if (*(long *)(lVar12 + _DAT_112fda0f8) == lVar15) {
                  puVar1 = (ulong *)(*(long *)(lVar12 + _DAT_112fda0f0) + _DAT_112fd9ff0);
                  if ((char)puVar1[2] == '\x03') {
                    uVar16 = *puVar1;
                    uVar21 = puVar1[1];
                    func_0x000107c61434(uVar21);
                  }
                  else {
                    uVar16 = 0;
                    uVar21 = 0xe000000000000000;
                  }
                  puVar1 = (ulong *)(*(long *)(lVar22 + lVar2) + lVar14);
                  if ((char)puVar1[2] == '\x03') {
                    uVar24 = *puVar1;
                    uVar23 = puVar1[1];
                    func_0x000107c61434(uVar23);
                    if (uVar16 == uVar24) {
LAB_1038f2348:
                      if (uVar21 == uVar23) {
                        func_0x000107c6142c(uVar21);
                        func_0x000107c6142c(uVar23);
                        break;
                      }
                    }
                  }
                  else {
                    uVar24 = 0;
                    uVar23 = 0xe000000000000000;
                    if (uVar16 == 0) goto LAB_1038f2348;
                  }
                  func_0x000107c605b8(uVar16,uVar21,uVar24,uVar23,1);
                  func_0x000107c6142c(uVar21);
                  func_0x000107c6142c(uVar23);
                  if ((uVar16 & 1) == 0) break;
                }
                else if (*(long *)(lVar12 + _DAT_112fda0f8) <= lVar15) break;
                if (lVar28 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f2588);
                  (*pcVar3)();
                }
                lVar14 = *plVar17;
                lVar12 = plVar17[1];
                *plVar17 = lVar12;
                plVar17[1] = lVar14;
                bVar4 = lVar18 != -1;
                lVar18 = lVar18 + 1;
                plVar17 = plVar17 + -1;
              } while (bVar4);
              lVar26 = lVar26 + 1;
              plVar19 = plVar19 + 1;
              lVar27 = lVar27 + -1;
              lVar18 = lVar10;
            } while (lVar26 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar18 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f256c);
        (*pcVar3)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar16 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar16 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar16 + 1;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x28) = lVar18;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f25a0);
        (*pcVar3)();
      }
      FUN_1038f2fc4(&puStack_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1038f253c;
      lVar28 = param_3[1];
      lVar11 = lVar18;
    } while (lVar18 < lVar28);
  }
  puVar9 = puStack_58;
  lVar28 = *param_1;
  if (lVar28 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f25a8);
    (*pcVar3)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar16 = *(ulong *)(puVar9 + 0x10);
  while( true ) {
    puStack_58 = puVar9;
    if (uVar16 < 2) {
      func_0x000107c6142c(puVar9);
      return;
    }
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f25a4);
      (*pcVar3)();
    }
    lVar10 = uVar16 - 1;
    lVar18 = *(long *)(puVar9 + uVar16 * 0x10);
    lVar26 = *(long *)(puVar9 + lVar10 * 0x10 + 0x28);
    FUN_1038f349c(lVar11 + lVar18 * 8,lVar11 + *(long *)(puVar9 + lVar10 * 0x10 + 0x20) * 8,
                  lVar11 + lVar26 * 8,lVar28);
    if (unaff_x21 != 0) break;
    if (lVar26 < lVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f2570);
      (*pcVar3)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar16 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f2574);
      (*pcVar3)();
    }
    *(long *)(puVar9 + uVar16 * 0x10) = lVar18;
    *(long *)((long)(puVar9 + uVar16 * 0x10) + 8) = lVar26;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar10);
    uVar16 = *(ulong *)(puStack_58 + 0x10);
    puVar9 = puStack_58;
  }
LAB_1038f253c:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 1038f25a8; end: 1038f2c53;  */

void FUN_1038f25a8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar28 = param_3[1];
  if (0 < lVar28) {
    lVar18 = 0;
    do {
      lVar27 = lVar18 + 1;
      if (lVar27 < lVar28) {
        lVar22 = *param_3;
        puVar15 = (undefined8 *)(lVar22 + lVar27 * 0x18);
        uStack_78 = *puVar15;
        uVar20 = puVar15[1];
        uStack_68 = puVar15[2];
        puVar15 = (undefined8 *)(lVar22 + lVar18 * 0x18);
        uStack_90 = *puVar15;
        uVar21 = puVar15[1];
        uStack_80 = puVar15[2];
        uStack_88 = uVar21;
        uStack_70 = uVar20;
        func_0x000107c61434(uVar20);
        func_0x000107c61434(uVar21);
        puVar15 = &uStack_78;
        FUN_1038f1c8c(puVar15,&uStack_90);
        func_0x000107c6142c(uVar20);
        func_0x000107c6142c(uVar21);
        if (unaff_x21 != 0) goto LAB_1038f2bec;
        lVar27 = lVar18 + 2;
        if (lVar27 < lVar28) {
          plVar26 = (long *)(lVar22 + lVar18 * 0x18 + 0x20);
          lVar22 = lVar27;
          do {
            lVar27 = lVar22;
            uVar29 = plVar26[2];
            lVar25 = plVar26[3];
            uVar24 = plVar26[-1];
            lVar22 = *plVar26;
            uVar5 = uVar29;
            lVar19 = lVar25;
            func_0x000107c5fb1c();
            uVar6 = uVar24;
            lVar16 = lVar22;
            func_0x000107c5fb1c();
            if ((uVar5 == uVar6 && lVar19 == lVar16) ||
               (uVar7 = uVar5, func_0x000107c605b8(uVar5,lVar19,uVar6,lVar16,0), (uVar7 & 1) != 0))
            {
              func_0x000107c61434(lVar25);
              func_0x000107c61434(lVar22);
              func_0x000107c6142c(lVar19);
              func_0x000107c6142c(lVar16);
              if ((uVar29 != uVar24) || (lVar25 != lVar22)) {
                func_0x000107c605b8(uVar29,lVar25,uVar24,lVar22,1);
                uVar4 = (uint)uVar29;
                lVar16 = lVar22;
                lVar19 = lVar25;
                goto LAB_1038f27a0;
              }
              func_0x000107c6142c(lVar25);
              func_0x000107c6142c(lVar22);
              if (((ulong)puVar15 & 1) != 0) {
                if (lVar18 <= lVar27) goto LAB_1038f27f4;
                goto LAB_1038f2c24;
              }
            }
            else {
              func_0x000107c605b8(uVar5,lVar19,uVar6,lVar16,1);
              uVar4 = (uint)uVar5;
LAB_1038f27a0:
              func_0x000107c6142c(lVar19);
              func_0x000107c6142c(lVar16);
              if ((((uint)puVar15 ^ uVar4) & 1) != 0) break;
            }
            lVar22 = lVar27 + 1;
            plVar26 = plVar26 + 3;
            lVar27 = lVar28;
          } while (lVar28 != lVar22);
        }
        if (((ulong)puVar15 & 1) != 0) {
          if (lVar27 < lVar18) {
LAB_1038f2c24:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c28);
            (*pcVar2)();
          }
LAB_1038f27f4:
          if (lVar18 < lVar27) {
            lVar16 = *param_3;
            lVar25 = lVar27 * 0x18;
            lVar22 = lVar18 * 0x18;
            lVar19 = lVar27;
            lVar28 = lVar18;
            do {
              lVar19 = lVar19 + -1;
              if (lVar28 != lVar19) {
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c48);
                  (*pcVar2)();
                }
                puVar15 = (undefined8 *)(lVar16 + lVar22);
                lVar1 = lVar16 + lVar25;
                uVar31 = puVar15[1];
                uVar30 = *puVar15;
                uVar20 = puVar15[2];
                uVar21 = *(undefined8 *)(lVar1 + -8);
                uVar32 = *(undefined8 *)(lVar1 + -0x18);
                puVar15[1] = *(undefined8 *)(lVar1 + -0x10);
                *puVar15 = uVar32;
                puVar15[2] = uVar21;
                *(undefined8 *)(lVar1 + -0x10) = uVar31;
                *(undefined8 *)(lVar1 + -0x18) = uVar30;
                *(undefined8 *)(lVar1 + -8) = uVar20;
              }
              lVar28 = lVar28 + 1;
              lVar25 = lVar25 + -0x18;
              lVar22 = lVar22 + 0x18;
            } while (lVar28 < lVar19);
          }
        }
      }
      lVar28 = param_3[1];
      lVar22 = lVar27;
      if (lVar27 < lVar28) {
        if (SBORROW8(lVar27,lVar18)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c24);
          (*pcVar2)();
        }
        if (lVar27 - lVar18 < param_4) {
          if (SCARRY8(lVar18,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c2c);
            (*pcVar2)();
          }
          lVar19 = lVar18 + param_4;
          if (lVar28 <= lVar18 + param_4) {
            lVar19 = lVar28;
          }
          if (lVar19 < lVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c30);
            (*pcVar2)();
          }
          if (lVar27 != lVar19) {
            lVar28 = *param_3;
            puVar23 = (ulong *)(lVar28 + lVar27 * 0x18 + -0x18);
            lVar16 = lVar18 - lVar27;
            do {
              puVar17 = (ulong *)(lVar28 + lVar27 * 0x18);
              uVar24 = *puVar17;
              uVar5 = puVar17[1];
              lVar22 = lVar16;
              puVar17 = puVar23;
              do {
                uVar6 = *puVar17;
                uVar29 = puVar17[1];
                uVar7 = uVar24;
                uVar13 = uVar5;
                func_0x000107c5fb1c();
                uVar8 = uVar6;
                uVar14 = uVar29;
                func_0x000107c5fb1c();
                if ((uVar7 == uVar8 && uVar13 == uVar14) ||
                   (uVar9 = uVar7, func_0x000107c605b8(uVar7,uVar13,uVar8,uVar14,0),
                   (uVar9 & 1) != 0)) {
                  func_0x000107c61434(uVar5);
                  func_0x000107c61434(uVar29);
                  func_0x000107c6142c(uVar13);
                  func_0x000107c6142c(uVar14);
                  if ((uVar24 == uVar6) && (uVar5 == uVar29)) {
                    func_0x000107c6142c(uVar5);
                    func_0x000107c6142c(uVar29);
                    break;
                  }
                  func_0x000107c605b8(uVar24,uVar5,uVar6,uVar29,1);
                  func_0x000107c6142c(uVar5);
                  func_0x000107c6142c(uVar29);
                  uVar7 = uVar24;
                }
                else {
                  func_0x000107c605b8(uVar7,uVar13,uVar8,uVar14,1);
                  func_0x000107c6142c(uVar13);
                  func_0x000107c6142c(uVar14);
                }
                if ((uVar7 & 1) == 0) break;
                if (lVar28 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c34);
                  (*pcVar2)();
                }
                uVar5 = puVar17[4];
                uVar6 = puVar17[5];
                uVar24 = puVar17[3];
                puVar17[4] = puVar17[1];
                puVar17[3] = *puVar17;
                puVar17[5] = puVar17[2];
                *puVar17 = uVar24;
                puVar17[1] = uVar5;
                puVar17[2] = uVar6;
                puVar17 = puVar17 + -3;
                bVar3 = lVar22 != -1;
                lVar22 = lVar22 + 1;
              } while (bVar3);
              lVar27 = lVar27 + 1;
              puVar23 = puVar23 + 3;
              lVar16 = lVar16 + -1;
              lVar22 = lVar19;
            } while (lVar27 != lVar19);
          }
        }
      }
      puVar12 = puStack_58;
      if (lVar22 < lVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c18);
        (*pcVar2)();
      }
      puVar10 = puStack_58;
      func_0x000107c61558();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar24 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar24) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x0001000a91e0(puVar12,uVar24 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar24 + 1;
      *(long *)(puVar12 + uVar24 * 0x10 + 0x20) = lVar18;
      *(long *)(puVar12 + uVar24 * 0x10 + 0x28) = lVar22;
      puStack_58 = puVar12;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c4c);
        (*pcVar2)();
      }
      FUN_1038f322c(&puStack_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1038f2bec;
      lVar28 = param_3[1];
      lVar18 = lVar22;
    } while (lVar22 < lVar28);
  }
  puVar12 = puStack_58;
  lVar28 = *param_1;
  if (lVar28 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c54);
    (*pcVar2)();
  }
  puVar10 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar24 = *(ulong *)(puVar12 + 0x10);
  while (puStack_58 = puVar12, 1 < uVar24) {
    lVar18 = *param_3;
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c50);
      (*pcVar2)();
    }
    lVar22 = uVar24 - 1;
    lVar19 = *(long *)(puVar12 + uVar24 * 0x10);
    lVar27 = *(long *)(puVar12 + lVar22 * 0x10 + 0x28);
    FUN_1038f38f0(lVar18 + lVar19 * 0x18,lVar18 + *(long *)(puVar12 + lVar22 * 0x10 + 0x20) * 0x18,
                  lVar18 + lVar27 * 0x18,lVar28);
    if (unaff_x21 != 0) break;
    if (lVar27 < lVar19) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c1c);
      (*pcVar2)();
    }
    puVar10 = puVar12;
    func_0x000107c61558();
    if (((ulong)puVar10 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar12 + 0x10) <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f2c20);
      (*pcVar2)();
    }
    *(long *)(puVar12 + uVar24 * 0x10) = lVar19;
    *(long *)((long)(puVar12 + uVar24 * 0x10) + 8) = lVar27;
    puStack_58 = puVar12;
    func_0x0001000a97cc(lVar22);
    puVar12 = puStack_58;
    uVar24 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1038f2bec:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 1038f2c54; end: 1038f2df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f2c54(long param_1,long param_2,long param_3,long *param_4)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  
  if (param_3 != param_2) {
    lVar13 = *param_4;
    plVar14 = (long *)(lVar13 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar6 = *(long *)(lVar13 + param_3 * 8);
      plVar15 = plVar14;
      lVar16 = param_1;
      do {
        lVar3 = _DAT_112fda0f0;
        lVar2 = _DAT_112fd9ff0;
        lVar10 = *plVar15;
        lVar7 = *(long *)(lVar10 + _DAT_112fda0f8);
        if (*(long *)(lVar6 + _DAT_112fda0f8) == lVar7) {
          puVar1 = (ulong *)(*(long *)(lVar6 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          if ((char)puVar1[2] == '\x03') {
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            func_0x000107c61434(uVar9);
          }
          else {
            uVar8 = 0;
            uVar9 = 0xe000000000000000;
          }
          puVar1 = (ulong *)(*(long *)(lVar10 + lVar3) + lVar2);
          if ((char)puVar1[2] == '\x03') {
            uVar12 = *puVar1;
            uVar11 = puVar1[1];
            func_0x000107c61434(uVar11);
            if (uVar8 == uVar12) {
LAB_1038f2da0:
              if (uVar9 == uVar11) {
                func_0x000107c6142c(uVar9);
                func_0x000107c6142c(uVar11);
                break;
              }
            }
          }
          else {
            uVar12 = 0;
            uVar11 = 0xe000000000000000;
            if (uVar8 == 0) goto LAB_1038f2da0;
          }
          func_0x000107c605b8(uVar8,uVar9,uVar12,uVar11,1);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar11);
          if ((uVar8 & 1) == 0) break;
        }
        else if (*(long *)(lVar6 + _DAT_112fda0f8) <= lVar7) break;
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f2df4);
          (*pcVar4)();
        }
        lVar2 = *plVar15;
        lVar6 = plVar15[1];
        *plVar15 = lVar6;
        plVar15[1] = lVar2;
        bVar5 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        plVar15 = plVar15 + -1;
      } while (bVar5);
      param_3 = param_3 + 1;
      plVar14 = plVar14 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1038f2df4; end: 1038f2fc3;  */

void FUN_1038f2df4(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  
  if (param_3 != param_2) {
    lVar11 = *param_4;
    puVar14 = (ulong *)(lVar11 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    do {
      puVar12 = (ulong *)(lVar11 + param_3 * 0x18);
      uVar8 = *puVar12;
      uVar15 = puVar12[1];
      lVar13 = param_1;
      puVar12 = puVar14;
      do {
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar5 = uVar8;
        uVar10 = uVar15;
        func_0x000107c5fb1c();
        uVar6 = uVar1;
        uVar9 = uVar2;
        func_0x000107c5fb1c();
        if ((uVar5 == uVar6 && uVar10 == uVar9) ||
           (uVar7 = uVar5, func_0x000107c605b8(uVar5,uVar10,uVar6,uVar9,0), (uVar7 & 1) != 0)) {
          func_0x000107c61434(uVar15);
          func_0x000107c61434(uVar2);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar9);
          if ((uVar8 == uVar1) && (uVar15 == uVar2)) {
            func_0x000107c6142c(uVar15);
            func_0x000107c6142c(uVar2);
            break;
          }
          func_0x000107c605b8(uVar8,uVar15,uVar1,uVar2,1);
          func_0x000107c6142c(uVar15);
          uVar9 = uVar2;
          uVar5 = uVar8;
        }
        else {
          func_0x000107c605b8(uVar5,uVar10,uVar6,uVar9,1);
          func_0x000107c6142c(uVar10);
        }
        func_0x000107c6142c(uVar9);
        if ((uVar5 & 1) == 0) break;
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f2fc4);
          (*pcVar3)();
        }
        uVar15 = puVar12[4];
        uVar1 = puVar12[5];
        uVar8 = puVar12[3];
        puVar12[4] = puVar12[1];
        puVar12[3] = *puVar12;
        puVar12[5] = puVar12[2];
        *puVar12 = uVar8;
        puVar12[1] = uVar15;
        puVar12[2] = uVar1;
        puVar12 = puVar12 + -3;
        bVar4 = lVar13 != -1;
        lVar13 = lVar13 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      puVar14 = puVar14 + 3;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1038f2fc4; end: 1038f322b;  */

undefined8 FUN_1038f2fc4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1038f3098;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3214);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1038f30fc:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3204);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f320c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31ec);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31f0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31f8);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3200);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1038f3098:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31f4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31fc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3208);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3210);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1038f30fc;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3218);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31e0);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f322c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1038f349c(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31e4);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f31e8);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1038f322c; end: 1038f349b;  */

undefined8 FUN_1038f322c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1038f3304;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3484);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1038f3368:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3474);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f347c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f345c);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3460);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3468);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3470);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1038f3304:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3464);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f346c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3478);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3480);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1038f3368;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3488);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3450);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f349c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1038f38f0(lVar9 + lVar12 * 0x18,lVar9 + *plVar1 * 0x18,lVar9 + lVar7 * 0x18,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3454);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f3458);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1038f349c; end: 1038f38ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038f349c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar3 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 3;
  lVar13 = (long)param_3 - (long)param_2;
  lVar5 = lVar13 + 7;
  if (-1 < lVar13) {
    lVar5 = lVar13;
  }
  lVar5 = lVar5 >> 3;
  if (lVar3 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar8 = param_4 + lVar3;
    plVar2 = param_1;
    lVar3 = _DAT_112fd9ff0;
    lVar5 = _DAT_112fda0f0;
    if (7 < lVar10) {
      do {
        _DAT_112fd9ff0 = lVar3;
        _DAT_112fda0f0 = lVar5;
        if (param_3 <= param_2) break;
        lVar11 = *param_4;
        lVar10 = *(long *)(*param_2 + _DAT_112fda0f8);
        lVar13 = *(long *)(lVar11 + _DAT_112fda0f8);
        if (lVar10 == lVar13) {
          puVar1 = (ulong *)(*(long *)(*param_2 + lVar5) + lVar3);
          if ((char)puVar1[2] == '\x03') {
            uVar9 = *puVar1;
            uVar4 = puVar1[1];
            func_0x000107c61434(uVar4);
          }
          else {
            uVar9 = 0;
            uVar4 = 0xe000000000000000;
          }
          puVar1 = (ulong *)(*(long *)(lVar11 + lVar5) + lVar3);
          if ((char)puVar1[2] == '\x03') {
            uVar15 = *puVar1;
            uVar14 = puVar1[1];
            func_0x000107c61434(uVar14);
            if (uVar9 == uVar15) {
LAB_1038f362c:
              if (uVar4 == uVar14) {
                func_0x000107c6142c(uVar4);
                func_0x000107c6142c(uVar14);
                goto LAB_1038f36a4;
              }
            }
          }
          else {
            uVar15 = 0;
            uVar14 = 0xe000000000000000;
            if (uVar9 == 0) goto LAB_1038f362c;
          }
          func_0x000107c605b8(uVar9,uVar4,uVar15,uVar14,1);
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(uVar14);
          if ((uVar9 & 1) != 0) goto LAB_1038f3690;
LAB_1038f36a4:
          plVar7 = param_2;
          param_2 = param_4;
          param_4 = param_4 + 1;
        }
        else {
          if (lVar10 <= lVar13) goto LAB_1038f36a4;
LAB_1038f3690:
          plVar7 = param_2 + 1;
        }
        if (plVar2 != param_2) {
          *plVar2 = *param_2;
        }
        plVar2 = plVar2 + 1;
        param_2 = plVar7;
        lVar3 = _DAT_112fd9ff0;
        lVar5 = _DAT_112fda0f0;
      } while (param_4 < plVar8);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar5 << 3);
    }
    plVar7 = param_4 + lVar5;
    plVar2 = param_2;
    plVar8 = plVar7;
    if ((param_1 < param_2) && (7 < lVar13)) {
LAB_1038f3710:
      plVar6 = plVar2 + -1;
      plVar12 = param_3;
      do {
        lVar10 = _DAT_112fda0f0;
        lVar3 = _DAT_112fd9ff0;
        plVar8 = plVar7 + -1;
        lVar11 = *plVar6;
        lVar5 = *(long *)(*plVar8 + _DAT_112fda0f8);
        lVar13 = *(long *)(lVar11 + _DAT_112fda0f8);
        if (lVar5 == lVar13) {
          puVar1 = (ulong *)(*(long *)(*plVar8 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          if ((char)puVar1[2] == '\x03') {
            uVar9 = *puVar1;
            uVar4 = puVar1[1];
            func_0x000107c61434(uVar4);
          }
          else {
            uVar9 = 0;
            uVar4 = 0xe000000000000000;
          }
          puVar1 = (ulong *)(*(long *)(lVar11 + lVar10) + lVar3);
          if ((char)puVar1[2] == '\x03') {
            uVar15 = *puVar1;
            uVar14 = puVar1[1];
            func_0x000107c61434(uVar14);
            if (uVar9 != uVar15) goto LAB_1038f37f4;
LAB_1038f37e4:
            if (uVar4 != uVar14) goto LAB_1038f37f4;
            uVar9 = 0;
          }
          else {
            uVar15 = 0;
            uVar14 = 0xe000000000000000;
            if (uVar9 == 0) goto LAB_1038f37e4;
LAB_1038f37f4:
            func_0x000107c605b8(uVar9,uVar4,uVar15,uVar14,1);
          }
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(uVar14);
          if ((uVar9 & 1) != 0) goto LAB_1038f384c;
        }
        else if (lVar13 < lVar5) goto LAB_1038f384c;
        if (plVar7 != plVar12) {
          plVar12[-1] = *plVar8;
        }
        plVar12 = plVar12 + -1;
        plVar7 = plVar8;
        if (plVar8 <= param_4) break;
      } while( true );
    }
  }
LAB_1038f388c:
  uVar4 = (long)plVar8 - (long)param_4;
  uVar9 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar9 = uVar4;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar9 & 0xfffffffffffffff8)) <= plVar2)) {
    func_0x000107c610b8(plVar2,param_4,((long)uVar9 >> 3) << 3);
  }
  return 1;
LAB_1038f384c:
  param_3 = plVar12 + -1;
  if (plVar12 != plVar2) {
    *param_3 = *plVar6;
  }
  plVar2 = plVar6;
  plVar8 = plVar7;
  if ((plVar6 <= param_1) || (plVar7 <= param_4)) goto LAB_1038f388c;
  goto LAB_1038f3710;
}



/* Entry: 1038f38f0; end: 1038f3da7;  */

undefined8 FUN_1038f38f0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar3 = ((long)param_2 - (long)param_1) / 0x18;
  lVar4 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar3 < lVar4) {
    if (((param_4 < param_1) || (param_1 + lVar3 * 3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 * 0x18);
    }
    puVar12 = param_4 + lVar3 * 3;
    puVar14 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar15 = *param_2;
        uVar1 = param_2[1];
        uVar16 = *param_4;
        uVar2 = param_4[1];
        uVar6 = uVar15;
        uVar9 = uVar1;
        func_0x000107c5fb1c();
        uVar7 = uVar16;
        uVar10 = uVar2;
        func_0x000107c5fb1c();
        if ((uVar6 == uVar7 && uVar9 == uVar10) ||
           (uVar8 = uVar6, func_0x000107c605b8(uVar6,uVar9,uVar7,uVar10,0), (uVar8 & 1) != 0)) {
          func_0x000107c61434(uVar1);
          func_0x000107c61434(uVar2);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar10);
          if ((uVar15 == uVar16) && (uVar1 == uVar2)) {
            func_0x000107c6142c(uVar1);
            func_0x000107c6142c(uVar2);
          }
          else {
            func_0x000107c605b8(uVar15,uVar1,uVar16,uVar2,1);
            func_0x000107c6142c(uVar1);
            func_0x000107c6142c(uVar2);
            if ((uVar15 & 1) != 0) goto LAB_1038f3abc;
          }
LAB_1038f3b10:
          puVar5 = param_4 + 3;
          puVar11 = param_4;
        }
        else {
          func_0x000107c605b8(uVar6,uVar9,uVar7,uVar10,1);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar10);
          if ((uVar6 & 1) == 0) goto LAB_1038f3b10;
LAB_1038f3abc:
          puVar5 = param_4;
          puVar11 = param_2;
          param_2 = param_2 + 3;
        }
        param_4 = puVar5;
        if (puVar14 != puVar11) {
          uVar16 = puVar11[1];
          uVar15 = *puVar11;
          puVar14[2] = puVar11[2];
          puVar14[1] = uVar16;
          *puVar14 = uVar15;
        }
        puVar14 = puVar14 + 3;
      } while (param_4 < puVar12);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar4 * 3 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar4 * 0x18);
    }
    puVar11 = param_4 + lVar4 * 3;
    puVar12 = puVar11;
    puVar14 = param_2;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
LAB_1038f3b8c:
      puVar13 = param_2 + -3;
      puVar5 = param_3;
      do {
        param_3 = puVar5 + -3;
        puVar12 = puVar11 + -3;
        uVar15 = *puVar12;
        uVar1 = puVar11[-2];
        uVar16 = param_2[-3];
        uVar2 = param_2[-2];
        uVar6 = uVar15;
        uVar9 = uVar1;
        func_0x000107c5fb1c();
        uVar7 = uVar16;
        uVar10 = uVar2;
        func_0x000107c5fb1c();
        if ((uVar6 == uVar7 && uVar9 == uVar10) ||
           (uVar8 = uVar6, func_0x000107c605b8(uVar6,uVar9,uVar7,uVar10,0), (uVar8 & 1) != 0)) {
          func_0x000107c61434(uVar1);
          func_0x000107c61434(uVar2);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar10);
          if ((uVar15 != uVar16) || (uVar1 != uVar2)) {
            func_0x000107c605b8(uVar15,uVar1,uVar16,uVar2,1);
            func_0x000107c6142c(uVar1);
            func_0x000107c6142c(uVar2);
            uVar6 = uVar15;
            goto joined_r0x0001038f3c88;
          }
          func_0x000107c6142c(uVar1);
          func_0x000107c6142c(uVar2);
        }
        else {
          func_0x000107c605b8(uVar6,uVar9,uVar7,uVar10,1);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(uVar10);
joined_r0x0001038f3c88:
          if ((uVar6 & 1) != 0) goto LAB_1038f3cec;
        }
        if (puVar5 != puVar11) {
          uVar16 = puVar11[-2];
          uVar15 = *puVar12;
          puVar5[-1] = puVar11[-1];
          puVar5[-2] = uVar16;
          *param_3 = uVar15;
        }
        puVar11 = puVar12;
        puVar14 = param_2;
        puVar5 = param_3;
        if (puVar12 <= param_4) break;
      } while( true );
    }
  }
LAB_1038f3d38:
  lVar3 = ((long)puVar12 - (long)param_4) / 0x18;
  if ((puVar14 != param_4) || (param_4 + lVar3 * 3 <= puVar14)) {
    func_0x000107c610b8(puVar14,param_4,lVar3 * 0x18);
  }
  return 1;
LAB_1038f3cec:
  if (puVar5 != param_2) {
    uVar16 = param_2[-2];
    uVar15 = *puVar13;
    puVar5[-1] = param_2[-1];
    puVar5[-2] = uVar16;
    *param_3 = uVar15;
  }
  puVar12 = puVar11;
  puVar14 = puVar13;
  if ((puVar13 <= param_1) || (param_2 = puVar13, puVar11 <= param_4)) goto LAB_1038f3d38;
  goto LAB_1038f3b8c;
}



/* Entry: 1038f3da8; end: 1038f4413;  */

/* WARNING: Removing unreachable block (ram,0x0001038f3ff0) */

undefined * FUN_1038f3da8(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *apuStack_d0 [3];
  undefined *puStack_b8;
  undefined *apuStack_a8 [5];
  undefined1 auStack_80 [32];
  
  puVar10 = (ulong *)(param_1 + 0x40);
  uVar14 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar14 < 0x40) {
    uVar12 = ~(-1L << (-uVar14 & 0x3f));
  }
  uVar12 = uVar12 & *puVar10;
  func_0x000107c61434();
  lVar11 = 0;
  lVar1 = lVar11;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    while( true ) {
      while (uVar12 == 0) {
        bVar3 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f3ff0);
          (*pcVar2)();
        }
        if ((long)(0x3f - uVar14 >> 6) <= lVar11) {
          func_0x0001018dc54c(param_1,puVar10,~uVar14,lVar1,0);
          apuStack_a8[0] = puVar8;
          func_0x000107c61434(puVar8);
          FUN_1038f1e98(apuStack_a8);
          func_0x000107c6142c(puVar8);
          return apuStack_a8[0];
        }
        uVar12 = puVar10[lVar11];
      }
      uVar13 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar11 << 6;
      func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar13 * 0x28,apuStack_a8);
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar13 * 0x20,auStack_80);
      puStack_b8 = PTR___ss11AnyHashableVN_11034e448;
      puVar4 = &UNK_1106a93e0;
      func_0x000107c613fc(&UNK_1106a93e0,0x38,7);
      puVar9 = puVar4 + 0x10;
      apuStack_d0[0] = puVar4;
      func_0x0001007bbd18(apuStack_a8);
      ppuVar5 = apuStack_d0;
      FUN_1038f7e28();
      func_0x0001038f4428(apuStack_d0);
      lVar1 = lVar11;
      if (puVar9 != (undefined *)0x0) break;
LAB_1038f3e28:
      func_0x0001014b7d40(apuStack_a8);
    }
    puVar6 = auStack_80;
    func_0x0001038f7f84();
    if ((long)puVar6 < 1) {
      func_0x000107c6142c(puVar9);
      goto LAB_1038f3e28;
    }
    func_0x0001014b7d40(apuStack_a8);
    puVar4 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar4 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001038f9e60(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar13 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001038f9e60(puVar8,uVar13 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar13 + 1;
    *(undefined ***)(puVar8 + uVar13 * 0x18 + 0x20) = ppuVar5;
    *(undefined **)(puVar8 + uVar13 * 0x18 + 0x28) = puVar9;
    *(undefined1 **)(puVar8 + uVar13 * 0x18 + 0x30) = puVar6;
  } while( true );
}



/* Entry: 1038f4414; end: 1038f4457;  */

void FUN_1038f4414(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1038f4458; end: 1038f4b13;  */

/* WARNING: Removing unreachable block (ram,0x0001038f4b08) */
/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1038f4458(long param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *apuStack_158 [3];
  undefined *puStack_140;
  undefined1 auStack_138 [40];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    FUN_1038fd870();
    uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar18 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
    uVar12 = uVar12 + 0x3f >> 6;
    func_0x000107c61434(param_1);
    pcStack_170 = (code *)0x0;
    lVar17 = 0;
joined_r0x0001038f44dc:
    if (uVar18 == 0) {
      uVar18 = uVar12;
      if ((long)uVar12 <= lVar17 + 1) {
        uVar18 = lVar17 + 1;
      }
      lVar11 = uVar18 - 1;
      lVar14 = lVar17;
      do {
        lVar17 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f4a88);
          (*pcVar1)();
        }
        if ((long)uVar12 <= lVar17) {
          uVar18 = 0;
          uStack_d0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_f8 = 0;
          uStack_100 = 0;
          goto LAB_1038f4538;
        }
        uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
        lVar14 = lVar14 + 1;
      } while (uVar18 == 0);
    }
    uVar15 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 - 1 & uVar18;
    uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar17 << 6;
    func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar15 * 0x28,&puStack_110);
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar15 * 0x20,&uStack_e8);
    lVar11 = lVar17;
LAB_1038f4538:
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    puStack_c0 = puStack_110;
    lStack_a8 = lStack_f8;
    uStack_b0 = uStack_100;
    if (lStack_f8 != 0) {
      func_0x000100102924(&uStack_98,auStack_138);
      puStack_140 = PTR___ss11AnyHashableVN_11034e448;
      puVar10 = &UNK_1106a9428;
      uVar3 = 7;
      func_0x000107c613fc(&UNK_1106a9428,0x38);
      puVar9 = puVar10 + 0x10;
      apuStack_158[0] = puVar10;
      func_0x0001007bbd18(&puStack_110);
      ppuVar5 = apuStack_158;
      FUN_1038f7e28();
      FUN_1038f6110(apuStack_158);
      lVar17 = lVar11;
      if (puVar9 == (undefined *)0x0) {
LAB_1038f44e4:
        FUN_1038f6110(auStack_138);
        func_0x0001007bbff0(&puStack_110);
      }
      else {
        puVar10 = puVar9;
        FUN_1038f8390();
        func_0x000107c6142c(puVar9);
        if (((uVar3 & 0xff) == 1) || ((undefined *)0xb < puVar10 + -1)) goto LAB_1038f44e4;
        puVar6 = auStack_138;
        func_0x0001038f7f84();
        if ((long)puVar6 < 1) goto LAB_1038f44e4;
        uVar15 = 0;
        func_0x0001017614d0(pcStack_170);
        puVar7 = puVar4;
        func_0x000107c61558();
        uVar3 = (uint)puVar7;
        puVar9 = puVar10;
        apuStack_158[0] = puVar4;
        func_0x00010035a314();
        uVar13 = (ulong)~(uint)uVar15 & 1;
        lVar14 = *(long *)(puVar4 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(puVar4 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f4af0);
          (*pcVar1)();
        }
        if (*(long *)(puVar4 + 0x18) < lVar14) {
          func_0x000102104c50(lVar14);
          puVar4 = apuStack_158[0];
          puVar9 = puVar10;
          func_0x00010035a314();
          if (((uint)uVar15 & 1) != (uVar3 & 1)) {
            func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f4b08);
            (*pcVar1)();
          }
        }
        else if (((ulong)puVar7 & 1) == 0) {
          func_0x000102104b04();
          puVar4 = apuStack_158[0];
        }
        if ((uVar15 & 1) == 0) {
          *(ulong *)(puVar4 + ((ulong)puVar9 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar4 + ((ulong)puVar9 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar9 & 0x3f);
          *(undefined **)(*(long *)(puVar4 + 0x30) + (long)puVar9 * 8) = puVar10;
          *(undefined8 *)(*(long *)(puVar4 + 0x38) + (long)puVar9 * 8) = 0;
          if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f4af8);
            (*pcVar1)();
          }
          *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        }
        lVar14 = *(long *)(*(long *)(puVar4 + 0x38) + (long)puVar9 * 8);
        if (SCARRY8(lVar14,(long)puVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f4af4);
          (*pcVar1)();
        }
        *(undefined1 **)(*(long *)(puVar4 + 0x38) + (long)puVar9 * 8) = puVar6 + lVar14;
        func_0x000103a730a0(0);
        func_0x000107c610f8();
        func_0x000103a72838(ppuVar5,puVar10,2);
        uVar8 = 0;
        func_0x000103a763d0(0);
        func_0x000107c610f8();
        func_0x000103a76004(ppuVar5,puVar6,uVar8);
        puVar10 = puStack_168;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puStack_168 < 0)) ||
           (puVar10 = puStack_168, ((ulong)puStack_168 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_168 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puStack_168 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_168) {
              puVar9 = puStack_168;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_1038f9d38(0,puVar9 + 1,1,puStack_168);
        }
        uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar13 + 0x10);
        puStack_168 = puVar10;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar15) {
          puStack_168 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_1038f9d38(puStack_168,uVar15 + 1,1,puVar10);
          uVar13 = (ulong)puStack_168 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
        *(undefined ***)(uVar13 + uVar15 * 8 + 0x20) = ppuVar5;
        FUN_1038f6110(auStack_138);
        func_0x0001007bbff0(&puStack_110);
        pcStack_170 = FUN_1038f4b14;
      }
      goto joined_r0x0001038f44dc;
    }
    func_0x000107c61574(param_1);
    uVar12 = 1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if ((puVar4[0x20] & 0x3f) < 6) {
      uVar18 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar18 = uVar18 & *(ulong *)(puVar4 + 0x40);
    func_0x000107c61434(puVar4);
    lVar17 = 0;
    while( true ) {
      while (uVar18 != 0) {
        uVar15 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 - 1 & uVar18;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar17 << 6;
        lVar14 = *(long *)(*(long *)(puVar4 + 0x38) + uVar15 * 8);
        if (0 < lVar14) {
          uVar16 = *(undefined8 *)(*(long *)(puVar4 + 0x30) + uVar15 * 8);
          uVar8 = 0;
          func_0x000103a730a0(0);
          func_0x000107c610f8();
          func_0x000103a72838(uVar16,0,1,uVar8);
          uVar8 = 0;
          func_0x000103a763d0(0);
          func_0x000107c610f8();
          func_0x000103a76004(uVar16,lVar14,uVar8);
          puVar10 = puStack_168;
          func_0x000107c61550();
          if ((((int)puVar10 == 0) || ((long)puStack_168 < 0)) ||
             (puVar10 = puStack_168, ((ulong)puStack_168 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_168 >> 0x3e == 0) {
              puVar9 = *(undefined **)(((ulong)puStack_168 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar9 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_168) {
                puVar9 = puStack_168;
              }
              func_0x000107c60480(puVar9);
            }
            puVar10 = (undefined *)0x0;
            FUN_1038f9d38(0,puVar9 + 1,1,puStack_168);
          }
          uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
          uVar15 = *(ulong *)(uVar13 + 0x10);
          puStack_168 = puVar10;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar15) {
            puStack_168 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_1038f9d38(puStack_168,uVar15 + 1,1,puVar10);
            uVar13 = (ulong)puStack_168 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
          *(undefined8 *)(uVar13 + uVar15 * 8 + 0x20) = uVar16;
        }
      }
      bVar2 = SCARRY8(lVar17,1);
      lVar17 = lVar17 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f4a8c);
        (*pcVar1)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar17) break;
      uVar18 = *(ulong *)((long)(puVar4 + 0x40) + lVar17 * 8);
    }
    func_0x000107c61574(puVar4);
    if ((ulong)puStack_168 >> 0x3e == 0) {
      func_0x000107c61434(puStack_168);
      puVar9 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
    }
    else {
      puVar10 = (undefined *)((ulong)puStack_168 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_168) {
        puVar10 = puStack_168;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar10 != (undefined *)0x0) {
        func_0x000107c61434(puStack_168);
        puVar9 = puVar10;
        FUN_1038f4fbc(puVar10,0);
        puVar7 = puStack_168;
        FUN_1038f5fb8(puVar9 + 0x20,puVar10);
        func_0x000107c6142c();
        if (puVar7 != puVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f4ae0);
          (*pcVar1)();
        }
      }
    }
    puStack_c0 = puVar9;
    FUN_1038f503c(&puStack_c0);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puStack_168);
    func_0x0001017614d0(pcStack_170,0);
    puVar4 = puStack_c0;
  }
  return puVar4;
}



/* Entry: 1038f4b14; end: 1038f4b1b;  */

void FUN_1038f4b14(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1038f4b1c; end: 1038f4b77;  */

void FUN_1038f4b1c(void)

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
    func_0x000103a763d0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112fad2f8;
  plVar5 = (long *)&UNK_10dc201c0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1038f4b78; end: 1038f4cff;  */

void FUN_1038f4b78(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  
  func_0x0001000285a8(0x112fad648,&UNK_10dc20960);
  lVar15 = *unaff_x20;
  lVar8 = lVar15;
  func_0x000107c6048c();
  if (*(long *)(lVar15 + 0x10) != 0) {
    lVar1 = lVar15 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar15 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar15 + 0x40);
    if (uVar9 == 0) goto LAB_1038f4c54;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar16 << 6;
        lVar13 = uVar11 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + lVar13);
        uVar5 = puVar2[1];
        lVar12 = uVar11 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar12);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        uVar14 = puVar3[2];
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar13);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar12);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        puVar2[2] = uVar14;
        func_0x000107c61434();
        func_0x000107c61434(uVar6);
        if (uVar9 != 0) break;
LAB_1038f4c54:
        do {
          lVar12 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1038f4d00);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_1038f4cd8;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar16 = lVar12;
      }
    } while( true );
  }
LAB_1038f4cd8:
  func_0x000107c61574(lVar15);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 1038f4d00; end: 1038f4fbb;  */

void FUN_1038f4d00(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_a8 [72];
  
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112fad648;
  func_0x0001000285a8(0x112fad648,&UNK_10dc20960);
  lVar8 = lVar20;
  func_0x000107c60490(lVar20,lVar1,param_2,uVar7);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_1038f4f88:
    func_0x000107c61574(lVar20);
    *unaff_x20 = lVar8;
    return;
  }
  puVar19 = (ulong *)(lVar20 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  lVar1 = lVar8 + 0x40;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar21 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038f4fb8);
          (*pcVar6)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
            if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
              *puVar19 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar19,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar20 + 0x10) = 0;
          }
          goto LAB_1038f4f88;
        }
        uVar18 = puVar19[lVar21];
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar21 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar21 << 6;
    puVar12 = (undefined8 *)(*(long *)(lVar20 + 0x30) + uVar10 * 0x10);
    uVar7 = *puVar12;
    uVar3 = puVar12[1];
    puVar12 = (undefined8 *)(*(long *)(lVar20 + 0x38) + uVar10 * 0x18);
    uVar2 = *puVar12;
    uVar4 = puVar12[1];
    uVar13 = puVar12[2];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar7,uVar3);
    func_0x000107c606a8();
    uVar17 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar9 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar16 >> 6;
    uVar10 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar17 >> 6;
      do {
        uVar16 = uVar14 + 1;
        if ((uVar16 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1038f4fbc);
          (*pcVar6)();
        }
        uVar14 = 0;
        if (uVar16 != uVar10) {
          uVar14 = uVar16;
        }
        bVar5 = (bool)(uVar16 == uVar10 | bVar5);
        uVar16 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar14 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    puVar12 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar10 * 0x10);
    *puVar12 = uVar7;
    puVar12[1] = uVar3;
    puVar12 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar10 * 0x18);
    *puVar12 = uVar2;
    puVar12[1] = uVar4;
    puVar12[2] = uVar13;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar11 = lVar21;
  } while( true );
}



/* Entry: 1038f4fbc; end: 1038f503b;  */

undefined * FUN_1038f4fbc(undefined *param_1,undefined *param_2)

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
    FUN_1038f4b1c();
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



/* Entry: 1038f503c; end: 1038f513b;  */

void FUN_1038f503c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1038fd4cc();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x000103a763d0(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1038f513c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1038f5734(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1038f513c; end: 1038f5733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f513c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long unaff_x21;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar25 = param_3[1];
  if (0 < lVar25) {
    lVar12 = 0;
    do {
      lVar16 = lVar12 + 1;
      lVar24 = lVar16;
      if (lVar16 < lVar25) {
        lVar23 = *param_3;
        uVar7 = *(ulong *)(lVar23 + lVar16 * 8);
        func_0x0001038f6130(uVar7,*(undefined8 *)(lVar23 + lVar12 * 8));
        lVar24 = lVar12 + 2;
        lVar26 = lVar24;
        if (lVar24 < lVar25) {
          lVar16 = *(long *)(lVar23 + lVar16 * 8);
          lVar18 = *(long *)(lVar16 + _DAT_112fda0f8);
          do {
            lVar17 = *(long *)(lVar23 + lVar24 * 8);
            lVar19 = *(long *)(lVar17 + _DAT_112fda0f8);
            if (lVar19 == lVar18) {
              plVar15 = (long *)(*(long *)(lVar17 + _DAT_112fda0f0) + _DAT_112fd9ff0);
              lVar26 = *plVar15;
              lVar18 = plVar15[1];
              bVar2 = *(byte *)(plVar15 + 2);
              bVar5 = true;
              if (bVar2 < 2) {
                if (bVar2 == 0) {
LAB_1038f5248:
                  plVar15 = (long *)(*(long *)(lVar16 + _DAT_112fda0f0) + _DAT_112fd9ff0);
                  lVar22 = *plVar15;
                  bVar3 = *(byte *)(plVar15 + 2);
                  if (bVar3 < 2) {
                    if (bVar3 == 0) {
LAB_1038f5270:
                      if (lVar26 != lVar22) {
                        bVar6 = SBORROW8(lVar22,lVar26);
                        bVar5 = lVar22 - lVar26 < 0;
                        goto LAB_1038f51ec;
                      }
                    }
                  }
                  else if (bVar3 == 2) goto LAB_1038f5270;
                  bVar5 = (bVar2 & 0xfd) != 0;
                }
              }
              else if (bVar2 == 2) goto LAB_1038f5248;
              plVar15 = (long *)(*(long *)(lVar16 + _DAT_112fda0f0) + _DAT_112fd9ff0);
              plVar21 = plVar15 + 1;
              bVar3 = *(byte *)(plVar15 + 2);
              if (bVar3 < 2) {
                if (bVar3 == 0) goto LAB_1038f52b0;
LAB_1038f529c:
                if (bVar5) goto LAB_1038f52bc;
                if ((uVar7 & 1) != 0) goto LAB_1038f5334;
              }
              else {
                if (bVar3 != 2) goto LAB_1038f529c;
LAB_1038f52b0:
                if (!bVar5) {
LAB_1038f52bc:
                  if (bVar2 < 2) {
                    lVar18 = lVar26;
                    if (bVar2 != 0) goto LAB_1038f52d8;
LAB_1038f52e8:
                    lVar18 = 0;
                    if (bVar3 < 2) goto LAB_1038f52e0;
LAB_1038f52f4:
                    if (bVar3 != 2) {
LAB_1038f5308:
                      bVar5 = lVar18 < 0;
                      bVar6 = false;
                      goto LAB_1038f51ec;
                    }
                  }
                  else {
                    if (bVar2 != 2) goto LAB_1038f52e8;
LAB_1038f52d8:
                    if (1 < bVar3) goto LAB_1038f52f4;
LAB_1038f52e0:
                    plVar21 = plVar15;
                    if (bVar3 == 0) goto LAB_1038f5308;
                  }
                  bVar6 = SBORROW8(lVar18,*plVar21);
                  bVar5 = lVar18 - *plVar21 < 0;
                  goto LAB_1038f51ec;
                }
                if ((uVar7 & 1) == 0) goto LAB_1038f5398;
              }
            }
            else {
              bVar6 = SBORROW8(lVar18,lVar19);
              bVar5 = lVar18 - lVar19 < 0;
LAB_1038f51ec:
              lVar26 = lVar24;
              if ((((uint)uVar7 ^ (uint)(bVar5 != bVar6)) & 1) != 0) break;
            }
            lVar24 = lVar24 + 1;
            lVar16 = lVar17;
            lVar18 = lVar19;
            lVar26 = lVar25;
          } while (lVar25 != lVar24);
        }
        lVar24 = lVar26;
        if ((uVar7 & 1) != 0) {
LAB_1038f5334:
          if (lVar24 < lVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5708);
            (*pcVar4)();
          }
          if (lVar12 < lVar24) {
            puVar13 = (undefined8 *)(lVar23 + lVar24 * 8);
            puVar14 = (undefined8 *)(lVar23 + lVar12 * 8);
            lVar16 = lVar24;
            lVar25 = lVar12;
            do {
              puVar13 = puVar13 + -1;
              lVar16 = lVar16 + -1;
              if (lVar25 != lVar16) {
                if (lVar23 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5728);
                  (*pcVar4)();
                }
                uVar20 = *puVar14;
                *puVar14 = *puVar13;
                *puVar13 = uVar20;
              }
              lVar25 = lVar25 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar25 < lVar16);
          }
        }
      }
LAB_1038f5398:
      puVar10 = puStack_58;
      lVar25 = param_3[1];
      lVar16 = lVar24;
      if (lVar24 < lVar25) {
        if (SBORROW8(lVar24,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5704);
          (*pcVar4)();
        }
        if (lVar24 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f570c);
            (*pcVar4)();
          }
          lVar26 = lVar12 + param_4;
          if (lVar25 <= lVar12 + param_4) {
            lVar26 = lVar25;
          }
          if (lVar26 < lVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5710);
            (*pcVar4)();
          }
          if (lVar24 != lVar26) {
            lVar25 = *param_3;
            plVar15 = (long *)(lVar25 + lVar24 * 8 + -8);
            lVar23 = lVar12 - lVar24;
            do {
              lVar18 = *(long *)(lVar25 + lVar24 * 8);
              lVar16 = lVar23;
              plVar21 = plVar15;
              do {
                lVar17 = *plVar21;
                if (*(long *)(lVar18 + _DAT_112fda0f8) == *(long *)(lVar17 + _DAT_112fda0f8)) {
                  plVar1 = (long *)(*(long *)(lVar18 + _DAT_112fda0f0) + _DAT_112fd9ff0);
                  lVar19 = *plVar1;
                  lVar22 = plVar1[1];
                  bVar2 = *(byte *)(plVar1 + 2);
                  bVar5 = true;
                  if (bVar2 < 2) {
                    if (bVar2 == 0) {
LAB_1038f5464:
                      plVar1 = (long *)(*(long *)(lVar17 + _DAT_112fda0f0) + _DAT_112fd9ff0);
                      lVar11 = *plVar1;
                      bVar3 = *(byte *)(plVar1 + 2);
                      if (bVar3 < 2) {
                        if (bVar3 == 0) {
LAB_1038f548c:
                          if (lVar19 != lVar11) {
                            if (lVar11 < lVar19) goto LAB_1038f5520;
                            break;
                          }
                        }
                      }
                      else if (bVar3 == 2) goto LAB_1038f548c;
                      bVar5 = (bVar2 & 0xfd) != 0;
                    }
                  }
                  else if (bVar2 == 2) goto LAB_1038f5464;
                  plVar1 = (long *)(*(long *)(lVar17 + _DAT_112fda0f0) + _DAT_112fd9ff0);
                  lVar11 = plVar1[1];
                  bVar3 = *(byte *)(plVar1 + 2);
                  if (bVar3 < 2) {
                    if (bVar3 == 0) goto LAB_1038f54c8;
LAB_1038f54b8:
                    if (!bVar5) break;
                  }
                  else {
                    if (bVar3 != 2) goto LAB_1038f54b8;
LAB_1038f54c8:
                    if (bVar5) goto LAB_1038f5520;
                  }
                  if (bVar2 < 2) {
                    lVar22 = lVar19;
                    if (bVar2 != 0) goto LAB_1038f54e8;
LAB_1038f54f8:
                    lVar22 = 0;
                    if (bVar3 < 2) goto LAB_1038f54f0;
LAB_1038f5504:
                    if (bVar3 != 2) {
LAB_1038f5514:
                      lVar11 = 0;
                    }
                  }
                  else {
                    if (bVar2 != 2) goto LAB_1038f54f8;
LAB_1038f54e8:
                    if (1 < bVar3) goto LAB_1038f5504;
LAB_1038f54f0:
                    lVar11 = *plVar1;
                    if (bVar3 == 0) goto LAB_1038f5514;
                  }
                  if (lVar11 <= lVar22) break;
                }
                else if (*(long *)(lVar18 + _DAT_112fda0f8) <= *(long *)(lVar17 + _DAT_112fda0f8))
                break;
LAB_1038f5520:
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5714);
                  (*pcVar4)();
                }
                *plVar21 = lVar18;
                plVar21[1] = lVar17;
                bVar5 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                plVar21 = plVar21 + -1;
              } while (bVar5);
              lVar24 = lVar24 + 1;
              plVar15 = plVar15 + 1;
              lVar23 = lVar23 + -1;
              lVar16 = lVar26;
            } while (lVar24 != lVar26);
          }
        }
      }
      if (lVar16 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f56f8);
        (*pcVar4)();
      }
      puVar8 = puStack_58;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar7 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000a91e0(puVar10,uVar7 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar7 + 1;
      *(long *)(puVar10 + uVar7 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar10 + uVar7 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f572c);
        (*pcVar4)();
      }
      FUN_1038f58d0(&puStack_58,*param_1,param_3);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1038f56c8;
      lVar25 = param_3[1];
      lVar12 = lVar16;
    } while (lVar16 < lVar25);
  }
  puVar10 = puStack_58;
  lVar25 = *param_1;
  if (lVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5734);
    (*pcVar4)();
  }
  puVar8 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar7 = *(ulong *)(puVar10 + 0x10);
  while (puStack_58 = puVar10, 1 < uVar7) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5730);
      (*pcVar4)();
    }
    lVar24 = uVar7 - 1;
    lVar26 = *(long *)(puVar10 + uVar7 * 0x10);
    lVar16 = *(long *)(puVar10 + lVar24 * 0x10 + 0x28);
    FUN_1038f5b38(lVar12 + lVar26 * 8,lVar12 + *(long *)(puVar10 + lVar24 * 0x10 + 0x20) * 8,
                  lVar12 + lVar16 * 8,lVar25);
    if (unaff_x21 != 0) break;
    if (lVar16 < lVar26) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f56fc);
      (*pcVar4)();
    }
    puVar8 = puVar10;
    func_0x000107c61558();
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar10 + 0x10) <= uVar7 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5700);
      (*pcVar4)();
    }
    *(long *)(puVar10 + uVar7 * 0x10) = lVar26;
    *(long *)((long)(puVar10 + uVar7 * 0x10) + 8) = lVar16;
    puStack_58 = puVar10;
    func_0x0001000a97cc(lVar24);
    puVar10 = puStack_58;
    uVar7 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1038f56c8:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 1038f5734; end: 1038f58cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f5734(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  if (param_3 != param_2) {
    lVar9 = *param_4;
    plVar10 = (long *)(lVar9 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar11 = *(long *)(lVar9 + param_3 * 8);
      lVar12 = param_1;
      plVar13 = plVar10;
      do {
        lVar7 = *plVar13;
        if (*(long *)(lVar11 + _DAT_112fda0f8) == *(long *)(lVar7 + _DAT_112fda0f8)) {
          plVar1 = (long *)(*(long *)(lVar11 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar2 = *plVar1;
          lVar8 = plVar1[1];
          bVar3 = *(byte *)(plVar1 + 2);
          bVar6 = true;
          if (bVar3 < 2) {
            if (bVar3 == 0) {
LAB_1038f57f0:
              plVar1 = (long *)(*(long *)(lVar7 + _DAT_112fda0f0) + _DAT_112fd9ff0);
              lVar14 = *plVar1;
              bVar4 = *(byte *)(plVar1 + 2);
              if (bVar4 < 2) {
                if (bVar4 == 0) {
LAB_1038f5818:
                  if (lVar2 != lVar14) {
                    if (lVar14 < lVar2) goto LAB_1038f58ac;
                    break;
                  }
                }
              }
              else if (bVar4 == 2) goto LAB_1038f5818;
              bVar6 = (bVar3 & 0xfd) != 0;
            }
          }
          else if (bVar3 == 2) goto LAB_1038f57f0;
          plVar1 = (long *)(*(long *)(lVar7 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar14 = plVar1[1];
          bVar4 = *(byte *)(plVar1 + 2);
          if (bVar4 < 2) {
            if (bVar4 == 0) goto LAB_1038f5854;
LAB_1038f5844:
            if (!bVar6) break;
          }
          else {
            if (bVar4 != 2) goto LAB_1038f5844;
LAB_1038f5854:
            if (bVar6) goto LAB_1038f58ac;
          }
          if (bVar3 < 2) {
            lVar8 = lVar2;
            if (bVar3 != 0) goto LAB_1038f5874;
LAB_1038f5884:
            lVar8 = 0;
            if (bVar4 < 2) goto LAB_1038f587c;
LAB_1038f5890:
            if (bVar4 != 2) {
LAB_1038f58a0:
              lVar14 = 0;
            }
          }
          else {
            if (bVar3 != 2) goto LAB_1038f5884;
LAB_1038f5874:
            if (1 < bVar4) goto LAB_1038f5890;
LAB_1038f587c:
            lVar14 = *plVar1;
            if (bVar4 == 0) goto LAB_1038f58a0;
          }
          if (lVar14 <= lVar8) break;
        }
        else if (*(long *)(lVar11 + _DAT_112fda0f8) <= *(long *)(lVar7 + _DAT_112fda0f8)) break;
LAB_1038f58ac:
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f58d0);
          (*pcVar5)();
        }
        *plVar13 = lVar11;
        plVar13[1] = lVar7;
        bVar6 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        plVar13 = plVar13 + -1;
      } while (bVar6);
      param_3 = param_3 + 1;
      plVar10 = plVar10 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1038f58d0; end: 1038f5b37;  */

undefined8 FUN_1038f58d0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1038f59a4;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b20);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1038f5a08:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b10);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b18);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5af8);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5afc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b04);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b0c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1038f59a4:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b00);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b08);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b14);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b1c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1038f5a08;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b24);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5aec);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5b38);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1038f5b38(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5af0);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f5af4);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1038f5b38; end: 1038f5fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038f5b38(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar8;
  
  lVar14 = (long)param_2 - (long)param_1;
  lVar6 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar6 = lVar14;
  }
  lVar6 = lVar6 >> 3;
  lVar15 = (long)param_3 - (long)param_2;
  lVar9 = lVar15 + 7;
  if (-1 < lVar15) {
    lVar9 = lVar15;
  }
  lVar9 = lVar9 >> 3;
  if (lVar6 < lVar9) {
    if (((param_4 < param_1) || (param_1 + lVar6 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar6 * 8);
    }
    plVar8 = param_4 + lVar6;
    plVar12 = param_1;
    if (7 < lVar14) {
      do {
        if (param_3 <= param_2) break;
        lVar14 = *param_2;
        lVar6 = *param_4;
        if (*(long *)(lVar14 + _DAT_112fda0f8) == *(long *)(lVar6 + _DAT_112fda0f8)) {
          plVar13 = (long *)(*(long *)(lVar14 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar9 = *plVar13;
          lVar15 = plVar13[1];
          bVar2 = *(byte *)(plVar13 + 2);
          bVar4 = true;
          if (bVar2 < 2) {
            if (bVar2 == 0) {
LAB_1038f5c50:
              plVar13 = (long *)(*(long *)(lVar6 + _DAT_112fda0f0) + _DAT_112fd9ff0);
              lVar5 = *plVar13;
              bVar3 = *(byte *)(plVar13 + 2);
              if (bVar3 < 2) {
                if (bVar3 == 0) {
LAB_1038f5c78:
                  if (lVar9 != lVar5) {
                    if (lVar9 <= lVar5) goto LAB_1038f5d30;
                    goto LAB_1038f5cd8;
                  }
                }
              }
              else if (bVar3 == 2) goto LAB_1038f5c78;
              bVar4 = (bVar2 & 0xfd) != 0;
            }
          }
          else if (bVar2 == 2) goto LAB_1038f5c50;
          plVar13 = (long *)(*(long *)(lVar6 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          bVar3 = *(byte *)(plVar13 + 2);
          if (bVar3 < 2) {
            if (bVar3 != 0) goto LAB_1038f5ca4;
LAB_1038f5cb4:
            if (bVar4) goto LAB_1038f5cd8;
          }
          else {
            if (bVar3 == 2) goto LAB_1038f5cb4;
LAB_1038f5ca4:
            if (!bVar4) goto LAB_1038f5d30;
          }
          if (bVar2 < 2) {
            lVar15 = lVar9;
            if (bVar2 == 0) {
LAB_1038f5d00:
              lVar15 = 0;
            }
            if (bVar3 < 2) goto LAB_1038f5ccc;
LAB_1038f5d0c:
            if (bVar3 == 2) {
              if (plVar13[1] <= lVar15) goto LAB_1038f5d30;
              goto LAB_1038f5cd8;
            }
          }
          else {
            if (bVar2 != 2) goto LAB_1038f5d00;
            if (1 < bVar3) goto LAB_1038f5d0c;
LAB_1038f5ccc:
            if (bVar3 != 0) {
              if (*plVar13 <= lVar15) goto LAB_1038f5d30;
              goto LAB_1038f5cd8;
            }
          }
          if (lVar15 < 0) goto LAB_1038f5cd8;
LAB_1038f5d30:
          plVar10 = param_2;
          plVar11 = param_4 + 1;
          plVar13 = param_4;
        }
        else {
          if (*(long *)(lVar14 + _DAT_112fda0f8) <= *(long *)(lVar6 + _DAT_112fda0f8))
          goto LAB_1038f5d30;
LAB_1038f5cd8:
          lVar6 = lVar14;
          plVar10 = param_2 + 1;
          plVar11 = param_4;
          plVar13 = param_2;
        }
        param_4 = plVar11;
        param_2 = plVar10;
        if (plVar12 != plVar13) {
          *plVar12 = lVar6;
        }
        plVar12 = plVar12 + 1;
      } while (param_4 < plVar8);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar9 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar9 * 8);
    }
    plVar8 = param_4 + lVar9;
    plVar12 = param_2;
    if ((param_1 < param_2) && (7 < lVar15)) {
LAB_1038f5dc8:
      plVar10 = param_2 + -1;
      plVar13 = param_3;
      do {
        param_3 = plVar13 + -1;
        plVar11 = plVar8 + -1;
        lVar6 = *plVar11;
        lVar14 = *plVar10;
        if (*(long *)(lVar6 + _DAT_112fda0f8) == *(long *)(lVar14 + _DAT_112fda0f8)) {
          plVar12 = (long *)(*(long *)(lVar6 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar9 = *plVar12;
          lVar15 = plVar12[1];
          bVar2 = *(byte *)(plVar12 + 2);
          bVar4 = true;
          if (bVar2 < 2) {
            if (bVar2 == 0) {
LAB_1038f5e44:
              plVar12 = (long *)(*(long *)(lVar14 + _DAT_112fda0f0) + _DAT_112fd9ff0);
              lVar5 = *plVar12;
              bVar3 = *(byte *)(plVar12 + 2);
              if (bVar3 < 2) {
                if (bVar3 == 0) {
LAB_1038f5e6c:
                  if (lVar9 != lVar5) {
                    if (lVar9 <= lVar5) goto LAB_1038f5f08;
                    goto LAB_1038f5f24;
                  }
                }
              }
              else if (bVar3 == 2) goto LAB_1038f5e6c;
              bVar4 = (bVar2 & 0xfd) != 0;
            }
          }
          else if (bVar2 == 2) goto LAB_1038f5e44;
          plVar12 = (long *)(*(long *)(lVar14 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar5 = plVar12[1];
          bVar3 = *(byte *)(plVar12 + 2);
          if (bVar3 < 2) {
            if (bVar3 != 0) goto LAB_1038f5e98;
LAB_1038f5ea8:
            if (bVar4) goto LAB_1038f5f24;
          }
          else {
            if (bVar3 == 2) goto LAB_1038f5ea8;
LAB_1038f5e98:
            if (!bVar4) goto LAB_1038f5f08;
          }
          if (bVar2 < 2) {
            lVar15 = lVar9;
            if (bVar2 == 0) {
LAB_1038f5ee0:
              lVar15 = 0;
            }
            if (bVar3 < 2) goto LAB_1038f5ec0;
LAB_1038f5eec:
            if (bVar3 != 2) goto LAB_1038f5efc;
          }
          else {
            if (bVar2 != 2) goto LAB_1038f5ee0;
            if (1 < bVar3) goto LAB_1038f5eec;
LAB_1038f5ec0:
            lVar5 = *plVar12;
            if (bVar3 == 0) {
LAB_1038f5efc:
              lVar5 = 0;
            }
          }
          if (lVar15 < lVar5) goto LAB_1038f5f24;
        }
        else if (*(long *)(lVar14 + _DAT_112fda0f8) < *(long *)(lVar6 + _DAT_112fda0f8))
        goto LAB_1038f5f24;
LAB_1038f5f08:
        if (plVar13 != plVar8) {
          *param_3 = lVar6;
        }
        plVar8 = plVar11;
        plVar12 = param_2;
        plVar13 = param_3;
        if (plVar11 <= param_4) break;
      } while( true );
    }
  }
LAB_1038f5f5c:
  uVar7 = (long)plVar8 - (long)param_4;
  uVar1 = uVar7 + 7;
  if (-1 < (long)uVar7) {
    uVar1 = uVar7;
  }
  if ((plVar12 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar12)) {
    func_0x000107c610b8(plVar12,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
LAB_1038f5f24:
  if (plVar13 != param_2) {
    *param_3 = lVar14;
  }
  plVar12 = plVar10;
  if ((plVar10 <= param_1) || (param_2 = plVar10, plVar8 <= param_4)) goto LAB_1038f5f5c;
  goto LAB_1038f5dc8;
}



/* Entry: 1038f5fb8; end: 1038f610f;  */

ulong FUN_1038f5fb8(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f6110);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f6104);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000103a763d0(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f6108);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f610c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          func_0x0001038ed108(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1038f6110; end: 1038f627b;  */

void FUN_1038f6110(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001038f6124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1038f627c; end: 1038f63b7;  */

ulong FUN_1038f627c(double param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c6071c();
  dVar7 = param_1;
  FUN_1038f63b8(param_2,param_3);
  func_0x000107c6071c();
  dVar7 = (dVar7 - param_1) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f639c);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar7) {
    if (dVar7 < 9.223372036854776e+18) {
      uVar5 = *(undefined8 *)(lVar6 + 0x10);
      if (param_2 >> 0x3e == 0) {
        uVar3 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = param_2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < param_2) {
          uVar3 = param_2;
        }
        func_0x000107c60480();
      }
      uVar4 = 0x656e6f6e;
      if (uVar3 != 0) {
        uVar4 = 0x6574736567677573;
      }
      uVar1 = 0xe400000000000000;
      if (uVar3 != 0) {
        uVar1 = 0xe900000000000064;
      }
      func_0x000107c5fadc(uVar4,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000106db32b0(uVar5,uVar4,(long)dVar7);
      func_0x000107c61170(uVar4);
      return param_2;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f63a4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f63a0);
  (*pcVar2)();
}



/* Entry: 1038f63b8; end: 1038f6913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038f63b8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  
  uVar6 = 0;
  func_0x000103a722f4(0);
  func_0x000103a72058(param_1,param_2,uVar6);
  uVar13 = param_1;
  func_0x000107c5fb5c();
  func_0x000103a75ac4();
  uVar7 = param_1;
  func_0x000103a730c8(param_1,param_2);
  if ((long)uVar13 < (long)uVar7) {
    func_0x000107c6142c(param_2);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000103a740b0();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar12 = 0;
    do {
      bVar3 = *(byte *)(lVar12 + 0x112fad720);
      uVar13 = (ulong)bVar3;
      func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
      uVar6 = 0;
      func_0x0001038f16dc(0);
      if (bVar3 == 1) {
        uVar13 = 1;
        FUN_1038f170c(1,uVar6,&PTR_DAT_1106a9388);
        uVar15 = uVar13 & 0xffffffffffffff8;
        if (uVar13 >> 0x3e == 0) {
          uVar18 = *(ulong *)(uVar15 + 0x10);
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar18 = uVar15;
          if (0x7fffffffffffffff < uVar13) {
            uVar18 = uVar13;
          }
          func_0x000107c60480();
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar16;
        if (uVar18 != 0) {
          uVar14 = 0;
          do {
            while( true ) {
              if ((uVar13 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f6910);
                  (*pcVar5)();
                }
                uVar8 = *(ulong *)(uVar13 + uVar14 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar8 = uVar14;
                func_0x0001038ed108(uVar14,uVar13);
              }
              uVar1 = uVar14 + 1;
              if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f6904);
                (*pcVar5)();
              }
              uVar9 = param_1;
              func_0x000103a732f0(param_1,param_2,*(undefined8 *)(uVar8 + _DAT_112fda0f0),uVar7);
              if ((uVar9 & 1) != 0) break;
              func_0x000107c61170(uVar8);
              uVar14 = uVar14 + 1;
              if (uVar1 == uVar18) goto LAB_1038f6750;
            }
            puVar17 = puVar16;
            func_0x000107c61558();
            if (((ulong)puVar17 & 1) == 0) {
              FUN_1038ed310(0,*(long *)(puVar16 + 0x10) + 1,1);
            }
            uVar14 = *(ulong *)(puVar16 + 0x10);
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar14) {
              FUN_1038ed310(1 < *(ulong *)(puVar16 + 0x18),uVar14 + 1,1);
            }
            *(ulong *)(puVar16 + 0x10) = uVar14 + 1;
            *(ulong *)(puVar16 + uVar14 * 8 + 0x20) = uVar8;
            uVar14 = uVar1;
          } while (uVar1 != uVar18);
        }
LAB_1038f6750:
        func_0x000107c6142c(uVar13);
        if (((long)puVar16 < 0) || (((ulong)puVar16 >> 0x3e & 1) != 0)) {
          puVar17 = puVar16;
          func_0x000107c60480();
          puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar17 = *(undefined **)(puVar16 + 0x10);
          puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar4;
        if (puVar17 != (undefined *)0x0) {
          func_0x000100dd4260(0,(ulong)puVar17 & ((long)puVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)puVar17 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f6914);
            (*pcVar5)();
          }
          puVar19 = (undefined *)0x0;
          do {
            if (((ulong)puVar16 & 0xc000000000000001) == 0) {
              puVar10 = *(undefined **)(puVar16 + (long)puVar19 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar10 = puVar19;
              func_0x0001038ed108(puVar19,puVar16);
            }
            uVar6 = 0;
            puVar2 = (undefined8 *)(*(long *)(puVar10 + _DAT_112fda0f0) + _DAT_112fd9ff0);
            bVar3 = *(byte *)(puVar2 + 2);
            if (bVar3 < 2) {
              if (bVar3 != 0) {
                uVar6 = *puVar2;
              }
            }
            else if (bVar3 == 2) {
              uVar6 = puVar2[1];
            }
            func_0x000107c61170();
            uVar13 = *(ulong *)(puVar4 + 0x10);
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
              func_0x000100dd4260(1 < *(ulong *)(puVar4 + 0x18),uVar13 + 1,1);
            }
            puVar19 = puVar19 + 1;
            *(ulong *)(puVar4 + 0x10) = uVar13 + 1;
            *(undefined8 *)(puVar4 + uVar13 * 8 + 0x20) = uVar6;
          } while (puVar17 != puVar19);
        }
        puVar17 = puVar4;
        func_0x000101164de8();
        func_0x000107c6142c(puVar4);
        uVar13 = *(ulong *)(puVar17 + 0x10);
        func_0x000107c6142c(puVar17);
        if (2 < uVar13) {
          func_0x000107c61574(puVar16);
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
      }
      else {
        FUN_1038f170c(uVar13,uVar6,&PTR_DAT_1106a9388);
        uVar15 = uVar13 & 0xffffffffffffff8;
        if (uVar13 >> 0x3e == 0) {
          uVar18 = *(ulong *)(uVar15 + 0x10);
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar18 = uVar15;
          if (0x7fffffffffffffff < uVar13) {
            uVar18 = uVar13;
          }
          func_0x000107c60480();
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar16;
        if (uVar18 != 0) {
          uVar14 = 0;
          do {
            while( true ) {
              if ((uVar13 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f690c);
                  (*pcVar5)();
                }
                uVar8 = *(ulong *)(uVar13 + uVar14 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar8 = uVar14;
                func_0x0001038ed108(uVar14,uVar13);
              }
              uVar1 = uVar14 + 1;
              if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1038f6908);
                (*pcVar5)();
              }
              uVar9 = param_1;
              func_0x000103a732f0(param_1,param_2,*(undefined8 *)(uVar8 + _DAT_112fda0f0),uVar7);
              if ((uVar9 & 1) != 0) break;
              func_0x000107c61170(uVar8);
              uVar14 = uVar14 + 1;
              if (uVar1 == uVar18) goto LAB_1038f6478;
            }
            puVar17 = puVar16;
            func_0x000107c61558();
            if (((ulong)puVar17 & 1) == 0) {
              FUN_1038ed310(0,*(long *)(puVar16 + 0x10) + 1,1);
            }
            uVar14 = *(ulong *)(puVar16 + 0x10);
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar14) {
              FUN_1038ed310(1 < *(ulong *)(puVar16 + 0x18),uVar14 + 1,1);
            }
            *(ulong *)(puVar16 + 0x10) = uVar14 + 1;
            *(ulong *)(puVar16 + uVar14 * 8 + 0x20) = uVar8;
            uVar14 = uVar1;
          } while (uVar1 != uVar18);
        }
LAB_1038f6478:
        func_0x000107c6142c(uVar13);
      }
      lVar12 = lVar12 + 1;
      FUN_1038f6960(puVar16);
    } while (lVar12 != 3);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(param_2);
  }
  return puVar11;
}



/* Entry: 1038f6914; end: 1038f695f;  */

void FUN_1038f6914(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038f6960; end: 1038f6afb;  */

void FUN_1038f6960(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
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
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001038f6a4c(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1038f5fb8(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f6a48);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f6a4c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f6a44);
  (*pcVar1)();
}



/* Entry: 1038f6afc; end: 1038f6bfb;  */

void FUN_1038f6afc(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1038fd4cc();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x000103a763d0(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1038f6bfc(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1038f7124(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1038f6bfc; end: 1038f7123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f6bfc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long unaff_x21;
  long lVar24;
  ulong uVar25;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar12 = 0;
    do {
      puVar8 = puStack_58;
      lVar17 = lVar12 + 1;
      lVar16 = lVar17;
      if (lVar17 < lVar10) {
        lVar13 = *param_3;
        lVar18 = *(long *)(lVar13 + lVar17 * 8);
        lVar22 = *(long *)(lVar13 + lVar12 * 8);
        lVar23 = *(long *)(lVar18 + _DAT_112fda0f8);
        lVar16 = *(long *)(lVar22 + _DAT_112fda0f8);
        if (lVar23 == lVar16) {
          plVar15 = (long *)(*(long *)(lVar18 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar16 = *plVar15;
          bVar2 = *(byte *)(plVar15 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f6cb0:
              lVar16 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f6cb0;
          plVar15 = (long *)(*(long *)(lVar22 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar22 = *plVar15;
          bVar2 = *(byte *)(plVar15 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f6cd0:
              lVar22 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f6cd0;
          bVar4 = lVar22 < lVar16;
        }
        else {
          bVar4 = lVar16 < lVar23;
        }
        lVar22 = lVar10;
        if (lVar10 <= lVar12 + 2) {
          lVar22 = lVar12 + 2;
        }
        lVar24 = (lVar22 - lVar12) + -2;
        plVar15 = (long *)(lVar13 + lVar12 * 8 + 0x10);
        do {
          lVar16 = lVar22;
          if (lVar24 == 0) break;
          lVar16 = *plVar15;
          lVar9 = *(long *)(lVar16 + _DAT_112fda0f8);
          if (lVar9 == lVar23) {
            plVar21 = (long *)(*(long *)(lVar16 + _DAT_112fda0f0) + _DAT_112fd9ff0);
            lVar23 = *plVar21;
            bVar2 = *(byte *)(plVar21 + 2);
            if (bVar2 < 2) {
              if (bVar2 != 0) {
LAB_1038f6d68:
                lVar23 = 0;
              }
            }
            else if (bVar2 != 2) goto LAB_1038f6d68;
            plVar21 = (long *)(*(long *)(lVar18 + _DAT_112fda0f0) + _DAT_112fd9ff0);
            lVar19 = *plVar21;
            bVar2 = *(byte *)(plVar21 + 2);
            if (bVar2 < 2) {
              if (bVar2 != 0) {
LAB_1038f6d88:
                lVar19 = 0;
              }
            }
            else if (bVar2 != 2) goto LAB_1038f6d88;
            bVar5 = SBORROW8(lVar19,lVar23);
            lVar19 = lVar19 - lVar23;
          }
          else {
            bVar5 = SBORROW8(lVar23,lVar9);
            lVar19 = lVar23 - lVar9;
          }
          lVar24 = lVar24 + -1;
          plVar15 = plVar15 + 1;
          lVar17 = lVar17 + 1;
          lVar18 = lVar16;
          lVar23 = lVar9;
          lVar16 = lVar17;
        } while (bVar4 == (lVar19 < 0 != bVar5));
        if (bVar4 != false) {
          if (lVar16 < lVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f70f8);
            (*pcVar3)();
          }
          if (lVar12 < lVar16) {
            puVar11 = (undefined8 *)(lVar13 + lVar16 * 8);
            puVar14 = (undefined8 *)(lVar13 + lVar12 * 8);
            lVar17 = lVar16;
            lVar10 = lVar12;
            do {
              puVar11 = puVar11 + -1;
              lVar17 = lVar17 + -1;
              if (lVar10 != lVar17) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f7118);
                  (*pcVar3)();
                }
                uVar20 = *puVar14;
                *puVar14 = *puVar11;
                *puVar11 = uVar20;
              }
              lVar10 = lVar10 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar10 < lVar17);
            lVar10 = param_3[1];
          }
        }
      }
      lVar17 = lVar16;
      if (lVar16 < lVar10) {
        if (SBORROW8(lVar16,lVar12)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f70f4);
          (*pcVar3)();
        }
        if (lVar16 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f70fc);
            (*pcVar3)();
          }
          lVar18 = lVar12 + param_4;
          if (lVar10 <= lVar12 + param_4) {
            lVar18 = lVar10;
          }
          if (lVar18 < lVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f7100);
            (*pcVar3)();
          }
          if (lVar16 != lVar18) {
            lVar10 = *param_3;
            plVar15 = (long *)(lVar10 + lVar16 * 8 + -8);
            lVar23 = lVar12 - lVar16;
            do {
              lVar13 = *(long *)(lVar10 + lVar16 * 8);
              lVar17 = lVar23;
              plVar21 = plVar15;
              do {
                lVar22 = *plVar21;
                lVar24 = *(long *)(lVar13 + _DAT_112fda0f8);
                lVar9 = *(long *)(lVar22 + _DAT_112fda0f8);
                if (lVar24 == lVar9) {
                  plVar1 = (long *)(*(long *)(lVar13 + _DAT_112fda0f0) + _DAT_112fd9ff0);
                  lVar24 = *plVar1;
                  bVar2 = *(byte *)(plVar1 + 2);
                  if (bVar2 < 2) {
                    if (bVar2 != 0) {
LAB_1038f6edc:
                      lVar24 = 0;
                    }
                  }
                  else if (bVar2 != 2) goto LAB_1038f6edc;
                  plVar1 = (long *)(*(long *)(lVar22 + _DAT_112fda0f0) + _DAT_112fd9ff0);
                  lVar9 = *plVar1;
                  bVar2 = *(byte *)(plVar1 + 2);
                  if (bVar2 < 2) {
                    if (bVar2 != 0) {
LAB_1038f6efc:
                      lVar9 = 0;
                    }
                  }
                  else if (bVar2 != 2) goto LAB_1038f6efc;
                }
                if (lVar24 <= lVar9) break;
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f7104);
                  (*pcVar3)();
                }
                *plVar21 = lVar13;
                plVar21[1] = lVar22;
                bVar4 = lVar17 != -1;
                lVar17 = lVar17 + 1;
                plVar21 = plVar21 + -1;
              } while (bVar4);
              lVar16 = lVar16 + 1;
              plVar15 = plVar15 + 1;
              lVar23 = lVar23 + -1;
              lVar17 = lVar18;
            } while (lVar16 != lVar18);
          }
        }
      }
      if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f70e8);
        (*pcVar3)();
      }
      puVar6 = puStack_58;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar25 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar25) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar25 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar25 + 1;
      *(long *)(puVar8 + uVar25 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar8 + uVar25 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f711c);
        (*pcVar3)();
      }
      FUN_1038f7214(&puStack_58,*param_1,param_3);
      puVar8 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1038f70b8;
      lVar10 = param_3[1];
      lVar12 = lVar17;
    } while (lVar17 < lVar10);
  }
  puVar8 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f7124);
    (*pcVar3)();
  }
  puVar6 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar25 = *(ulong *)(puVar8 + 0x10);
  while (puStack_58 = puVar8, 1 < uVar25) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f7120);
      (*pcVar3)();
    }
    lVar16 = uVar25 - 1;
    lVar18 = *(long *)(puVar8 + uVar25 * 0x10);
    lVar17 = *(long *)(puVar8 + lVar16 * 0x10 + 0x28);
    FUN_1038f747c(lVar12 + lVar18 * 8,lVar12 + *(long *)(puVar8 + lVar16 * 0x10 + 0x20) * 8,
                  lVar12 + lVar17 * 8,lVar10);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f70ec);
      (*pcVar3)();
    }
    puVar6 = puVar8;
    func_0x000107c61558();
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar25 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f70f0);
      (*pcVar3)();
    }
    *(long *)(puVar8 + uVar25 * 0x10) = lVar18;
    *(long *)((long)(puVar8 + uVar25 * 0x10) + 8) = lVar17;
    puStack_58 = puVar8;
    func_0x0001000a97cc(lVar16);
    puVar8 = puStack_58;
    uVar25 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1038f70b8:
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 1038f7124; end: 1038f7213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f7124(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    plVar8 = (long *)(lVar7 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar9 = *(long *)(lVar7 + param_3 * 8);
      lVar10 = param_1;
      plVar11 = plVar8;
      do {
        lVar12 = *plVar11;
        lVar5 = *(long *)(lVar9 + _DAT_112fda0f8);
        lVar6 = *(long *)(lVar12 + _DAT_112fda0f8);
        if (lVar5 == lVar6) {
          plVar1 = (long *)(*(long *)(lVar9 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar5 = *plVar1;
          bVar2 = *(byte *)(plVar1 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f71b8:
              lVar5 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f71b8;
          plVar1 = (long *)(*(long *)(lVar12 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar6 = *plVar1;
          bVar2 = *(byte *)(plVar1 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f71d8:
              lVar6 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f71d8;
        }
        if (lVar5 <= lVar6) break;
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f7214);
          (*pcVar3)();
        }
        *plVar11 = lVar9;
        plVar11[1] = lVar12;
        bVar4 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        plVar11 = plVar11 + -1;
      } while (bVar4);
      param_3 = param_3 + 1;
      plVar8 = plVar8 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1038f7214; end: 1038f747b;  */

undefined8 FUN_1038f7214(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1038f72e8;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7464);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1038f734c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7454);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f745c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f743c);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7440);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7448);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7450);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1038f72e8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7444);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f744c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7458);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7460);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1038f734c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7468);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7430);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f747c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1038f747c(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7434);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f7438);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1038f747c; end: 1038f77a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038f747c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar6;
  
  lVar11 = (long)param_2 - (long)param_1;
  lVar3 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar3 = lVar11;
  }
  lVar3 = lVar3 >> 3;
  lVar12 = (long)param_3 - (long)param_2;
  lVar7 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar7 = lVar12;
  }
  lVar7 = lVar7 >> 3;
  if (lVar3 < lVar7) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar6 = param_4 + lVar3;
    plVar10 = param_1;
    if (7 < lVar11) {
      do {
        if (param_3 <= param_2) break;
        lVar3 = *param_2;
        lVar11 = *param_4;
        lVar7 = *(long *)(lVar3 + _DAT_112fda0f8);
        lVar12 = *(long *)(lVar11 + _DAT_112fda0f8);
        if (lVar7 == lVar12) {
          plVar4 = (long *)(*(long *)(lVar3 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar7 = *plVar4;
          bVar2 = *(byte *)(plVar4 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f75a0:
              lVar7 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f75a0;
          plVar4 = (long *)(*(long *)(lVar11 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar12 = *plVar4;
          bVar2 = *(byte *)(plVar4 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f75c0:
              lVar12 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f75c0;
        }
        if (lVar12 < lVar7) {
          plVar9 = param_4;
          plVar8 = param_2 + 1;
          plVar4 = param_2;
        }
        else {
          lVar3 = lVar11;
          plVar9 = param_4 + 1;
          plVar8 = param_2;
          plVar4 = param_4;
        }
        param_2 = plVar8;
        param_4 = plVar9;
        if (plVar10 != plVar4) {
          *plVar10 = lVar3;
        }
        plVar10 = plVar10 + 1;
      } while (param_4 < plVar6);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar7 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar7 << 3);
    }
    plVar4 = param_4 + lVar7;
    plVar6 = plVar4;
    plVar10 = param_2;
    if ((param_1 < param_2) && (7 < lVar12)) {
LAB_1038f7668:
      plVar8 = param_2 + -1;
      plVar9 = param_3;
      do {
        plVar6 = plVar4 + -1;
        lVar3 = *plVar6;
        lVar11 = *plVar8;
        lVar7 = *(long *)(lVar3 + _DAT_112fda0f8);
        lVar12 = *(long *)(lVar11 + _DAT_112fda0f8);
        if (lVar7 == lVar12) {
          plVar10 = (long *)(*(long *)(lVar3 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar7 = *plVar10;
          bVar2 = *(byte *)(plVar10 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f76c8:
              lVar7 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f76c8;
          plVar10 = (long *)(*(long *)(lVar11 + _DAT_112fda0f0) + _DAT_112fd9ff0);
          lVar12 = *plVar10;
          bVar2 = *(byte *)(plVar10 + 2);
          if (bVar2 < 2) {
            if (bVar2 != 0) {
LAB_1038f76e8:
              lVar12 = 0;
            }
          }
          else if (bVar2 != 2) goto LAB_1038f76e8;
        }
        param_3 = plVar9 + -1;
        if (lVar12 < lVar7) goto LAB_1038f7720;
        if (plVar4 != plVar9) {
          *param_3 = lVar3;
        }
        plVar4 = plVar6;
        plVar9 = param_3;
        plVar10 = param_2;
        if (plVar6 <= param_4) break;
      } while( true );
    }
  }
LAB_1038f774c:
  uVar5 = (long)plVar6 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar10 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar10)) {
    func_0x000107c610b8(plVar10,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
LAB_1038f7720:
  if (plVar9 != param_2) {
    *param_3 = lVar11;
  }
  plVar6 = plVar4;
  plVar10 = plVar8;
  if ((plVar8 <= param_1) || (param_2 = plVar8, plVar4 <= param_4)) goto LAB_1038f774c;
  goto LAB_1038f7668;
}



/* Entry: 1038f77a8; end: 1038f7b3f;  */

/* WARNING: Removing unreachable block (ram,0x0001038f7b34) */

undefined * FUN_1038f77a8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_160;
  undefined *apuStack_158 [3];
  undefined *puStack_140;
  undefined1 auStack_138 [40];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_1 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  uVar10 = uVar10 + 0x3f >> 6;
  func_0x000107c61434();
  puVar7 = PTR___ss11AnyHashableVN_11034e448;
  puStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = 0;
  do {
    if (uVar12 == 0) {
      uVar12 = uVar10;
      if ((long)uVar10 <= lVar14 + 1) {
        uVar12 = lVar14 + 1;
      }
      lVar9 = uVar12 - 1;
      lVar13 = lVar14;
      do {
        lVar14 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f7ad4);
          (*pcVar1)();
        }
        if ((long)uVar10 <= lVar14) {
          uVar12 = 0;
          uStack_d0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_f8 = 0;
          uStack_100 = 0;
          goto LAB_1038f7914;
        }
        uVar12 = ((ulong *)(param_1 + 0x40))[lVar14];
        lVar13 = lVar13 + 1;
      } while (uVar12 == 0);
    }
    uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 - 1 & uVar12;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar14 << 6;
    func_0x0001007bbd18(*(long *)(param_1 + 0x30) + uVar11 * 0x28,&puStack_110);
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar11 * 0x20,&uStack_e8);
    lVar9 = lVar14;
LAB_1038f7914:
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    puStack_c0 = puStack_110;
    lStack_a8 = lStack_f8;
    uStack_b0 = uStack_100;
    if (lStack_f8 == 0) {
      func_0x000107c61574(param_1);
      if ((ulong)puStack_160 >> 0x3e == 0) {
        func_0x000107c61434(puStack_160);
        puVar3 = (undefined *)((ulong)puStack_160 & 0xffffffffffffff8);
      }
      else {
        puVar7 = (undefined *)((ulong)puStack_160 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_160) {
          puVar7 = puStack_160;
        }
        func_0x000107c60480();
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar7 != (undefined *)0x0) {
          func_0x000107c61434(puStack_160);
          puVar3 = puVar7;
          FUN_1038f4fbc(puVar7,0);
          puVar2 = puStack_160;
          FUN_1038f5fb8(puVar3 + 0x20,puVar7);
          func_0x000107c6142c();
          if (puVar2 != puVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f7b28);
            (*pcVar1)();
          }
        }
      }
      puStack_c0 = puVar3;
      FUN_1038f6afc(&puStack_c0);
      func_0x000107c6142c(puStack_160);
      return puStack_c0;
    }
    func_0x000100102924(&uStack_98,auStack_138);
    puStack_140 = puVar7;
    puVar3 = &UNK_1106a9470;
    func_0x000107c613fc(&UNK_1106a9470,0x38,7);
    apuStack_158[0] = puVar3;
    func_0x0001007bbd18(&puStack_110,puVar3 + 0x10);
    ppuVar4 = apuStack_158;
    func_0x0001038f7f84();
    FUN_1038f7b40(apuStack_158);
    puVar5 = auStack_138;
    func_0x0001038f7f84();
    if ((0 < (long)ppuVar4) && (0 < (long)puVar5)) {
      uVar6 = 0;
      func_0x000103a730a0(0);
      func_0x000107c610f8();
      func_0x000103a72838(ppuVar4,0,0,uVar6);
      uVar6 = 0;
      func_0x000103a763d0(0);
      func_0x000107c610f8();
      func_0x000103a76004(ppuVar4,puVar5,uVar6);
      puVar3 = puStack_160;
      func_0x000107c61550();
      if (((int)puVar3 == 0) ||
         (((long)puStack_160 < 0 || (puVar3 = puStack_160, ((ulong)puStack_160 >> 0x3e & 1) != 0))))
      {
        if ((ulong)puStack_160 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puStack_160 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puStack_160 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_160) {
            puVar2 = puStack_160;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_1038f9d38(0,puVar2 + 1,1,puStack_160);
      }
      uVar8 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar8 + 0x10);
      puStack_160 = puVar3;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
        puStack_160 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1038f9d38(puStack_160,uVar11 + 1,1,puVar3);
        uVar8 = (ulong)puStack_160 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar11 + 1;
      *(undefined ***)(uVar8 + uVar11 * 8 + 0x20) = ppuVar4;
    }
    FUN_1038f7b40(auStack_138);
    func_0x0001007bbff0(&puStack_110);
    lVar14 = lVar9;
  } while( true );
}



/* Entry: 1038f7b40; end: 1038f7b8f;  */

void FUN_1038f7b40(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001038f7b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1038f7b90; end: 1038f7e07;  */

undefined * FUN_1038f7b90(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar10 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar12 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    lVar11 = 0;
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_a0 = lVar2;
    lStack_98 = lVar13;
    do {
      puVar8 = (ulong *)(param_1 + 0x20 + lVar11 * 0x10);
      uStack_88 = *puVar8;
      puVar7 = (undefined *)puVar8[1];
      puVar4 = puVar7;
      puStack_80 = puVar7;
      func_0x000107c61434(puVar7);
      func_0x000107c5eb88(uVar10);
      func_0x000100e8b654();
      uVar5 = uVar10;
      puVar3 = PTR___sSSN_11034da80;
      func_0x000107c601f0(uVar10,PTR___sSSN_11034da80,puVar4);
      (**(code **)(lVar13 + 8))(uVar10,lVar2);
      func_0x000107c6142c(puVar7);
      uVar6 = uVar5;
      puVar7 = puVar3;
      func_0x000107c5fb5c();
      if ((long)uVar6 < 3) {
LAB_1038f7c20:
        func_0x000107c6142c(puVar3);
      }
      else {
        uStack_70 = uVar5 & 0xffffffffffff;
        if (((ulong)puVar3 & 0x2000000000000000) != 0) {
          uStack_70 = (ulong)puVar3 >> 0x38 & 0xf;
        }
        uStack_78 = 0;
        puVar4 = puVar3;
        uStack_88 = uVar5;
        puStack_80 = puVar3;
        func_0x000107c61434();
        do {
          func_0x000107c5fb84();
          puVar9 = puStack_80;
          if (puVar7 == (undefined *)0x0) {
            func_0x000107c6142c(puVar3);
            puVar3 = puVar9;
            goto LAB_1038f7c20;
          }
          puVar9 = puVar7;
          func_0x000107c5fa70();
          func_0x000107c6142c();
          uVar6 = (ulong)puVar4 & 1;
          puVar4 = puVar7;
          puVar7 = puVar9;
        } while (uVar6 != 0);
        func_0x000107c6142c(puStack_80);
        uVar6 = uVar5;
        puVar7 = puVar3;
        func_0x000107c5fb1c();
        func_0x000107c61434(puVar7);
        puVar8 = &uStack_88;
        func_0x000100403b00(puVar8,uVar6,puVar7);
        func_0x000107c6142c(puStack_80);
        if (((ulong)puVar8 & 1) == 0) {
          func_0x000107c6142c(puVar3);
          func_0x000107c6142c(puVar7);
          lVar13 = lStack_98;
        }
        else {
          puVar4 = puStack_90;
          func_0x000107c61558();
          puVar9 = puStack_90;
          if (((ulong)puVar4 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            func_0x0001038f9fa4(0,*(long *)(puStack_90 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(puVar9 + 0x10);
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            func_0x0001038f9fa4(puVar9,uVar1 + 1,1);
          }
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          *(ulong *)(puVar9 + uVar1 * 0x20 + 0x20) = uVar6;
          *(undefined **)(puVar9 + uVar1 * 0x20 + 0x28) = puVar7;
          *(ulong *)(puVar9 + uVar1 * 0x20 + 0x30) = uVar5;
          *(undefined **)(puVar9 + uVar1 * 0x20 + 0x38) = puVar3;
          lVar2 = lStack_a0;
          lVar13 = lStack_98;
          puStack_90 = puVar9;
        }
      }
      lVar11 = lVar11 + 1;
      puVar7 = puStack_90;
    } while (lVar11 != lVar12);
  }
  func_0x000107c6142c(puStack_68);
  return puVar7;
}



/* Entry: 1038f7e08; end: 1038f7e27;  */

void FUN_1038f7e08(void)

{
  func_0x000107c61168(&PTR_PTR_112fad768);
  return;
}



/* Entry: 1038f7e28; end: 1038f838f;  */

undefined1  [16] FUN_1038f7e28(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  undefined1 auVar9 [16];
  undefined1 *puStack_b0;
  undefined1 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *apuStack_80 [4];
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)&puStack_b0;
  iVar3 = (int)&puStack_b0;
  iVar4 = (int)&puStack_b0;
  ppuVar7 = &puStack_b0;
  func_0x0001000bb420(param_1,&puStack_60);
  puVar1 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&puStack_b0,&puStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (iVar2 == 0) {
    func_0x0001000bb420(param_1,&puStack_60);
    uVar5 = 0;
    FUN_1038f8b88(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar8 = &puStack_60;
    func_0x000107c6147c(&puStack_b0,ppuVar8,puVar1 + 8,uVar5,6);
    if (iVar3 == 0) {
      func_0x0001000bb420(param_1,apuStack_80);
      ppuVar8 = apuStack_80;
      func_0x000107c6147c(&puStack_b0,ppuVar8,puVar1 + 8,PTR___ss11AnyHashableVN_11034e448,6);
      if (iVar4 == 0) {
        uStack_90 = 0;
        ppuStack_a8 = (undefined1 **)0x0;
        puStack_b0 = (undefined1 *)0x0;
        uStack_98 = 0;
        uStack_a0 = 0;
        func_0x000100a119cc(&puStack_b0);
        puStack_b0 = (undefined1 *)0x0;
        ppuStack_a8 = (undefined1 **)0x0;
      }
      else {
        ppuStack_58 = ppuStack_a8;
        puStack_60 = puStack_b0;
        uStack_48 = uStack_98;
        uStack_50 = uStack_a0;
        uStack_40 = uStack_90;
        func_0x000107c602cc(&puStack_b0);
        FUN_1038f7e28(&puStack_b0);
        func_0x000100183ab8(&puStack_b0);
        func_0x0001007bbff0(&puStack_60);
        puStack_b0 = (undefined1 *)ppuVar7;
        ppuStack_a8 = ppuVar8;
      }
    }
    else {
      puVar6 = puStack_b0;
      func_0x000107c5faec(puStack_b0);
      func_0x000107c61170(puStack_b0);
      puStack_b0 = puVar6;
      ppuStack_a8 = ppuVar8;
    }
  }
  auVar9._8_8_ = ppuStack_a8;
  auVar9._0_8_ = puStack_b0;
  return auVar9;
}



/* Entry: 1038f8390; end: 1038f8b33;  */

byte * FUN_1038f8390(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uStack_b0;
  ulong uStack_a8;
  byte *pbStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0x2d;
  uStack_68 = 0xe100000000000000;
  puStack_90 = &uStack_70;
  func_0x000107c61434(param_2);
  lVar5 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1038f8b34,&pbStack_a0,param_1,param_2);
  if (*(long *)(lVar5 + 0x10) != 2) goto LAB_1038f85f8;
  pbVar14 = *(byte **)(lVar5 + 0x20);
  uVar9 = *(ulong *)(lVar5 + 0x28);
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  uVar3 = *(undefined8 *)(lVar5 + 0x38);
  func_0x000107c61434(uVar3);
  func_0x000107c5fb2c(pbVar14,uVar9,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  if (*(ulong *)(lVar5 + 0x10) < 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8ab4);
    (*pcVar4)();
  }
  pbVar15 = *(byte **)(lVar5 + 0x40);
  uVar10 = *(ulong *)(lVar5 + 0x48);
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(lVar5);
  func_0x000107c5fb2c(pbVar15,uVar10,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  pbVar17 = pbVar14;
  func_0x000107c5fb5c(pbVar14,uVar9);
  if ((pbVar17 != (byte *)0x4) ||
     (pbVar17 = pbVar15, uVar8 = uVar10, func_0x000107c5fb5c(), pbVar17 != (byte *)0x2)) {
LAB_1038f85ec:
    func_0x000107c6142c(uVar9);
    goto LAB_1038f85f8;
  }
  uVar19 = (ulong)pbVar14 & 0xffffffffffff;
  uVar20 = uVar9 >> 0x38 & 0xf;
  uVar1 = uVar19;
  if ((uVar9 & 0x2000000000000000) != 0) {
    uVar1 = uVar20;
  }
  puStack_90 = (undefined8 *)0x0;
  uVar6 = uVar9;
  pbStack_a0 = pbVar14;
  uStack_98 = uVar9;
  uStack_88 = uVar1;
  func_0x000107c61434();
  do {
    func_0x000107c5fb84();
    if (uVar8 == 0) {
      func_0x000107c6142c(uStack_98);
      uStack_b0 = (ulong)pbVar15 & 0xffffffffffff;
      uStack_a8 = uVar10 >> 0x38 & 0xf;
      uVar6 = uStack_b0;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar6 = uStack_a8;
      }
      puStack_90 = (undefined8 *)0x0;
      uVar7 = uVar10;
      pbStack_a0 = pbVar15;
      uStack_98 = uVar10;
      uStack_88 = uVar6;
      func_0x000107c61434();
      goto LAB_1038f8520;
    }
    uVar11 = uVar8;
    func_0x000107c5fa70();
    func_0x000107c6142c();
    uVar7 = uVar6 & 1;
    uVar6 = uVar8;
    uVar8 = uVar11;
  } while (uVar7 != 0);
  goto LAB_1038f8544;
  while( true ) {
    uVar12 = uVar8;
    func_0x000107c5fa70();
    func_0x000107c6142c();
    uVar11 = uVar7 & 1;
    uVar7 = uVar8;
    uVar8 = uVar12;
    if (uVar11 == 0) break;
LAB_1038f8520:
    func_0x000107c5fb84();
    if (uVar8 == 0) {
      func_0x000107c6142c(uStack_98);
      if (uVar1 == 0) goto LAB_1038f85ec;
      if ((uVar9 >> 0x3c & 1) != 0) {
        uVar8 = uVar9;
        func_0x000100edba6c(pbVar14,uVar9,10);
        uVar18 = (uint)uVar8;
        pbVar17 = pbVar14;
        goto LAB_1038f87ec;
      }
      if ((uVar9 >> 0x3d & 1) != 0) {
        pbStack_a0 = pbVar14;
        uStack_98 = uVar9 & 0xffffffffffffff;
        uVar18 = (uint)pbVar14 & 0xff;
        if (uVar18 == 0x2b) {
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b24);
            (*pcVar4)();
          }
          lVar5 = uVar20 - 1;
          if (lVar5 == 0) goto LAB_1038f87e4;
          pbVar17 = (byte *)0x0;
          pbVar14 = (byte *)((ulong)&pbStack_a0 | 1);
          goto LAB_1038f8710;
        }
        if (uVar18 != 0x2d) {
          if (uVar20 == 0) goto LAB_1038f87e4;
          pbVar17 = (byte *)0x0;
          ppbVar13 = &pbStack_a0;
          goto LAB_1038f87a8;
        }
        if (uVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b1c);
          (*pcVar4)();
        }
        lVar5 = uVar20 - 1;
        if (lVar5 == 0) goto LAB_1038f87e4;
        pbVar17 = (byte *)0x0;
        pbVar14 = (byte *)((ulong)&pbStack_a0 | 1);
        goto LAB_1038f8660;
      }
      if (((ulong)pbVar14 >> 0x3c & 1) == 0) {
        uVar19 = uVar9;
        func_0x000107c60358();
      }
      else {
        pbVar14 = (byte *)((uVar9 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar14 == 0x2b) {
        if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b20);
          (*pcVar4)();
        }
        lVar5 = uVar19 - 1;
        if (lVar5 == 0) goto LAB_1038f87e4;
        pbVar17 = (byte *)0x0;
        goto LAB_1038f86b8;
      }
      if (*pbVar14 != 0x2d) {
        if (uVar19 == 0) goto LAB_1038f87e4;
        pbVar17 = (byte *)0x0;
        if (pbVar14 != (byte *)0x0) goto LAB_1038f875c;
        uVar18 = 0;
        goto LAB_1038f87ec;
      }
      if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b18);
        (*pcVar4)();
      }
      lVar5 = uVar19 - 1;
      if (lVar5 == 0) goto LAB_1038f87e4;
      pbVar17 = (byte *)0x0;
      goto LAB_1038f85b0;
    }
  }
LAB_1038f8544:
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar10);
  goto LAB_1038f85f8;
  while( true ) {
    uVar18 = 0;
    lVar5 = lVar5 + -1;
    pbVar14 = pbVar14 + 1;
    if (lVar5 == 0) break;
LAB_1038f8710:
    if (((9 < *pbVar14 - 0x30) ||
        (lVar16 = (long)pbVar17 * 10,
        SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
       (uVar8 = (ulong)(byte)(*pbVar14 - 0x30), pbVar17 = (byte *)(lVar16 + uVar8),
       SCARRY8(lVar16,uVar8))) goto LAB_1038f87e4;
  }
  goto LAB_1038f87ec;
  while( true ) {
    uVar18 = 0;
    uVar20 = uVar20 - 1;
    ppbVar13 = (byte **)((long)ppbVar13 + 1);
    if (uVar20 == 0) break;
LAB_1038f87a8:
    if (((9 < *(byte *)ppbVar13 - 0x30) ||
        (lVar5 = (long)pbVar17 * 10, SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar5 >> 0x3f
        )) || (uVar8 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30), pbVar17 = (byte *)(lVar5 + uVar8),
              SCARRY8(lVar5,uVar8))) goto LAB_1038f87e4;
  }
  goto LAB_1038f87ec;
  while( true ) {
    uVar18 = 0;
    lVar5 = lVar5 + -1;
    pbVar14 = pbVar14 + 1;
    if (lVar5 == 0) break;
LAB_1038f8660:
    if (((9 < *pbVar14 - 0x30) ||
        (lVar16 = (long)pbVar17 * 10,
        SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
       (uVar8 = (ulong)(byte)(*pbVar14 - 0x30), pbVar17 = (byte *)(lVar16 - uVar8),
       SBORROW8(lVar16,uVar8))) goto LAB_1038f87e4;
  }
  goto LAB_1038f87ec;
  while( true ) {
    uVar18 = 0;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
LAB_1038f86b8:
    pbVar14 = pbVar14 + 1;
    if (((9 < *pbVar14 - 0x30) ||
        (lVar16 = (long)pbVar17 * 10,
        SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
       (uVar8 = (ulong)(byte)(*pbVar14 - 0x30), pbVar17 = (byte *)(lVar16 + uVar8),
       SCARRY8(lVar16,uVar8))) goto LAB_1038f87e4;
  }
  goto LAB_1038f87ec;
  while( true ) {
    uVar18 = 0;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
LAB_1038f85b0:
    pbVar14 = pbVar14 + 1;
    if (((9 < *pbVar14 - 0x30) ||
        (lVar16 = (long)pbVar17 * 10,
        SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
       (uVar8 = (ulong)(byte)(*pbVar14 - 0x30), pbVar17 = (byte *)(lVar16 - uVar8),
       SBORROW8(lVar16,uVar8))) goto LAB_1038f87e4;
  }
  goto LAB_1038f87ec;
LAB_1038f87e4:
  uVar18 = 1;
  pbVar17 = (byte *)0x0;
  goto LAB_1038f87ec;
  while( true ) {
    uVar18 = 0;
    uVar19 = uVar19 - 1;
    pbVar14 = pbVar14 + 1;
    if (uVar19 == 0) break;
LAB_1038f875c:
    if (((9 < *pbVar14 - 0x30) ||
        (lVar5 = (long)pbVar17 * 10, SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar5 >> 0x3f
        )) || (uVar8 = (ulong)(byte)(*pbVar14 - 0x30), pbVar17 = (byte *)(lVar5 + uVar8),
              SCARRY8(lVar5,uVar8))) goto LAB_1038f87e4;
  }
LAB_1038f87ec:
  func_0x000107c6142c(uVar9);
  if (((uVar18 & 0xff) == 1) || (uVar6 == 0)) {
LAB_1038f85f8:
    func_0x000107c6142c();
    return (byte *)0x0;
  }
  if ((uVar10 >> 0x3c & 1) != 0) {
    uVar9 = uVar10;
    func_0x000100edba6c(pbVar15,uVar10,10);
    uVar18 = (uint)uVar9;
    pbVar14 = pbVar15;
    goto LAB_1038f8a70;
  }
  if ((uVar10 >> 0x3d & 1) == 0) {
    if (((ulong)pbVar15 >> 0x3c & 1) == 0) {
      uStack_b0 = uVar10;
      func_0x000107c60358();
    }
    else {
      pbVar15 = (byte *)((uVar10 & 0xfffffffffffffff) + 0x20);
    }
    if (*pbVar15 == 0x2b) {
      if ((long)uStack_b0 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b30);
        (*pcVar4)();
      }
      lVar5 = uStack_b0 - 1;
      if (lVar5 != 0) {
        pbVar14 = (byte *)0x0;
        do {
          pbVar15 = pbVar15 + 1;
          if (((9 < *pbVar15 - 0x30) ||
              (lVar16 = (long)pbVar14 * 10,
              SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
             (uVar9 = (ulong)(byte)(*pbVar15 - 0x30), pbVar14 = (byte *)(lVar16 + uVar9),
             SCARRY8(lVar16,uVar9))) goto LAB_1038f8a68;
          uVar18 = 0;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        goto LAB_1038f8a70;
      }
    }
    else if (*pbVar15 == 0x2d) {
      if ((long)uStack_b0 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b28);
        (*pcVar4)();
      }
      lVar5 = uStack_b0 - 1;
      if (lVar5 != 0) {
        pbVar14 = (byte *)0x0;
        do {
          pbVar15 = pbVar15 + 1;
          if (((9 < *pbVar15 - 0x30) ||
              (lVar16 = (long)pbVar14 * 10,
              SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
             (uVar9 = (ulong)(byte)(*pbVar15 - 0x30), pbVar14 = (byte *)(lVar16 - uVar9),
             SBORROW8(lVar16,uVar9))) goto LAB_1038f8a68;
          uVar18 = 0;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        goto LAB_1038f8a70;
      }
    }
    else if (uStack_b0 != 0) {
      pbVar14 = (byte *)0x0;
      if (pbVar15 == (byte *)0x0) {
        uVar18 = 0;
      }
      else {
        do {
          if (((9 < *pbVar15 - 0x30) ||
              (lVar5 = (long)pbVar14 * 10,
              SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
             (uVar9 = (ulong)(byte)(*pbVar15 - 0x30), pbVar14 = (byte *)(lVar5 + uVar9),
             SCARRY8(lVar5,uVar9))) goto LAB_1038f8a68;
          uVar18 = 0;
          uStack_b0 = uStack_b0 - 1;
          pbVar15 = pbVar15 + 1;
        } while (uStack_b0 != 0);
      }
      goto LAB_1038f8a70;
    }
  }
  else {
    pbStack_a0 = pbVar15;
    uStack_98 = uVar10 & 0xffffffffffffff;
    uVar18 = (uint)pbVar15 & 0xff;
    if (uVar18 == 0x2b) {
      if (uStack_a8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b34);
        (*pcVar4)();
      }
      lVar5 = uStack_a8 - 1;
      if (lVar5 != 0) {
        pbVar14 = (byte *)0x0;
        pbVar15 = (byte *)((ulong)&pbStack_a0 | 1);
        do {
          if (((9 < *pbVar15 - 0x30) ||
              (lVar16 = (long)pbVar14 * 10,
              SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
             (uVar9 = (ulong)(byte)(*pbVar15 - 0x30), pbVar14 = (byte *)(lVar16 + uVar9),
             SCARRY8(lVar16,uVar9))) goto LAB_1038f8a68;
          uVar18 = 0;
          lVar5 = lVar5 + -1;
          pbVar15 = pbVar15 + 1;
        } while (lVar5 != 0);
        goto LAB_1038f8a70;
      }
    }
    else if (uVar18 == 0x2d) {
      if (uStack_a8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1038f8b2c);
        (*pcVar4)();
      }
      lVar5 = uStack_a8 - 1;
      if (lVar5 != 0) {
        pbVar14 = (byte *)0x0;
        pbVar15 = (byte *)((ulong)&pbStack_a0 | 1);
        do {
          if (((9 < *pbVar15 - 0x30) ||
              (lVar16 = (long)pbVar14 * 10,
              SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
             (uVar9 = (ulong)(byte)(*pbVar15 - 0x30), pbVar14 = (byte *)(lVar16 - uVar9),
             SBORROW8(lVar16,uVar9))) goto LAB_1038f8a68;
          uVar18 = 0;
          lVar5 = lVar5 + -1;
          pbVar15 = pbVar15 + 1;
        } while (lVar5 != 0);
        goto LAB_1038f8a70;
      }
    }
    else if (uStack_a8 != 0) {
      pbVar14 = (byte *)0x0;
      ppbVar13 = &pbStack_a0;
      do {
        if (((9 < *(byte *)ppbVar13 - 0x30) ||
            (lVar5 = (long)pbVar14 * 10,
            SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar5 >> 0x3f)) ||
           (uVar9 = (ulong)(byte)(*(byte *)ppbVar13 - 0x30), pbVar14 = (byte *)(lVar5 + uVar9),
           SCARRY8(lVar5,uVar9))) goto LAB_1038f8a68;
        uVar18 = 0;
        uStack_a8 = uStack_a8 - 1;
        ppbVar13 = (byte **)((long)ppbVar13 + 1);
      } while (uStack_a8 != 0);
      goto LAB_1038f8a70;
    }
  }
LAB_1038f8a68:
  uVar18 = 1;
  pbVar14 = (byte *)0x0;
LAB_1038f8a70:
  func_0x000107c6142c(uVar10);
  if (((uVar18 & 0xff) != 1) && (pbVar14 + -1 < (byte *)0xc)) {
    return pbVar17;
  }
  return (byte *)0x0;
}



/* Entry: 1038f8b34; end: 1038f8b87;  */

uint FUN_1038f8b34(long *param_1)

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



/* Entry: 1038f8b88; end: 1038f8c07;  */

void FUN_1038f8b88(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1038f8c08; end: 1038f8c43; -[SCMemoriesFacetSearch initWithMemoriesSearchDatabase:] */

undefined8 FUN_1038f8c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1038f8e74();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1038f8c44; end: 1038f8cd3; -[SCMemoriesFacetSearch suggestionsForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f8c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1038f627c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = 0;
  func_0x000103a763d0(0);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038f8cd4; end: 1038f8d73; -[SCMemoriesFacetSearch refreshCaches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f8cd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = *(long *)(param_1 + _DAT_112fad7c8);
  uVar2 = *(undefined8 *)(lStack_40 + _DAT_112fad808);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112fad7d0;
  func_0x0001000285a8(0x112fad7d0,&UNK_10dc20720);
  func_0x000100075034(&uStack_38,0x1038f913c,auStack_50,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 1038f8d74; end: 1038f8ddb; -[SCMemoriesFacetSearch snapIdsForFacetKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f8d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1038f9150(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038f8ddc; end: 1038f8e3b; -[SCMemoriesFacetSearch init] */

void FUN_1038f8ddc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSemanticSearchServicesImpl.SCMemoriesFacetSearch",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038f8e08);
  (*pcVar1)();
}



/* Entry: 1038f8e3c; end: 1038f8e73; -[SCMemoriesFacetSearch .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f8e3c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fad7c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fad7c8));
  return;
}



/* Entry: 1038f8e74; end: 1038f9103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038f8e74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  undefined8 uVar10;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar11;
  long lStack_a0;
  long lStack_88;
  long lStack_80;
  undefined *apuStack_78 [3];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  func_0x000107c614f0();
  puVar1 = (undefined *)0x0;
  func_0x0001038f16dc();
  puVar2 = puVar1;
  func_0x000107c613fc();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1038fd670();
  apuStack_78[0] = puVar3;
  func_0x0001000285a8(0x112fad800,&UNK_10dc20748);
  func_0x000107c613fc();
  ppuVar4 = apuStack_78;
  func_0x00010006c248();
  *(undefined ***)(puVar2 + 0x10) = ppuVar4;
  ppuStack_58 = &PTR_DAT_1106a9388;
  lVar5 = 0;
  apuStack_78[0] = puVar2;
  puStack_60 = puVar1;
  func_0x0001038f6940();
  func_0x000107c613fc();
  func_0x0001000c6518(apuStack_78,puVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  uVar10 = *puVar11;
  *(undefined **)(lVar5 + 0x28) = puVar1;
  *(undefined ***)(lVar5 + 0x30) = &PTR_DAT_1106a9388;
  *(undefined8 *)(lVar5 + 0x10) = uVar10;
  lVar6 = 0;
  func_0x0001038eef98();
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ad800;
  func_0x000107c610f8();
  func_0x000107c6157c(puVar2);
  func_0x000107c453e4();
  *(undefined **)(lVar6 + 0x10) = puVar3;
  *(long *)(lVar5 + 0x38) = lVar6;
  func_0x0001000834e4(apuStack_78);
  *(long *)(unaff_x20 + _DAT_112fad7c0) = lVar5;
  lVar7 = 0;
  func_0x0001038fa538();
  lVar6 = lVar7;
  func_0x000107c610f8();
  lVar5 = _DAT_112fad808;
  apuStack_78[0] = (undefined *)0x0;
  func_0x0001000285a8(0x112d51758,&UNK_10d97eb40);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  func_0x000107c61174();
  ppuVar4 = apuStack_78;
  func_0x00010006c248();
  *(undefined ***)(lVar6 + lVar5) = ppuVar4;
  *(undefined **)(lVar6 + _DAT_112fad818) = puVar2;
  uVar8 = 0;
  func_0x0001038fc914();
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  func_0x000107c61174();
  uVar10 = param_1;
  FUN_1038fa614();
  puVar11 = (undefined8 *)(lVar6 + _DAT_112fad810);
  puVar11[3] = uVar8;
  puVar11[4] = &PTR_DAT_1106a9570;
  *puVar11 = uVar10;
  puVar9 = (undefined1 *)&stack0xffffffffffffff78;
  lStack_88 = lVar6;
  lStack_80 = lVar7;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  *(undefined1 **)(unaff_x20 + _DAT_112fad7c8) = puVar9;
  puVar9 = &stack0xffffffffffffff68;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61574(puVar2);
  return puVar9;
}



/* Entry: 1038f9104; end: 1038f914f;  */

void FUN_1038f9104(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1038f9834(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038f9150; end: 1038f92ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038f9150(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_90 [16];
  undefined1 uStack_80;
  undefined8 uStack_58;
  
  lVar5 = _DAT_112fad810;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fd9ff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined1 *)(puVar1 + 2);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fad818) + 0x10);
  uStack_80 = 0;
  FUN_1038f9990(uVar2,uVar3,uVar4);
  func_0x000107c6157c(uVar9);
  uVar8 = 0x112fad638;
  func_0x0001000285a8(0x112fad638,&UNK_10dc20900);
  func_0x000100075034(&uStack_58,0x1038f9978,auStack_90,uVar8);
  func_0x000107c61574(uVar9);
  uVar8 = uStack_58;
  FUN_1038fa1cc();
  func_0x000107c6142c(uStack_58);
  puVar6 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_1038fa390(unaff_x20 + lVar5,auStack_90);
  puVar7 = &UNK_1106a94b8;
  func_0x000107c613fc(&UNK_1106a94b8,0x60,7);
  func_0x0001038fa3ec(auStack_90,puVar7 + 0x10);
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  *(undefined8 *)(puVar7 + 0x40) = uVar3;
  puVar7[0x48] = uVar4;
  *(undefined8 *)(puVar7 + 0x50) = uVar8;
  *(undefined **)(puVar7 + 0x58) = puVar6;
  func_0x000107c61174(puVar6);
  uVar8 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dc20758,puVar7,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar8);
  puVar7 = puVar6;
  func_0x000107c43bf4(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  return puVar7;
}



/* Entry: 1038f92f0; end: 1038f9433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f92f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fad808);
  func_0x000107c6157c(uVar3);
  func_0x000100fff654(param_1,param_2);
  uVar2 = 0x112fad7d0;
  func_0x0001000285a8(0x112fad7d0,&UNK_10dc20720);
  func_0x000100075034(&uStack_48,0x1038fa5e4,auStack_60,uVar2);
  func_0x000107c61574(uVar3);
  uVar2 = uStack_48;
  if (param_1 != 0) {
    puVar1 = &UNK_1106a94e0;
    func_0x000107c613fc(&UNK_1106a94e0,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = uStack_48;
    *(long *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    func_0x000100fff654(param_1,param_2);
    func_0x000107c6157c(uStack_48);
    uVar2 = 0x40;
    func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dc20770,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x00010101217c(param_1,param_2);
    func_0x000107c61574(uStack_48);
    func_0x00010101217c(param_1,param_2);
    func_0x000107c61574(puVar1);
  }
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1038f9434; end: 1038f94c7; -[_TtC34MemoriesSemanticSearchServicesImpl34SCMemoriesFacetSearchDatabaseQuery refreshCaches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f9434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fad808);
  lStack_40 = param_1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112fad7d0;
  func_0x0001000285a8(0x112fad7d0,&UNK_10dc20720);
  func_0x000100075034(&uStack_38,0x1038fa5f8,auStack_50,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 1038f94c8; end: 1038f956f;  */

void FUN_1038f94c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1038f9528;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 1038f9570; end: 1038f95d7;  */

void FUN_1038f9570(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038f95d8,uVar1,uVar2);
  return;
}



/* Entry: 1038f95d8; end: 1038f960f;  */

void FUN_1038f95d8(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0001038f960c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038f9610; end: 1038f9697; -[_TtC34MemoriesSemanticSearchServicesImpl34SCMemoriesFacetSearchDatabaseQuery refreshCachesWithCompletion:] */

void FUN_1038f9610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  
  lVar1 = param_3;
  func_0x000107c60bc4();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1106a9508;
    func_0x000107c613fc(&UNK_1106a9508,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    pcVar3 = FUN_1038fa558;
  }
  func_0x000107c61174(param_1);
  FUN_1038f92f0(pcVar3,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_3);
  return;
}



/* Entry: 1038f9698; end: 1038f96bb;  */

void FUN_1038f9698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined1 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038f96bc,0,0);
  return;
}



/* Entry: 1038f96bc; end: 1038f976f;  */

void FUN_1038f96bc(void)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  plVar3 = *(long **)(unaff_x22 + 0x10);
  func_0x0001000a8868(plVar3,plVar3[3]);
  lVar5 = *plVar3;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1038f9720;
  lVar1 = *(long *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x48);
  plVar3[6] = *(long *)(unaff_x22 + 0x28);
  plVar3[7] = lVar5;
  *(undefined1 *)(plVar3 + 0x12) = uVar2;
  plVar3[4] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fb614,0,0);
  return;
}



/* Entry: 1038f9770; end: 1038f97d7;  */

void FUN_1038f9770(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = uVar3;
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar3);
  func_0x000107c3fefc(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001038f97d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038f97d8; end: 1038f9833; -[_TtC34MemoriesSemanticSearchServicesImpl34SCMemoriesFacetSearchDatabaseQuery snapIdsForFacetKey:] */

void FUN_1038f97d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1038f9150(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038f9834; end: 1038f995f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f9834(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  
  lVar1 = _DAT_112fad810;
  lVar2 = *param_2;
  lVar5 = lVar2;
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_3 + _DAT_112fad818);
    puVar3 = &UNK_1106a9530;
    func_0x000107c613fc(&UNK_1106a9530,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    FUN_1038fa390(param_3 + lVar1,auStack_78);
    puVar4 = &UNK_1106a9558;
    func_0x000107c613fc(&UNK_1106a9558,0x48,7);
    func_0x0001038fa3ec(auStack_78,puVar4 + 0x10);
    *(undefined8 *)(puVar4 + 0x38) = uVar6;
    *(undefined **)(puVar4 + 0x40) = puVar3;
    func_0x000107c6157c(uVar6);
    lVar5 = 0x40;
    func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dc207b8,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar4);
    *param_2 = lVar5;
    func_0x000107c6157c(lVar5);
    lVar2 = 0;
  }
  *param_1 = lVar5;
  func_0x000107c6157c(lVar2);
  return;
}



/* Entry: 1038f9960; end: 1038f998f;  */

void FUN_1038f9960(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1038f9834(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1038f9990; end: 1038f99c3;  */

void FUN_1038f9990(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1038f99c4; end: 1038f9a67;  */

void FUN_1038f99c4(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  plVar1 = *(long **)(unaff_x22 + 0x40);
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar2 = *plVar1;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1038f9a18;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038fa834,0,0);
  return;
}


