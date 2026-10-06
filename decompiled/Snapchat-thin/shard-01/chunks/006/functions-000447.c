/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10133b980; end: 10133b99f; -[SCShoppingPreviewShoppingLinkImplEntryPoint init] */

void FUN_10133b980(void)

{
  FUN_10133b8a8();
  return;
}



/* Entry: 10133b9a0; end: 10133b9d3;  */

void FUN_10133b9a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10133b9d4; end: 10133ba6b; -[SCShoppingPreviewShoppingLinkImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133b9d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d74680);
  func_0x000107c61610(param_1 + _DAT_112d74688);
  func_0x000107c61610(param_1 + _DAT_112d74690);
  func_0x000107c61610(param_1 + _DAT_112d74698);
  func_0x000107c61610(param_1 + _DAT_112d746a0);
  func_0x000107c61610(param_1 + _DAT_112d746a8);
  func_0x000107c61610(param_1 + _DAT_112d746b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d746b8));
  return;
}



/* Entry: 10133ba6c; end: 10133ba8b;  */

void FUN_10133ba6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9768);
  return;
}



/* Entry: 10133ba8c; end: 10133bb23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133ba8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d746e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10133bb24; end: 10133bb83; -[SCShoppingPreviewControllerServices init] */

void FUN_10133bb24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingPreviewControllerServices.ShoppingPreviewControllerServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10133bb50);
  (*pcVar1)();
}



/* Entry: 10133bb84; end: 10133bb93; -[SCShoppingPreviewControllerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133bb84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d746e8));
  return;
}



/* Entry: 10133bb94; end: 10133bbb3;  */

void FUN_10133bb94(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9858);
  return;
}



/* Entry: 10133bbb4; end: 10133bc8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133bbb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  code *pcVar9;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1137ff3b8);
  bVar8 = *(byte *)(puVar1 + 6);
  if (-1 < (char)bVar8) {
    uVar2 = puVar1[4];
    uVar5 = puVar1[5];
    uVar3 = puVar1[2];
    uVar6 = puVar1[3];
    uVar4 = *puVar1;
    uVar7 = puVar1[1];
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar6);
    func_0x00010006c00c(uVar2,uVar5);
    *param_1 = uVar4;
    param_1[1] = uVar7;
    param_1[2] = uVar3;
    param_1[3] = uVar6;
    param_1[4] = uVar2;
    param_1[5] = uVar5;
    *(byte *)(param_1 + 6) = bVar8 & 1;
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000030,0x800000010ef37a80,
                      "ShoppingPreviewControllerServices/ShoppingPreviewLensProduct.swift",0x42,2,
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10133bc90);
  (*pcVar9)();
}



/* Entry: 10133bc90; end: 10133bd73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10133bc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  lVar2 = _DAT_1137ff3a8;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(unaff_x20 + lVar2,param_8,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_1137ff3b0) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1137ff3b8);
  uVar4 = *param_10;
  uVar6 = param_10[3];
  uVar5 = param_10[2];
  puVar1[1] = param_10[1];
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar4 = param_10[4];
  puVar1[5] = param_10[5];
  puVar1[4] = uVar4;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_10 + 6);
  return unaff_x20;
}



/* Entry: 10133bd74; end: 10133be07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133bd74(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = _DAT_1137ff3a8;
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar2,lVar3);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_1137ff3b0));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1137ff3b8);
  FUN_101338fd4(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],
                *(undefined1 *)(puVar1 + 6));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10133be08; end: 10133be17;  */

/* WARNING: Possible PIC construction at 0x00010133c02c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010133c030) */
/* WARNING: Removing unreachable block (ram,0x00010133c040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10133be08(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        return 0;
      }
    }
    else {
      if (lVar5 == 0) {
        return 0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(param_2 + 0x18);
      if (lVar7 != lVar4 || lVar6 != lVar5) goto code_r0x000107c605b8;
    }
    uVar3 = *(ulong *)(param_1 + 0x28);
    if ((uVar3 == *(ulong *)(param_2 + 0x28) &&
         *(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30)) ||
       (func_0x000107c605b8(uVar3,*(long *)(param_1 + 0x30),*(ulong *)(param_2 + 0x28),
                            *(long *)(param_2 + 0x30),0), (uVar3 & 1) != 0)) {
      plVar1 = (long *)(param_1 + _DAT_1137ff3b8);
      plVar2 = (long *)(param_2 + _DAT_1137ff3b8);
      lVar7 = *plVar1;
      lVar6 = plVar1[1];
      lVar4 = *plVar2;
      lVar5 = plVar2[1];
      if ((char)plVar1[6] < '\0') {
        if (-1 < (char)plVar2[6]) {
          return 0;
        }
      }
      else if ((char)plVar2[6] < '\0') {
        return 0;
      }
      if (lVar7 == lVar4 && lVar6 == lVar5) {
        return 1;
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar7,lVar6,lVar4,lVar5,0);
      return lVar7;
    }
  }
  return 0;
}



/* Entry: 10133be18; end: 10133bfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10133be18(void)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x3b);
  uVar4 = uStack_68;
  uVar3 = uStack_70;
  func_0x000107c5fb78(0x746375646f72707b,0xec000000203a6449);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x4965726f7473202c,0xeb00000000203a64);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x20));
  uVar6 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5fb18(&uStack_70,uVar6);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x6e69616d6f64202c,0xea0000000000203a);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  uVar6 = 0x800000010ef37cb0;
  func_0x000107c5fb78(0xd000000000000011,0x800000010ef37cb0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1137ff3b8);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  uStack_48 = puVar1[5];
  uStack_50 = puVar1[4];
  uStack_40 = *(undefined1 *)(puVar1 + 6);
  FUN_10133c50c();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x7d,0xe100000000000000);
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = uVar3;
  return auVar2;
}



/* Entry: 10133bfb8; end: 10133c0e3;  */

void FUN_10133bfb8(void)

{
  FUN_10133be18();
  return;
}



/* Entry: 10133c0e4; end: 10133c0eb;  */

void FUN_10133c0e4(void)

{
  if (lRam0000000112d74740 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e62f3dc);
  return;
}



/* Entry: 10133c0ec; end: 10133c123;  */

void FUN_10133c0ec(undefined8 param_1)

{
  if (lRam0000000112d74740 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62f3dc);
  return;
}



/* Entry: 10133c124; end: 10133c1cb;  */

