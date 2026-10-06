/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028e09ec; end: 1028e0a33;  */

void FUN_1028e09ec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5eb9c(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112eca628);
  func_0x000107c5eb70(uVar1);
  return;
}



/* Entry: 1028e0a34; end: 1028e0bfb;  */

void FUN_1028e0a34(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  ulong uStack_48;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar1 = *param_2;
  uVar7 = (ulong)uVar1;
  if (uVar1 == 0x27 || uVar1 == 0x2019) {
    uVar7 = 0xe100000000000000;
    puVar4 = (ulong *)0x27;
  }
  else {
    if (lRam0000000112eca620 != -1) {
      func_0x000107c61568(0x112eca620,FUN_1028e09ec);
    }
    lVar5 = lVar3;
    func_0x000100028790();
    (**(code **)(lVar8 + 0x10))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5,lVar3);
    func_0x000107c5eb90();
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    if ((uVar7 & 1) == 0) {
      uVar7 = 0xe100000000000000;
      puVar4 = (ulong *)0x20;
    }
    else {
      if (uVar1 < 0x80) {
        uVar6 = uVar1 + 1;
      }
      else {
        uVar2 = (uVar1 & 0x3f) * 0x100;
        if (uVar1 < 0x800) {
          uVar6 = (uVar1 >> 6) + uVar2 + 0x81c1;
        }
        else {
          uVar2 = (uVar2 | uVar1 >> 6 & 0x3f) * 0x100;
          uVar6 = ((uVar2 | uVar1 >> 0xc & 0x3f) << 8 | uVar1 >> 0x12) + 0x818181f1;
          if (uVar1 >> 0x10 == 0) {
            uVar6 = (uVar1 >> 0xc) + uVar2 + 0x8181e1;
          }
        }
      }
      uVar7 = (ulong)(4 - ((uint)LZCOUNT(uVar6) >> 3));
      uStack_48 = (ulong)uVar6 + 0xfefefefefefeff &
                  (-1L << ((uVar7 & 7) << 3) ^ 0xffffffffffffffffU);
      puVar4 = &uStack_48;
      func_0x000107c5fb54();
    }
  }
  *param_1 = puVar4;
  param_1[1] = uVar7;
  return;
}



/* Entry: 1028e0bfc; end: 1028e0d67;  */

undefined1  [16] FUN_1028e0bfc(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar4 = &uStack_70;
  FUN_1028e0634();
  uVar2 = 0x112da2fe0;
  uStack_70 = param_1;
  func_0x0001000285a8(0x112da2fe0,&UNK_10d947420);
  uVar3 = 0x112da2fe8;
  FUN_1028e109c(0x112da2fe8,0x112da2fe0,&UNK_10d947420);
  func_0x000107c5fbd0(&uStack_70,uVar2,uVar3);
  uStack_58 = 0x20;
  uStack_50 = 0xe100000000000000;
  puStack_60 = &uStack_58;
  uVar5 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1028e10e0,&uStack_70,puVar4,uVar2);
  uVar2 = 0x112e07ba0;
  uStack_70 = uVar5;
  func_0x0001000285a8(0x112e07ba0,&UNK_10dc1ee40);
  uVar3 = 0x112eca618;
  FUN_1028e109c(0x112eca618,0x112e07ba0,&UNK_10dc1ee40);
  uVar6 = uVar3;
  func_0x000101478db0();
  uVar7 = 0x20;
  uVar8 = 0xe100000000000000;
  func_0x000107c5fc20(0x20,0xe100000000000000,uVar2,uVar3,uVar6);
  func_0x000107c6142c(uVar5);
  uStack_70 = 0x20;
  uStack_68 = 0xe100000000000000;
  func_0x000107c5fb78(uVar7,uVar8);
  func_0x000107c6142c(uVar8);
  uVar2 = uStack_68;
  func_0x000107c61434(uStack_68);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  func_0x000107c6142c(uVar2);
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = uStack_70;
  return auVar1;
}



/* Entry: 1028e0d68; end: 1028e102f;  */

undefined * FUN_1028e0d68(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long alStack_a0 [2];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = param_1;
  func_0x000107c5fbac(param_1,param_2);
  if ((long)puVar6 < 0x1f5) {
    puStack_90 = param_1;
    uStack_88 = param_2;
    func_0x000107c5eb88(lVar12);
    func_0x000100e8b654();
    lVar7 = lVar12;
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c601f0(lVar12,PTR___sSSN_11034da80,puVar6);
    (**(code **)(lVar13 + 8))(lVar12,lVar5);
    lVar5 = lVar7;
    func_0x000107c5fb5c(lVar7,puVar9);
    if (2 < lVar5) {
      puVar6 = puVar9;
      func_0x000107c5fb1c(lVar7,puVar9);
      func_0x000107c6142c(puVar9);
      puVar9 = puVar6;
      FUN_1028e0bfc(lVar7,puVar6);
      func_0x000107c6142c(puVar6);
      uStack_70 = 0x20;
      uStack_68 = 0xe100000000000000;
      puStack_80 = &uStack_70;
      func_0x000107c61434(puVar9);
      lVar5 = 0x7fffffffffffffff;
      func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1028e1030,&puStack_90,lVar7,puVar9);
      uVar14 = *(ulong *)(lVar5 + 0x10);
      if (uVar14 == 0) {
        func_0x000107c6142c(lVar5);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
        alStack_a0[0] = lVar7;
        func_0x000100403514(0,uVar14,0);
        uVar15 = 0;
        puVar11 = (undefined8 *)(lVar5 + 0x38);
        do {
          puVar6 = puStack_90;
          if (*(ulong *)(lVar5 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1028e1018);
            (*pcVar4)();
          }
          uVar8 = puVar11[-3];
          uVar10 = puVar11[-2];
          uVar1 = puVar11[-1];
          uVar3 = *puVar11;
          func_0x000107c61434(uVar3);
          func_0x000107c5fb2c(uVar8,uVar10,uVar1,uVar3);
          func_0x000107c6142c(uVar3);
          uVar2 = *(ulong *)(puVar6 + 0x10);
          puStack_90 = puVar6;
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
            func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar2 + 1,1);
          }
          puVar6 = puStack_90;
          uVar15 = uVar15 + 1;
          *(ulong *)(puStack_90 + 0x10) = uVar2 + 1;
          *(undefined8 *)(puStack_90 + uVar2 * 0x10 + 0x20) = uVar8;
          *(undefined8 *)(puStack_90 + uVar2 * 0x10 + 0x28) = uVar10;
          puVar11 = puVar11 + 4;
        } while (uVar14 != uVar15);
        func_0x000107c6142c(lVar5);
      }
      puVar9 = puVar6;
      func_0x000100403a6c(puVar6);
      func_0x000107c6142c(puVar6);
      return puVar9;
    }
    func_0x000107c6142c(puVar9);
  }
  if (lRam0000000112eca610 != -1) {
    func_0x000107c61568(0x112eca610,FUN_1028e0614);
  }
  uVar8 = uRam0000000113804ca0;
  puVar6 = puRam0000000113804c90;
  func_0x000107c61434(puRam0000000113804c90);
  func_0x000107c61434(uVar8);
  return puVar6;
}



/* Entry: 1028e1030; end: 1028e1047;  */

uint FUN_1028e1030(uint param_1)

{
  FUN_1028e1048();
  return param_1 & 1;
}



/* Entry: 1028e1048; end: 1028e109b;  */

uint FUN_1028e1048(long *param_1)

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



/* Entry: 1028e109c; end: 1028e10df;  */

void FUN_1028e109c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1028e10e0; end: 1028e10f7;  */

uint FUN_1028e10e0(uint param_1)

{
  FUN_1028e1030();
  return param_1 & 1;
}



/* Entry: 1028e10f8; end: 1028e11f3;  */

/* WARNING: Possible PIC construction at 0x0001028e11a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e11b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e11c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028e11bc) */
/* WARNING: Removing unreachable block (ram,0x0001028e11ac) */
/* WARNING: Removing unreachable block (ram,0x0001028e11cc) */

