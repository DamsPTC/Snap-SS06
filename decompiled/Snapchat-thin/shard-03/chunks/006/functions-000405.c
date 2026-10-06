/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a98cac; end: 102a98d13;  */

undefined8
FUN_102a98cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_102a9adb4(param_1,param_2,param_3,param_4);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 102a98d14; end: 102a98d43;  */

undefined8 FUN_102a98d14(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a9adb4();
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 102a98d44; end: 102a98d9f; -[SCShoppingLensURIHandler init] */

void FUN_102a98d44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensStateManager.ShoppingLensURIHandler",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a98d70);
  (*pcVar1)();
}



/* Entry: 102a98da0; end: 102a98e8b; -[SCShoppingLensURIHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a98da0(long param_1)

{
  func_0x000100d18c44(param_1 + _DAT_112ee7b28);
  func_0x000100d18c44(param_1 + _DAT_112ee7b30);
  func_0x000100d18c34(*(undefined8 *)(param_1 + _DAT_112ee7b38),
                      ((undefined8 *)(param_1 + _DAT_112ee7b38))[1]);
  func_0x000100d18c34(*(undefined8 *)(param_1 + _DAT_112ee7b40),
                      ((undefined8 *)(param_1 + _DAT_112ee7b40))[1]);
  func_0x000100d18c34(*(undefined8 *)(param_1 + _DAT_112ee7b48),
                      ((undefined8 *)(param_1 + _DAT_112ee7b48))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ee7b50));
  func_0x000100d18c34(*(undefined8 *)(param_1 + _DAT_112ee7b58),
                      ((undefined8 *)(param_1 + _DAT_112ee7b58))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ee7b60));
  func_0x000100d18c34(*(undefined8 *)(param_1 + _DAT_112ee7b68),
                      ((undefined8 *)(param_1 + _DAT_112ee7b68))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ee7b70));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ee7b78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ee7b80));
  return;
}



/* Entry: 102a98e8c; end: 102a98eab;  */

undefined1  [16] FUN_102a98e8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x707061;
  return auVar1;
}



/* Entry: 102a98eac; end: 102a99187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a98eac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&puStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ee7b70);
  *(undefined8 *)(unaff_x20 + _DAT_112ee7b70) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ee7b50);
  if (lVar2 != 0) {
    pcVar9 = *(code **)(unaff_x20 + _DAT_112ee7b58);
    if (pcVar9 != (code *)0x0) {
      uVar10 = ((undefined8 *)(unaff_x20 + _DAT_112ee7b58))[1];
      func_0x000107c61174();
      uVar8 = uVar10;
      func_0x000100d18c24(pcVar9);
      FUN_102a93b0c();
      if (unaff_x21 == 0) {
        lVar4 = lVar2;
        func_0x000107c5d7e0(lVar2);
        func_0x000107c61180();
        lStack_70 = lVar2;
        func_0x000107c5edb4(lVar12);
        func_0x000107c61170(lVar4);
        puStack_80 = (undefined *)0xc8;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8();
        puVar6 = PTR_PTR_1126b1ce0;
        puStack_b0 = puVar5;
        func_0x000107c610f8();
        uVar7 = param_1;
        puStack_90 = puVar6;
        uStack_78 = uVar10;
        func_0x00010006c00c(param_1,uVar8);
        func_0x000107c5ed90();
        uVar10 = 0;
        uStack_a0 = uVar7;
        func_0x000107c5fadc(0,0xe000000000000000);
        puVar5 = puStack_b0;
        puVar6 = puStack_b0;
        uStack_a8 = uVar10;
        func_0x000107c5f9dc(puStack_b0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(puVar5);
        uVar7 = param_1;
        uStack_98 = uVar8;
        uStack_88 = param_1;
        func_0x000107c5ee20(param_1,uVar8);
        func_0x00010006c090(param_1,uVar8);
        uVar10 = uStack_a0;
        uVar8 = uStack_a8;
        puVar5 = puStack_90;
        func_0x000107c4913c();
        puStack_80 = puVar5;
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar8);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar7);
        (**(code **)(lVar11 + 8))(lVar12,lVar1);
        uVar8 = uStack_78;
        puVar5 = puStack_80;
        (*pcVar9)(puStack_80);
        func_0x000107c61170(lStack_70);
        func_0x000100d18c34(pcVar9,uVar8);
        func_0x000107c61170(puVar5);
        func_0x00010006c090(uStack_88,uStack_98);
      }
      else {
        func_0x000107c61170(lVar2);
        func_0x000100d18c34(pcVar9,uVar10);
        func_0x000107c614b0();
        uVar8 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar3 = &uStack_61;
        func_0x000107c6147c(puVar3,&stack0xffffffffffffffa8,uVar8,&UNK_110590900,0);
        if ((int)puVar3 == 0) {
          func_0x000107c614ac(unaff_x21);
        }
        else {
          func_0x000107c614ac();
        }
        func_0x000107c614ac();
      }
    }
  }
  return;
}



/* Entry: 102a99188; end: 102a9918f;  */

undefined8 FUN_102a99188(void)

{
  return 1;
}



/* Entry: 102a99190; end: 102a9922f;  */