void FUN_10133c124(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_50 = &UNK_10d934ca8;
  puStack_48 = &UNK_10d934cc0;
  puStack_40 = &UNK_10d934cc0;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBOWV_11034d658 + 0x40;
    puStack_28 = &UNK_10d934cd8;
    func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 10133c1cc; end: 10133c1fb;  */

long FUN_10133c1cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 10133c1fc; end: 10133c2b3;  */

undefined1  [16] FUN_10133c1fc(void)

{
  undefined1 auVar1 [16];
  undefined8 *unaff_x20;
  
  func_0x000107c5fb78(*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb78(0x7d,0xe100000000000000);
  auVar1._8_8_ = 0xe900000000000020;
  auVar1._0_8_ = 0x3a6449736e656c7b;
  return auVar1;
}



/* Entry: 10133c2b4; end: 10133c31f;  */

undefined8 * FUN_10133c2b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10133c320; end: 10133c3af;  */

undefined8 * FUN_10133c320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10133c3b0; end: 10133c40b;  */

undefined8 * FUN_10133c3b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 10133c40c; end: 10133c4b3;  */

int FUN_10133c40c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10133c4b4; end: 10133c50b;  */

uint FUN_10133c4b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_10133c5dc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10133c50c; end: 10133c5db;  */

undefined1  [16] FUN_10133c50c(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(unaff_x20 + 6) < '\0') {
    uVar2 = 0x72656b636974737b;
    uStack_30 = 0x72656b636974737b;
    uStack_28 = 0xea0000000000203a;
    uVar3 = 0xec000000203a6449;
  }
  else {
    uStack_30 = 0x203a736e656c7b;
    uStack_28 = 0xe700000000000000;
    uVar2 = 0x3a6449736e656c7b;
    uVar3 = 0xe900000000000020;
  }
  func_0x000107c5fb78(*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb78(0x7d,0xe100000000000000);
  func_0x000107c5fb78(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x7d,0xe100000000000000);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 10133c5dc; end: 10133c637;  */

undefined1  [16] FUN_10133c5dc(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(unaff_x20 + 6) < '\0') {
    uVar2 = 0x72656b636974737b;
    uStack_30 = 0x72656b636974737b;
    uStack_28 = 0xea0000000000203a;
    uVar3 = 0xec000000203a6449;
  }
  else {
    uStack_30 = 0x203a736e656c7b;
    uStack_28 = 0xe700000000000000;
    uVar2 = 0x3a6449736e656c7b;
    uVar3 = 0xe900000000000020;
  }
  func_0x000107c5fb78(*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb78(0x7d,0xe100000000000000);
  func_0x000107c5fb78(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x7d,0xe100000000000000);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 10133c638; end: 10133c663;  */

long FUN_10133c638(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10133c664; end: 10133c6af;  */

/* WARNING: Possible PIC construction at 0x00010133c688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010133c68c) */
/* WARNING: Removing unreachable block (ram,0x00010006c00c) */
/* WARNING: Removing unreachable block (ram,0x00010006c018) */
/* WARNING: Removing unreachable block (ram,0x00010006c048) */
/* WARNING: Removing unreachable block (ram,0x00010006c020) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010006c040) */
/* WARNING: Removing unreachable block (ram,0x000107c6157c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0428) */

void FUN_10133c664(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10133c6b0; end: 10133c6c7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10133c6b0(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = param_1[3];
  uVar4 = param_1[4];
  uVar2 = param_1[5];
  cVar3 = *(char *)(param_1 + 6);
  func_0x000107c6142c(*param_1,param_1[1],param_1[1],param_1[2]);
  if (cVar3 < '\0') {
    return;
  }
  func_0x000107c6142c(uVar1);
  uVar5 = (uint)(uVar2 >> 0x3e);
  if (uVar5 == 1) {
    uVar4 = uVar2 & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4);
  return;
}



/* Entry: 10133c6c8; end: 10133c7cb;  */

undefined8 * FUN_10133c6c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_10133c664(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 10133c7cc; end: 10133c81f;  */

undefined8 * FUN_10133c7cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_101338fd4(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 10133c820; end: 10133c96f;  */

int FUN_10133c820(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x1ff;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0xc) >> 7) |
          ((uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x3c) & 3 |
          (*(byte *)(param_1 + 0xc) >> 1 & 0x3f) << 2) << 1) ^ 0x1ff;
  if (0x1fd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10133c970; end: 10133c9cf;  */

undefined1  [16] FUN_10133c970(void)

{
  undefined1 auVar1 [16];
  undefined8 *unaff_x20;
  
  func_0x000107c5fb78(*unaff_x20,unaff_x20[1]);
  func_0x000107c5fb78(0x7d,0xe100000000000000);
  auVar1._8_8_ = 0xec000000203a6449;
  auVar1._0_8_ = 0x72656b636974737b;
  return auVar1;
}



/* Entry: 10133c9d0; end: 10133c9d7;  */

void FUN_10133c9d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10133c9d8; end: 10133ca47;  */

undefined8 * FUN_10133c9d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10133ca48; end: 10133cae3;  */

int FUN_10133ca48(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10133cae4; end: 10133cb5b;  */

void FUN_10133cae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  uVar1 = *param_6;
  uVar3 = param_6[3];
  uVar2 = param_6[2];
  *(undefined8 *)(unaff_x20 + 0x40) = param_6[1];
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x58) = *(undefined1 *)(param_6 + 4);
  return;
}



/* Entry: 10133cb5c; end: 10133cb97;  */

undefined8 FUN_10133cb5c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x10133ccf4)(param_2,param_1);
  return param_2;
}



/* Entry: 10133cb98; end: 10133cbd3;  */

void FUN_10133cb98(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_101333498(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined1 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10133cbd4; end: 10133cc23;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10133cbd4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  
  func_0x000107c61434(param_2);
  if ((param_5 >> 7 & 1) != 0) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 10133cc24; end: 10133cc43;  */

void FUN_10133cc24(void)

{
  func_0x000107c61168(&PTR_PTR_112d74838);
  return;
}



/* Entry: 10133cc44; end: 10133cc4f;  */

undefined8 FUN_10133cc44(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + 0x10);
}



/* Entry: 10133cc50; end: 10133ccaf;  */

undefined1  [16] FUN_10133cc50(void)

{
  undefined1 auVar1 [16];
  long *unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(*unaff_x20 + 0x18);
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10133ccb0; end: 10133ccdf;  */

undefined8 FUN_10133ccb0(undefined8 param_1)

{
  long *unaff_x20;
  
  (*(code *)(undefined *)0x10133ccf4)(param_1,*unaff_x20 + 0x38);
  return param_1;
}



/* Entry: 10133cce0; end: 10133d32f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10133cce0(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  cVar2 = *(char *)(param_1 + 4);
  func_0x000107c6142c(*param_1,param_1[1]);
  if (cVar2 < '\0') {
    return;
  }
  uVar4 = (uint)(uVar1 >> 0x3e);
  if (uVar4 == 1) {
    uVar3 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 10133d330; end: 10133d367;  */

void FUN_10133d330(undefined8 param_1)

{
  if (lRam0000000112d74908 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62f570);
  return;
}



/* Entry: 10133d368; end: 10133d36f;  */

void FUN_10133d368(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*unaff_x20);
  return;
}



/* Entry: 10133d370; end: 10133d4fb;  */

long * FUN_10133d370(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar8 = *param_2;
  *param_1 = lVar8;
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar11 = (long)*(int *)(param_3 + 0x14);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar9 = *(long *)(lVar6 + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    func_0x000107c6157c(lVar8);
    lVar8 = (long)param_2 + lVar11;
    (*pcVar10)(lVar8,1,lVar6);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
    }
    else {
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                          *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(param_3 + 0x18);
    lVar8 = (long)param_2 + lVar11;
    (*pcVar10)(lVar8,1,lVar6);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
    }
    else {
      lVar8 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                          *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x20);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
  }
  else {
    uVar7 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar8);
  }
  return param_1;
}



/* Entry: 10133d4fc; end: 10133d5a3;  */

void FUN_10133d4fc(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  func_0x000107c61574(*param_1);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = (long)param_1 + (long)iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,lVar2);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar3 = (long)param_1 + (long)iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x20) + 8));
  return;
}



/* Entry: 10133d5a4; end: 10133dc53;  */

undefined8 * FUN_10133d5a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  uVar5 = *param_2;
  *param_1 = uVar5;
  lVar8 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  func_0x000107c6157c(uVar5);
  lVar4 = (long)param_2 + lVar8;
  (*pcVar7)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x18);
  lVar4 = (long)param_2 + lVar8;
  (*pcVar7)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar2);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar2);
  uVar5 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10133dc54; end: 10133dc6b;  */

void FUN_10133dc54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10133dc6c; end: 10133dcfb;  */

void FUN_10133dc6c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10d934fe0;
    lStack_38 = lStack_40;
    func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 10133dcfc; end: 10133dd13;  */

void FUN_10133dcfc(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*unaff_x20);
  return;
}