void FUN_1028e10f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_110566860;
  func_0x000107c613fc(&UNK_110566860,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112eca648;
  func_0x0001000285a8(0x112eca648,&UNK_10daed408);
  func_0x000107c613fc();
  pcVar8 = FUN_1028e1258;
  func_0x0001000841fc(FUN_1028e1258,puVar6,uVar7);
  func_0x000100084214(&UNK_10daed3d0,0x31,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1028e11f4; end: 1028e1203;  */

undefined1  [16] FUN_1028e11f4(void)

{
  return ZEXT816(0x110566840);
}



/* Entry: 1028e1204; end: 1028e1257;  */

void FUN_1028e1204(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028e1258; end: 1028e161b;  */

void FUN_1028e1258(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000285a8(0x112eca650,&UNK_10daed410);
  func_0x0001000838ec(param_2);
  func_0x0001028e1314(uVar6,uVar3,uVar1,uVar4,param_2,uVar2,uVar5,uVar7);
  func_0x0001002acff8("ExternalMusicSettingsViewControllerEntryPointProvider",0x35,2);
  func_0x000107c61574(param_2);
  *param_1 = uVar6;
  return;
}



/* Entry: 1028e161c; end: 1028e162f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e161c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long *plVar13;
  long unaff_x20;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar9 = lVar2;
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(auStack_90);
  FUN_1028e5f34();
  lVar10 = lVar9;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar10 + _DAT_112eca658);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(lVar10 + _DAT_112eca660) = 0;
  *(undefined8 *)(lVar10 + _DAT_112eca668) = 1;
  *(undefined8 *)(lVar10 + _DAT_112eca670) = 1;
  lVar8 = _DAT_112eca678;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112eca680,&UNK_10daed438);
  func_0x000107c613fc();
  ppuVar11 = &puStack_98;
  func_0x00010042e6a0();
  *(undefined ***)(lVar10 + lVar8) = ppuVar11;
  *(undefined8 *)(lVar10 + _DAT_112eca688) = 0;
  lVar8 = _DAT_112eca690;
  FUN_1028e5d44();
  *(undefined **)(lVar10 + lVar8) = puVar12;
  *(undefined1 *)(lVar10 + _DAT_112eca698) = 1;
  *(long *)(lVar10 + _DAT_112eca6a0) = lVar2;
  *(undefined8 *)(lVar10 + _DAT_112eca6a8) = uVar5;
  *(undefined8 *)(lVar10 + _DAT_112eca6b0) = uVar3;
  *(undefined8 *)(lVar10 + _DAT_112eca6b8) = uStack_68;
  FUN_1028e5e2c(auStack_90,lVar10 + _DAT_112eca6c0);
  *(undefined8 *)(lVar10 + _DAT_112eca6c8) = uVar6;
  *(undefined8 *)(lVar10 + _DAT_112eca6d0) = uVar4;
  *(undefined8 *)(lVar10 + _DAT_112eca6d8) = uVar7;
  puVar12 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_a8 = lVar10;
  lStack_a0 = lVar9;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  plVar13 = &lStack_a8;
  func_0x000107c61154(plVar13,puVar12,0,0);
  func_0x0001021c4d60(auStack_90);
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 1028e1630; end: 1028e17e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1028e1630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined *puStack_68;
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eca658);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eca660) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eca668) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112eca670) = 1;
  lVar2 = _DAT_112eca678;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112eca680,&UNK_10daed438);
  func_0x000107c613fc();
  ppuVar3 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112eca688) = 0;
  lVar2 = _DAT_112eca690;
  FUN_1028e5d44();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112eca698) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112eca6a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eca6a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eca6b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eca6b8) = param_4;
  FUN_1028e5e2c(param_5,unaff_x20 + _DAT_112eca6c0);
  *(undefined8 *)(unaff_x20 + _DAT_112eca6c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eca6d0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eca6d8) = param_8;
  puVar5 = auStack_78;
  func_0x000107c61154(puVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001021c4d60(param_5);
  return puVar5;
}



/* Entry: 1028e17e8; end: 1028e18f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e17e8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 auStack_a0 [3];
  long lStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  lVar1 = _DAT_112eca658;
  func_0x000107c61428(unaff_x20 + _DAT_112eca658,auStack_78,0,0);
  FUN_1028e61e4(unaff_x20 + lVar1,auStack_a0);
  if (lStack_88 == 0) {
    FUN_1028e64d4(auStack_a0,0x112eca730,&UNK_10dc001e0);
    uStack_58 = 3;
    uStack_60 = 7;
    uStack_50 = 0x50;
    func_0x00010008a7c8(auStack_a0,&uStack_60);
    func_0x000100083b20(param_1);
    func_0x000107c61574(auStack_a0[0]);
    func_0x0001028e6234(param_1,&uStack_60);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_a0,0x21,0);
    func_0x0001028e6278(&uStack_60,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_a0);
  }
  else {
    func_0x000100d0f3c0(auStack_a0,&uStack_60);
    func_0x000100d0f3c0(&uStack_60,param_1);
  }
  return;
}



/* Entry: 1028e18f4; end: 1028e1a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028e18f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  lVar1 = _DAT_112eca660;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eca660);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1028e17e8(auStack_68);
    func_0x0001000a8868(auStack_68,lStack_50);
    lVar3 = lStack_50;
    (**(code **)(lStack_48 + 0x48))(lStack_50,lStack_48);
    func_0x0001000834e4(auStack_68);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434(lVar3);
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 1028e1a04; end: 1028e1f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e1a04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  FUN_1028e1f78();
  if (param_1 == 0) {
    return;
  }
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  puVar1 = puStack_a0;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(puVar3);
  if (puVar1 == (undefined *)0x0) {
    func_0x000107c615e8(param_1);
    return;
  }
  puVar2 = PTR_PTR_1126ab7e8;
  func_0x000107c610f8(PTR_PTR_1126ab7e8);
  func_0x000107c453e4();
  func_0x000107c53e94();
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  func_0x000107c4c1dc(puStack_a0);
  func_0x000107c61180();
  func_0x000107c615e8(puStack_a0);
  func_0x000107c52604(puVar2);
  func_0x000107c615e8(puVar3);
  puVar4 = PTR_PTR_1126afe50;
  func_0x000107c610f8(PTR_PTR_1126afe50);
  func_0x000107c4842c();
  func_0x000107c561c0();
  func_0x000107c569fc(puVar2);
  puVar3 = &UNK_1105669c8;
  puVar14 = puVar3;
  func_0x000107c613fc(&UNK_1105669c8,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x1028e62d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1000f6b44;
  puStack_88 = &UNK_1105669e0;
  puStack_78 = puVar14;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c56d08(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar14 = puVar3;
  func_0x000107c613fc(&UNK_1105669c8,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  pcStack_80 = FUN_1028e62fc;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1028e3e00;
  puStack_88 = &UNK_110566a08;
  puStack_78 = puVar14;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c56cbc(puVar2);
  func_0x000107c60bd0(ppuVar6);
  puVar14 = puVar3;
  func_0x000107c613fc(&UNK_1105669c8,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  pcStack_80 = (code *)0x1028e6324;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1028e3e00;
  puStack_88 = &UNK_110566a30;
  puStack_78 = puVar14;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c56d04(puVar2);
  func_0x000107c60bd0(ppuVar7);
  puVar14 = puVar3;
  func_0x000107c613fc(&UNK_1105669c8,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  pcStack_80 = FUN_1028e634c;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1028e46a0;
  puStack_88 = &UNK_110566a58;
  puStack_78 = puVar14;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c56df4(puVar2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c613fc(&UNK_1105669c8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_80 = (code *)0x1028e6354;
  puStack_a0 = puVar10;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_102827bd8;
  puStack_88 = &UNK_110566a80;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c56d54(puVar2);
  func_0x000107c60bd0(ppuVar9);
  FUN_1028e5f74(puVar2);
  puVar10 = PTR_PTR_1126ab7f0;
  func_0x000107c610f8(PTR_PTR_1126ab7f0);
  func_0x000107c453e4();
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  puVar14 = puStack_a0;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar14;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  if (puVar3 != (undefined *)0x0) {
    puVar14 = puVar3;
    func_0x000107c3e544();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    if (puVar14 != (undefined *)0x0) goto LAB_1028e1dd4;
  }
  puVar14 = (undefined *)0x0;
LAB_1028e1dd4:
  func_0x000107c52ae0(puVar10);
  func_0x000107c61170(puVar14);
  uVar11 = 0;
  FUN_1028e635c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar12 = FUN_1028e4944;
  func_0x0001000bfde0(FUN_1028e4944,0,uVar11);
  pcVar13 = pcVar12;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar12);
  pcVar12 = pcVar13;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(pcVar13);
  func_0x000107c56860(puVar10);
  func_0x000107c61170();
  FUN_1028e212c();
  uVar11 = *(undefined8 *)(pcVar12 + 0x78);
  func_0x000107c6157c(uVar11);
  func_0x000107c61574(pcVar12);
  func_0x0001004575f0();
  func_0x000107c61574(uVar11);
  pcVar13 = pcVar12;
  func_0x000107c5cb24(pcVar12);
  func_0x000107c61180();
  func_0x000107c61170(pcVar12);
  func_0x000107c590bc(puVar10);
  func_0x000107c61170(pcVar13);
  puVar3 = PTR_PTR_1126ab7f8;
  func_0x000107c610f8(PTR_PTR_1126ab7f8);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar2);
  func_0x000107c49520(puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(puVar1);
  return;
}



/* Entry: 1028e1f78; end: 1028e1fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028e1f78(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112eca670;
  lVar3 = *(long *)(unaff_x20 + _DAT_112eca670);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_1028e1fe4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x0001028e616c(uVar4);
  }
  FUN_1028e66bc(lVar3);
  return lVar2;
}



/* Entry: 1028e1fe4; end: 1028e212b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028e1fe4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      func_0x0001000285a8(0x112dbfd78,&UNK_10d97ba80);
      func_0x000100083b20(&lStack_38);
      puVar3 = &UNK_110566bd0;
      func_0x000107c613fc(&UNK_110566bd0,0x18,7);
      *(long *)(puVar3 + 0x10) = lStack_38;
      uVar4 = 0x1028e66cc;
      func_0x0001000823a8(0x1028e66cc,puVar3);
      uVar5 = uVar4;
      func_0x0001000ad7c4();
      func_0x000107c61574(uVar4);
      lVar2 = lVar1;
      func_0x000107c40978(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar5);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 1028e212c; end: 1028e2213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1028e212c(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  lVar1 = _DAT_112eca688;
  puVar2 = *(undefined1 **)(unaff_x20 + _DAT_112eca688);
  puVar4 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    FUN_1028e17e8(auStack_68);
    func_0x000100083b20(&uStack_70);
    uVar5 = uStack_70;
    func_0x000100083b20(&uStack_70);
    puVar3 = &UNK_1105669c8;
    func_0x000107c613fc(&UNK_1105669c8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = auStack_68;
    FUN_1028e5b9c(puVar4,uVar5,uStack_70,FUN_1028e61d4,puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined1 **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar5);
    puVar2 = (undefined1 *)0x0;
  }
  func_0x000107c6157c(puVar2);
  return puVar4;
}



/* Entry: 1028e2214; end: 1028e250b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e2214(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112eca690;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112eca690,auStack_80,0,0);
    lVar5 = *(long *)(param_1 + lVar5);
    puVar6 = (ulong *)(lVar5 + 0x40);
    uVar8 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if (-uVar8 < 0x40) {
      uVar9 = ~(-1L << (-uVar8 & 0x3f));
    }
    uVar9 = uVar9 & *puVar6;
    func_0x000107c61438(lVar5,2);
    lVar7 = 0;
    lVar1 = lVar7;
    while( true ) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
        uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        func_0x000107c555d0(*(undefined8 *)
                             (*(long *)(lVar5 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                             lVar1 * 0x200));
        lVar7 = lVar1;
      }
      bVar4 = SCARRY8(lVar1,1);
      lVar1 = lVar1 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e2398);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar8 >> 6) <= lVar1) break;
      uVar9 = puVar6[lVar1];
    }
    func_0x000107c6142c(lVar5);
    func_0x0001028e61dc(lVar5,puVar6,~uVar8,lVar7,0);
    func_0x0001028e2398();
    lStack_88 = lVar5;
    func_0x0001007d6d78(&lStack_88);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(lVar5);
  }
  return;
}



/* Entry: 1028e250c; end: 1028e26bf; -[_TtC35ExternalMusicSettingsImplementation35ExternalMusicSettingsViewController loadView] */

/* WARNING: Possible PIC construction at 0x0001028e2558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e25a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028e255c) */
/* WARNING: Removing unreachable block (ram,0x0001028e25c4) */
/* WARNING: Removing unreachable block (ram,0x0001028e2570) */
/* WARNING: Removing unreachable block (ram,0x0001028e25a8) */

void FUN_1028e250c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c5a568(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1028e26c0; end: 1028e272b;  */

void FUN_1028e26c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e272c,uVar1,uVar2);
  return;
}



/* Entry: 1028e272c; end: 1028e27af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e272c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  FUN_1028e5e2c(lVar1 + _DAT_112eca6c0,unaff_x22 + 0x38);
  func_0x000100d0f3c0(unaff_x22 + 0x38,unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001028e27ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e27b0; end: 1028e27eb;  */

void FUN_1028e27b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028e27e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028e27ec; end: 1028e2a9f;  */

/* WARNING: Possible PIC construction at 0x0001028e2830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e28a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e28c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e2914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e2934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e2984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e29a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e2a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028e2a2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028e2a10) */
/* WARNING: Removing unreachable block (ram,0x0001028e29a8) */
/* WARNING: Removing unreachable block (ram,0x0001028e2a9c) */
/* WARNING: Removing unreachable block (ram,0x0001028e29dc) */
/* WARNING: Removing unreachable block (ram,0x0001028e2988) */
/* WARNING: Removing unreachable block (ram,0x0001028e2938) */
/* WARNING: Removing unreachable block (ram,0x0001028e2a98) */
/* WARNING: Removing unreachable block (ram,0x0001028e296c) */
/* WARNING: Removing unreachable block (ram,0x0001028e2918) */
/* WARNING: Removing unreachable block (ram,0x0001028e28c8) */
/* WARNING: Removing unreachable block (ram,0x0001028e2a94) */
/* WARNING: Removing unreachable block (ram,0x0001028e28fc) */
/* WARNING: Removing unreachable block (ram,0x0001028e28a8) */
/* WARNING: Removing unreachable block (ram,0x0001028e2834) */
/* WARNING: Removing unreachable block (ram,0x0001028e2a90) */
/* WARNING: Removing unreachable block (ram,0x0001028e288c) */
/* WARNING: Removing unreachable block (ram,0x0001028e2a30) */

void FUN_1028e27ec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5a050(param_1,param_2,0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e2a90);
  (*pcVar1)();
}



/* Entry: 1028e2aa0; end: 1028e2dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e2aa0(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  FUN_1028e18f4();
  lVar1 = _DAT_112eca690;
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  uVar10 = uVar10 + 0x3f >> 6;
  lVar13 = 0;
  do {
    if (uVar14 == 0) {
      uVar14 = uVar10;
      if ((long)uVar10 <= lVar13 + 1) {
        uVar14 = lVar13 + 1;
      }
      lVar11 = uVar14 - 1;
      lVar15 = lVar13;
      do {
        lVar13 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e2db4);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar13) {
          uVar14 = 0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          lStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
          goto LAB_1028e2bac;
        }
        uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
        lVar15 = lVar15 + 1;
      } while (uVar14 == 0);
    }
    uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 - 1 & uVar14;
    func_0x0001028e6234(*(long *)(param_1 + 0x38) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x28 +
                        lVar13 * 0xa00,&lStack_c0);
    lVar11 = lVar13;
LAB_1028e2bac:
    uStack_88 = uStack_b8;
    lStack_90 = lStack_c0;
    lStack_78 = lStack_a8;
    uStack_80 = uStack_b0;
    uStack_70 = uStack_a0;
    if (lStack_a8 == 0) {
      func_0x000107c61574();
      func_0x0001028e2398();
      lStack_90 = param_1;
      func_0x0001007d6d78(&lStack_90);
      func_0x000107c6142c(param_1);
      puVar6 = &UNK_1105669a0;
      func_0x000107c613fc(&UNK_1105669a0,0x18,7);
      *(long *)(puVar6 + 0x10) = unaff_x20;
      func_0x000107c61174();
      uVar9 = 7;
      func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10daed528,puVar6,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar9);
      return;
    }
    puVar6 = PTR_PTR_1126ab7d8;
    func_0x000107c610f8();
    func_0x000107c48ec8();
    plVar8 = &lStack_c0;
    func_0x000107c61428(unaff_x20 + lVar1,plVar8,0x21,0);
    func_0x000107c61174();
    uVar3 = *(ulong *)(unaff_x20 + lVar1);
    func_0x000107c61558();
    lVar13 = *(long *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    uVar4 = uVar3;
    func_0x000101137240();
    uVar12 = (ulong)~(uint)plVar8 & 1;
    uVar5 = *(long *)(lVar13 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e2db8);
      (*pcVar2)();
    }
    if (*(long *)(lVar13 + 0x18) < (long)uVar5) {
      FUN_1028e5808();
      uVar7 = (uint)uVar3;
      func_0x000101137240();
      uVar4 = uVar5;
      if (((uint)plVar8 & 1) != (uVar7 & 1)) {
        func_0x000107c60624(&UNK_1106c6890);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e2dcc);
        (*pcVar2)();
      }
LAB_1028e2c74:
      if (((ulong)plVar8 & 1) != 0) goto LAB_1028e2b10;
LAB_1028e2c7c:
      lVar15 = lVar13 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar15 + 0x40) = *(ulong *)(lVar15 + 0x40) | 1L << (uVar4 & 0x3f);
      *(undefined **)(*(long *)(lVar13 + 0x38) + uVar4 * 8) = puVar6;
      if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e2dbc);
        (*pcVar2)();
      }
      *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
    }
    else {
      if ((uVar3 & 1) != 0) goto LAB_1028e2c74;
      FUN_1028e56b8();
      if (((ulong)plVar8 & 1) == 0) goto LAB_1028e2c7c;
LAB_1028e2b10:
      uVar9 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar4 * 8);
      *(undefined **)(*(long *)(lVar13 + 0x38) + uVar4 * 8) = puVar6;
      func_0x000107c61170(uVar9);
    }
    *(long *)(unaff_x20 + lVar1) = lVar13;
    func_0x000107c614a8(&lStack_c0);
    func_0x000107c61170(puVar6);
    func_0x0001000834e4(&lStack_90);
    lVar13 = lVar11;
  } while( true );
}



/* Entry: 1028e2dcc; end: 1028e2df3; -[_TtC35ExternalMusicSettingsImplementation35ExternalMusicSettingsViewController viewDidLoad] */

void FUN_1028e2dcc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001028e25c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028e2df4; end: 1028e2dfb; -[_TtC35ExternalMusicSettingsImplementation35ExternalMusicSettingsViewController pageViewName] */

undefined8 FUN_1028e2df4(void)

{
  return 0x116;
}



/* Entry: 1028e2dfc; end: 1028e2e9b;  */

/* WARNING: Possible PIC construction at 0x0001028e2e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028e2e88) */

void FUN_1028e2dfc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110566ba8;
  func_0x000107c613fc(&UNK_110566ba8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10daed5c0;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10daed5d0,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028e2e9c; end: 1028e2f07;  */

void FUN_1028e2e9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e2f08,uVar1,uVar2);
  return;
}