void FUN_102a99190(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a99230; end: 102a99247;  */

undefined1  [16] FUN_102a99230(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x65646f4d736e656c;
  return auVar1;
}



/* Entry: 102a99248; end: 102a992cb;  */

void FUN_102a99248(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x65646f4d736e656c && param_3 == -0x1800000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x65646f4d736e656c,0xe800000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102a992cc; end: 102a992e3;  */

undefined1  [16] FUN_102a992cc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a992e4; end: 102a99333;  */

void FUN_102a992e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a9b048();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a99334; end: 102a9945b;  */

/* WARNING: Removing unreachable block (ram,0x000102a993f8) */

void FUN_102a99334(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112ee7bd0;
  func_0x0001000285a8(0x112ee7bd0,&UNK_10db13528);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102a9b048();
  puVar5 = &UNK_1105911d8;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1105911d8,&UNK_1105911d8,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102a9945c; end: 102a9954b;  */

void FUN_102a9945c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112ee7bc0;
  func_0x0001000285a8(0x112ee7bc0,&UNK_10db13520);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_102a9b048();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1105911d8,&UNK_1105911d8,param_1,
                      uVar2,uVar4);
  func_0x000107c6053c(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 102a9954c; end: 102a998d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a9954c(byte param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x21;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 uStack_51;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&puStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(byte *)(unaff_x20 + _DAT_112ee7b88) = param_1;
  lVar13 = *(long *)(unaff_x20 + _DAT_112ee7b60);
  if (lVar13 != 0) {
    pcVar10 = *(code **)(unaff_x20 + _DAT_112ee7b68);
    if (pcVar10 != (code *)0x0) {
      uVar14 = ((undefined8 *)(unaff_x20 + _DAT_112ee7b68))[1];
      lStack_78 = lVar2;
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000100d18c24(pcVar10,uVar14);
      func_0x000107c61174();
      lVar2 = lVar13;
      func_0x000107c5eb50();
      uVar9 = 0xed00004e4f495441;
      uVar1 = 0xe200000000000000;
      if (param_1 != 2) {
        uVar1 = 0xef474e494341465f;
      }
      if (param_1 != 0) {
        uVar9 = 0xe400000000000000;
      }
      if (param_1 < 2) {
        uVar1 = uVar9;
      }
      lVar3 = lVar2;
      func_0x000102a9af20();
      puVar8 = &UNK_110591038;
      puVar4 = &stack0xffffffffffffff90;
      func_0x000107c5eb4c(puVar4,&UNK_110591038,lVar3);
      if (unaff_x21 == 0) {
        puStack_88 = puVar8;
        puStack_80 = puVar4;
        func_0x000107c61574(lVar2);
        func_0x000107c6142c(uVar1);
        lStack_90 = lVar13;
        func_0x000107c5d7e0(lVar13);
        func_0x000107c61180();
        func_0x000107c5edb4(lVar12);
        func_0x000107c61170(lVar13);
        uStack_a0 = 200;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar6 = PTR_PTR_1126b1ce0;
        func_0x000107c610f8();
        puVar4 = puStack_80;
        puVar7 = puStack_80;
        puStack_a8 = puVar6;
        func_0x00010006c00c(puStack_80,puVar8);
        func_0x000107c5ed90();
        uVar9 = 0;
        puStack_b0 = puVar7;
        func_0x000107c5fadc(0,0xe000000000000000);
        puVar6 = puVar5;
        uStack_98 = uVar14;
        func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(puVar5);
        puVar8 = puStack_88;
        puVar7 = puVar4;
        func_0x000107c5ee20(puVar4,puStack_88);
        func_0x00010006c090(puVar4,puVar8);
        puVar4 = puStack_b0;
        puVar8 = puStack_a8;
        func_0x000107c4913c(puStack_a8);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        (**(code **)(lVar11 + 8))(lVar12,lStack_78);
        uVar9 = uStack_98;
        (*pcVar10)(puVar8);
        func_0x000107c61170(lStack_90);
        func_0x000100d18c34(pcVar10,uVar9);
        func_0x000107c61170(puVar8);
        func_0x00010006c090(puStack_80,puStack_88);
      }
      else {
        func_0x000107c61170(lVar13);
        func_0x000107c6142c(uVar1);
        func_0x000100d18c34(pcVar10,uVar14);
        func_0x000107c61574(lVar2);
        func_0x000107c614b0();
        uVar9 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar4 = &uStack_51;
        func_0x000107c6147c(puVar4,&stack0xffffffffffffff90,uVar9,&UNK_110590900,0);
        if ((int)puVar4 == 0) {
          func_0x000107c614ac(unaff_x21);
        }
        else {
          func_0x000107c614ac();
        }
        func_0x000107c614ac();
      }
    }
  }
  return;
}



/* Entry: 102a998d4; end: 102a998fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a998d4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112ee7b38);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*(code *)&UNK_101695bd8)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102a998fc; end: 102a9993b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a998fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ee7b38;
  func_0x000107c61428(unaff_x20 + _DAT_112ee7b38,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102a9bc6c;
  return auVar2;
}



/* Entry: 102a9993c; end: 102a9994f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a9993c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_112ee7b40);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*(code *)0x102a9bc90)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102a99950; end: 102a999af;  */

undefined1  [16] FUN_102a99950(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 102a999b0; end: 102a999c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a999b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee7b40);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*(code *)0x102a9bc94)(uVar2,uVar3);
  return;
}



/* Entry: 102a999c4; end: 102a99a1f;  */

void FUN_102a999c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 102a99a20; end: 102a99a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a99a20(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ee7b40;
  func_0x000107c61428(unaff_x20 + _DAT_112ee7b40,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102a9bc70;
  return auVar2;
}



/* Entry: 102a99a60; end: 102a99a73;  */

void FUN_102a99a60(void)

{
  FUN_102a98eac();
  return;
}



/* Entry: 102a99a74; end: 102a99ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a99a74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7b30;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  return;
}



/* Entry: 102a99ad4; end: 102a99ae7;  */

void FUN_102a99ad4(void)

{
  FUN_102a9954c();
  return;
}



/* Entry: 102a99ae8; end: 102a99b0b;  */

void FUN_102a99ae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102a99b0c; end: 102a9abe7;  */

/* WARNING: Removing unreachable block (ram,0x000102a9a77c) */
/* WARNING: Removing unreachable block (ram,0x000102a9a248) */
/* WARNING: Removing unreachable block (ram,0x000102a9a0c8) */
/* WARNING: Removing unreachable block (ram,0x000102a9a914) */
/* WARNING: Removing unreachable block (ram,0x000102a99fac) */
/* WARNING: Removing unreachable block (ram,0x000102a99ea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a99b0c(code ******param_1,code ******param_2,code ******param_3)

{
  undefined8 *puVar1;
  code *****pppppcVar2;
  long lVar3;
  long lVar4;
  code ******ppppppcVar5;
  ulong uVar6;
  undefined8 uVar7;
  code ******ppppppcVar8;
  code ******ppppppcVar9;
  code ******ppppppcVar10;
  code ****ppppcVar11;
  char *pcVar12;
  undefined *puVar13;
  code ******ppppppcVar14;
  code ******ppppppcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code ******ppppppcVar16;
  code ******unaff_x20;
  code ******ppppppcVar17;
  code ******ppppppcVar18;
  code ******ppppppcVar19;
  code ******ppppppcVar20;
  undefined8 uVar21;
  long lVar22;
  code ******ppppppcVar23;
  code ******ppppppcVar24;
  code *****pppppcVar25;
  code ******ppppppcVar26;
  code ******ppppppcVar27;
  code ****appppcStack_130 [15];
  code *****apppppcStack_98 [2];
  code *****pppppcStack_88;
  code *****pppppcStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar16 = (code ******)0xd000000000000010;
  lVar3 = 0;
  ppppppcVar18 = param_2;
  func_0x000107c5fb10();
  ppppppcVar24 = *(code *******)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppppcVar24[8]);
  ppppppcVar10 = (code ******)
                 ((long)appppcStack_130 + (0x70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  ppppppcVar27 = (code ******)((long)ppppppcVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppppcVar17 = (code ******)((long)ppppppcVar27 - extraout_x12);
  ppppppcVar20 = param_1;
  func_0x000107c5d7e0();
  func_0x000107c61180();
  func_0x000107c5edb4(ppppppcVar17);
  func_0x000107c61170();
  func_0x000107c5edc4();
  ppppppcVar23 = *(code *******)(lVar22 + 8);
  (*(code *)ppppppcVar23)(ppppppcVar17,lVar4);
  ppppppcVar26 = ppppppcVar18;
  if (ppppppcVar20 == (code ******)0xd000000000000018 &&
      ppppppcVar18 == (code ******)0x800000010f0e6010) {
LAB_102a99c58:
    func_0x000107c6142c();
    func_0x000102a9b0cc();
    ppppppcVar20 = (code ******)&UNK_110591148;
    ppppppcVar14 = (code ******)0x0;
    ppppppcVar15 = (code ******)0x0;
    func_0x000107c613f8();
    *ppppppcVar18 = (code *****)0xd000000000000044;
    ppppppcVar18[1] = (code *****)0x800000010f0e6110;
LAB_102a99c98:
    func_0x000107c61654();
LAB_102a99ca4:
    ppppppcVar16 = ppppppcVar20;
    FUN_102a9b680(ppppppcVar20,param_1);
    func_0x000107c614ac(ppppppcVar20);
    param_1 = ppppppcVar16;
LAB_102a99cb8:
    (*(code *)param_2)(param_1);
  }
  else {
    uVar6 = 0;
    func_0x000107c605b8(0xd000000000000018,0x800000010f0e6010,ppppppcVar20,ppppppcVar18,0);
    if ((uVar6 & 1) != 0) goto LAB_102a99c58;
    if (ppppppcVar20 == (code ******)0xd000000000000010 &&
        ppppppcVar18 == (code ******)0x800000010f0e6030) {
LAB_102a99d3c:
      func_0x000107c6142c(ppppppcVar18);
      ppppppcVar20 = (code ******)((long)unaff_x20 + _DAT_112ee7b28);
      ppppppcVar15 = (code ******)0x0;
      func_0x000107c61428(ppppppcVar20,&pppppcStack_88,0);
      ppppppcVar16 = ppppppcVar20;
      func_0x000107c61618();
      if (ppppppcVar16 == (code ******)0x0) {
LAB_102a99dc0:
        func_0x000102a9b0cc();
        ppppppcVar20 = (code ******)&UNK_110591148;
        ppppppcVar14 = (code ******)0x0;
        ppppppcVar15 = (code ******)0x0;
        func_0x000107c613f8();
        *ppppppcVar16 = (code *****)0x0;
        ppppppcVar16[1] = (code *****)0x0;
        goto LAB_102a99c98;
      }
      ppppppcVar20 = (code ******)ppppppcVar20[1];
      ppppppcVar26 = ppppppcVar16;
      func_0x000107c614f0();
      (*(code *)ppppppcVar20[1])();
      func_0x000107c615e8();
      if (ppppppcVar20 == (code ******)0x0) goto LAB_102a99dc0;
      ppppppcVar16 = ppppppcVar26;
      FUN_102a9b10c(ppppppcVar26,ppppppcVar20);
      func_0x000107c6142c(ppppppcVar20);
      ppppppcVar14 = param_1;
      param_1 = ppppppcVar16;
      goto LAB_102a99cb8;
    }
    uVar6 = 0;
    ppppppcVar14 = ppppppcVar20;
    ppppppcVar15 = ppppppcVar18;
    func_0x000107c605b8();
    if ((uVar6 & 1) != 0) goto LAB_102a99d3c;
    uVar6 = 0;
    if ((ppppppcVar20 == (code ******)0xd000000000000016 &&
         ppppppcVar18 == (code ******)0x800000010f0e6050) ||
       (ppppppcVar14 = ppppppcVar20, ppppppcVar15 = ppppppcVar18, func_0x000107c605b8(),
       (uVar6 & 1) != 0)) {
      func_0x000107c6142c(ppppppcVar18);
      uVar21 = *(undefined8 *)((long)unaff_x20 + _DAT_112ee7b50);
      *(code *******)((long)unaff_x20 + _DAT_112ee7b50) = param_1;
      func_0x000107c61174();
      func_0x000107c61170(uVar21);
      puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112ee7b58);
      ppppppcVar23 = (code ******)*puVar1;
      ppppppcVar20 = (code ******)puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000107c6157c();
      ppppppcVar8 = ppppppcVar23;
      func_0x000100d18c34(ppppppcVar23,ppppppcVar20);
      ppppppcVar26 = *(code *******)((long)unaff_x20 + _DAT_112ee7b70);
      ppppppcVar16 = param_1;
      ppppppcVar19 = unaff_x20;
      if (ppppppcVar26 != (code ******)0x0) {
        func_0x000107c61434(ppppppcVar26);
        ppppppcVar20 = (code ******)0x0;
        FUN_102a98eac();
        func_0x000107c6142c();
        ppppppcVar8 = ppppppcVar26;
        ppppppcVar19 = (code ******)0x0;
      }
      goto LAB_102a99ccc;
    }
    ppppppcVar26 = (code ******)0x800000010f0e6070;
    uVar6 = 0xd00000000000001d;
    ppppppcVar19 = ppppppcVar17;
    ppppppcVar8 = param_1;
    if (((ppppppcVar20 == (code ******)0xd00000000000001d) &&
        (ppppppcVar18 == (code ******)0x800000010f0e6070)) ||
       (ppppppcVar14 = ppppppcVar20, ppppppcVar15 = ppppppcVar18, func_0x000107c605b8(),
       (uVar6 & 1) != 0)) {
      func_0x000107c6142c(ppppppcVar18);
      func_0x000107c3eb80();
      func_0x000107c61180();
      ppppppcVar16 = param_1;
      ppppppcVar23 = unaff_x20;
      if (ppppppcVar8 == (code ******)0x0) goto LAB_102a99ccc;
      ppppppcVar27 = ppppppcVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(ppppppcVar8);
      ppppppcVar5 = (code ******)0x0;
      func_0x000107c5eb24();
      func_0x000107c613fc();
      func_0x000107c5eb20();
      ppppppcVar15 = (code ******)0x112d550a0;
      func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
      uVar21 = 0x112db3e38;
      FUN_102a9b8d0(0x112db3e38,0x112d550a0,&UNK_10d91c290,PTR___sSSSesWP_11034daa8);
      ppppppcVar14 = ppppppcVar26;
      func_0x000107c5eb1c(&pppppcStack_88,ppppppcVar15,ppppppcVar27,ppppppcVar26,ppppppcVar15,uVar21
                         );
      ppppppcVar18 = (code ******)0x0;
      func_0x000107c61574(ppppppcVar5);
      ppppppcVar20 = (code ******)pppppcStack_88;
      if ((code *****)pppppcStack_88[2] == (code *****)0x0) {
        func_0x000107c6142c(pppppcStack_88);
        goto LAB_102a9a260;
      }
      func_0x000107c61434(pppppcStack_88);
      lVar3 = 0x53676e6964616f6c;
      uVar6 = 0;
      func_0x000100029284();
      ppppppcVar18 = ppppppcVar20;
      if ((uVar6 & 1) != 0) {
        param_3 = (code ******)ppppppcVar20[7][lVar3 * 2];
        ppppppcVar8 = (code ******)(ppppppcVar20[7] + lVar3 * 2)[1];
        func_0x000107c61434(ppppppcVar8);
        func_0x000107c61430(ppppppcVar20,2);
        ppppppcVar23 = (code ******)((long)unaff_x20 + _DAT_112ee7b38);
        ppppppcVar14 = (code ******)0x0;
        ppppppcVar15 = (code ******)0x0;
        func_0x000107c61428(ppppppcVar23,&pppppcStack_88);
        ppppppcVar20 = (code ******)*ppppppcVar23;
        ppppppcVar9 = ppppppcVar8;
        if (ppppppcVar20 == (code ******)0x0) {
          func_0x00010006c090(ppppppcVar27,ppppppcVar26);
        }
        else {
          ppppppcVar23 = (code ******)ppppppcVar23[1];
          func_0x000107c6157c(ppppppcVar23);
          (*(code *)ppppppcVar20)(param_3,ppppppcVar8);
          func_0x00010006c090(ppppppcVar27,ppppppcVar26);
          func_0x000100d18c34(ppppppcVar20,ppppppcVar23);
          param_3 = ppppppcVar23;
        }
LAB_102a9a364:
        func_0x000107c6142c();
        ppppppcVar16 = ppppppcVar9;
        ppppppcVar19 = param_3;
        ppppppcVar18 = ppppppcVar5;
        goto LAB_102a99ccc;
      }
LAB_102a9a258:
      func_0x000107c61430(ppppppcVar18,2);
      ppppppcVar16 = param_1;
      ppppppcVar23 = unaff_x20;
LAB_102a9a260:
      func_0x00010006c090(ppppppcVar27,ppppppcVar26);
      ppppppcVar8 = ppppppcVar27;
      ppppppcVar19 = ppppppcVar18;
      ppppppcVar18 = ppppppcVar5;
      goto LAB_102a99ccc;
    }
    ppppppcVar5 = (code ******)0xeb00000000746e65;
    uVar6 = 0x76655f736e656c2f;
    if (((ppppppcVar20 != (code ******)0x76655f736e656c2f) ||
        (ppppppcVar18 != (code ******)0xeb00000000746e65)) &&
       (ppppppcVar14 = ppppppcVar20, ppppppcVar15 = ppppppcVar18, func_0x000107c605b8(),
       (uVar6 & 1) == 0)) {
      uVar6 = 0;
      if (((ppppppcVar20 == (code ******)0xd000000000000012) &&
          (ppppppcVar18 == (code ******)0x800000010f0e6090)) ||
         (ppppppcVar14 = ppppppcVar20, ppppppcVar15 = ppppppcVar18, func_0x000107c605b8(),
         (uVar6 & 1) != 0)) {
        func_0x000107c6142c(ppppppcVar18);
        uVar21 = *(undefined8 *)((long)unaff_x20 + _DAT_112ee7b60);
        *(code *******)((long)unaff_x20 + _DAT_112ee7b60) = param_1;
        func_0x000107c61174();
        func_0x000107c61170(uVar21);
        puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_112ee7b68);
        ppppppcVar23 = (code ******)*puVar1;
        ppppppcVar20 = (code ******)puVar1[1];
        *puVar1 = param_2;
        puVar1[1] = param_3;
        func_0x000107c6157c();
        func_0x000100d18c34(ppppppcVar23,ppppppcVar20);
        ppppppcVar8 = (code ******)(ulong)*(byte *)((long)unaff_x20 + _DAT_112ee7b88);
        ppppppcVar16 = param_1;
        ppppppcVar19 = unaff_x20;
        if (*(byte *)((long)unaff_x20 + _DAT_112ee7b88) != 4) {
          ppppppcVar20 = (code ******)0x0;
          FUN_102a9954c();
        }
        goto LAB_102a99ccc;
      }
      ppppppcVar26 = (code ******)0x800000010f0e60b0;
      uVar6 = 0xd000000000000011;
      if (((ppppppcVar20 == (code ******)0xd000000000000011) &&
          (ppppppcVar18 == (code ******)0x800000010f0e60b0)) ||
         (ppppppcVar14 = ppppppcVar20, ppppppcVar15 = ppppppcVar18, func_0x000107c605b8(),
         (uVar6 & 1) != 0)) {
        func_0x000107c6142c(ppppppcVar18);
        func_0x000107c3eb80();
        func_0x000107c61180();
        ppppppcVar16 = param_1;
        if (ppppppcVar8 == (code ******)0x0) goto LAB_102a99ccc;
        ppppppcVar27 = ppppppcVar8;
        func_0x000107c5ee30();
        func_0x000107c61170(ppppppcVar8);
        ppppppcVar5 = (code ******)0x0;
        func_0x000107c5eb24();
        func_0x000107c613fc();
        func_0x000107c5eb20();
        ppppppcVar15 = (code ******)0x112d550a0;
        func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
        uVar21 = 0x112db3e38;
        FUN_102a9b8d0(0x112db3e38,0x112d550a0,&UNK_10d91c290,PTR___sSSSesWP_11034daa8);
        ppppppcVar14 = ppppppcVar26;
        func_0x000107c5eb1c(&pppppcStack_88,ppppppcVar15,ppppppcVar27,ppppppcVar26,ppppppcVar15,
                            uVar21);
        func_0x000107c61574(ppppppcVar5);
        ppppppcVar18 = (code ******)pppppcStack_88;
        if ((code *****)pppppcStack_88[2] != (code *****)0x0) {
          func_0x000107c61434(pppppcStack_88);
          lVar3 = 0x65646f4d736e656c;
          uVar6 = 0;
          func_0x000100029284();
          if ((uVar6 & 1) == 0) {
LAB_102a9abdc:
            ppppppcVar20 = (code ******)0x0;
            param_1 = ppppppcVar16;
            unaff_x20 = ppppppcVar23;
            goto LAB_102a9a258;
          }
          ppppppcVar16 = (code ******)ppppppcVar18[7][lVar3 * 2];
          ppppppcVar20 = (code ******)(ppppppcVar18[7] + lVar3 * 2)[1];
          func_0x000107c61434(ppppppcVar20);
          func_0x000107c61430(ppppppcVar18,2);
          ppppppcVar10 = ppppppcVar16;
          FUN_102a9b364(ppppppcVar16,ppppppcVar20);
          if (((uint)ppppppcVar10 & 0xff) != 4) {
            ppppppcVar20 = (code ******)((long)unaff_x20 + _DAT_112ee7b30);
            ppppppcVar14 = (code ******)0x0;
            ppppppcVar15 = (code ******)0x0;
            func_0x000107c61428(ppppppcVar20,&pppppcStack_88);
            ppppppcVar19 = ppppppcVar20;
            func_0x000107c61618();
            ppppppcVar16 = ppppppcVar10;
            if (ppppppcVar19 == (code ******)0x0) goto LAB_102a9a260;
            ppppppcVar20 = (code ******)ppppppcVar20[1];
            ppppppcVar18 = ppppppcVar19;
            func_0x000107c614f0();
            ppppppcVar14 = ppppppcVar20;
            (*(code *)ppppppcVar20[1])(ppppppcVar10,ppppppcVar18);
LAB_102a9a534:
            func_0x00010006c090(ppppppcVar27,ppppppcVar26);
            ppppppcVar8 = ppppppcVar19;
            func_0x000107c615e8();
            ppppppcVar18 = ppppppcVar5;
            goto LAB_102a99ccc;
          }
          goto LAB_102a9a260;
        }
LAB_102a9abd0:
        ppppppcVar18 = (code ******)pppppcStack_88;
        ppppppcVar20 = (code ******)0x0;
        func_0x000107c6142c(pppppcStack_88);
        goto LAB_102a9a260;
      }
      uVar6 = 0xd000000000000013;
      if (((ppppppcVar20 == (code ******)0xd000000000000013) &&
          (ppppppcVar18 == (code ******)0x800000010f0e60d0)) ||
         (ppppppcVar14 = ppppppcVar20, ppppppcVar15 = ppppppcVar18, func_0x000107c605b8(),
         (uVar6 & 1) != 0)) {
        func_0x000107c6142c(ppppppcVar18);
        ppppppcVar19 = (code ******)((long)unaff_x20 + _DAT_112ee7b40);
        ppppppcVar14 = (code ******)0x0;
        ppppppcVar15 = (code ******)0x0;
        ppppppcVar8 = ppppppcVar19;
        func_0x000107c61428(ppppppcVar19,&pppppcStack_88);
        ppppppcVar20 = (code ******)*ppppppcVar19;
        if (ppppppcVar20 == (code ******)0x0) goto LAB_102a99ccc;
        ppppppcVar19 = (code ******)ppppppcVar19[1];
        ppppppcVar10 = ppppppcVar19;
        func_0x000107c6157c();
        (*(code *)ppppppcVar20)();
        ppppppcVar8 = ppppppcVar20;
        func_0x000100d18c34(ppppppcVar20,ppppppcVar19);
        if (ppppppcVar10 == (code ******)0x0) goto LAB_102a99ccc;
        uVar21 = 0;
        func_0x000107c5eb54();
        func_0x000107c613fc();
        func_0x000107c5eb50();
        apppppcStack_98[0] = (code *****)ppppppcVar10;
        FUN_102a9b890();
        puVar13 = &UNK_110590aa8;
        ppppppcVar26 = apppppcStack_98;
        func_0x000107c5eb4c(ppppppcVar26,&UNK_110590aa8);
        func_0x000107c6142c(ppppppcVar10);
        func_0x000107c61574(uVar21);
        func_0x000107c5d7e0(param_1);
        func_0x000107c61180();
        func_0x000107c5edb4(ppppppcVar27);
        func_0x000107c61170(param_1);
        ppppppcVar20 = (code ******)PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8();
        param_1 = (code ******)PTR_PTR_1126b1ce0;
        func_0x000107c610f8();
        ppppppcVar24 = ppppppcVar26;
        func_0x00010006c00c(ppppppcVar26,puVar13);
        func_0x000107c5ed90();
        uVar21 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        ppppppcVar19 = ppppppcVar20;
        func_0x000107c5f9dc(ppppppcVar20,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(ppppppcVar20);
        ppppppcVar20 = ppppppcVar26;
        func_0x000107c5ee20(ppppppcVar26,puVar13);
        func_0x00010006c090(ppppppcVar26,puVar13);
        ppppppcVar15 = (code ******)0xc8;
        ppppppcVar14 = ppppppcVar24;
        func_0x000107c4913c();
        func_0x000107c61170(ppppppcVar24);
        func_0x000107c61170(uVar21);
        func_0x000107c61170(ppppppcVar19);
        func_0x000107c61170(ppppppcVar20);
        func_0x00010006c090(ppppppcVar26,puVar13);
        (*(code *)ppppppcVar23)(ppppppcVar27,lVar4);
        ppppppcVar8 = ppppppcVar27;
        ppppppcVar16 = param_1;
        ppppppcVar18 = ppppppcVar26;
        if (param_1 == (code ******)0x0) goto LAB_102a99ccc;
        goto LAB_102a99cb8;
      }
      ppppppcVar26 = (code ******)0x800000010f0e60f0;
      ppppppcVar19 = (code ******)0xd00000000000001a;
      if ((ppppppcVar20 == (code ******)0xd00000000000001a) &&
         (ppppppcVar18 == (code ******)0x800000010f0e60f0)) {
        func_0x000107c6142c(0x800000010f0e60f0);
        ppppppcVar19 = ppppppcVar17;
LAB_102a9a858:
        func_0x000107c3eb80();
        func_0x000107c61180();
        ppppppcVar8 = param_1;
        if (param_1 == (code ******)0x0) goto LAB_102a99ccc;
        ppppppcVar27 = param_1;
        func_0x000107c5ee30();
        func_0x000107c61170(param_1);
        ppppppcVar5 = (code ******)0x0;
        func_0x000107c5eb24();
        func_0x000107c613fc();
        func_0x000107c5eb20();
        ppppppcVar15 = (code ******)0x112ee5e30;
        func_0x0001000285a8(0x112ee5e30,&UNK_10db11220);
        uVar21 = 0x112ee7be0;
        FUN_102a9b8d0(0x112ee7be0,0x112ee5e30,&UNK_10db11220,PTR___sSiSesWP_11034dee0);
        ppppppcVar14 = ppppppcVar26;
        func_0x000107c5eb1c(&pppppcStack_88,ppppppcVar15,ppppppcVar27,ppppppcVar26,ppppppcVar15,
                            uVar21);
        func_0x000107c61574(ppppppcVar5);
        ppppppcVar18 = (code ******)pppppcStack_88;
        if ((code *****)pppppcStack_88[2] != (code *****)0x0) {
          func_0x000107c61434(pppppcStack_88);
          lVar3 = 0x49746375646f7270;
          uVar6 = 0;
          func_0x000100029284();
          if ((uVar6 & 1) == 0) goto LAB_102a9abdc;
          ppppppcVar16 = (code ******)ppppppcVar18[7][lVar3];
          func_0x000107c61430(ppppppcVar18,2);
          ppppppcVar20 = (code ******)((long)unaff_x20 + _DAT_112ee7b28);
          ppppppcVar14 = (code ******)0x0;
          ppppppcVar15 = (code ******)0x0;
          func_0x000107c61428(ppppppcVar20,&pppppcStack_88);
          ppppppcVar19 = ppppppcVar20;
          func_0x000107c61618();
          if (ppppppcVar19 != (code ******)0x0) {
            ppppppcVar20 = (code ******)ppppppcVar20[1];
            ppppppcVar18 = ppppppcVar19;
            func_0x000107c614f0();
            ppppppcVar14 = ppppppcVar20;
            (*(code *)ppppppcVar20[3])(ppppppcVar16,ppppppcVar18);
            goto LAB_102a9a534;
          }
          goto LAB_102a9a260;
        }
        goto LAB_102a9abd0;
      }
      ppppppcVar14 = ppppppcVar20;
      ppppppcVar15 = ppppppcVar18;
      func_0x000107c605b8();
      func_0x000107c6142c(ppppppcVar18);
      if (((ulong)ppppppcVar19 & 1) != 0) goto LAB_102a9a858;
      pppppcStack_88 = (code *****)0x0;
      pppppcStack_80 = (code *****)0xe000000000000000;
      func_0x000107c602fc(0x11);
      func_0x000107c6142c(pppppcStack_80);
      pppppcStack_88 = (code *****)0x2064696c61766e49;
      pppppcStack_80 = (code *****)0xef203a6574756f72;
      ppppppcVar20 = param_1;
      func_0x000107c5d7e0(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(ppppppcVar27);
      func_0x000107c61170(ppppppcVar20);
      func_0x000107c5ed70();
      (*(code *)ppppppcVar23)(ppppppcVar27,lVar4);
      func_0x000107c5fb78(ppppppcVar20,ppppppcVar26);
      ppppppcVar16 = ppppppcVar26;
      func_0x000107c6142c();
      pppppcVar2 = pppppcStack_80;
      pppppcVar25 = pppppcStack_88;
      func_0x000102a9b0cc();
      ppppppcVar20 = (code ******)&UNK_110591148;
      ppppppcVar14 = (code ******)0x0;
      ppppppcVar15 = (code ******)0x0;
      func_0x000107c613f8();
      *ppppppcVar16 = pppppcVar25;
      ppppppcVar16[1] = pppppcVar2;
      func_0x000107c61654();
      ppppppcVar24 = param_1;
      goto LAB_102a99ca4;
    }
    func_0x000107c6142c(ppppppcVar18);
    func_0x000107c3eb80();
    func_0x000107c61180();
    ppppppcVar16 = param_1;
    if (ppppppcVar8 == (code ******)0x0) goto LAB_102a99ccc;
    ppppppcVar27 = ppppppcVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(ppppppcVar8);
    uVar7 = 0;
    func_0x000107c5eb24();
    func_0x000107c613fc();
    func_0x000107c5eb20();
    ppppppcVar15 = (code ******)0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    uVar21 = 0x112db3e38;
    FUN_102a9b8d0(0x112db3e38,0x112d550a0,&UNK_10d91c290,PTR___sSSSesWP_11034daa8);
    ppppppcVar14 = ppppppcVar5;
    func_0x000107c5eb1c(&pppppcStack_88,ppppppcVar15,ppppppcVar27,ppppppcVar5,ppppppcVar15,uVar21);
    func_0x000107c61574(uVar7);
    ppppppcVar20 = (code ******)pppppcStack_88;
    ppppppcVar19 = *(code *******)((long)unaff_x20 + _DAT_112ee7b78);
    if (ppppppcVar19 != (code ******)0x0) {
      FUN_102a96960(pppppcStack_88);
    }
    if (ppppppcVar20[2] == (code *****)0x0) {
      func_0x000107c6142c(ppppppcVar20);
LAB_102a9a558:
      ppppppcVar8 = ppppppcVar27;
      func_0x00010006c090(ppppppcVar27,ppppppcVar5);
      ppppppcVar23 = ppppppcVar27;
      ppppppcVar18 = ppppppcVar5;
      goto LAB_102a99ccc;
    }
    func_0x000107c61434(ppppppcVar20);
    lVar4 = 0x6e657645736e656c;
    uVar6 = 0;
    func_0x000100029284();
    if ((uVar6 & 1) == 0) {
      func_0x000107c61430(ppppppcVar20,2);
      ppppppcVar19 = ppppppcVar20;
      goto LAB_102a9a558;
    }
    ppppppcVar23 = (code ******)ppppppcVar20[7][lVar4 * 2];
    ppppppcVar8 = (code ******)(ppppppcVar20[7] + lVar4 * 2)[1];
    func_0x000107c61434(ppppppcVar8);
    ppppppcVar15 = ppppppcVar20;
    func_0x000107c61430(ppppppcVar20,2);
    pppppcStack_88 = (code *****)ppppppcVar23;
    pppppcStack_80 = (code *****)ppppppcVar8;
    func_0x000107c5fb04(ppppppcVar10);
    func_0x000100e8b654();
    param_3 = (code ******)0x0;
    ppppppcVar9 = ppppppcVar10;
    ppppppcVar14 = (code ******)PTR___sSSN_11034da80;
    func_0x000107c60214();
    (*(code *)ppppppcVar24[1])(ppppppcVar10,lVar3);
    ppppppcVar23 = ppppppcVar8;
    if (0xe < (ulong)param_3 >> 0x3c) {
      func_0x00010006c090(ppppppcVar27,ppppppcVar5);
      goto LAB_102a9a364;
    }
    ppppppcVar16 = (code ******)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    ppppppcVar26 = ppppppcVar9;
    func_0x000107c5ee20(ppppppcVar9,param_3);
    pppppcStack_88 = (code *****)0x0;
    ppppppcVar15 = (code ******)0x0;
    ppppppcVar14 = ppppppcVar26;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(ppppppcVar26);
    ppppppcVar20 = (code ******)pppppcStack_88;
    ppppppcVar18 = ppppppcVar26;
    if (ppppppcVar16 == (code ******)0x0) {
      ppppppcVar16 = (code ******)pppppcStack_88;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(ppppppcVar16);
      func_0x000107c61654();
      func_0x00010006c090(ppppppcVar27,ppppppcVar5);
      func_0x000107c6142c(ppppppcVar8);
      func_0x0001000b44c0(ppppppcVar9,param_3);
      ppppppcVar8 = ppppppcVar20;
      func_0x000107c614ac();
      ppppppcVar16 = ppppppcVar20;
      ppppppcVar19 = param_3;
      ppppppcVar24 = ppppppcVar9;
      goto LAB_102a99ccc;
    }
    func_0x000107c61174();
    func_0x000107c60234(&pppppcStack_88,ppppppcVar16);
    func_0x000107c6142c(ppppppcVar8);
    func_0x0001000b44c0(ppppppcVar9,param_3);
    func_0x000107c615e8(ppppppcVar16);
    ppppppcVar15 = (code ******)0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    uVar6 = 0;
    ppppppcVar10 = &pppppcStack_88;
    ppppppcVar14 = (code ******)(PTR___sypN_11034f1a8 + 8);
    func_0x000107c6147c();
    pppppcVar25 = apppppcStack_98[0];
    ppppppcVar20 = ppppppcVar16;
    if ((uVar6 & 1) == 0) {
LAB_102a9a828:
      func_0x00010006c090(ppppppcVar27,ppppppcVar5);
      ppppppcVar8 = ppppppcVar27;
      ppppppcVar16 = ppppppcVar9;
      ppppppcVar19 = param_3;
      goto LAB_102a99ccc;
    }
    param_3 = (code ******)apppppcStack_98[0];
    FUN_102a9b3c8();
    func_0x000107c6142c(pppppcVar25);
    ppppppcVar20 = (code ******)pppppcVar25;
    if (param_3 == (code ******)0x0) goto LAB_102a9a828;
    ppppppcVar20 = *(code *******)((long)unaff_x20 + _DAT_112ee7b80);
    if (ppppppcVar20 == (code ******)0x0) {
      func_0x000107c61170(param_3);
      goto LAB_102a9a828;
    }
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (param_1 == (code ******)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(ppppppcVar10);
      ppppppcVar23 = ppppppcVar10;
    }
    ppppppcVar14 = param_1;
    ppppppcVar15 = param_3;
    func_0x000107c590fc(ppppppcVar20);
    func_0x000107c61170(param_3);
    func_0x00010006c090(ppppppcVar27,ppppppcVar5);
  }
  ppppppcVar8 = param_1;
  func_0x000107c61170();
  ppppppcVar16 = param_1;
  ppppppcVar19 = param_3;
  ppppppcVar18 = ppppppcVar26;
LAB_102a99ccc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  ppppppcVar26 = ppppppcVar17 + -0xe;
  ppppppcVar17[-8] = (code *****)ppppppcVar18;
  ppppppcVar17[-7] = (code *****)ppppppcVar24;
  ppppppcVar17[-6] = (code *****)ppppppcVar23;
  ppppppcVar17[-5] = (code *****)ppppppcVar20;
  ppppppcVar17[-4] = (code *****)ppppppcVar19;
  ppppppcVar17[-3] = (code *****)ppppppcVar16;
  ppppppcVar17[-2] = (code *****)&stack0xfffffffffffffff0;
  ppppppcVar17[-1] = (code *****)FUN_102a9abe8;
  func_0x000107c60bc4();
  ppppcVar11 = (code ****)&UNK_110591060;
  func_0x000107c613fc(&UNK_110591060,0x18,7);
  ppppcVar11[2] = (code ***)ppppppcVar15;
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar12 = "handle(with:completion:)";
  func_0x0001000c10c0("handle(with:completion:)");
  func_0x000107c61180();
  pppppcVar25 = (code *****)&UNK_110591088;
  func_0x000107c613fc(&UNK_110591088,0x30,7);
  pppppcVar25[2] = (code ****)ppppppcVar8;
  pppppcVar25[3] = (code ****)ppppppcVar14;
  pppppcVar25[4] = (code ****)FUN_102a9b088;
  pppppcVar25[5] = ppppcVar11;
  ppppppcVar17[-10] = (code *****)0x102a9bc5c;
  ppppppcVar17[-9] = pppppcVar25;
  ppppppcVar17[-0xe] = (code *****)PTR___NSConcreteStackBlock_11034bd00;
  ppppppcVar17[-0xd] = (code *****)0x42000000;
  ppppppcVar17[-0xc] = (code *****)&UNK_1000f6b44;
  ppppppcVar17[-0xb] = (code *****)&UNK_1105910a0;
  func_0x000107c60bc4(ppppppcVar17 + -0xe);
  pppppcVar25 = ppppppcVar17[-9];
  func_0x000107c61174(ppppppcVar14);
  func_0x000107c61174(ppppppcVar8);
  func_0x000107c6157c(ppppcVar11);
  func_0x000107c61574(pppppcVar25);
  func_0x000107c4e524(pcVar12);
  func_0x000107c60bd0(ppppppcVar26);
  func_0x000107c61170(ppppppcVar14);
  func_0x000107c61170(ppppppcVar8);
  func_0x000107c61574(ppppcVar11);
  func_0x000107c615e8(pcVar12);
  return;
}



/* Entry: 102a9abe8; end: 102a9ad3f; -[SCShoppingLensURIHandler handleWithRequest:completion:] */

void FUN_102a9abe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c60bc4();
  puVar1 = &UNK_110591060;
  func_0x000107c613fc(&UNK_110591060,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar2 = "handle(with:completion:)";
  func_0x0001000c10c0("handle(with:completion:)");
  func_0x000107c61180();
  puVar3 = &UNK_110591088;
  func_0x000107c613fc(&UNK_110591088,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(code **)(puVar3 + 0x20) = FUN_102a9b088;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  uStack_50 = 0x102a9bc5c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105910a0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 102a9ad40; end: 102a9ad6b; -[SCShoppingLensURIHandler reset] */

void FUN_102a9ad40(void)

{
  return;
}



/* Entry: 102a9ad6c; end: 102a9adb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a9ad6c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112ee7b88) = 4;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee7b60);
  *(undefined8 *)(unaff_x20 + _DAT_112ee7b60) = 0;
  func_0x000107c61170(uVar4);
  plVar1 = (long *)(unaff_x20 + _DAT_112ee7b68);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 102a9adb4; end: 102a9aeff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a9adb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7b28;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar2 = unaff_x20 + _DAT_112ee7b30;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ee7b38);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ee7b40);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ee7b48);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee7b50) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ee7b58);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee7b60) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ee7b68);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee7b70) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ee7b88) = 4;
  func_0x000107c61428(lVar1,auStack_58,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ee7b78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ee7b80) = param_4;
  FUN_102a9af00();
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a9af00; end: 102a9af5f;  */

void FUN_102a9af00(void)

{
  func_0x000107c61168(&PTR_PTR_112883f70);
  return;
}



/* Entry: 102a9af60; end: 102a9af87;  */

void FUN_102a9af60(void)

{
  long unaff_x20;
  
  FUN_102a99b0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102a9af88; end: 102a9b047;  */

void FUN_102a9af88(long param_1,long param_2)

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



/* Entry: 102a9b048; end: 102a9b087;  */

void FUN_102a9b048(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13640;
  func_0x000107c61520(&UNK_10db13640,&UNK_1105911d8);
  puRam0000000112ee7bc8 = puVar1;
  return;
}



/* Entry: 102a9b088; end: 102a9b097;  */

void FUN_102a9b088(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102a9b094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102a9b098; end: 102a9b10b;  */

void FUN_102a9b098(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a9b10c; end: 102a9b363;  */

/* WARNING: Removing unreachable block (ram,0x000102a9b214) */

undefined * FUN_102a9b10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  alStack_80[0] = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5eb3c();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  (**(code **)(lVar12 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___s10Foundation11JSONEncoderC19KeyEncodingStrategyO18convertToSnakeCaseyA2EmFWC_110350398
             ,lVar1);
  func_0x000107c5eb40(lVar11);
  FUN_102a9b930();
  puVar8 = &UNK_110590c68;
  puVar3 = &uStack_70;
  func_0x000107c5eb4c(puVar3,&UNK_110590c68,lVar11);
  func_0x000107c5d7e0(param_3);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar10);
  func_0x000107c61170(param_3);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar5 = puVar4;
  func_0x000107c5ed90();
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar7 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
  puVar13 = (undefined8 *)0x0;
  if ((ulong)puVar8 >> 0x3c < 0xf) {
    puVar13 = puVar3;
    func_0x000107c5ee20(puVar3,puVar8);
    func_0x0001000b44c0(puVar3,puVar8);
  }
  puVar8 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  func_0x000107c4913c();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar13);
  (**(code **)(lVar9 + 8))(lVar10,alStack_80[0]);
  return puVar8;
}



/* Entry: 102a9b364; end: 102a9b3c7;  */

ulong FUN_102a9b364(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 102a9b3c8; end: 102a9b67f;  */

void FUN_102a9b3c8(long param_1)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char cStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  uVar12 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  func_0x000107c61434();
  lVar4 = 0x6e656d6563616c70;
  uVar11 = 0;
  func_0x000100029284(0x6e656d6563616c70);
  lVar10 = param_1;
  if ((uVar11 & 1) != 0) {
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,auStack_60);
    func_0x000107c6142c(param_1);
    uVar5 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    puVar1 = PTR___sypN_11034f1a8;
    func_0x000107c6147c(&cStack_70,auStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar4 = CONCAT71(uStack_6f,cStack_70);
    lVar10 = lVar4;
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x20);
      lVar10 = *(long *)(lVar4 + 0x28);
      func_0x000107c61434(lVar10);
      func_0x000107c6142c(lVar4);
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x000107c61434(param_1);
        lVar4 = 0x676e696b63617274;
        uVar12 = 0xed00006574617453;
        func_0x000100029284(0x676e696b63617274);
        if ((uVar12 & 1) != 0) {
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,auStack_60);
          func_0x000107c6142c(param_1);
          func_0x000107c6147c(&cStack_70,auStack_60,puVar1 + 8,PTR___sSbN_11034dd40,6);
          cVar2 = cStack_70;
          if (((uVar6 & 1) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_102a9b64c;
          func_0x000107c61434(param_1);
          lVar4 = 0x4c746375646f7270;
          uVar12 = 0xed0000646564616f;
          func_0x000100029284(0x4c746375646f7270);
          if ((uVar12 & 1) != 0) {
            func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,auStack_60);
            func_0x000107c6142c(param_1);
            func_0x000107c6147c(&cStack_70,auStack_60,puVar1 + 8,PTR___sSbN_11034dd40,6);
            cVar3 = cStack_70;
            if (((uVar7 & 1) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_102a9b64c;
            func_0x000107c61434(param_1);
            lVar4 = 0x65646f4d736e656c;
            uVar12 = 0;
            func_0x000100029284(0x65646f4d736e656c);
            if ((uVar12 & 1) != 0) {
              func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,auStack_60);
              func_0x000107c6142c(param_1);
              func_0x000107c6147c(&cStack_70,auStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
              if ((uVar8 & 1) != 0) {
                uVar9 = CONCAT71(uStack_6f,cStack_70);
                FUN_102a9b364(uVar9,uStack_68);
                if (((((uint)uVar9 & 0xff) - 2 < 2) && (cVar2 != '\0')) && (cVar3 != '\0')) {
                  func_0x0001042d67a4(uVar5,lVar10);
                  func_0x000107c6142c(lVar10);
                  uVar9 = 0;
                  func_0x0001042d857c(0);
                  func_0x000107c610f8();
                  func_0x0001042d7fdc(uVar5,1,uVar9);
                  return;
                }
              }
              goto LAB_102a9b64c;
            }
          }
        }
        func_0x000107c6142c(lVar10);
        lVar10 = param_1;
      }
    }
  }
LAB_102a9b64c:
  func_0x000107c6142c(lVar10);
  return;
}



/* Entry: 102a9b680; end: 102a9b88f;  */

undefined * FUN_102a9b680(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uStack_68 = param_1;
  func_0x000107c614b0(param_1);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = &uStack_78;
  func_0x000107c6147c(puVar3,&uStack_68,uVar2,&UNK_110591148,6);
  if ((int)puVar3 == 0) {
    func_0x000107c614cc(param_1,auStack_80,auStack_98);
    func_0x000107c60640(uStack_90,lStack_88);
  }
  else {
    lStack_88 = lStack_70;
    uStack_90 = uStack_78;
    if (lStack_70 == 0) {
      lStack_88 = -0x7ffffffef0f19e90;
      uStack_90 = 0xd000000000000012;
    }
  }
  func_0x000107c5d7e0(param_2);
  func_0x000107c61180();
  func_0x000107c5edb4(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(param_2);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar5 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar6 = puVar5;
  func_0x000107c5ed90();
  func_0x000107c5fadc(uStack_90,lStack_88);
  func_0x000107c6142c(lStack_88);
  puVar7 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
  func_0x000107c4913c(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(puVar7);
  (**(code **)(lVar8 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return puVar5;
}



/* Entry: 102a9b890; end: 102a9b8cf;  */

void FUN_102a9b890(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12ec8;
  func_0x000107c61520(&UNK_10db12ec8,&UNK_110590aa8);
  puRam0000000112ee7be8 = puVar1;
  return;
}



/* Entry: 102a9b8d0; end: 102a9b92f;  */

void FUN_102a9b8d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puStack_30 = PTR___sSSSesWP_11034daa8;
    puVar1 = PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0;
    uStack_28 = param_4;
    func_0x000107c61520(PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0,param_2,&puStack_30);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102a9b930; end: 102a9b96f;  */

void FUN_102a9b930(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db130a4;
  func_0x000107c61520(&UNK_10db130a4,&UNK_110590c68);
  puRam0000000112ee7bf0 = puVar1;
  return;
}



/* Entry: 102a9b970; end: 102a9b9af;  */

undefined8 * FUN_102a9b970(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a9b9b0; end: 102a9bb8f;  */

int FUN_102a9b9b0(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 102a9bb90; end: 102a9bbcf;  */

void FUN_102a9bb90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db135d8;
  func_0x000107c61520(&UNK_10db135d8,&UNK_1105911d8);
  puRam0000000112ee7c80 = puVar1;
  return;
}



/* Entry: 102a9bbd0; end: 102a9bbd3;  */

void FUN_102a9bbd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13570;
  func_0x000107c61520(&UNK_10db13570,&UNK_1105911d8);
  puRam0000000112ee7c88 = puVar1;
  return;
}



/* Entry: 102a9bbd4; end: 102a9bc13;  */

void FUN_102a9bbd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13570;
  func_0x000107c61520(&UNK_10db13570,&UNK_1105911d8);
  puRam0000000112ee7c88 = puVar1;
  return;
}



/* Entry: 102a9bc14; end: 102a9bc17;  */

void FUN_102a9bc14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13548;
  func_0x000107c61520(&UNK_10db13548,&UNK_1105911d8);
  puRam0000000112ee7c90 = puVar1;
  return;
}



/* Entry: 102a9bc18; end: 102a9bc57;  */

void FUN_102a9bc18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13548;
  func_0x000107c61520(&UNK_10db13548,&UNK_1105911d8);
  puRam0000000112ee7c90 = puVar1;
  return;
}



/* Entry: 102a9bc58; end: 102a9bca7;  */

void FUN_102a9bc58(long param_1,long param_2)

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



/* Entry: 102a9bca8; end: 102a9bf77;  */

void FUN_102a9bca8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x6563616c706572;
  if (cVar4 != '\x01') {
    uVar3 = 0x65766f6d6572;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646461;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe300000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a9bf78; end: 102a9bfcb;  */

void FUN_102a9bf78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x6563616c706572;
  if (cVar4 != '\x01') {
    uVar3 = 0x65766f6d6572;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646461;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe300000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102a9bfcc; end: 102a9c027;  */

void FUN_102a9bfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000102a9da70();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 102a9c028; end: 102a9c073;  */

void FUN_102a9c028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102a9da70();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 102a9c074; end: 102a9c07f;  */

void FUN_102a9c074(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar6 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar2 = 0x6574617473;
  if (bVar6 != 5) {
    uVar2 = 0x6e6f697469736f70;
  }
  uVar3 = 0xe500000000000000;
  if (bVar6 != 5) {
    uVar3 = 0xe800000000000000;
  }
  uVar1 = 0x7373616c63;
  if (bVar6 != 3) {
    uVar1 = 0x6f666e69;
  }
  uVar4 = 0xe500000000000000;
  if (bVar6 != 3) {
    uVar4 = 0xe400000000000000;
  }
  if (bVar6 < 5) {
    uVar3 = uVar4;
    uVar2 = uVar1;
  }
  uVar1 = 0xe900000000000070;
  uVar4 = 0x6d617473656d6974;
  if (bVar6 != 1) {
    uVar1 = 0xe600000000000000;
    uVar4 = 0x6e69616d6f64;
  }
  uVar5 = 0xe90000000000006e;
  uVar7 = 0x6f6974617265706f;
  if (bVar6 != 0) {
    uVar5 = uVar1;
    uVar7 = uVar4;
  }
  if (bVar6 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a9c080; end: 102a9c16b;  */

void FUN_102a9c080(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar6 = *unaff_x20;
  uVar2 = 0x6574617473;
  if (bVar6 != 5) {
    uVar2 = 0x6e6f697469736f70;
  }
  uVar3 = 0xe500000000000000;
  if (bVar6 != 5) {
    uVar3 = 0xe800000000000000;
  }
  uVar1 = 0x7373616c63;
  if (bVar6 != 3) {
    uVar1 = 0x6f666e69;
  }
  uVar4 = 0xe500000000000000;
  if (bVar6 != 3) {
    uVar4 = 0xe400000000000000;
  }
  if (bVar6 < 5) {
    uVar3 = uVar4;
    uVar2 = uVar1;
  }
  uVar1 = 0xe900000000000070;
  uVar4 = 0x6d617473656d6974;
  if (bVar6 != 1) {
    uVar1 = 0xe600000000000000;
    uVar4 = 0x6e69616d6f64;
  }
  uVar5 = 0xe90000000000006e;
  uVar7 = 0x6f6974617265706f;
  if (bVar6 != 0) {
    uVar5 = uVar1;
    uVar7 = uVar4;
  }
  if (bVar6 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar7;
  }
  func_0x000107c5fb58(param_1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102a9c16c; end: 102a9c173;  */

void FUN_102a9c16c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar6 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar2 = 0x6574617473;
  if (bVar6 != 5) {
    uVar2 = 0x6e6f697469736f70;
  }
  uVar3 = 0xe500000000000000;
  if (bVar6 != 5) {
    uVar3 = 0xe800000000000000;
  }
  uVar1 = 0x7373616c63;
  if (bVar6 != 3) {
    uVar1 = 0x6f666e69;
  }
  uVar4 = 0xe500000000000000;
  if (bVar6 != 3) {
    uVar4 = 0xe400000000000000;
  }
  if (bVar6 < 5) {
    uVar3 = uVar4;
    uVar2 = uVar1;
  }
  uVar1 = 0xe900000000000070;
  uVar4 = 0x6d617473656d6974;
  if (bVar6 != 1) {
    uVar1 = 0xe600000000000000;
    uVar4 = 0x6e69616d6f64;
  }
  uVar5 = 0xe90000000000006e;
  uVar7 = 0x6f6974617265706f;
  if (bVar6 != 0) {
    uVar5 = uVar1;
    uVar7 = uVar4;
  }
  if (bVar6 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a9c174; end: 102a9c19f;  */

void FUN_102a9c174(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000102a9c980(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102a9c1a0; end: 102a9c33b;  */

void FUN_102a9c1a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar6 = *unaff_x20;
  uVar2 = 0x6574617473;
  if (bVar6 != 5) {
    uVar2 = 0x6e6f697469736f70;
  }
  uVar3 = 0xe500000000000000;
  if (bVar6 != 5) {
    uVar3 = 0xe800000000000000;
  }
  uVar1 = 0x7373616c63;
  if (bVar6 != 3) {
    uVar1 = 0x6f666e69;
  }
  uVar4 = 0xe500000000000000;
  if (bVar6 != 3) {
    uVar4 = 0xe400000000000000;
  }
  if (bVar6 < 5) {
    uVar3 = uVar4;
    uVar2 = uVar1;
  }
  uVar1 = 0xe900000000000070;
  uVar4 = 0x6d617473656d6974;
  if (bVar6 != 1) {
    uVar1 = 0xe600000000000000;
    uVar4 = 0x6e69616d6f64;
  }
  uVar5 = 0xe90000000000006e;
  uVar7 = 0x6f6974617265706f;
  if (bVar6 != 0) {
    uVar5 = uVar1;
    uVar7 = uVar4;
  }
  if (bVar6 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar7;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 102a9c33c; end: 102a9c35f;  */

void FUN_102a9c33c(undefined1 *param_1,undefined1 param_2)

{
  func_0x000102a9c980();
  *param_1 = param_2;
  return;
}



/* Entry: 102a9c360; end: 102a9c377;  */

undefined1  [16] FUN_102a9c360(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a9c378; end: 102a9c3c7;  */

void FUN_102a9c378(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a9c7f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a9c3c8; end: 102a9c6af;  */

/* WARNING: Removing unreachable block (ram,0x000102a9c5a8) */

void FUN_102a9c3c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  code *pcVar6;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [120];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined1 uStack_51;
  
  lVar2 = 0x112ee7c98;
  func_0x0001000285a8(0x112ee7c98,&UNK_10db136a8);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar4);
  FUN_102a9c7f8();
  puVar3 = &UNK_1105914b0;
  func_0x000107c606ec(auStack_1e0 + -extraout_x8,&UNK_1105914b0,&UNK_1105914b0,param_1,uVar4,uVar1);
  auStack_1d8[0] = 0;
  uStack_160._0_1_ = *unaff_x20;
  func_0x000102a9c838();
  func_0x000107c60554(&uStack_160,auStack_1d8,lVar2,&UNK_110591420,puVar3);
  if (unaff_x21 == 0) {
    uStack_160._0_1_ = 1;
    func_0x000107c60550(*(undefined8 *)(unaff_x20 + 8),&uStack_160,lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_160._0_1_ = 2;
    func_0x000107c6053c(uVar4,*(undefined8 *)(unaff_x20 + 0x18),&uStack_160,lVar2);
    uStack_160 = CONCAT71(uStack_160._1_7_,unaff_x20[0x20]);
    auStack_1d8[0] = 3;
    func_0x000102a9c878();
    puVar5 = &uStack_160;
    func_0x000107c60530(puVar5,auStack_1d8,lVar2,&UNK_110591ad8,uVar4);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x38);
    auStack_1d8[0] = 4;
    func_0x000102a9c8b8();
    func_0x000107c60530(&uStack_160,auStack_1d8,lVar2,&UNK_110591cc8,puVar5);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_51 = 5;
    puVar5 = &uStack_e0;
    func_0x000102a9c7a8(puVar5,auStack_1d8);
    func_0x000102a9c8f8();
    func_0x000107c60530(&uStack_160,&uStack_51,lVar2,&UNK_110591ea0,puVar5);
    FUN_102a9c938(&uStack_160);
    uStack_160._0_1_ = 6;
    func_0x000107c60534((ulong)*(uint5 *)(unaff_x20 + 0xc0),&uStack_160,lVar2);
    pcVar6 = *(code **)(lVar7 + 8);
  }
  else {
    pcVar6 = *(code **)(lVar7 + 8);
  }
  (*pcVar6)(auStack_1e0 + -extraout_x8,lVar2);
  return;
}



/* Entry: 102a9c6b0; end: 102a9c72f;  */

void FUN_102a9c6b0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  
  FUN_102a9c9e4(&uStack_e8);
  if (unaff_x21 == 0) {
    param_1[0x15] = uStack_40;
    param_1[0x14] = uStack_48;
    param_1[0x17] = CONCAT35(uStack_2b,uStack_30);
    param_1[0x16] = uStack_38;
    *(ulong *)((long)param_1 + 0xbd) = CONCAT53(uStack_28,uStack_2b);
    param_1[0xd] = uStack_80;
    param_1[0xc] = uStack_88;
    param_1[0xf] = uStack_70;
    param_1[0xe] = uStack_78;
    param_1[0x11] = uStack_60;
    param_1[0x10] = uStack_68;
    param_1[0x13] = uStack_50;
    param_1[0x12] = uStack_58;
    param_1[5] = uStack_c0;
    param_1[4] = uStack_c8;
    param_1[7] = uStack_b0;
    param_1[6] = uStack_b8;
    param_1[9] = uStack_a0;
    param_1[8] = uStack_a8;
    param_1[0xb] = uStack_90;
    param_1[10] = uStack_98;
    param_1[1] = uStack_e0;
    *param_1 = uStack_e8;
    param_1[3] = uStack_d0;
    param_1[2] = uStack_d8;
  }
  return;
}



/* Entry: 102a9c730; end: 102a9c743;  */

void FUN_102a9c730(void)

{
  FUN_102a9c3c8();
  return;
}



/* Entry: 102a9c744; end: 102a9c7f7;  */

ulong FUN_102a9c744(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102a9c7f8; end: 102a9c937;  */

void FUN_102a9c7f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13924;
  func_0x000107c61520(&UNK_10db13924,&UNK_1105914b0);
  puRam0000000112ee7ca0 = puVar1;
  return;
}



/* Entry: 102a9c938; end: 102a9c9e3;  */

undefined8 FUN_102a9c938(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ee5e50;
  func_0x0001000285a8(0x112ee5e50,&UNK_10db11240);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102a9c9e4; end: 102a9ce3b;  */

/* WARNING: Removing unreachable block (ram,0x000102a9cca4) */
/* WARNING: Removing unreachable block (ram,0x000102a9cb3c) */
/* WARNING: Removing unreachable block (ram,0x000102a9cc00) */
/* WARNING: Removing unreachable block (ram,0x000102a9cc14) */
/* WARNING: Removing unreachable block (ram,0x000102a9cc28) */
/* WARNING: Removing unreachable block (ram,0x000102a9cd14) */
/* WARNING: Removing unreachable block (ram,0x000102a9cc2c) */
/* WARNING: Removing unreachable block (ram,0x000102a9cc44) */
/* WARNING: Removing unreachable block (ram,0x000102a9cadc) */
/* WARNING: Removing unreachable block (ram,0x000102a9cb40) */

void FUN_102a9c9e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  ulong uStack_350;
  undefined1 auStack_348 [200];
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined5 uStack_1c8;
  undefined3 uStack_1c3;
  undefined5 uStack_1c0;
  undefined1 uStack_1b2;
  undefined1 uStack_1b1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined4 uStack_78;
  undefined1 uStack_74;
  
  lVar3 = 0x112ee7dc0;
  func_0x0001000285a8(0x112ee7dc0,&UNK_10db13980);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102a9c7f8();
  puVar5 = &UNK_1105914b0;
  func_0x000107c606e0(auStack_348 + (-8 - extraout_x8),&UNK_1105914b0,&UNK_1105914b0,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    auStack_348[0] = 0;
    func_0x000102a9dab0();
    func_0x000107c60508(&uStack_280,&UNK_110591420,auStack_348,lVar3,&UNK_110591420,puVar5);
    uStack_138 = (undefined1)uStack_280;
    uStack_280._0_1_ = 1;
    puVar6 = &uStack_280;
    func_0x000107c60504(puVar6,lVar3);
    uStack_280 = CONCAT71(uStack_280._1_7_,2);
    puVar7 = &uStack_280;
    lVar4 = lVar3;
    puStack_130 = puVar6;
    func_0x000107c604f4();
    auStack_348[0] = 3;
    puStack_128 = puVar7;
    lStack_120 = lVar4;
    func_0x000102a9daf0();
    puVar5 = &UNK_110591ad8;
    func_0x000107c604e8(&uStack_280,&UNK_110591ad8,auStack_348,lVar3,&UNK_110591ad8,puVar7);
    uStack_118 = (undefined1)uStack_280;
    auStack_348[0] = 4;
    func_0x000102a9db30();
    puVar8 = &UNK_110591cc8;
    func_0x000107c604e8(&uStack_280,&UNK_110591cc8,auStack_348,lVar3,&UNK_110591cc8,puVar5);
    uStack_108 = puStack_278;
    uStack_110 = uStack_280;
    uStack_f8 = lStack_268;
    uStack_100 = puStack_270;
    uStack_1b1 = 5;
    func_0x000102a9db70();
    func_0x000107c604e8(&uStack_1b0,&UNK_110591ea0,&uStack_1b1,lVar3,&UNK_110591ea0,puVar8);
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_e8 = uStack_1a8;
    uStack_f0 = uStack_1b0;
    uStack_d8 = uStack_198;
    uStack_e0 = uStack_1a0;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    uStack_80 = (undefined5)uStack_140;
    uStack_7b = (undefined3)((ulong)uStack_140 >> 0x28);
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_1b2 = 6;
    puVar9 = &uStack_1b2;
    func_0x000107c604ec(puVar9,lVar3);
    uStack_350 = (ulong)puVar9 >> 0x20;
    (**(code **)(lVar10 + 8))(auStack_348 + (-8 - extraout_x8),lVar3);
    uStack_78 = SUB84(puVar9,0);
    uStack_74 = (undefined1)uStack_350;
    uStack_1d8 = uStack_90;
    uStack_1e0 = uStack_98;
    uStack_1c8 = uStack_80;
    uStack_1d0 = uStack_88;
    uStack_218 = uStack_d0;
    uStack_220 = uStack_d8;
    uStack_208 = uStack_c0;
    uStack_210 = uStack_c8;
    uStack_1f8 = uStack_b0;
    uStack_200 = uStack_b8;
    uStack_1e8 = uStack_a0;
    uStack_1f0 = uStack_a8;
    uStack_260 = CONCAT71(uStack_117,uStack_118);
    uStack_258 = uStack_110;
    uStack_248 = uStack_100;
    uStack_250 = uStack_108;
    uStack_238 = uStack_f0;
    uStack_240 = uStack_f8;
    uStack_228 = uStack_e0;
    uStack_230 = uStack_e8;
    uStack_280 = CONCAT71(uStack_137,uStack_138);
    puStack_278 = puStack_130;
    lStack_268 = lStack_120;
    puStack_270 = puStack_128;
    uStack_1c3 = uStack_7b;
    uStack_1c0 = (undefined5)(CONCAT17(uStack_74,CONCAT43(uStack_78,uStack_7b)) >> 0x18);
    FUN_102a8aeb0(&uStack_280,auStack_348);
    func_0x0001000834e4(param_2);
    func_0x000102a8aeec(&uStack_138);
    param_1[0x15] = uStack_1d8;
    param_1[0x14] = uStack_1e0;
    param_1[0x17] = CONCAT35(uStack_1c3,uStack_1c8);
    param_1[0x16] = uStack_1d0;
    *(ulong *)((long)param_1 + 0xbd) = CONCAT53(uStack_1c0,uStack_1c3);
    param_1[0xd] = uStack_218;
    param_1[0xc] = uStack_220;
    param_1[0xf] = uStack_208;
    param_1[0xe] = uStack_210;
    param_1[0x11] = uStack_1f8;
    param_1[0x10] = uStack_200;
    param_1[0x13] = uStack_1e8;
    param_1[0x12] = uStack_1f0;
    param_1[5] = uStack_258;
    param_1[4] = uStack_260;
    param_1[7] = uStack_248;
    param_1[6] = uStack_250;
    param_1[9] = uStack_238;
    param_1[8] = uStack_240;
    param_1[0xb] = uStack_228;
    param_1[10] = uStack_230;
    param_1[1] = puStack_278;
    *param_1 = uStack_280;
    param_1[3] = lStack_268;
    param_1[2] = puStack_270;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102a9ce3c; end: 102a9ce3f;  */

void FUN_102a9ce3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db136b0;
  func_0x000107c61520(&UNK_10db136b0,&UNK_110591420);
  puRam0000000112ee7cc8 = puVar1;
  return;
}



/* Entry: 102a9ce40; end: 102a9ce7f;  */

void FUN_102a9ce40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db136b0;
  func_0x000107c61520(&UNK_10db136b0,&UNK_110591420);
  puRam0000000112ee7cc8 = puVar1;
  return;
}



/* Entry: 102a9ce80; end: 102a9cf27;  */

long FUN_102a9ce80(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102a9cf28; end: 102a9d403;  */

undefined1 * FUN_102a9cf28(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar7 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  lVar6 = *(long *)(param_2 + 0x30);
  func_0x000107c61434();
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    lVar6 = *(long *)(param_2 + 0x50);
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_1 + 0x30) = lVar6;
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    func_0x000107c61434(lVar6);
    func_0x000107c61434(uVar7);
    lVar6 = *(long *)(param_2 + 0x50);
  }
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar7;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar7;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x50) = lVar6;
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    uVar1 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    uVar2 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = uVar3;
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = uVar4;
    uVar5 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
    func_0x000107c61434();
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  param_1[0xc4] = param_2[0xc4];
  return param_1;
}



/* Entry: 102a9d404; end: 102a9d46b;  */

undefined8 FUN_102a9d404(undefined8 param_1)

{
  (*(code *)(undefined *)0x102aa2da0)();
  return param_1;
}



/* Entry: 102a9d46c; end: 102a9d4af;  */

void FUN_102a9d46c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  *(undefined8 *)((long)param_1 + 0xbd) = *(undefined8 *)((long)param_2 + 0xbd);
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Entry: 102a9d4b0; end: 102a9d62b;  */

undefined1 * FUN_102a9d4b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c6142c(uVar1);
  param_1[0x20] = param_2[0x20];
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_102a9d52c:
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    lVar3 = *(long *)(param_1 + 0x50);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 == 0) {
      func_0x000102a9d404(param_1 + 0x28);
      goto LAB_102a9d52c;
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_1 + 0x30) = lVar3;
    func_0x000107c6142c();
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    func_0x000107c6142c(uVar2);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_2 + 0x50);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      *(long *)(param_1 + 0x50) = lVar3;
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_2 + 0x60);
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x60) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x70);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x70) = uVar1;
      func_0x000107c6142c(uVar2);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
      uVar1 = *(undefined8 *)(param_2 + 0x88);
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0x98);
      uVar2 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(param_1 + 0xa8) = uVar1;
      func_0x000107c6142c(uVar2);
      uVar1 = *(undefined8 *)(param_2 + 0xb8);
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
      *(undefined8 *)(param_1 + 0xb8) = uVar1;
      func_0x000107c6142c(uVar2);
      goto LAB_102a9d60c;
    }
    func_0x000102a9d438(param_1 + 0x48);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
LAB_102a9d60c:
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  param_1[0xc4] = param_2[0xc4];
  return param_1;
}



/* Entry: 102a9d62c; end: 102a9d9a7;  */

int FUN_102a9d62c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xc5) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a9d9a8; end: 102a9d9e7;  */

void FUN_102a9d9a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db138fc;
  func_0x000107c61520(&UNK_10db138fc,&UNK_1105914b0);
  puRam0000000112ee7cd0 = puVar1;
  return;
}



/* Entry: 102a9d9e8; end: 102a9d9eb;  */

void FUN_102a9d9e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1385c;
  func_0x000107c61520(&UNK_10db1385c,&UNK_1105914b0);
  puRam0000000112ee7cd8 = puVar1;
  return;
}