/* Entry: 10133dd14; end: 10133df4b;  */

long FUN_10133dd14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10133df4c; end: 10133df5f;  */

bool FUN_10133df4c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10133df60; end: 10133e00b;  */

void FUN_10133df60(void)

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



/* Entry: 10133e00c; end: 10133e043;  */

void FUN_10133e00c(undefined8 param_1)

{
  if (lRam0000000112d749b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62f610);
  return;
}



/* Entry: 10133e044; end: 10133e047;  */

void FUN_10133e044(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d74950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9350d0;
  func_0x000107c61520(&UNK_10d9350d0,&UNK_1103a4fe8);
  puRam0000000112d74950 = puVar1;
  return;
}



/* Entry: 10133e048; end: 10133e087;  */

void FUN_10133e048(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d74950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9350d0;
  func_0x000107c61520(&UNK_10d9350d0,&UNK_1103a4fe8);
  puRam0000000112d74950 = puVar1;
  return;
}



/* Entry: 10133e088; end: 10133e08f;  */

void FUN_10133e088(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*unaff_x20);
  return;
}



/* Entry: 10133e090; end: 10133e13b;  */

long * FUN_10133e090(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c6157c(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar5);
  }
  return param_1;
}



/* Entry: 10133e13c; end: 10133e17f;  */

void FUN_10133e13c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c61574(*param_1);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x00010133e17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 10133e180; end: 10133e203;  */

undefined8 * FUN_10133e180(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  func_0x000107c6157c(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Entry: 10133e204; end: 10133e353;  */

undefined8 * FUN_10133e204(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar3);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Entry: 10133e354; end: 10133e36b;  */

void FUN_10133e354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10133e36c; end: 10133e3eb;  */

void FUN_10133e36c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d935180;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 10133e3ec; end: 10133e54f;  */

int FUN_10133e3ec(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10133e468;
        goto LAB_10133e44c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10133e44c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10133e468:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10133e550; end: 10133e5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e550(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d749f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10133e5e8; end: 10133e647; -[_TtC34ShoppingPreviewProductLinkServices34ShoppingPreviewProductLinkServices init] */

void FUN_10133e5e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingPreviewProductLinkServices.ShoppingPreviewProductLinkServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10133e614);
  (*pcVar1)();
}



/* Entry: 10133e648; end: 10133e657; -[_TtC34ShoppingPreviewProductLinkServices34ShoppingPreviewProductLinkServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d749f0));
  return;
}



/* Entry: 10133e658; end: 10133e677;  */

void FUN_10133e658(void)

{
  func_0x000107c61168(&PTR_PTR_1127c9968);
  return;
}



/* Entry: 10133e678; end: 10133e6cb; -[_TtCC16SCSnapEditorImpl18SnapDocNativeUtils15ThumbnailResult thumbnailData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e678(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112d74a90);
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



/* Entry: 10133e6cc; end: 10133e717; -[_TtCC16SCSnapEditorImpl18SnapDocNativeUtils15ThumbnailResult setThumbnailData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e6cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___s10Foundation4DataVN_110350ae0);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d74a90);
  *(long *)(param_1 + _DAT_112d74a90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10133e718; end: 10133e773; -[_TtCC16SCSnapEditorImpl18SnapDocNativeUtils15ThumbnailResult error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e718(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d74a98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d74a98);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10133e774; end: 10133e7bf; -[_TtCC16SCSnapEditorImpl18SnapDocNativeUtils15ThumbnailResult setError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e774(long param_1,long param_2,long param_3)

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
  plVar1 = (long *)(param_1 + _DAT_112d74a98);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 10133e7c0; end: 10133e7eb; -[_TtCC16SCSnapEditorImpl18SnapDocNativeUtils15ThumbnailResult init] */

void FUN_10133e7c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapEditorImpl.ThumbnailResult",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10133e7ec);
  (*pcVar1)();
}



/* Entry: 10133e7ec; end: 10133e7f7;  */

void FUN_10133e7ec(void)

{
  (*(code *)0x10134164c)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10133e7f8; end: 10133e833; -[_TtCC16SCSnapEditorImpl18SnapDocNativeUtils15ThumbnailResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010133e814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010133e818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e7f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d74a90));
  return;
}



/* Entry: 10133e834; end: 10133f183;  */