/* Entry: 1028e2f08; end: 1028e2fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e2f08(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x60,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_1028e5e2c(lVar3 + _DAT_112eca6c0,unaff_x22 + 0x38);
    func_0x000107c61170(lVar3);
    func_0x000100d0f3c0(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
    (**(code **)(lVar2 + 8))(uVar1,lVar2);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001028e2fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3 == 0);
  return;
}



/* Entry: 1028e2fc4; end: 1028e3007;  */

void FUN_1028e2fc4(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001028e3004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1028e3008; end: 1028e3077;  */

void FUN_1028e3008(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e3078,uVar1,uVar2);
  return;
}



/* Entry: 1028e3078; end: 1028e3117;  */

void FUN_1028e3078(void)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0x340;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1028e3118;
    uVar1 = *(undefined4 *)(unaff_x22 + 0x60);
    plVar2[0x57] = lVar4;
    *(undefined4 *)((long)plVar2 + 0x32c) = uVar1;
    lVar3 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar2[0x58] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar2[0x59] = lVar3;
    plVar2[0x5a] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e3210,lVar3,lVar4);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001028e3114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e3118; end: 1028e3163;  */

void FUN_1028e3118(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e3164,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48));
  return;
}



/* Entry: 1028e3164; end: 1028e319b;  */