/* Entry: 102a9d9ec; end: 102a9da2b;  */

void FUN_102a9d9ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1385c;
  func_0x000107c61520(&UNK_10db1385c,&UNK_1105914b0);
  puRam0000000112ee7cd8 = puVar1;
  return;
}



/* Entry: 102a9da2c; end: 102a9da2f;  */

void FUN_102a9da2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13834;
  func_0x000107c61520(&UNK_10db13834,&UNK_1105914b0);
  puRam0000000112ee7ce0 = puVar1;
  return;
}



/* Entry: 102a9da30; end: 102a9dbaf;  */

void FUN_102a9da30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13834;
  func_0x000107c61520(&UNK_10db13834,&UNK_1105914b0);
  puRam0000000112ee7ce0 = puVar1;
  return;
}



/* Entry: 102a9dbb0; end: 102a9dbcf;  */

undefined1 FUN_102a9dbb0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102a9dbd0; end: 102a9dc6f;  */

void FUN_102a9dbd0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a9dc70; end: 102a9dc73;  */

void FUN_102a9dc70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13990;
  func_0x000107c61520(&UNK_10db13990,&UNK_110591610);
  puRam0000000112ee7e58 = puVar1;
  return;
}



/* Entry: 102a9dc74; end: 102a9dcb3;  */