/* WARNING: Removing unreachable block (ram,0x00010133ee60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10133e834(long ******param_1,double param_2,long param_3,undefined8 param_4,ulong param_5,
                  long *******param_6,long *******param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long lVar6;
  undefined *puVar7;
  long ******pppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 uVar19;
  long *******ppppppplVar20;
  long lVar21;
  long ******pppppplVar22;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
  long ******pppppplStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_d0;
  long ******pppppplStack_b0;
  long ******pppppplStack_a8;
  undefined1 auStack_a0 [32];
  
  pppppplVar10 = param_1;
  func_0x000107c61428(param_3 + 0x10,auStack_a0,0,0);
  ppppppplVar3 = (long *******)(param_3 + 0x10);
  func_0x000107c61618();
  if (ppppppplVar3 == (long *******)0x0) {
    func_0x00010134164c();
    ppppppplVar5 = ppppppplVar3;
    func_0x000107c610f8();
    *(undefined8 *)((long)ppppppplVar5 + _DAT_112d74a90) = 0;
    puVar1 = (undefined8 *)((long)ppppppplVar5 + _DAT_112d74a98);
    *puVar1 = 0xd000000000000019;
    puVar1[1] = 0x800000010ef37e80;
    ppppppplVar4 = &pppppplStack_b0;
    pppppplStack_b0 = (long ******)ppppppplVar5;
    pppppplStack_a8 = (long ******)ppppppplVar3;
    func_0x000107c61154(ppppppplVar4,PTR_s_init_1125d9248);
    func_0x000107c4d664(param_4);
LAB_10133ecb0:
    func_0x000107c61170(ppppppplVar4);
    return;
  }
  if ((param_5 & 1) == 0) {
    ppppppplVar4 = ppppppplVar3;
    func_0x0001000298f0();
    func_0x000107c61428();
    pppppplVar10 = *ppppppplVar4;
    func_0x000107c61174(pppppplVar10);
    uVar17 = 0xd000000000000031;
    func_0x0001000a9a18(0xd000000000000031,0x800000010ef37ea0);
    func_0x000107c61170(pppppplVar10);
    lVar18 = *(long *)((long)ppppppplVar3 + _DAT_112d74a28);
    func_0x000107c5b1d4();
    func_0x000107c61180();
    lVar6 = lVar18;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar18);
    if (lVar6 == 0) {
      func_0x000107c61428(ppppppplVar4,&pppppplStack_108,0,0);
      pppppplVar8 = *ppppppplVar4;
      func_0x000107c61174();
      func_0x0001000aa0a8(uVar17);
      func_0x000107c61170();
      func_0x00010134164c();
      pppppplVar9 = pppppplVar8;
      func_0x000107c610f8();
      *(undefined8 *)((long)pppppplVar9 + _DAT_112d74a90) = 0;
      puVar1 = (undefined8 *)((long)pppppplVar9 + _DAT_112d74a98);
      *puVar1 = 0xd000000000000015;
      puVar1[1] = 0x800000010ef37ee0;
      pppppplVar10 = &ppppplStack_d8;
      ppppplStack_d8 = (long *****)pppppplVar9;
      ppppplStack_d0 = (long *****)pppppplVar8;
      func_0x000107c61154(pppppplVar10,PTR_s_init_1125d9248);
      func_0x000107c4d664(param_4);
      func_0x000107c61170(pppppplVar10);
      ppppppplVar4 = ppppppplVar3;
    }
    else {
      uVar14 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      ppppppplVar4 = (long *******)PTR_PTR_1126a6b08;
      func_0x000107c610f8(PTR_PTR_1126a6b08);
      func_0x000107c5fc48(uVar14,PTR___sSSN_11034da80);
      func_0x000107c47648(0x4041000000000000,0x4008000000000000,0x408f400000000000,ppppppplVar4);
      func_0x000107c61170(uVar14);
      puVar7 = &UNK_1103a5288;
      func_0x000107c613fc(&UNK_1103a5288,0x38,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar17;
      *(long ********)(puVar7 + 0x18) = ppppppplVar3;
      *(long *******)(puVar7 + 0x20) = param_1;
      *(double *)(puVar7 + 0x28) = param_2;
      *(undefined8 *)(puVar7 + 0x30) = param_4;
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_e8 = (code *)0x1013439f0;
      pppppplStack_108 = (long ******)PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0x42000000;
      pcStack_f8 = (code *)0x101341328;
      puStack_f0 = &UNK_1103a52a0;
      ppppppplVar5 = &pppppplStack_108;
      puStack_e0 = puVar7;
      func_0x000107c60bc4(ppppppplVar5);
      puVar7 = puStack_e0;
      func_0x000107c61174();
      func_0x000107c61174(ppppppplVar3);
      func_0x000107c61574(puVar7);
      puVar7 = &UNK_1103a52d8;
      func_0x000107c613fc(&UNK_1103a52d8,0x18,7);
      *(undefined8 *)(puVar7 + 0x10) = param_4;
      pcStack_e8 = FUN_101343a00;
      pppppplStack_108 = (long ******)puVar11;
      uStack_100 = 0x42000000;
      pcStack_f8 = FUN_100c75f50;
      puStack_f0 = &UNK_1103a52f0;
      ppppppplVar20 = &pppppplStack_108;
      puStack_e0 = puVar7;
      func_0x000107c60bc4(ppppppplVar20);
      puVar7 = puStack_e0;
      func_0x000107c61174(param_4);
      func_0x000107c61574(puVar7);
      func_0x000107c507b8(lVar6);
      func_0x000107c61170(ppppppplVar3);
      func_0x000107c60bd0(ppppppplVar20);
      func_0x000107c60bd0(ppppppplVar5);
      func_0x000107c615e8(lVar6);
    }
    goto LAB_10133ecb0;
  }
  ppppppplVar4 = ppppppplVar3;
  if (param_6 == (long *******)0x0) {
    if (param_7 == (long *******)0x0) {
      uVar19 = 0;
      param_7 = (long *******)0x1;
    }
    else {
      func_0x000107c49820();
      uVar19 = 0;
      ppppppplVar4 = param_7;
    }
  }
  else {
    if ((ulong)param_6 >> 0x3e == 0) {
      ppppppplVar5 = (long *******)((long *******)((ulong)param_6 & 0xffffffffffffff8))[2];
    }
    else {
      ppppppplVar4 = param_6;
      if (-1 < (long)param_6) {
        ppppppplVar4 = (long *******)((ulong)param_6 & 0xffffffffffffff8);
      }
      func_0x000107c60480();
      ppppppplVar5 = ppppppplVar4;
    }
    param_7 = (long *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (ppppppplVar5 != (long *******)0x0) {
      pppppplStack_108 = (long ******)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x00010134166c(0,(ulong)ppppppplVar5 & ((long)ppppppplVar5 >> 0x3f ^ 0xffffffffffffffffU)
                          ,0);
      if ((long)ppppppplVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10133f180);
        (*pcVar2)();
      }
      if (((ulong)param_6 & 0xc000000000000001) == 0) {
        ppppppplVar20 = param_6 + 4;
        do {
          pppppplVar8 = pppppplStack_108;
          ppppppplVar4 = (long *******)*ppppppplVar20;
          func_0x000107c4223c();
          pppppplVar9 = (long ******)pppppplVar8[2];
          pppppplStack_108 = pppppplVar8;
          if ((long ******)((ulong)pppppplVar8[3] >> 1) <= pppppplVar9) {
            ppppppplVar4 = (long *******)(ulong)((long ******)0x1 < pppppplVar8[3]);
            func_0x00010134166c(ppppppplVar4,(long ******)((long)pppppplVar9 + 1U),1);
          }
          pppppplStack_108[2] = (long *****)((long)pppppplVar9 + 1U);
          pppppplStack_108[(long)pppppplVar9 + 4] = (long *****)pppppplVar10;
          ppppppplVar5 = (long *******)((long)ppppppplVar5 + -1);
          ppppppplVar20 = ppppppplVar20 + 1;
          param_7 = (long *******)pppppplStack_108;
        } while (ppppppplVar5 != (long *******)0x0);
      }
      else {
        ppppppplVar20 = (long *******)0x0;
        do {
          pppppplVar8 = pppppplStack_108;
          ppppppplVar4 = ppppppplVar20;
          func_0x0001002ec9a0(ppppppplVar20,param_6);
          func_0x000107c4223c();
          pppppplVar22 = pppppplVar10;
          func_0x000107c615e8();
          pppppplVar9 = (long ******)pppppplVar8[2];
          pppppplStack_108 = pppppplVar8;
          if ((long ******)((ulong)pppppplVar8[3] >> 1) <= pppppplVar9) {
            ppppppplVar4 = (long *******)(ulong)((long ******)0x1 < pppppplVar8[3]);
            func_0x00010134166c(ppppppplVar4,(long ******)((long)pppppplVar9 + 1U),1);
          }
          ppppppplVar20 = (long *******)((long)ppppppplVar20 + 1);
          pppppplStack_108[2] = (long *****)((long)pppppplVar9 + 1U);
          pppppplStack_108[(long)pppppplVar9 + 4] = (long *****)pppppplVar10;
          param_7 = (long *******)pppppplStack_108;
          pppppplVar10 = pppppplVar22;
        } while (ppppppplVar5 != ppppppplVar20);
      }
    }
    uVar19 = 1;
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  pppppplVar10 = *ppppppplVar4;
  func_0x000107c61174(pppppplVar10);
  uVar17 = 0xd000000000000031;
  func_0x0001000a9a18(0xd000000000000031,0x800000010ef37f00);
  func_0x000107c61170(pppppplVar10);
  lVar21 = *(long *)((long)ppppppplVar3 + _DAT_112d74a30);
  puVar7 = &UNK_1103a5328;
  func_0x000107c613fc(&UNK_1103a5328,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar17;
  *(undefined8 *)(puVar7 + 0x18) = param_4;
  puVar11 = &UNK_1103a5350;
  uVar17 = 0x18;
  func_0x000107c613fc(&UNK_1103a5350,0x18,7);
  *(undefined8 *)(puVar11 + 0x10) = param_4;
  lVar18 = *(long *)(lVar21 + _DAT_112d74d90);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c5de24();
  func_0x000107c61180();
  lVar6 = lVar18;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar6 == 0) {
    func_0x00010134164c();
    lVar6 = lVar18;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112d74a90) = 0;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112d74a98);
    *puVar1 = 0xd000000000000019;
    puVar1[1] = 0x800000010ef37f40;
    plVar13 = &lStack_118;
    lStack_118 = lVar6;
    lStack_110 = lVar18;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    func_0x000107c4d664(param_4);
    func_0x000107c61170(ppppppplVar3);
  }
  else {
    func_0x000107c3eea8();
    func_0x000107c61180();
    lVar18 = param_8;
    func_0x000107c5ee30();
    func_0x000107c61170(param_8);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar12 = lVar18;
    FUN_1010282b0(lVar18,uVar17);
    func_0x00010006c090(lVar18,uVar17);
    if (lVar12 != 0) {
      uVar14 = *(undefined8 *)(lVar21 + _DAT_112d74d98);
      func_0x000107c42d48();
      func_0x000107c61180();
      uVar17 = uVar14;
      func_0x000107c42428();
      func_0x000107c61180();
      func_0x000107c615e8(uVar14);
      puVar15 = PTR_PTR_1126bcf20;
      func_0x000107c610f8(PTR_PTR_1126bcf20);
      func_0x000107c453e4();
      func_0x000107c2bb50();
      if (param_9 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10133f184);
        (*pcVar2)();
      }
      func_0x000107c56438(puVar15);
      uVar14 = uVar17;
      func_0x000107c4ca6c();
      func_0x000107c61180();
      puVar16 = &UNK_1103a5378;
      func_0x000107c613fc(&UNK_1103a5378,0x58,7);
      *(undefined8 *)(puVar16 + 0x10) = 0x101343b48;
      *(undefined **)(puVar16 + 0x18) = puVar11;
      *(long *)(puVar16 + 0x20) = (long)(double)param_1;
      *(long *)(puVar16 + 0x28) = (long)param_2;
      *(long ********)(puVar16 + 0x30) = param_7;
      puVar16[0x38] = uVar19;
      *(long *)(puVar16 + 0x40) = lVar6;
      *(undefined8 *)(puVar16 + 0x48) = 0x101343a18;
      *(undefined **)(puVar16 + 0x50) = puVar7;
      pcStack_e8 = FUN_101343a34;
      pppppplStack_108 = (long ******)PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0x42000000;
      pcStack_f8 = (code *)0x10102ec58;
      puStack_f0 = &UNK_1103a5390;
      ppppppplVar4 = &pppppplStack_108;
      puStack_e0 = puVar16;
      func_0x000107c60bc4(ppppppplVar4);
      puVar16 = puStack_e0;
      func_0x000107c6157c(puVar11);
      FUN_101343a6c(param_7,uVar19);
      func_0x000107c615f0(lVar6);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar16);
      func_0x000107c5dc68(uVar14);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar11);
      func_0x000107c60bd0(ppppppplVar4);
      func_0x000107c61170(ppppppplVar3);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(lVar12);
      func_0x000107c615e8(uVar17);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(uVar14);
      goto LAB_10133ef78;
    }
    func_0x00010134164c();
    lVar21 = lVar18;
    func_0x000107c610f8();
    *(undefined8 *)(lVar21 + _DAT_112d74a90) = 0;
    puVar1 = (undefined8 *)(lVar21 + _DAT_112d74a98);
    *puVar1 = 0xd00000000000002d;
    puVar1[1] = 0x800000010ef37f60;
    plVar13 = &lStack_130;
    lStack_130 = lVar21;
    lStack_128 = lVar18;
    func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
    func_0x000107c4d664(param_4);
    func_0x000107c61170(ppppppplVar3);
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar11);
  func_0x000107c61170(plVar13);
LAB_10133ef78:
  func_0x000101343a20(param_7,uVar19);
  return;
}



/* Entry: 10133f184; end: 10133f2a3; -[_TtC16SCSnapEditorImpl18SnapDocNativeUtils loadThumbnailsForMediaFromNativeSnapDocWithSnapDoc:mediaId:width:height:isVideo:thumbnailCount:thumbnailMsTimestamps:preciseFrame:] */