void FUN_1028e3164(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e3198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e319c; end: 1028e320f;  */

void FUN_1028e319c(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2b8) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0x32c) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x2c0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x2d0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e3210,uVar1,uVar2);
  return;
}



/* Entry: 1028e3210; end: 1028e345b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e3210(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long unaff_x22;
  
  lVar2 = _DAT_112eca698;
  lVar8 = *(long *)(unaff_x22 + 0x2b8);
  *(long *)(unaff_x22 + 0x2d8) = _DAT_112eca698;
  if ((*(byte *)(lVar8 + lVar2) & 1) == 0) {
    iVar3 = *(int *)(unaff_x22 + 0x32c);
    *(undefined1 *)(lVar8 + lVar2) = 1;
    if (iVar3 == 0) {
      FUN_1028e18f4();
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar5 = param_1, func_0x000101137240(), (param_2 & 1) == 0)) {
        *(undefined8 *)(unaff_x22 + 0x58) = 0;
        *(undefined8 *)(unaff_x22 + 0x50) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        func_0x000107c6142c(param_1);
      }
      else {
        func_0x0001028e6234(*(long *)(param_1 + 0x38) + lVar5 * 0x28,unaff_x22 + 0x38);
        func_0x000107c6142c(param_1);
        if (*(long *)(unaff_x22 + 0x50) != 0) {
          func_0x000100d0f3c0(unaff_x22 + 0x38,unaff_x22 + 0x10);
          FUN_1028e17e8(unaff_x22 + 0x60);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
          lVar2 = *(long *)(unaff_x22 + 0x80);
          func_0x0001000a8868(unaff_x22 + 0x60,uVar1);
          (**(code **)(lVar2 + 0x40))(unaff_x22 + 0x88,uVar1,lVar2);
          uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
          lVar2 = *(long *)(unaff_x22 + 0xa8);
          func_0x0001000a8868(unaff_x22 + 0x88,uVar1);
          (**(code **)(lVar2 + 8))(1,0,0,2,0,1,uVar1,lVar2);
          func_0x0001000834e4(unaff_x22 + 0x88);
          func_0x0001000834e4(unaff_x22 + 0x60);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
          lVar2 = *(long *)(unaff_x22 + 0x30);
          func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
          (**(code **)(lVar2 + 0x10))(unaff_x22 + 0xb0,uVar1,lVar2);
          uVar1 = *(undefined8 *)(unaff_x22 + 200);
          lVar2 = *(long *)(unaff_x22 + 0xd0);
          func_0x0001000a8868(unaff_x22 + 0xb0,uVar1);
          piVar7 = *(int **)(lVar2 + 0x10);
          iVar3 = *piVar7;
          plVar6 = (long *)(ulong)(uint)piVar7[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x2e0) = plVar6;
          *plVar6 = unaff_x22;
          plVar6[1] = (long)FUN_1028e345c;
                    /* WARNING: Could not recover jumptable at 0x0001028e33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar3 + (long)piVar7))(0x50105,0,1,uVar1,lVar2);
          return;
        }
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2c0));
      FUN_1028e64d4(unaff_x22 + 0x38,0x112e08bb0,&UNK_10d9ddb20);
    }
    else {
      if (iVar3 != 1) {
        uVar4 = *(undefined4 *)(unaff_x22 + 0x32c);
        func_0x000101107304(0);
        *(undefined4 *)(unaff_x22 + 0x328) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)();
        return;
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2c0));
    }
    *(undefined1 *)(lVar8 + lVar2) = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2c0));
  }
                    /* WARNING: Could not recover jumptable at 0x0001028e3458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e345c; end: 1028e34b7;  */