void FUN_102a9dc74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db13990;
  func_0x000107c61520(&UNK_10db13990,&UNK_110591610);
  puRam0000000112ee7e58 = puVar1;
  return;
}



/* Entry: 102a9dcb4; end: 102a9dd9f;  */

uint FUN_102a9dcb4(uint *param_1,int param_2)

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



/* Entry: 102a9dda0; end: 102a9ded3;  */

undefined1  [16] FUN_102a9dda0(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  lVar3 = 0;
  FUN_102a9ded4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar5);
  FUN_102a9df0c();
  puVar4 = puVar7;
  func_0x000107c614c4(puVar7,lVar3);
  uVar6 = *puVar7;
  iVar2 = (int)puVar4;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
      lVar5 = 0x112ee62c0;
      func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
      iVar2 = *(int *)(lVar5 + 0x30);
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 8))((undefined1 *)((long)puVar7 + (long)iVar2),lVar5);
    }
    else {
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
      func_0x00010006c090(*(undefined8 *)(&stack0xffffffffffffffd0 + lVar5),
                          *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5));
    }
  }
  else if (iVar2 == 2) {
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
    lVar5 = 0x112ee62b0;
    func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
    iVar2 = *(int *)(lVar5 + 0x30);
    iVar1 = *(int *)(lVar5 + 0x40);
    func_0x000107c6142c(*(undefined8 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x50) + 8));
    func_0x0001000293e4((undefined1 *)((long)puVar7 + (long)iVar1));
    func_0x0001000293e4((undefined1 *)((long)puVar7 + (long)iVar2));
  }
  else {
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar6;
  return auVar9;
}