void FUN_10133f184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_9 != 0) {
    uVar1 = 0;
    FUN_101343a80(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5fc54(param_9,uVar1);
  }
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_8;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_3);
  uVar2 = param_5;
  FUN_1013432ec(param_1,param_2,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10133f2a4; end: 10133ffab;  */

/* WARNING: Possible PIC construction at 0x00010133f3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fe5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fe88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133ff48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101340040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101340050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fa1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133f918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133ff08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133ff1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133ff30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010133fae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010133fad8) */
/* WARNING: Removing unreachable block (ram,0x00010133fbfc) */
/* WARNING: Removing unreachable block (ram,0x00010133fbe8) */
/* WARNING: Removing unreachable block (ram,0x00010133fbd4) */
/* WARNING: Removing unreachable block (ram,0x00010133fb78) */
/* WARNING: Removing unreachable block (ram,0x00010133fb64) */
/* WARNING: Removing unreachable block (ram,0x00010133ff34) */
/* WARNING: Removing unreachable block (ram,0x00010133ff20) */
/* WARNING: Removing unreachable block (ram,0x00010133ff0c) */
/* WARNING: Removing unreachable block (ram,0x00010133fa00) */
/* WARNING: Removing unreachable block (ram,0x00010133fa20) */
/* WARNING: Removing unreachable block (ram,0x00010133f9e8) */
/* WARNING: Removing unreachable block (ram,0x00010133fa28) */
/* WARNING: Removing unreachable block (ram,0x000101340054) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000101340044) */
/* WARNING: Removing unreachable block (ram,0x00010133ff4c) */
/* WARNING: Removing unreachable block (ram,0x00010133ff64) */
/* WARNING: Removing unreachable block (ram,0x00010133fe8c) */
/* WARNING: Removing unreachable block (ram,0x00010133ff40) */
/* WARNING: Removing unreachable block (ram,0x00010133ff48) */
/* WARNING: Removing unreachable block (ram,0x00010133fe60) */
/* WARNING: Removing unreachable block (ram,0x00010133fc90) */
/* WARNING: Removing unreachable block (ram,0x00010133fca0) */
/* WARNING: Removing unreachable block (ram,0x00010133f814) */
/* WARNING: Removing unreachable block (ram,0x00010133f828) */
/* WARNING: Removing unreachable block (ram,0x00010133f754) */
/* WARNING: Removing unreachable block (ram,0x00010133fd48) */
/* WARNING: Removing unreachable block (ram,0x00010133f768) */
/* WARNING: Removing unreachable block (ram,0x00010133f7b8) */
/* WARNING: Removing unreachable block (ram,0x00010133fe9c) */
/* WARNING: Removing unreachable block (ram,0x00010133f7c4) */
/* WARNING: Removing unreachable block (ram,0x00010133f804) */
/* WARNING: Removing unreachable block (ram,0x00010133f808) */
/* WARNING: Removing unreachable block (ram,0x00010133f82c) */
/* WARNING: Removing unreachable block (ram,0x00010133f858) */
/* WARNING: Removing unreachable block (ram,0x00010133f878) */
/* WARNING: Removing unreachable block (ram,0x00010133f8e8) */
/* WARNING: Removing unreachable block (ram,0x00010133f8a0) */
/* WARNING: Removing unreachable block (ram,0x00010133fc0c) */
/* WARNING: Removing unreachable block (ram,0x00010133fc30) */
/* WARNING: Removing unreachable block (ram,0x00010133fc40) */
/* WARNING: Removing unreachable block (ram,0x00010133fe98) */
/* WARNING: Removing unreachable block (ram,0x00010133fc4c) */
/* WARNING: Removing unreachable block (ram,0x00010133fc80) */
/* WARNING: Removing unreachable block (ram,0x00010133fc84) */
/* WARNING: Removing unreachable block (ram,0x00010133fca4) */
/* WARNING: Removing unreachable block (ram,0x00010133fcc0) */
/* WARNING: Removing unreachable block (ram,0x00010133fce0) */
/* WARNING: Removing unreachable block (ram,0x00010133fd14) */
/* WARNING: Removing unreachable block (ram,0x00010133fcf0) */
/* WARNING: Removing unreachable block (ram,0x00010133fd10) */
/* WARNING: Removing unreachable block (ram,0x00010133fd6c) */
/* WARNING: Removing unreachable block (ram,0x00010133fd84) */
/* WARNING: Removing unreachable block (ram,0x00010133fc88) */
/* WARNING: Removing unreachable block (ram,0x00010133f8e0) */
/* WARNING: Removing unreachable block (ram,0x00010133f80c) */
/* WARNING: Removing unreachable block (ram,0x00010133f5e8) */
/* WARNING: Removing unreachable block (ram,0x00010133f92c) */
/* WARNING: Removing unreachable block (ram,0x00010133f91c) */
/* WARNING: Removing unreachable block (ram,0x00010133f938) */
/* WARNING: Removing unreachable block (ram,0x00010133f914) */
/* WARNING: Removing unreachable block (ram,0x00010133f94c) */
/* WARNING: Removing unreachable block (ram,0x00010133fa34) */
/* WARNING: Removing unreachable block (ram,0x00010133f990) */
/* WARNING: Removing unreachable block (ram,0x00010133fa5c) */
/* WARNING: Removing unreachable block (ram,0x00010133f9a0) */
/* WARNING: Removing unreachable block (ram,0x00010133f9b4) */
/* WARNING: Removing unreachable block (ram,0x00010133f9b8) */
/* WARNING: Removing unreachable block (ram,0x00010133f9f8) */
/* WARNING: Removing unreachable block (ram,0x00010133f9bc) */
/* WARNING: Removing unreachable block (ram,0x00010133f9c0) */
/* WARNING: Removing unreachable block (ram,0x00010133fa18) */
/* WARNING: Removing unreachable block (ram,0x00010133f9c8) */
/* WARNING: Removing unreachable block (ram,0x00010133f638) */
/* WARNING: Removing unreachable block (ram,0x00010133f498) */
/* WARNING: Removing unreachable block (ram,0x00010133fea0) */
/* WARNING: Removing unreachable block (ram,0x00010133fea8) */
/* WARNING: Removing unreachable block (ram,0x00010133f4a0) */
/* WARNING: Removing unreachable block (ram,0x00010133feb4) */
/* WARNING: Removing unreachable block (ram,0x00010133f4ac) */
/* WARNING: Removing unreachable block (ram,0x00010133ff94) */
/* WARNING: Removing unreachable block (ram,0x00010133f4bc) */
/* WARNING: Removing unreachable block (ram,0x00010133ffa4) */
/* WARNING: Removing unreachable block (ram,0x00010133f4c8) */
/* WARNING: Removing unreachable block (ram,0x00010133f4d0) */
/* WARNING: Removing unreachable block (ram,0x00010133f448) */
/* WARNING: Removing unreachable block (ram,0x00010133f3e8) */
/* WARNING: Removing unreachable block (ram,0x00010133fb44) */
/* WARNING: Removing unreachable block (ram,0x00010133f43c) */
/* WARNING: Removing unreachable block (ram,0x00010133faec) */
/* WARNING: Removing unreachable block (ram,0x00010133ffa8) */
/* WARNING: Removing unreachable block (ram,0x00010133fb10) */

void FUN_10133f2a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  undefined1 auStack_1d0 [104];
  undefined8 uStack_168;
  undefined8 uStack_158;
  long lStack_148;
  undefined8 uStack_b0;
  
  uStack_b0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5f804();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_1 = -0x2fffffffffffffd8;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef37db0);
    func_0x000107c466bc(puVar2);
  }
  else {
    uStack_168 = param_4;
    uStack_158 = param_5;
    lStack_148 = lVar3;
    func_0x000107c5edb4(auStack_1d0 +
                        (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                        (extraout_x8 + 0xfU & 0xfffffffffffffff0)),param_1);
    func_0x000107c61174(param_1);
    func_0x000107c5ed90();
    func_0x000107c61168(PTR__OBJC_CLASS___AVAsset_1126aff38);
    func_0x000107c3e250();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10133ffac; end: 101340077; -[_TtC16SCSnapEditorImpl18SnapDocNativeUtils getTrackingInformationForPositionWithSnapDoc:mediaId:mediaWidth:mediaHeight:trackingObjectCenterX:trackingObjectCenterY:trackingObjectWidth:trackingObjectHeight:trackingStartMs:] */

void FUN_10133ffac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_8);
  uVar1 = param_11;
  FUN_101343480(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101340078; end: 101340253;  */

/* WARNING: Possible PIC construction at 0x000101340110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013401b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101340174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101340210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101340178) */
/* WARNING: Removing unreachable block (ram,0x0001013401bc) */
/* WARNING: Removing unreachable block (ram,0x000101340114) */
/* WARNING: Removing unreachable block (ram,0x000101340214) */
/* WARNING: Removing unreachable block (ram,0x000101340218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101340078(double param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d74a48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  if (1 < param_2) {
    if (param_2 == 2) {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c5a544(lVar2);
    }
    else {
      if (param_2 != 3) {
LAB_101340230:
        func_0x000101343960(0);
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101340254);
        (*pcVar1)();
      }
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(0x7ff0000000000000);
      func_0x000107c5a544(lVar2);
    }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  if (param_2 == 0) {
    if (param_3 == (undefined *)0x0) goto code_r0x000107c615e8;
    func_0x000107c61174(param_3);
    func_0x000107c4223c();
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1 / 1000.0);
    func_0x000107c552b0(lVar2);
  }
  else {
    if (param_2 != 1) goto LAB_101340230;
    param_3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(0x7ff0000000000000);
    func_0x000107c552b0(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101340254; end: 1013402b3; -[_TtC16SCSnapEditorImpl18SnapDocNativeUtils persistPlaybackStateWithPlaybackState:durationMs:] */

/* WARNING: Possible PIC construction at 0x00010134029c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013402a0) */

void FUN_101340254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101340078(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013402b4; end: 10134057f;  */

void FUN_1013402b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_7 + 0x10,auStack_a8,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61618();
  if (param_7 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010ef37e50);
    func_0x000107c466bc(puVar3);
    func_0x000107c61170(uVar4);
    puVar5 = puVar3;
    func_0x000107c5ed2c(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c43b70(param_8);
    func_0x000107c61170(puVar5);
  }
  else {
    func_0x000107c61428(param_10 + 0x10,auStack_c0,0,0);
    func_0x000107c50028(param_9);
    FUN_101343a80(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar7 + 0x68))
              (puVar6,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
    func_0x000107c61174(param_7);
    puVar2 = puVar6;
    func_0x000107c5fff0(puVar6);
    (**(code **)(lVar7 + 8))(puVar6,lVar1);
    uVar4 = param_9;
    func_0x000107c3d8bc(param_1,param_2,param_3,param_4);
    func_0x000107c61170(param_7);
    func_0x000107c61170(puVar2);
    func_0x000107c61428(param_10 + 0x10,auStack_d8,1,0);
    *(undefined8 *)(param_10 + 0x10) = uVar4;
    puVar3 = &UNK_1103a5120;
    func_0x000107c613fc(&UNK_1103a5120,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_7);
    puVar5 = &UNK_1103a5210;
    func_0x000107c613fc(&UNK_1103a5210,0x40,7);
    *(undefined **)(puVar5 + 0x10) = puVar3;
    *(undefined8 *)(puVar5 + 0x18) = param_8;
    *(undefined8 *)(puVar5 + 0x20) = param_9;
    *(long *)(puVar5 + 0x28) = param_10;
    *(undefined8 *)(puVar5 + 0x30) = param_5;
    *(undefined8 *)(puVar5 + 0x38) = param_6;
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(param_8);
    func_0x000107c615f0(param_9);
    func_0x000107c6157c(param_10);
    FUN_10134073c(param_11,param_9,0x1013439c8,puVar5);
    func_0x000107c61170(param_7);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 101340580; end: 10134073b;  */

void FUN_101340580(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_90;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010ef37e50);
    func_0x000107c466bc(puVar2);
    func_0x000107c61170(uVar3);
    puVar4 = puVar2;
    func_0x000107c5ed2c(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c43b70(param_4);
  }
  else {
    func_0x000107c61428(param_6 + 0x10,auStack_90,0,0);
    func_0x000107c50028();
    FUN_101340958(param_1,param_2);
    lVar1 = param_5;
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar5 = 0;
      puVar6 = (undefined1 *)0xc000000000000000;
    }
    else {
      lVar5 = lVar1;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar1);
    }
    puVar4 = PTR_PTR_1126a6b00;
    func_0x000107c610f8(PTR_PTR_1126a6b00);
    lVar1 = lVar5;
    func_0x000107c5ee20(lVar5,puVar6);
    func_0x000107c45ae0(puVar4);
    func_0x000107c61170(lVar1);
    func_0x00010006c090(lVar5,puVar6);
    func_0x000107c43b74(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10134073c; end: 1013408c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134073c(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d74a60);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x00010058d43c(uVar2,uVar3);
    if (param_3 != (code *)0x0) {
      (*param_3)();
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61434();
    func_0x000107c61174(uVar8);
    lVar4 = param_1;
    FUN_101342f34(param_1,(undefined8 *)(param_1 + 0x20),1,lVar7 << 1 | 1);
    func_0x000107c6142c(param_1);
    puVar5 = &UNK_1103a5120;
    func_0x000107c613fc(&UNK_1103a5120,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_1103a5148;
    func_0x000107c613fc(&UNK_1103a5148,0x38,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(code **)(puVar6 + 0x18) = param_3;
    *(undefined8 *)(puVar6 + 0x20) = param_4;
    *(long *)(puVar6 + 0x28) = lVar4;
    *(undefined8 *)(puVar6 + 0x30) = param_2;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d74a60);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0x101343950;
    puVar1[1] = puVar6;
    func_0x000107c6157c(puVar5);
    func_0x000100b64c10(param_3,param_4);
    func_0x000107c615f0(param_2);
    func_0x00010058d43c(uVar2,uVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c4f29c(param_2);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1013408c4; end: 101340957;  */

void FUN_1013408c4(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    FUN_10134073c(param_4,param_5,param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101340958; end: 101340c8b;  */

/* WARNING: Removing unreachable block (ram,0x000101340c80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101340958(double param_1,double param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  long lVar10;
  long unaff_x20;
  undefined8 *****pppppuVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 ****ppppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar10 = _DAT_112d74a58;
  func_0x000107c61428(unaff_x20 + _DAT_112d74a58,auStack_88,0,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  pppppuVar11 = *(undefined8 ******)(lVar10 + 0x10);
  func_0x000107c61434(lVar10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pppppuVar4 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar11 != (undefined8 *****)0x0) {
    func_0x000107c61434(lVar10);
    pppppuVar4 = pppppuVar11;
    FUN_101341cc4(pppppuVar11,0);
    pppppuVar9 = &ppppuStack_b0;
    FUN_10134301c(pppppuVar9,pppppuVar4 + 4,pppppuVar11,lVar10);
    FUN_101343948(ppppuStack_b0,CONCAT44(uStack_a4,uStack_a8),ppppuStack_a0,uStack_98,uStack_90);
    if (pppppuVar9 != pppppuVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101340a08);
      (*pcVar3)();
    }
  }
  ppppuStack_b0 = pppppuVar4;
  FUN_101342574(&ppppuStack_b0);
  func_0x000107c6142c(lVar10);
  ppppuVar2 = ppppuStack_b0;
  ppppuVar13 = (undefined8 ****)ppppuStack_b0[2];
  if (ppppuVar13 == (undefined8 ****)0x0) {
    func_0x000107c61574(ppppuStack_b0);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppppuVar11 = (undefined8 *****)0x0;
    func_0x0001013416ac(0,ppppuVar13);
    ppppuVar15 = (undefined8 ****)0x0;
    pppppuVar4 = (undefined8 *****)(ppppuVar2 + 5);
    do {
      if (ppppuVar2[2] <= ppppuVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c60);
        (*pcVar3)();
      }
      ppppuVar16 = pppppuVar4[-1];
      if (0x7fefffffffffffff < ((ulong)ppppuVar16 & 0x7fffffffffffffff)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c64);
        (*pcVar3)();
      }
      if ((double)ppppuVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c68);
        (*pcVar3)();
      }
      if (9.223372036854776e+18 <= (double)ppppuVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c6c);
        (*pcVar3)();
      }
      ppppuVar5 = *pppppuVar4;
      pppppuVar14 = (undefined8 *****)(long)(double)ppppuVar16;
      func_0x000107c61174(ppppuVar5);
      uVar8 = 1000;
      func_0x000107c600c8();
      puVar6 = PTR_PTR_1126bb2a8;
      func_0x000107c610f8();
      uStack_a8 = (undefined4)uVar8;
      uStack_a4 = (undefined4)((ulong)uVar8 >> 0x20);
      pppppuVar9 = &ppppuStack_b0;
      ppppuStack_b0 = pppppuVar14;
      ppppuStack_a0 = pppppuVar11;
      func_0x000107c48cf0();
      func_0x000107c61170(ppppuVar5);
      uVar1 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        pppppuVar9 = (undefined8 *****)0x1;
        func_0x0001013416ac(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1);
      }
      ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1);
      *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar12 + uVar1 * 8 + 0x20) = puVar6;
      pppppuVar4 = pppppuVar4 + 2;
      pppppuVar11 = pppppuVar9;
    } while (ppppuVar13 != ppppuVar15);
    func_0x000107c61574(ppppuVar2);
  }
  puVar6 = PTR_PTR_1126bcef8;
  func_0x000107c61168(PTR_PTR_1126bcef8);
  uVar8 = 0;
  FUN_101343a80(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  puVar7 = puVar12;
  func_0x000107c5fc48(puVar12,uVar8);
  func_0x000107c6142c(puVar12);
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c70);
    (*pcVar3)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c74);
    (*pcVar3)();
  }
  if ((0x7fefffffffffffff < (ulong)ABS(param_1)) || (0x7fefffffffffffff < (ulong)ABS(param_2))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c78);
    (*pcVar3)();
  }
  if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c7c);
    (*pcVar3)();
  }
  if (1.8446744073709552e+19 <= param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101340c80);
    (*pcVar3)();
  }
  func_0x000107c4274c(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 101340c8c; end: 101340d1b;  */

void FUN_101340c8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  puStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  func_0x000107c61174(uVar2);
  func_0x0001000b0da8(0xd000000000000042,0x800000010ef37f90,FUN_101343ac0,auStack_70);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101340d1c; end: 1013410b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101340d1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar14 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar14 = param_1;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar14 != (undefined8 *)0x0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001013416c8(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013410b4);
      (*pcVar3)();
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar15 = param_1 + 4;
      do {
        puVar9 = puStack_68;
        puVar5 = (undefined8 *)*puVar15;
        func_0x000107c61174();
        puVar6 = puVar5;
        func_0x0001000298f0();
        puVar19 = auStack_80;
        func_0x000107c61428();
        uVar4 = *puVar6;
        func_0x000107c61174(uVar4);
        func_0x0001000aa0a8(param_2);
        func_0x000107c61170(uVar4);
        puVar6 = puVar5;
        func_0x000107c60bb8();
        func_0x000107c61180();
        if (puVar6 == (undefined8 *)0x0) {
          func_0x000107c61170(puVar5);
          puVar18 = (undefined8 *)0x0;
          puVar19 = (undefined1 *)0xf000000000000000;
        }
        else {
          puVar18 = puVar6;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar5);
        }
        uVar16 = *(ulong *)(puVar9 + 0x10);
        puStack_68 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar16) {
          func_0x0001013416c8(1 < *(ulong *)(puVar9 + 0x18),uVar16 + 1,1);
        }
        *(ulong *)(puStack_68 + 0x10) = uVar16 + 1;
        *(undefined8 **)(puStack_68 + uVar16 * 0x10 + 0x20) = puVar18;
        *(undefined1 **)(puStack_68 + uVar16 * 0x10 + 0x28) = puVar19;
        puVar14 = (undefined8 *)((long)puVar14 + -1);
        puVar9 = puStack_68;
        puVar15 = puVar15 + 1;
      } while (puVar14 != (undefined8 *)0x0);
    }
    else {
      puVar15 = (undefined8 *)0x0;
      do {
        puVar9 = puStack_68;
        puVar6 = puVar15;
        FUN_100f95e24(puVar15,param_1);
        puVar5 = puVar6;
        func_0x0001000298f0();
        puVar19 = auStack_80;
        func_0x000107c61428();
        uVar4 = *puVar5;
        func_0x000107c61174(uVar4);
        func_0x0001000aa0a8(param_2);
        func_0x000107c61170(uVar4);
        puVar5 = puVar6;
        func_0x000107c60bb8();
        func_0x000107c61180();
        if (puVar5 == (undefined8 *)0x0) {
          func_0x000107c615e8(puVar6);
          puVar18 = (undefined8 *)0x0;
          puVar19 = (undefined1 *)0xf000000000000000;
        }
        else {
          puVar18 = puVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar5);
          func_0x000107c615e8(puVar6);
        }
        uVar16 = *(ulong *)(puVar9 + 0x10);
        puStack_68 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar16) {
          func_0x0001013416c8(1 < *(ulong *)(puVar9 + 0x18),uVar16 + 1,1);
        }
        puVar15 = (undefined8 *)((long)puVar15 + 1);
        *(ulong *)(puStack_68 + 0x10) = uVar16 + 1;
        *(undefined8 **)(puStack_68 + uVar16 * 0x10 + 0x20) = puVar18;
        *(undefined1 **)(puStack_68 + uVar16 * 0x10 + 0x28) = puVar19;
        puVar9 = puStack_68;
      } while (puVar14 != puVar15);
    }
  }
  uVar16 = 0;
  uVar17 = *(ulong *)(puVar9 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    lVar2 = uVar16 * 0x10 + 0x28;
    do {
      lVar12 = lVar2;
      if (uVar17 == uVar16) {
        func_0x000107c6142c();
        func_0x00010134164c();
        puVar10 = puVar9;
        func_0x000107c610f8();
        lVar2 = _DAT_112d74a90;
        *(undefined8 *)(puVar10 + _DAT_112d74a90) = 0;
        puVar14 = (undefined8 *)(puVar10 + _DAT_112d74a98);
        *(undefined **)(puVar10 + lVar2) = puVar8;
        *puVar14 = 0;
        puVar14[1] = 0;
        ppuVar11 = &puStack_90;
        puStack_90 = puVar10;
        puStack_88 = puVar9;
        func_0x000107c61154(ppuVar11,PTR_s_init_1125d9248);
        func_0x000107c4d664(param_3);
        func_0x000107c61170(ppuVar11);
        return;
      }
      if (*(ulong *)(puVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101341098);
        (*pcVar3)();
      }
      uVar16 = uVar16 + 1;
      uVar13 = *(ulong *)(puVar9 + lVar12);
      lVar2 = lVar12 + 0x10;
    } while (0xe < uVar13 >> 0x3c);
    uVar4 = *(undefined8 *)(puVar9 + lVar12 + -8);
    func_0x00010006c00c(uVar4,uVar13);
    puVar10 = puVar8;
    func_0x000107c61558();
    puVar7 = puVar8;
    if (((ulong)puVar10 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_100f23260(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100f23260(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar4;
    *(ulong *)(puVar8 + uVar1 * 0x10 + 0x28) = uVar13;
  } while( true );
}



/* Entry: 1013410b4; end: 1013411a7;  */

void FUN_1013410b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  
  puVar1 = param_3;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61428(puVar1,auStack_90,0,0);
  uVar2 = *puVar1;
  uStack_c0 = param_6;
  puStack_b8 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_1;
  uStack_a0 = param_2;
  uStack_98 = param_7;
  func_0x000107c61174(uVar2);
  func_0x0001000b0da8(0xd00000000000003c,0x800000010ef37fe0,0x101343acc,auStack_d0);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1013411a8; end: 10134139f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013411a8(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_60;
  FUN_101343718();
  if (param_3 >> 0x3c < 0xf) {
    lVar3 = 0x112d4c088;
    func_0x0001000285a8(0x112d4c088,&UNK_10d913a10);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(long *)(lVar3 + 0x20) = param_2;
    *(ulong *)(lVar3 + 0x28) = param_3;
    lVar4 = lVar3;
    func_0x00010134164c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    lVar2 = _DAT_112d74a90;
    *(undefined8 *)(lVar5 + _DAT_112d74a90) = 0;
    puVar1 = (undefined8 *)(lVar5 + _DAT_112d74a98);
    *(long *)(lVar5 + lVar2) = lVar3;
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_100de78a0(param_2,param_3);
    FUN_100de78a0(param_2,param_3);
    lStack_60 = lVar5;
    lStack_58 = lVar4;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    func_0x000107c4d664(param_4);
    func_0x000107c61170(plVar6);
    func_0x0001000b44c0(param_2,param_3);
    func_0x0001000b44c0(param_2,param_3);
  }
  else {
    func_0x00010134164c();
    lVar2 = param_2;
    func_0x000107c610f8();
    lVar3 = _DAT_112d74a90;
    *(undefined8 *)(lVar2 + _DAT_112d74a90) = 0;
    puVar1 = (undefined8 *)(lVar2 + _DAT_112d74a98);
    *(undefined **)(lVar2 + lVar3) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *puVar1 = 0;
    puVar1[1] = 0;
    plVar6 = &lStack_50;
    lStack_50 = lVar2;
    lStack_48 = param_2;
    func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
    func_0x000107c4d664(param_4);
    func_0x000107c61170(plVar6);
  }
  return;
}



/* Entry: 1013413a0; end: 101341433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013413a0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  lVar3 = param_1;
  func_0x00010134164c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d74a90) = 0;
  plVar1 = (long *)(lVar4 + _DAT_112d74a98);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61434(param_2);
  func_0x000107c61154(&lStack_40,puVar2);
  func_0x000107c4d664(param_3);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 101341434; end: 10134145f; -[_TtC16SCSnapEditorImpl18SnapDocNativeUtils init] */

void FUN_101341434(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapEditorImpl.SnapDocNativeUtils",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101341460);
  (*pcVar1)();
}



/* Entry: 101341460; end: 10134146b;  */

void FUN_101341460(void)

{
  FUN_10134162c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10134146c; end: 10134149b;  */

void FUN_10134146c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10134149c; end: 101341537; -[_TtC16SCSnapEditorImpl18SnapDocNativeUtils .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013414d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013414dc) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10134149c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74a28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d74a30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d74a38));
  return;
}



/* Entry: 101341538; end: 1013415bb; -[_TtC16SCSnapEditorImpl18SnapDocNativeUtils videoTracker:didProduceTransform:atTime:] */

/* WARNING: Possible PIC construction at 0x0001013415a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013415a4) */

void FUN_101341538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10134385c(param_4,uVar1,uVar2,uVar3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1013415bc; end: 10134162b; -[_TtC16SCSnapEditorImpl18SnapDocNativeUtils videoTracker:didFailAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013415bc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d74a60);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112d74a60))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}