void FUN_1028e345c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2e8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1028e34b8;
  }
  else {
    pcVar1 = FUN_1028e3b80;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x2c8),*(undefined8 *)(lVar2 + 0x2d0));
  return;
}



/* Entry: 1028e34b8; end: 1028e378b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e34b8(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x2b8);
  func_0x0001000834e4(unaff_x22 + 0xb0);
  lVar8 = _DAT_112eca690;
  func_0x000107c61428(lVar11 + _DAT_112eca690,unaff_x22 + 0x268,0,0);
  lVar7 = *(long *)(lVar11 + lVar8);
  puVar6 = (ulong *)(lVar7 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar13 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *puVar6;
  func_0x000107c61438(lVar7,2);
  lVar9 = 0;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar2 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      func_0x000107c555d0(*(undefined8 *)
                           (*(long *)(lVar7 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                           lVar1 * 0x200));
      lVar9 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar12 >> 6) <= lVar1) {
      func_0x000107c6142c(lVar7);
      func_0x0001028e61dc(lVar7,puVar6,~uVar12,lVar9,0);
      lVar7 = lVar11 + lVar8;
      uVar13 = unaff_x22 + 0x280;
      func_0x000107c61428(lVar7,uVar13,0x20,0);
      lVar8 = *(long *)(lVar11 + lVar8);
      if ((*(long *)(lVar8 + 0x10) == 0) || (func_0x000101137240(), (uVar13 & 1) == 0)) {
        lVar8 = unaff_x22 + 0x280;
        func_0x000107c614a8();
      }
      else {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + lVar7 * 8);
        func_0x000107c614a8(unaff_x22 + 0x280);
        func_0x000107c555d0();
      }
      func_0x0001028e2398();
      *(long *)(unaff_x22 + 0x2a8) = lVar8;
      func_0x0001007d6d78(unaff_x22 + 0x2a8);
      func_0x000107c6142c(lVar8);
      FUN_1028e17e8(unaff_x22 + 0x178);
      uVar10 = *(undefined8 *)(unaff_x22 + 400);
      lVar8 = *(long *)(unaff_x22 + 0x198);
      func_0x0001000a8868(unaff_x22 + 0x178,uVar10);
      (**(code **)(lVar8 + 0x20))(unaff_x22 + 0x1a0,uVar10,lVar8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x1b8);
      lVar8 = *(long *)(unaff_x22 + 0x1c0);
      func_0x0001000a8868(unaff_x22 + 0x1a0,uVar10);
      (**(code **)(lVar8 + 0x18))(uVar10,lVar8);
      func_0x0001000834e4(unaff_x22 + 0x1a0);
      func_0x0001000834e4(unaff_x22 + 0x178);
      FUN_1028e17e8(unaff_x22 + 0x1c8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
      lVar8 = *(long *)(unaff_x22 + 0x1e8);
      func_0x0001000a8868(unaff_x22 + 0x1c8,uVar10);
      (**(code **)(lVar8 + 0x40))(unaff_x22 + 0x1f0,uVar10,lVar8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x208);
      lVar8 = *(long *)(unaff_x22 + 0x210);
      func_0x0001000a8868(unaff_x22 + 0x1f0,uVar10);
      (**(code **)(lVar8 + 8))(3,0,0,2,0,1,uVar10,lVar8);
      func_0x0001000834e4(unaff_x22 + 0x1f0);
      lVar8 = unaff_x22 + 0x1c8;
      func_0x0001000834e4();
      FUN_1028e212c();
      *(long *)(unaff_x22 + 0x2f0) = lVar8;
      plVar5 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x2f8) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1028e378c;
      plVar5[8] = lVar8;
      lVar8 = 0x112e085c8;
      func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
      uVar13 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xf;
      uVar12 = uVar13 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[9] = uVar12;
      uVar13 = uVar13 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[10] = uVar13;
      lVar7 = 0;
      func_0x000107c5fcec();
      lVar8 = lVar7;
      func_0x000107c5fce8();
      plVar5[0xb] = lVar8;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar5[0xc] = lVar7;
      plVar5[0xd] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e7e9c,lVar7,lVar8);
      return;
    }
    uVar13 = puVar6[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e378c);
  (*pcVar3)();
}



/* Entry: 1028e378c; end: 1028e37df;  */

void FUN_1028e378c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x2f0);
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x2f8));
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e37e0,*(undefined8 *)(lVar1 + 0x2c8),*(undefined8 *)(lVar1 + 0x2d0));
  return;
}



/* Entry: 1028e37e0; end: 1028e38d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e37e0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x2b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar2 = uVar5;
  func_0x000107c49fd4();
  func_0x000107c615e8(uVar5);
  if ((int)uVar2 != 0) {
    plVar1 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x300) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1028e38d4;
    plVar1[0x10] = *(long *)(unaff_x22 + 0x2b8);
    lVar3 = 0;
    func_0x000107c5fcec();
    plVar1[0x11] = lVar3;
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar1[0x12] = lVar4;
    func_0x000100eea164();
    plVar1[0x13] = lVar4;
    func_0x000107c5fca8();
    plVar1[0x14] = lVar3;
    plVar1[0x15] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e51fc,lVar3,lVar4);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2c0);
  func_0x000107c61574();
  lVar3 = *(long *)(unaff_x22 + 0x2d8);
  lVar4 = *(long *)(unaff_x22 + 0x2b8);
  func_0x0001028e2398();
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar2;
  func_0x0001007d6d78(unaff_x22 + 0x2a0);
  func_0x000107c6142c(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined1 *)(lVar4 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e38d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e38d4; end: 1028e391b;  */

void FUN_1028e38d4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e391c,*(undefined8 *)(lVar1 + 0x2c8),*(undefined8 *)(lVar1 + 0x2d0));
  return;
}



/* Entry: 1028e391c; end: 1028e39d7;  */

void FUN_1028e391c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  FUN_1028e17e8(unaff_x22 + 0x218);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  lVar5 = *(long *)(unaff_x22 + 0x238);
  func_0x0001000a8868(unaff_x22 + 0x218,uVar4);
  (**(code **)(lVar5 + 0x28))(unaff_x22 + 0x240,uVar4,lVar5);
  uVar4 = *(undefined8 *)(unaff_x22 + 600);
  lVar5 = *(long *)(unaff_x22 + 0x260);
  func_0x0001000a8868(unaff_x22 + 0x240,uVar4);
  piVar3 = *(int **)(lVar5 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x308) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1028e39d8;
                    /* WARNING: Could not recover jumptable at 0x0001028e39d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(*(undefined8 *)(unaff_x22 + 0x2b8),uVar4,lVar5);
  return;
}



/* Entry: 1028e39d8; end: 1028e3a33;  */

void FUN_1028e39d8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x310) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x308));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1028e3a34;
  }
  else {
    pcVar1 = FUN_1028e3d60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x2c8),*(undefined8 *)(lVar2 + 0x2d0));
  return;
}



/* Entry: 1028e3a34; end: 1028e3aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e3a34(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x2b8);
  func_0x0001000834e4(unaff_x22 + 0x240);
  func_0x0001000834e4(unaff_x22 + 0x218);
  lVar5 = *(long *)(lVar5 + _DAT_112eca688);
  *(long *)(unaff_x22 + 0x318) = lVar5;
  plVar4 = (long *)0x90;
  func_0x000107c6157c(lVar5);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 800) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e3aa8;
  plVar4[8] = lVar5;
  lVar5 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[9] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[10] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[0xb] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0xc] = lVar3;
  plVar4[0xd] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e7e9c,lVar3,lVar5);
  return;
}



/* Entry: 1028e3aa8; end: 1028e3afb;  */

void FUN_1028e3aa8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x318);
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 800));
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e3afc,*(undefined8 *)(lVar1 + 0x2c8),*(undefined8 *)(lVar1 + 0x2d0));
  return;
}