/* Entry: 102a9ded4; end: 102a9df0b;  */

void FUN_102a9ded4(undefined8 param_1)

{
  if (lRam0000000112ee7f48 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e710b28);
  return;
}



/* Entry: 102a9df0c; end: 102a9df4f;  */

undefined8 FUN_102a9df0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102a9ded4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a9df50; end: 102a9dfd7;  */

undefined1  [16] FUN_102a9df50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x6b6e694c70656564;
  if (bVar5 != 2) {
    uVar1 = 0x4f797254446f7774;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = 0xe90000000000006e;
  }
  uVar2 = 0x77656956626577;
  if (bVar5 != 0) {
    uVar2 = 0x445065766974616e;
  }
  uVar3 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe900000000000050;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 102a9dfd8; end: 102a9dffb;  */

void FUN_102a9dfd8(undefined1 *param_1,undefined1 param_2)

{
  FUN_102aa133c();
  *param_1 = param_2;
  return;
}



/* Entry: 102a9dffc; end: 102a9e013;  */

undefined1  [16] FUN_102a9dffc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a9e014; end: 102a9e063;  */

void FUN_102a9e014(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a9ef48();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a9e064; end: 102a9e12b;  */

undefined1  [16] FUN_102a9e064(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  undefined1 auVar9 [16];
  
  bVar5 = *unaff_x20;
  pcVar6 = "fallbackWebViewURL";
  uVar1 = 0xd000000000000010;
  if (bVar5 != 4) {
    pcVar6 = "didFallbackToURL";
    uVar1 = 0xd000000000000017;
  }
  uVar4 = 0xed00006449707041;
  uVar7 = 0x6c616e7265747865;
  if (bVar5 != 3) {
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
    uVar7 = uVar1;
  }
  uVar1 = 0x697275;
  if (bVar5 != 1) {
    uVar1 = 0xd000000000000012;
  }
  uVar2 = 0xe300000000000000;
  if (bVar5 != 1) {
    uVar2 = 0x800000010f0e6190;
  }
  uVar3 = 0xe900000000000064;
  uVar8 = 0x49746375646f7270;
  if (bVar5 != 0) {
    uVar3 = uVar2;
    uVar8 = uVar1;
  }
  if (bVar5 < 3) {
    uVar4 = uVar3;
    uVar7 = uVar8;
  }
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 102a9e12c; end: 102a9e14f;  */

void FUN_102a9e12c(undefined1 *param_1,undefined1 param_2)

{
  func_0x000102aa14a8();
  *param_1 = param_2;
  return;
}



/* Entry: 102a9e150; end: 102a9e167;  */

undefined1  [16] FUN_102a9e150(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a9e168; end: 102a9e1b7;  */

void FUN_102a9e168(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000102a9efc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}