/* Entry: 1028e3afc; end: 1028e3b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e3afc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  long lVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2c0);
  func_0x000107c61574();
  lVar3 = *(long *)(unaff_x22 + 0x2d8);
  lVar2 = *(long *)(unaff_x22 + 0x2b8);
  func_0x0001028e2398();
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar1;
  func_0x0001007d6d78(unaff_x22 + 0x2a0);
  func_0x000107c6142c(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined1 *)(lVar2 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e3b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e3b80; end: 1028e3d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e3b80(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2c0));
  func_0x0001000834e4(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x298) = uVar5;
  func_0x000107c614b0(uVar5);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x330;
  func_0x000107c6147c(lVar2,unaff_x22 + 0x298,uVar5,&UNK_1106c6770,6);
  if (((int)lVar2 == 0) || (*(char *)(unaff_x22 + 0x330) != '\x04')) {
    uVar5 = 5;
  }
  else {
    uVar5 = 4;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2e8);
  FUN_1028e17e8(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000a8868(unaff_x22 + 0xd8,uVar1);
  (**(code **)(lVar2 + 0x40))(unaff_x22 + 0x100,uVar1,lVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar2 = *(long *)(unaff_x22 + 0x120);
  func_0x0001000a8868(unaff_x22 + 0x100,uVar1);
  (**(code **)(lVar2 + 8))(uVar5,0,0,2,0,1,uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x100);
  func_0x0001000834e4(unaff_x22 + 0xd8);
  FUN_1028e17e8(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar2 = *(long *)(unaff_x22 + 0x148);
  func_0x0001000a8868(unaff_x22 + 0x128,uVar5);
  (**(code **)(lVar2 + 0x20))(unaff_x22 + 0x150,uVar5,lVar2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar2 = *(long *)(unaff_x22 + 0x170);
  func_0x0001000a8868(unaff_x22 + 0x150,uVar5);
  (**(code **)(lVar2 + 0x20))(uVar5,lVar2);
  func_0x000107c614ac(uVar3);
  func_0x0001000834e4(unaff_x22 + 0x150);
  lVar2 = unaff_x22 + 0x128;
  func_0x0001000834e4();
  lVar6 = *(long *)(unaff_x22 + 0x2d8);
  lVar4 = *(long *)(unaff_x22 + 0x2b8);
  func_0x0001028e2398();
  *(long *)(unaff_x22 + 0x2a0) = lVar2;
  func_0x0001007d6d78(unaff_x22 + 0x2a0);
  func_0x000107c6142c(lVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined1 *)(lVar4 + lVar6) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e3d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e3d60; end: 1028e3dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e3d60(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x310);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2c0));
  func_0x0001000834e4(unaff_x22 + 0x240);
  func_0x0001000834e4(unaff_x22 + 0x218);
  func_0x000107c614ac();
  lVar3 = *(long *)(unaff_x22 + 0x2d8);
  lVar1 = *(long *)(unaff_x22 + 0x2b8);
  func_0x0001028e2398();
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar2;
  func_0x0001007d6d78(unaff_x22 + 0x2a0);
  func_0x000107c6142c(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined1 *)(lVar1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e3dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e3e00; end: 1028e3edf;  */

void FUN_1028e3e00(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1028e3ee0; end: 1028e3f4f;  */

void FUN_1028e3ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e3f50,uVar1,uVar2);
  return;
}



/* Entry: 1028e3f50; end: 1028e3fef;  */

void FUN_1028e3f50(void)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0xf0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1028e3ff0;
    uVar1 = *(undefined4 *)(unaff_x22 + 0x60);
    plVar2[0x15] = lVar4;
    *(undefined4 *)((long)plVar2 + 0xe4) = uVar1;
    lVar3 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar2[0x16] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar2[0x17] = lVar3;
    plVar2[0x18] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e40ac,lVar3,lVar4);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001028e3fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e3ff0; end: 1028e403b;  */

void FUN_1028e3ff0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1028e66d8,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48));
  return;
}



/* Entry: 1028e403c; end: 1028e40ab;  */

void FUN_1028e403c(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0xe4) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e40ac,uVar1,uVar2);
  return;
}



/* Entry: 1028e40ac; end: 1028e4277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e40ac(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long unaff_x22;
  
  lVar2 = _DAT_112eca698;
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  *(long *)(unaff_x22 + 200) = _DAT_112eca698;
  if ((*(byte *)(lVar8 + lVar2) & 1) == 0) {
    iVar3 = *(int *)(unaff_x22 + 0xe4);
    *(undefined1 *)(lVar8 + lVar2) = 1;
    if (iVar3 == 0) {
      FUN_1028e18f4();
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar5 = param_1, func_0x000101137240(), (param_2 & 1) == 0)) {
        *(undefined8 *)(unaff_x22 + 0x58) = 0;
        *(undefined8 *)(unaff_x22 + 0x50) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        func_0x000107c6142c(param_1);
      }
      else {
        func_0x0001028e6234(*(long *)(param_1 + 0x38) + lVar5 * 0x28,unaff_x22 + 0x38);
        func_0x000107c6142c(param_1);
        if (*(long *)(unaff_x22 + 0x50) != 0) {
          func_0x000100d0f3c0(unaff_x22 + 0x38,unaff_x22 + 0x10);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
          lVar2 = *(long *)(unaff_x22 + 0x30);
          func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
          (**(code **)(lVar2 + 0x10))(unaff_x22 + 0x60,uVar1,lVar2);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
          lVar2 = *(long *)(unaff_x22 + 0x80);
          func_0x0001000a8868(unaff_x22 + 0x60,uVar1);
          piVar7 = *(int **)(lVar2 + 0x18);
          iVar3 = *piVar7;
          plVar6 = (long *)(ulong)(uint)piVar7[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0xd0) = plVar6;
          *plVar6 = unaff_x22;
          plVar6[1] = (long)FUN_1028e4278;
                    /* WARNING: Could not recover jumptable at 0x0001028e41ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar3 + (long)piVar7))(0x50405,0,1,uVar1,lVar2);
          return;
        }
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
      FUN_1028e64d4(unaff_x22 + 0x38,0x112e08bb0,&UNK_10d9ddb20);
    }
    else {
      if (iVar3 != 1) {
        uVar4 = *(undefined4 *)(unaff_x22 + 0xe4);
        func_0x000101107304(0);
        *(undefined4 *)(unaff_x22 + 0xe0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)();
        return;
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
    }
    *(undefined1 *)(lVar8 + lVar2) = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  }
                    /* WARNING: Could not recover jumptable at 0x0001028e4274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e4278; end: 1028e42cf;  */

void FUN_1028e4278(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1028e42d0;
  }
  else {
    pcVar1 = FUN_1028e43b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xb8),*(undefined8 *)(lVar2 + 0xc0));
  return;
}



/* Entry: 1028e42d0; end: 1028e43b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e42d0(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x0001000834e4(unaff_x22 + 0x60);
  lVar4 = _DAT_112eca690;
  lVar3 = lVar2 + _DAT_112eca690;
  uVar1 = unaff_x22 + 0x88;
  func_0x000107c61428(lVar3,uVar1,0x20,0);
  lVar2 = *(long *)(lVar2 + lVar4);
  if ((*(long *)(lVar2 + 0x10) == 0) || (func_0x000101137240(), (uVar1 & 1) == 0)) {
    lVar3 = unaff_x22 + 0x88;
    func_0x000107c614a8();
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + lVar3 * 8);
    func_0x000107c614a8(unaff_x22 + 0x88);
    func_0x000107c555d0();
  }
  lVar4 = *(long *)(unaff_x22 + 200);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001028e2398();
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  func_0x0001007d6d78();
  func_0x000107c6142c(lVar3);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined1 *)(lVar2 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e43b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e43b4; end: 1028e444b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e43b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x0001000834e4(unaff_x22 + 0x60);
  func_0x000107c614ac();
  lVar3 = *(long *)(unaff_x22 + 200);
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001028e2398();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x0001007d6d78();
  func_0x000107c6142c(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined1 *)(lVar1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e4448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e444c; end: 1028e44f7;  */

/* WARNING: Possible PIC construction at 0x0001028e44dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028e44e0) */

void FUN_1028e444c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110566ae0;
  func_0x000107c613fc(&UNK_110566ae0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(7,3,0x50,3,0,0,&UNK_10daed560,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028e44f8; end: 1028e4567;  */

void FUN_1028e44f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e4568,uVar1,uVar2);
  return;
}



/* Entry: 1028e4568; end: 1028e461b;  */

void FUN_1028e4568(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar4 = lVar5;
    FUN_1028e212c();
    *(long *)(unaff_x22 + 0x58) = lVar4;
    func_0x000107c61170(lVar5);
    plVar1 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1028e461c;
    plVar1[0x11] = *(long *)(unaff_x22 + 0x38);
    plVar1[0x12] = lVar4;
    lVar5 = 0x112e085c8;
    func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
    uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x13] = uVar2;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x14] = uVar2;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x15] = uVar3;
    lVar5 = 0;
    func_0x000103a82768();
    plVar1[0x16] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar1[0x17] = lVar5;
    uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x18] = uVar3;
    lVar4 = 0;
    func_0x000107c5fcec();
    lVar5 = lVar4;
    func_0x000107c5fce8();
    plVar1[0x19] = lVar5;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[0x1a] = lVar4;
    plVar1[0x1b] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e6b50,lVar4,lVar5);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001028e4618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e461c; end: 1028e4667;  */

void FUN_1028e461c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e4668,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 1028e4668; end: 1028e469f;  */

void FUN_1028e4668(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001028e469c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e46a0; end: 1028e4797;  */

void FUN_1028e46a0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1028e4798; end: 1028e4807;  */

void FUN_1028e4798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e4808,uVar1,uVar2);
  return;
}



/* Entry: 1028e4808; end: 1028e48b3;  */

void FUN_1028e4808(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar4 = lVar5;
    FUN_1028e212c();
    *(long *)(unaff_x22 + 0x58) = lVar4;
    func_0x000107c61170(lVar5);
    plVar1 = (long *)0x140;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1028e48b4;
    plVar1[0x16] = lVar4;
    lVar5 = 0;
    func_0x000103a82768();
    plVar1[0x17] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar1[0x18] = lVar5;
    uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x19] = uVar2;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x1a] = uVar3;
    lVar5 = 0x112e085c8;
    func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
    uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x1b] = uVar2;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x1c] = uVar2;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x1d] = uVar3;
    lVar4 = 0;
    func_0x000107c5fcec();
    lVar5 = lVar4;
    func_0x000107c5fce8();
    plVar1[0x1e] = lVar5;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[0x1f] = lVar4;
    plVar1[0x20] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e740c,lVar4,lVar5);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(unaff_x22 + 0x30))(0);
                    /* WARNING: Could not recover jumptable at 0x0001028e48b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e48b4; end: 1028e4907;  */

void FUN_1028e48b4(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined1 *)(lVar2 + 0x68) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e4908,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 1028e4908; end: 1028e4943;  */

void FUN_1028e4908(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(unaff_x22 + 0x30))(*(undefined1 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001028e4940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e4944; end: 1028e49bf;  */

void FUN_1028e4944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  FUN_1028e49c0(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c45788();
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 1028e49c0; end: 1028e4bb3;  */

undefined * FUN_1028e49c0(ulong param_1)

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
    FUN_1028e5a74(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e4bb4);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1028e635c(0,0x112eca748,&PTR_PTR_1126ab7d8);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_1028e5a74(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
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
        FUN_1028e9470(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1028e635c(0,0x112eca748,&PTR_PTR_1126ab7d8);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_1028e5a74(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
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



/* Entry: 1028e4bb4; end: 1028e4c1f;  */

void FUN_1028e4bb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x138) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x140) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e4c20,uVar1,uVar2);
  return;
}



/* Entry: 1028e4c20; end: 1028e4cdb;  */

void FUN_1028e4c20(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  FUN_1028e17e8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x10))(unaff_x22 + 0x38,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1028e4cdc;
                    /* WARNING: Could not recover jumptable at 0x0001028e4cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(0x50405,0,1,uVar2,lVar3);
  return;
}



/* Entry: 1028e4cdc; end: 1028e4d47;  */

void FUN_1028e4cdc(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x158) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x150));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x170) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    uVar3 = *(undefined8 *)(lVar4 + 0x148);
    pcVar1 = FUN_1028e4d48;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x140);
    uVar3 = *(undefined8 *)(lVar4 + 0x148);
    pcVar1 = FUN_1028e5080;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1028e4d48; end: 1028e4f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e4d48(void)

{
  undefined8 uVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x170);
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x10);
  lVar8 = _DAT_112eca690;
  if (cVar2 == '\x01') {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
    cVar2 = *(char *)(unaff_x22 + 0x170);
    lVar6 = *(long *)(unaff_x22 + 0x130);
    FUN_1028e17e8(unaff_x22 + 0xb0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    lVar8 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,uVar1);
    (**(code **)(lVar8 + 0x40))(unaff_x22 + 0xd8,uVar1,lVar8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar8 = *(long *)(unaff_x22 + 0xf8);
    func_0x0001000a8868(unaff_x22 + 0xd8,uVar1);
    (**(code **)(lVar8 + 0x28))(cVar2 != '\x01',2,uVar1,lVar8);
    func_0x0001000834e4(unaff_x22 + 0xd8);
    lVar8 = unaff_x22 + 0xb0;
    func_0x0001000834e4();
    *(undefined1 *)(lVar6 + _DAT_112eca698) = 0;
    func_0x0001028e2398();
    *(long *)(unaff_x22 + 0x120) = lVar8;
    func_0x0001007d6d78(unaff_x22 + 0x120);
    func_0x000107c6142c(lVar8);
                    /* WARNING: Could not recover jumptable at 0x0001028e4e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x130);
  lVar6 = lVar7 + _DAT_112eca690;
  uVar5 = unaff_x22 + 0x100;
  func_0x000107c61428(lVar6,uVar5,0x20,0);
  lVar8 = *(long *)(lVar7 + lVar8);
  if ((*(long *)(lVar8 + 0x10) == 0) || (func_0x000101137240(), (uVar5 & 1) == 0)) {
    lVar8 = unaff_x22 + 0x100;
    func_0x000107c614a8();
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + lVar6 * 8);
    func_0x000107c614a8(unaff_x22 + 0x100);
    func_0x000107c555d0();
  }
  func_0x0001028e2398();
  *(long *)(unaff_x22 + 0x128) = lVar8;
  func_0x0001007d6d78(unaff_x22 + 0x128);
  func_0x000107c6142c();
  FUN_1028e212c();
  *(long *)(unaff_x22 + 0x160) = lVar8;
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x168) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1028e4f38;
  plVar3[8] = lVar8;
  lVar8 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar5 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[9] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[10] = uVar5;
  lVar6 = 0;
  func_0x000107c5fcec();
  lVar8 = lVar6;
  func_0x000107c5fce8();
  plVar3[0xb] = lVar8;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0xc] = lVar6;
  plVar3[0xd] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e7e9c,lVar6,lVar8);
  return;
}



/* Entry: 1028e4f38; end: 1028e4f83;  */

void FUN_1028e4f38(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x160);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x168));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1028e4f84,*(undefined8 *)(lVar2 + 0x140),*(undefined8 *)(lVar2 + 0x148));
  return;
}



/* Entry: 1028e4f84; end: 1028e507f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e4f84(void)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
  cVar2 = *(char *)(unaff_x22 + 0x170);
  lVar4 = *(long *)(unaff_x22 + 0x130);
  FUN_1028e17e8(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  func_0x0001000a8868(unaff_x22 + 0xb0,uVar1);
  (**(code **)(lVar3 + 0x40))(unaff_x22 + 0xd8,uVar1,lVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar3 = *(long *)(unaff_x22 + 0xf8);
  func_0x0001000a8868(unaff_x22 + 0xd8,uVar1);
  (**(code **)(lVar3 + 0x28))(cVar2 != '\x01',0,uVar1,lVar3);
  func_0x0001000834e4(unaff_x22 + 0xd8);
  lVar3 = unaff_x22 + 0xb0;
  func_0x0001000834e4();
  *(undefined1 *)(lVar4 + _DAT_112eca698) = 0;
  func_0x0001028e2398();
  *(long *)(unaff_x22 + 0x120) = lVar3;
  func_0x0001007d6d78(unaff_x22 + 0x120);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001028e507c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e5080; end: 1028e5187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028e5080(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar1 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x0001000834e4(unaff_x22 + 0x10);
  FUN_1028e17e8(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  (**(code **)(lVar3 + 0x40))(unaff_x22 + 0x88,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000a8868(unaff_x22 + 0x88,uVar2);
  (**(code **)(lVar3 + 0x28))(0,2,uVar2,lVar3);
  func_0x000107c614ac(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x88);
  lVar3 = unaff_x22 + 0x60;
  func_0x0001000834e4();
  *(undefined1 *)(lVar1 + _DAT_112eca698) = 0;
  func_0x0001028e2398();
  *(long *)(unaff_x22 + 0x118) = lVar3;
  func_0x0001007d6d78(unaff_x22 + 0x118);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001028e5184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e5188; end: 1028e51fb;  */

void FUN_1028e5188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e51fc,uVar1,uVar2);
  return;
}



/* Entry: 1028e51fc; end: 1028e52d3;  */

void FUN_1028e51fc(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x80);
  func_0x000107c4f078();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  if (uVar1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  }
  else {
    uVar2 = uVar1;
    func_0x000107c49aa0();
    if ((uVar2 & 1) != 0) {
      uVar2 = uVar1;
      func_0x000107c5cf40();
      func_0x000107c61180();
      *(ulong *)(unaff_x22 + 0xb8) = uVar2;
      if (uVar2 != 0) {
        func_0x000107c5fce8();
        *(ulong *)(unaff_x22 + 0xc0) = uVar2;
        if (uVar2 == 0) {
          uVar2 = 0;
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
          func_0x000107c614f0();
          func_0x000107c5fca8();
        }
        *(ulong *)(unaff_x22 + 200) = uVar2;
        *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e52d4,uVar2);
        return;
      }
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    func_0x000107c61170(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001028e52a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e52d4; end: 1028e53b3;  */

void FUN_1028e52d4(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0xb8);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1028e53b4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110566b58;
  func_0x000107c613fc(&UNK_110566b58,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar1;
  *(code **)(unaff_x22 + 0x70) = FUN_1028e65b8;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1013c1f34;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110566b70;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c3dcb8();
  func_0x000107c60bd0(puVar4);
  if ((uVar3 & 1) == 0) {
    func_0x000107c61450(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1028e53b4; end: 1028e5427;  */

void FUN_1028e53b4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1028e53f0,*(undefined8 *)(*unaff_x22 + 200),*(undefined8 *)(*unaff_x22 + 0xd0));
  return;
}



/* Entry: 1028e5428; end: 1028e546b;  */

void FUN_1028e5428(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001028e5468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028e546c; end: 1028e5493; -[_TtC35ExternalMusicSettingsImplementation35ExternalMusicSettingsViewController initWithCoder:] */

void FUN_1028e546c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1028e6044();
  return;
}



/* Entry: 1028e5494; end: 1028e54bf; -[_TtC35ExternalMusicSettingsImplementation35ExternalMusicSettingsViewController initWithNibName:bundle:] */

void FUN_1028e5494(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicSettingsImplementation.ExternalMusicSettingsViewController",0x47
                      ,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e54c0);
  (*pcVar1)();
}



/* Entry: 1028e54c0; end: 1028e54c3;  */

void FUN_1028e54c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028e54c4; end: 1028e5647; -[_TtC35ExternalMusicSettingsImplementation35ExternalMusicSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028e54c4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca6d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca6a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca6b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca6a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca6c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca6d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca6b8));
  FUN_1028e64d4(param_1 + _DAT_112eca658,0x112eca730,&UNK_10dc001e0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eca660));
  FUN_1028e615c(*(undefined8 *)(param_1 + _DAT_112eca668));
  func_0x0001028e616c(*(undefined8 *)(param_1 + _DAT_112eca670));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca678));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eca688));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eca690));
  param_1 = param_1 + _DAT_112eca6c0;
  (*(code *)(undefined *)0x1028e9950)();
  return param_1;
}



/* Entry: 1028e5648; end: 1028e5683; -[_TtC35ExternalMusicSettingsImplementationP33_3BB40CEC8814DC82EB969D35944BC17F22StubFriendmojiProvider init] */

void FUN_1028e5648(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028e5684; end: 1028e56b7;  */

void FUN_1028e5684(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028e56b8; end: 1028e5807;  */

void FUN_1028e56b8(void)

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
  
  func_0x0001000285a8(0x112eca738,&UNK_10daed530);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_1028e5794;
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
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar7 * 8);
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_1028e5794:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e5808);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1028e57e0;
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
LAB_1028e57e0:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1028e5808; end: 1028e5a73;  */

void FUN_1028e5808(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112eca738;
  func_0x0001000285a8(0x112eca738,&UNK_10daed530);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1028e5a40:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e5a70);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_1028e5a40;
        }
        uVar15 = puVar12[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar5 = 0;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1028e5a74);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 1028e5a74; end: 1028e5a8f;  */

void FUN_1028e5a74(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1028e5a90();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1028e5a90; end: 1028e5b9b;  */

undefined * FUN_1028e5a90(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028e5b9c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sypN_11034f1a8 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1028e5b9c; end: 1028e5d43;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1028e5b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  undefined8 uVar6;
  long extraout_x12;
  undefined8 *puVar7;
  undefined *apuStack_80 [4];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  puStack_60 = &UNK_110566c98;
  ppuStack_58 = &PTR_DAT_110566cb0;
  lVar1 = 0;
  apuStack_80[1] = (undefined *)param_3;
  func_0x0001028e8650();
  func_0x000107c613fc();
  func_0x0001000c6518(apuStack_80 + 1,&UNK_110566c98);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uRam0000000114146f40);
  puVar7 = (undefined8 *)((long)apuStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  uVar6 = *puVar7;
  *(undefined **)(lVar1 + 0x58) = &UNK_110566c98;
  *(undefined ***)(lVar1 + 0x60) = &PTR_DAT_110566cb0;
  *(undefined8 *)(lVar1 + 0x40) = uVar6;
  puVar2 = PTR_PTR_1126ab7e0;
  func_0x000107c610f8();
  uVar6 = 0;
  FUN_1028e635c(0,0x112e08bd8,&PTR_PTR_1126a8c48);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar6);
  func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
  func_0x000107c48574();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  apuStack_80[0] = puVar2;
  func_0x0001000285a8(0x112eca740,&UNK_10daed538);
  func_0x000107c613fc();
  ppuVar5 = apuStack_80;
  func_0x00010042e6a0();
  *(undefined ***)(lVar1 + 0x78) = ppuVar5;
  func_0x000100d0f3c0(param_1,lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x38) = param_2;
  *(undefined8 *)(lVar1 + 0x68) = param_4;
  *(undefined8 *)(lVar1 + 0x70) = param_5;
  func_0x0001000834e4(apuStack_80 + 1);
  return lVar1;
}



/* Entry: 1028e5d44; end: 1028e5e2b;  */

undefined * FUN_1028e5d44(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112eca738);
  puVar2 = puVar7;
  func_0x000107c60498();
  puVar9 = *(undefined **)(param_1 + 0x20);
  puVar3 = puVar2;
  func_0x000101137240();
  if ((uVar5 & 1) == 0) {
    puVar8 = (ulong *)(param_1 + 0x28);
    do {
      puVar4 = puVar9;
      puVar7 = puVar7 + -1;
      uVar6 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) =
           *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      *(undefined **)(*(long *)(puVar2 + 0x38) + (long)puVar3 * 8) = puVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e5e2c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      puVar9 = (undefined *)*puVar8;
      func_0x000107c61174();
      func_0x000101137240();
      puVar3 = puVar4;
      puVar8 = puVar8 + 1;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028e5e00);
  (*pcVar1)();
}



/* Entry: 1028e5e2c; end: 1028e5e67;  */

undefined8 FUN_1028e5e2c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1028e9954)(param_2,param_1);
  return param_2;
}



/* Entry: 1028e5e68; end: 1028e5eb3;  */

void FUN_1028e5e68(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1028e6714;
  plVar2[0xc] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xd] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028e272c,lVar1,lVar3);
  return;
}



/* Entry: 1028e5eb4; end: 1028e5f23;  */

void FUN_1028e5eb4(undefined8 param_1)

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
  plVar3[1] = 0x1028e670c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1028e5f24; end: 1028e5f33;  */

undefined1  [16] FUN_1028e5f24(void)

{
  return ZEXT816(0x110566980);
}


