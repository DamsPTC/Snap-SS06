/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10105a864; end: 10105a8c7;  */

undefined8 * FUN_10105a864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar7;
  FUN_101059b84(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Entry: 10105a8c8; end: 10105a9c3;  */

int FUN_10105a8c8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 0x10) ^ 0xff;
  if (*(byte *)(param_1 + 0x10) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10105a9c4; end: 10105aa03;  */

void FUN_10105a9c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56fd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91dcb8;
  func_0x000107c61520(&UNK_10d91dcb8,&UNK_11037aec8);
  puRam0000000112d56fd8 = puVar1;
  return;
}



/* Entry: 10105aa04; end: 10105ab0b;  */

void FUN_10105aa04(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10105ab0c; end: 10105ab17;  */

long FUN_10105ab0c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10105ab18; end: 10105b7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ***
FUN_10105ab18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar18;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined2 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  
  uStack_168 = param_9;
  lVar3 = 0;
  uStack_1b8 = param_4;
  uStack_1b0 = param_3;
  uStack_1a8 = param_1;
  uStack_178 = param_5;
  uStack_170 = param_6;
  uStack_160 = param_7;
  uStack_158 = param_2;
  uStack_150 = param_8;
  func_0x000107c5ffd8();
  lStack_188 = *(long *)(lVar3 + -8);
  lStack_180 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_188 + 0x40));
  lVar17 = (long)&lStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_190 = lVar17;
  func_0x000107c5ffc4();
  lStack_198 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_1a0 = lVar17;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lStack_1c0 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x110,0);
  ppuVar4 = (undefined **)0x0;
  FUN_101050160();
  ppuVar12 = ppuVar4;
  ppuStack_1c8 = ppuVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112d56da8;
  func_0x0001000285a8(0x112d56ea8,&UNK_10d91dd10);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(uStack_150);
  func_0x000107c615f0();
  func_0x0001000c2754();
  *(undefined8 *)((long)ppuVar12 + lVar3) = param_9;
  lVar3 = _DAT_112d56db0;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)((long)ppuVar12 + lVar3) = uVar5;
  lVar3 = _DAT_112d56db8;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)((long)ppuVar12 + lVar3) = puVar6;
  lStack_1d0 = _DAT_112d56df8;
  func_0x0001000295c4(0);
  uVar5 = 0x112d56fe8;
  ppuStack_148 = ppuVar4;
  func_0x0001000285a8(0x112d56fe8,&UNK_10d91dd18);
  pppuVar7 = &ppuStack_148;
  func_0x000107c5fb20(pppuVar7,uVar5);
  lVar3 = lStack_1c0;
  pppuVar8 = pppuVar7;
  func_0x000107c5f80c(lStack_1c0);
  ppuStack_148 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar9 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar10 = uVar9;
  func_0x00010002964c();
  lVar17 = lStack_1a0;
  func_0x000107c60264(lStack_1a0,&ppuStack_148,uVar9,uVar10,lStack_198,pppuVar8);
  lVar1 = lStack_190;
  (**(code **)(lStack_188 + 0x68))
            (lStack_190,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_180);
  func_0x000107c5ffec(pppuVar7,uVar5,lVar3,lVar17,lVar1,0);
  *(undefined ****)((long)ppuVar12 + lStack_1d0) = pppuVar7;
  lVar3 = _DAT_112d56e00;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10104cdd0();
  uVar2 = uStack_150;
  uVar18 = uStack_158;
  uVar13 = uStack_160;
  uVar10 = uStack_168;
  uVar9 = uStack_1b0;
  uVar5 = uStack_1b8;
  *(undefined **)((long)ppuVar12 + lVar3) = puVar6;
  *(undefined8 *)((long)ppuVar12 + _DAT_112d56dc0) = uStack_1a8;
  *(undefined8 *)((long)ppuVar12 + _DAT_112d56dc8) = uStack_158;
  *(undefined8 *)((long)ppuVar12 + _DAT_112d56dd0) = uStack_1b0;
  *(undefined8 *)((long)ppuVar12 + _DAT_112d56dd8) = uStack_1b8;
  *(undefined8 *)((long)ppuVar12 + _DAT_112d56de0) = uStack_160;
  *(undefined8 *)((long)ppuVar12 + _DAT_112d56de8) = uStack_150;
  *(undefined8 *)((long)ppuVar12 + _DAT_112d56df0) = uStack_168;
  puVar6 = PTR_s_init_1125d9248;
  ppuStack_70 = ppuStack_1c8;
  uVar11 = uStack_1a8;
  ppuStack_78 = ppuVar12;
  func_0x000107c61174();
  lStack_180 = uVar11;
  func_0x000107c615f0(uVar18);
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar5);
  func_0x000107c615f0(uVar13);
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar10);
  pppuVar8 = &ppuStack_78;
  func_0x000107c61154(pppuVar8,puVar6);
  func_0x000107c61180();
  func_0x000107c3d740(uVar9);
  func_0x000107c61170(pppuVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uVar18);
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uVar13);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar10);
  uVar10 = uStack_178;
  *(undefined ****)(unaff_x20 + 0xf0) = pppuVar8;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar5;
  uVar18 = uStack_178;
  func_0x000107c61604(unaff_x20 + 0x110);
  uVar13 = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_170;
  ppuVar12 = &PTR____CFConstantStringClassReference_110e43098;
  func_0x000107c5faec();
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(uVar13);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puVar15 = puVar6;
  func_0x00010104cde4();
  puVar16 = puVar6;
  FUN_10104cdd0();
  uStack_138 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_110 = 0;
  puStack_108 = puVar6;
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 5;
  uStack_a0 = 0xf000000000000000;
  uStack_a8 = 0;
  puStack_98 = PTR___swiftEmptySetSingleton_11034f1d8;
  puStack_90 = PTR___swiftEmptySetSingleton_11034f1d8;
  pppuVar8 = &ppuStack_148;
  ppuStack_148 = ppuVar12;
  uStack_140 = uVar18;
  puStack_100 = puVar14;
  puStack_88 = puVar15;
  puStack_80 = puVar16;
  func_0x000103dbf4dc();
  uVar18 = *(undefined8 *)((long)pppuVar8[0x1e] + _DAT_112d56da8);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar18);
  func_0x000103dbf524();
  func_0x000107c61574(pppuVar8);
  func_0x000107c61170(lStack_180);
  func_0x000107c615e8(uStack_158);
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c615e8(uStack_160);
  func_0x000107c615e8(uStack_150);
  func_0x000107c615e8(uStack_168);
  func_0x000107c61574(uVar18);
  return pppuVar8;
}



/* Entry: 10105b7c8; end: 10105b94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105b7c8(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  bVar1 = *(byte *)(param_1 + 7);
  if ((1 << (ulong)(bVar1 >> 4) & 0x37fU) == 0) {
    if (bVar1 >> 4 == 7) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
      uVar4 = *(ulong *)(unaff_x20 + 0xb8);
      if (((uVar4 >> 0x3c < 0xf) && (*(char *)(unaff_x20 + 0x21) == '\x01')) &&
         ((*(byte *)(param_2 + 0x11) & 1) == 0)) {
        uVar6 = *(undefined8 *)(unaff_x20 + 0xb0);
        lVar5 = *(long *)(unaff_x20 + 0xf0);
        uVar2 = uVar6;
        func_0x00010006c00c(uVar6,uVar4);
        func_0x000108f553e4();
        uVar7 = *(undefined8 *)(lVar5 + _DAT_112d56df8);
        puVar3 = &UNK_11037b038;
        func_0x000107c613fc(&UNK_11037b038,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar5);
        func_0x000107c6157c(puVar3);
        FUN_10104f92c(uVar2,uVar7,uVar6,uVar4,FUN_10105df14,puVar3);
        func_0x000107c61578(puVar3,2);
        func_0x0001000b44c0(uVar6,uVar4);
      }
    }
    else if ((((bVar1 != 0xa0 ||
                (((param_1[5] != 0 || param_1[6] != 0) || (*param_1 != 0 || param_1[4] != 0)) ||
                ((param_1[3] != 0 || param_1[2] != 0) || param_1[1] != 0))) && (bVar1 == 0xa0)) &&
             (*param_1 == 1)) &&
            (((param_1[5] == 0 && param_1[6] == 0) && param_1[4] == 0) &&
             ((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0))) {
      FUN_10104dcf0();
    }
  }
  return;
}



/* Entry: 10105b950; end: 10105b95f;  */

bool FUN_10105b950(undefined8 param_1,long *param_2)

{
  return *param_2 == 2;
}



/* Entry: 10105b960; end: 10105bb77;  */

void FUN_10105b960(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c61434(uVar4);
      func_0x000100403b00(auStack_70,uVar3,uVar4);
      func_0x000107c6142c(uStack_68);
      lVar9 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar8,~uVar10,lVar9,0);
      return;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10105ba6c);
  (*pcVar6)();
}



/* Entry: 10105bb78; end: 10105bbab;  */

long FUN_10105bb78(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61610();
  return unaff_x20 + 0x110;
}



/* Entry: 10105bbac; end: 10105bc0f;  */

void FUN_10105bbac(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0xf8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x100));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x108));
  func_0x000101057e64(param_1 + 0x110);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x118,7);
  return;
}



/* Entry: 10105bc10; end: 10105bc3f;  */

void FUN_10105bc10(void)

{
  code *pcVar1;
  
  FUN_10105dfb0();
  func_0x000107c60eb0("SpotlightManagement.SpotlightManagementStateLogic",0x31,"init(initialState:)"
                      ,0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10105bc40);
  (*pcVar1)();
}



/* Entry: 10105bc40; end: 10105bd03;  */

void FUN_10105bc40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_200 [208];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  uStack_110 = param_2[4];
  uStack_108 = (undefined1)param_2[5];
  uStack_ff = *(undefined8 *)((long)param_2 + 0x31);
  uStack_107 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  uVar3 = param_3[0x13];
  uVar2 = param_3[0x12];
  uStack_48 = param_3[0x15];
  uStack_50 = param_3[0x14];
  uVar5 = param_3[0x14];
  uStack_38 = param_3[0x17];
  uStack_40 = param_3[0x16];
  uVar4 = param_3[0x17];
  uVar1 = param_3[0x16];
  uStack_28 = param_3[0x19];
  uStack_30 = param_3[0x18];
  uVar7 = param_3[0xb];
  uVar6 = param_3[10];
  uStack_88 = param_3[0xd];
  uStack_90 = param_3[0xc];
  uVar11 = param_3[0xd];
  uVar10 = param_3[0xc];
  uStack_78 = param_3[0xf];
  uStack_80 = param_3[0xe];
  uVar9 = param_3[0xf];
  uVar8 = param_3[0xe];
  uStack_68 = param_3[0x11];
  uStack_70 = param_3[0x10];
  uVar15 = param_3[0x11];
  uVar14 = param_3[0x10];
  uStack_58 = param_3[0x13];
  uStack_60 = param_3[0x12];
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  uStack_c8 = param_3[5];
  uStack_d0 = param_3[4];
  uVar19 = param_3[5];
  uVar18 = param_3[4];
  uStack_b8 = param_3[7];
  uStack_c0 = param_3[6];
  uVar17 = param_3[7];
  uVar16 = param_3[6];
  uStack_a8 = param_3[9];
  uStack_b0 = param_3[8];
  uVar21 = param_3[9];
  uVar20 = param_3[8];
  uStack_98 = param_3[0xb];
  uStack_a0 = param_3[10];
  uStack_e8 = param_3[1];
  uStack_f0 = *param_3;
  uStack_d8 = param_3[3];
  uStack_e0 = param_3[2];
  uVar23 = param_3[1];
  uVar22 = *param_3;
  param_1[0x15] = param_3[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar1;
  uVar1 = param_3[0x18];
  param_1[0x19] = param_3[0x19];
  param_1[0x18] = uVar1;
  param_1[0xd] = uVar11;
  param_1[0xc] = uVar10;
  param_1[0xf] = uVar9;
  param_1[0xe] = uVar8;
  param_1[0x11] = uVar15;
  param_1[0x10] = uVar14;
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  param_1[5] = uVar19;
  param_1[4] = uVar18;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  param_1[9] = uVar21;
  param_1[8] = uVar20;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[1] = uVar23;
  *param_1 = uVar22;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  FUN_10105ded8(&uStack_f0,auStack_200);
  func_0x00010105d91c(&uStack_130,param_1);
  return;
}



/* Entry: 10105bd04; end: 10105bd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105bd04(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  bVar1 = *(byte *)(param_1 + 7);
  if ((1 << (ulong)(bVar1 >> 4) & 0x37fU) == 0) {
    if (bVar1 >> 4 == 7) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
      uVar4 = *(ulong *)(unaff_x20 + 0xb8);
      if (((uVar4 >> 0x3c < 0xf) && (*(char *)(unaff_x20 + 0x21) == '\x01')) &&
         ((*(byte *)(param_2 + 0x11) & 1) == 0)) {
        uVar6 = *(undefined8 *)(unaff_x20 + 0xb0);
        lVar5 = *(long *)(unaff_x20 + 0xf0);
        uVar2 = uVar6;
        func_0x00010006c00c(uVar6,uVar4);
        func_0x000108f553e4();
        uVar7 = *(undefined8 *)(lVar5 + _DAT_112d56df8);
        puVar3 = &UNK_11037b038;
        func_0x000107c613fc(&UNK_11037b038,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar5);
        func_0x000107c6157c(puVar3);
        FUN_10104f92c(uVar2,uVar7,uVar6,uVar4,FUN_10105df14,puVar3);
        func_0x000107c61578(puVar3,2);
        func_0x0001000b44c0(uVar6,uVar4);
      }
    }
    else if ((((bVar1 != 0xa0 ||
                (((param_1[5] != 0 || param_1[6] != 0) || (*param_1 != 0 || param_1[4] != 0)) ||
                ((param_1[3] != 0 || param_1[2] != 0) || param_1[1] != 0))) && (bVar1 == 0xa0)) &&
             (*param_1 == 1)) &&
            (((param_1[5] == 0 && param_1[6] == 0) && param_1[4] == 0) &&
             ((param_1[3] == 0 && param_1[2] == 0) && param_1[1] == 0))) {
      FUN_10104dcf0();
    }
  }
  return;
}



/* Entry: 10105bd08; end: 10105beb7;  */

void FUN_10105bd08(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_10105bdfc:
          if ((long)param_1 < (long)uVar8) goto LAB_10105bd84;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 0x10);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2)) || (param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_10105bdfc;
LAB_10105bd84:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10105beb8);
  (*pcVar5)();
}



/* Entry: 10105beb8; end: 10105c0bf;  */

undefined * FUN_10105beb8(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *unaff_x21;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_60;
  undefined *apuStack_58 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar14 = uVar13 * 8;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar4 == 0) || (uVar11 = uVar14, func_0x000107c61594(uVar14,8), (uVar11 & 1) == 0)) {
      func_0x000107c6158c(uVar14,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      FUN_10105c558(apuStack_58,uVar14,uVar13,param_1,FUN_10105b950,0,&puStack_60);
      puVar5 = apuStack_58[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar5 = puStack_60;
      }
      puVar7 = (undefined *)0xffffffffffffffff;
      func_0x000107c61590(uVar14,0xffffffffffffffff);
      puVar1 = puVar5;
      goto joined_r0x00010105c078;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined *)((long)apuStack_58 + (-8 - (uVar14 + 0xf & 0x3ffffffffffffff0)));
  func_0x000107c60ee4(puVar5,uVar14);
  puVar7 = param_1;
  FUN_10105c0c0(puVar5,uVar13);
  puVar1 = unaff_x21;
joined_r0x00010105c078:
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574();
  }
  else {
    iVar4 = 2;
    puVar7 = (undefined *)0x0;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&puStack_60,uVar6);
    }
    func_0x000107c61574();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  func_0x000107c60e78();
  lVar8 = 0;
  lVar9 = 0;
  uVar13 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(puVar7 + 0x40);
  do {
    lVar10 = lVar9;
    if (uVar14 == 0) {
      do {
        lVar9 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10105c1ac);
          (*pcVar2)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar9) {
          FUN_10105c320();
          return param_1;
        }
        uVar14 = *(ulong *)((long)(puVar7 + 0x40) + lVar9 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar14 == 0);
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar9 * 0x40;
    }
    else {
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar9 << 6;
    }
    if (*(long *)(*(long *)(puVar7 + 0x38) + uVar11 * 8) == 2) {
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) | 1L << (uVar11 & 0x3f);
      bVar3 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10105c194);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 10105c0c0; end: 10105c1ab;  */

void FUN_10105c0c0(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = 0;
  lVar4 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(param_3 + 0x40);
  do {
    lVar6 = lVar4;
    if (uVar5 == 0) {
      do {
        lVar4 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10105c1ac);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar4) {
          FUN_10105c320();
          return;
        }
        uVar5 = ((ulong *)(param_3 + 0x40))[lVar4];
        lVar6 = lVar6 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar4 * 0x40;
    }
    else {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar4 << 6;
    }
    if (*(long *)(*(long *)(param_3 + 0x38) + uVar7 * 8) == 2) {
      uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar7 & 0x3f);
      bVar2 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10105c194);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 10105c1ac; end: 10105c31f;  */

void FUN_10105c1ac(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lStack_88 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar9 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10105c320);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          FUN_10105c320(param_1,param_2,lStack_88,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x40))[lVar9];
        lVar6 = lVar6 + 1;
      } while (uVar10 == 0);
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar5 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar9 << 6;
    puVar4 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10);
    uStack_70 = *puVar4;
    uVar1 = puVar4[1];
    uStack_58 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar1;
    func_0x000107c61434(uVar1);
    puVar4 = &uStack_70;
    (*param_4)(puVar4,&uStack_58);
    func_0x000107c6142c(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar9;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(lStack_88,1);
      lStack_88 = lStack_88 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10105c2e4);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 10105c320; end: 10105c557;  */

undefined * FUN_10105c320(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar6 = param_4;
    }
    else {
      func_0x0001000285a8(0x112d56d80,&UNK_10d91d910);
      puVar6 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *param_1;
      }
      lVar9 = 0;
      do {
        if (uVar14 == 0) {
          do {
            lVar15 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10105c550);
              (*pcVar4)();
            }
            if (param_2 <= lVar15) {
              return puVar6;
            }
            uVar14 = param_1[lVar15];
            lVar9 = lVar9 + 1;
          } while (uVar14 == 0);
          uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
        }
        else {
          uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
          lVar15 = lVar9;
        }
        uVar8 = LZCOUNT(uVar8) | lVar15 << 6;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar8 * 0x10);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar8 * 8);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar6 + 0x28));
        func_0x000107c61434(uVar3);
        puVar7 = auStack_a8;
        func_0x000107c5fb58(puVar7,uVar2,uVar3);
        func_0x000107c606a8();
        uVar13 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar12 = (ulong)puVar7 & (uVar13 ^ 0xffffffffffffffff);
        uVar11 = uVar12 >> 6;
        uVar8 = -1L << (uVar12 & 0x3f) &
                (*(ulong *)(puVar6 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar8 == 0) {
          bVar5 = false;
          uVar8 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar11 + 1;
            if ((uVar12 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10105c554);
              (*pcVar4)();
            }
            uVar11 = 0;
            if (uVar12 != uVar8) {
              uVar11 = uVar12;
            }
            bVar5 = (bool)(uVar12 == uVar8 | bVar5);
          } while (*(ulong *)(puVar6 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
          uVar8 = ~*(ulong *)(puVar6 + uVar11 * 8 + 0x40);
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 << 6;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
        uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar11 + 0x40) =
             1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar11 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar8 * 8) = uVar10;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10105c558);
          (*pcVar4)();
        }
        lVar9 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar6;
}



/* Entry: 10105c558; end: 10105c623;  */

void FUN_10105c558(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10105c624);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_10105c1ac(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10105c620);
  (*pcVar1)();
}



/* Entry: 10105c624; end: 10105ded7;  */

void FUN_10105c624(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_1a0 [144];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined *puStack_78;
  
  FUN_10105beb8();
  func_0x000107c6157c();
  FUN_10105b960();
  lVar14 = *(long *)(param_2 + 0x40);
  uVar13 = *(ulong *)(lVar14 + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar17 = 0;
    do {
      if (*(ulong *)(lVar14 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10105cb34);
        (*pcVar4)();
      }
      puVar8 = (ulong *)(lVar14 + 0x20 + uVar17 * 0x90);
      uVar19 = puVar8[1];
      uVar18 = *puVar8;
      uStack_f8 = puVar8[3];
      uStack_100 = puVar8[2];
      uStack_e8 = puVar8[5];
      uStack_f0 = puVar8[4];
      uStack_d8 = puVar8[7];
      uStack_e0 = puVar8[6];
      uStack_c8 = puVar8[9];
      uStack_d0 = puVar8[8];
      uStack_b8 = puVar8[0xb];
      uStack_c0 = puVar8[10];
      uStack_a8 = puVar8[0xd];
      uStack_b0 = puVar8[0xc];
      uStack_98 = puVar8[0xf];
      uStack_a0 = puVar8[0xe];
      uStack_88 = puVar8[0x11];
      uStack_90 = puVar8[0x10];
      uVar17 = uVar17 + 1;
      lVar11 = *(long *)(param_2 + 0xb8);
      uStack_110 = uVar18;
      uStack_108 = uVar19;
      func_0x000101054270(&uStack_110,auStack_1a0);
      func_0x000107c5fadc();
      uVar9 = uVar18;
      func_0x000108ea5f00();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      uVar18 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      if (*(long *)(lVar11 + 0x10) != 0) {
        func_0x000107c6068c(auStack_1a0,*(undefined8 *)(lVar11 + 0x28));
        puVar5 = auStack_1a0;
        func_0x000107c5fb58(puVar5,uVar18,uVar19);
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
        uVar16 = (ulong)puVar5 & (uVar9 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar11 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
          do {
            puVar8 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar16 * 0x10);
            uVar6 = *puVar8;
            uVar2 = puVar8[1];
            if ((uVar6 == uVar18 && uVar2 == uVar19) ||
               (func_0x000107c605b8(uVar6,uVar2,uVar18,uVar19,0), (uVar6 & 1) != 0)) {
              func_0x000107c6142c(uVar19);
              func_0x0001010542ac(&uStack_110);
              goto LAB_10105c698;
            }
            uVar16 = uVar16 + 1 & ~uVar9;
          } while ((*(ulong *)(lVar11 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(uVar19);
      puVar7 = puVar15;
      func_0x000107c61558();
      puStack_78 = puVar15;
      if (((ulong)puVar7 & 1) == 0) {
        FUN_10105637c(0,*(long *)(puVar15 + 0x10) + 1,1);
      }
      uVar9 = *(ulong *)(puStack_78 + 0x10);
      if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar9) {
        FUN_10105637c(1 < *(ulong *)(puStack_78 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puStack_78 + 0x10) = uVar9 + 1;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x28) = uStack_108;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x20) = uStack_110;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x58) = uStack_d8;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x50) = uStack_e0;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x68) = uStack_c8;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x60) = uStack_d0;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x38) = uStack_f8;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x30) = uStack_100;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x48) = uStack_e8;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x40) = uStack_f0;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x98) = uStack_98;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x90) = uStack_a0;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0xa8) = uStack_88;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0xa0) = uStack_90;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x78) = uStack_b8;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x70) = uStack_c0;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x88) = uStack_a8;
      *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x80) = uStack_b0;
      puVar15 = puStack_78;
LAB_10105c698:
    } while (uVar17 != uVar13);
  }
  func_0x000107c6142c(lVar14);
  *(undefined **)(param_2 + 0x40) = puVar15;
  lVar14 = *(long *)(param_2 + 0x20);
  if (lVar14 == 0) {
    func_0x000107c61574(param_1);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    lVar11 = *(long *)(param_2 + 0x38);
    uVar13 = *(ulong *)(lVar11 + 0x10);
    func_0x000107c61434();
    func_0x000107c61434(lVar14);
    func_0x000107c61434(lVar11);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar13 != 0) {
      uVar17 = 0;
      do {
        if (*(ulong *)(lVar11 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10105cb38);
          (*pcVar4)();
        }
        puVar8 = (ulong *)(lVar11 + 0x20 + uVar17 * 0x90);
        uVar19 = puVar8[1];
        uVar18 = *puVar8;
        uStack_f8 = puVar8[3];
        uStack_100 = puVar8[2];
        uStack_e8 = puVar8[5];
        uStack_f0 = puVar8[4];
        uStack_d8 = puVar8[7];
        uStack_e0 = puVar8[6];
        uStack_c8 = puVar8[9];
        uStack_d0 = puVar8[8];
        uStack_b8 = puVar8[0xb];
        uStack_c0 = puVar8[10];
        uStack_a8 = puVar8[0xd];
        uStack_b0 = puVar8[0xc];
        uStack_98 = puVar8[0xf];
        uStack_a0 = puVar8[0xe];
        uStack_88 = puVar8[0x11];
        uStack_90 = puVar8[0x10];
        uVar17 = uVar17 + 1;
        lVar12 = *(long *)(param_2 + 0xb8);
        uStack_110 = uVar18;
        uStack_108 = uVar19;
        func_0x000101054270(&uStack_110,auStack_1a0);
        func_0x000107c5fadc();
        uVar9 = uVar18;
        func_0x000108ea5f00();
        func_0x000107c61180();
        func_0x000107c61170(uVar18);
        uVar18 = uVar9;
        func_0x000107c5faec();
        func_0x000107c61170(uVar9);
        if (*(long *)(lVar12 + 0x10) != 0) {
          func_0x000107c6068c(auStack_1a0,*(undefined8 *)(lVar12 + 0x28));
          puVar5 = auStack_1a0;
          func_0x000107c5fb58(puVar5,uVar18,uVar19);
          func_0x000107c606a8();
          uVar9 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          uVar16 = (ulong)puVar5 & (uVar9 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar12 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
            do {
              puVar8 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar16 * 0x10);
              uVar6 = *puVar8;
              uVar2 = puVar8[1];
              if ((uVar6 == uVar18 && uVar2 == uVar19) ||
                 (func_0x000107c605b8(uVar6,uVar2,uVar18,uVar19,0), (uVar6 & 1) != 0)) {
                func_0x000107c6142c(uVar19);
                func_0x0001010542ac(&uStack_110);
                goto LAB_10105c8e8;
              }
              uVar16 = uVar16 + 1 & ~uVar9;
            } while ((*(ulong *)(lVar12 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c(uVar19);
        puVar7 = puVar15;
        func_0x000107c61558();
        puStack_78 = puVar15;
        if (((ulong)puVar7 & 1) == 0) {
          FUN_10105637c(0,*(long *)(puVar15 + 0x10) + 1,1);
        }
        uVar9 = *(ulong *)(puStack_78 + 0x10);
        if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar9) {
          FUN_10105637c(1 < *(ulong *)(puStack_78 + 0x18),uVar9 + 1,1);
        }
        *(ulong *)(puStack_78 + 0x10) = uVar9 + 1;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x28) = uStack_108;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x20) = uStack_110;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x58) = uStack_d8;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x50) = uStack_e0;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x68) = uStack_c8;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x60) = uStack_d0;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x38) = uStack_f8;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x30) = uStack_100;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x48) = uStack_e8;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x40) = uStack_f0;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x98) = uStack_98;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x90) = uStack_a0;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0xa8) = uStack_88;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0xa0) = uStack_90;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x78) = uStack_b8;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x70) = uStack_c0;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x88) = uStack_a8;
        *(ulong *)(puStack_78 + uVar9 * 0x90 + 0x80) = uStack_b0;
        puVar15 = puStack_78;
LAB_10105c8e8:
      } while (uVar17 != uVar13);
    }
    func_0x000107c61574(param_1);
    func_0x000107c6142c(lVar11);
    func_0x00010105aa80(uVar10,lVar14,uVar1,uVar3,lVar11);
    *(undefined8 *)(param_2 + 0x18) = uVar10;
    *(long *)(param_2 + 0x20) = lVar14;
    *(undefined8 *)(param_2 + 0x28) = uVar1;
    *(undefined8 *)(param_2 + 0x30) = uVar3;
    *(undefined **)(param_2 + 0x38) = puVar15;
  }
  return;
}



/* Entry: 10105ded8; end: 10105df13;  */

undefined8 FUN_10105ded8(undefined8 param_1,undefined8 param_2)

{
  FUN_101059c0c(param_2,param_1);
  return param_2;
}



/* Entry: 10105df14; end: 10105df1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105df14(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined1 auStack_58 [24];
  
  if (param_1[3][9] != '\x01') {
    pauVar1 = param_1 + 1;
    uVar11 = *(undefined8 *)*pauVar1;
    auVar7 = *pauVar1;
    auVar6 = *pauVar1;
    pauVar1 = param_1 + 2;
    uVar3 = *(undefined8 *)*pauVar1;
    auVar14 = *pauVar1;
    auVar13 = *pauVar1;
    uVar12 = *(undefined8 *)*param_1;
    auVar5 = *param_1;
    auVar4 = *param_1;
    uVar10 = *(undefined8 *)param_1[3];
    bVar2 = param_1[3][8];
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar8 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      auVar15 = NEON_ext(auVar13,auVar14,8,1);
      auVar13 = NEON_ext(auVar6,auVar7,8,1);
      auVar14 = NEON_ext(auVar4,auVar5,8,1);
      uVar9 = *(undefined8 *)(lVar8 + _DAT_112d56da8);
      func_0x000107c6157c(uVar9);
      func_0x000107c61170(lVar8);
      bStack_a8 = bVar2 & 1 | 0x60;
      uStack_98 = *(undefined8 *)(*param_1 + 8);
      uStack_a0 = *(undefined8 *)*param_1;
      uStack_90 = *(undefined8 *)param_1[1];
      uStack_88 = *(undefined8 *)(param_1[1] + 8);
      uStack_80 = *(undefined8 *)param_1[2];
      uStack_78 = (undefined2)*(undefined8 *)(param_1[2] + 8);
      uStack_6e = *(undefined8 *)(param_1[3] + 2);
      uStack_76 = (undefined6)*(undefined8 *)(param_1[2] + 10);
      uStack_70 = (undefined2)((ulong)*(undefined8 *)(param_1[2] + 10) >> 0x30);
      uStack_e0 = uVar12;
      uStack_d8 = auVar14._0_8_;
      uStack_d0 = uVar11;
      uStack_c8 = auVar13._0_8_;
      uStack_c0 = uVar3;
      uStack_b8 = auVar15._0_8_;
      uStack_b0 = uVar10;
      func_0x0001010542e0(&uStack_a0,auStack_120);
      func_0x0001002a64a8(&uStack_e0);
      func_0x000107c61574(uVar9);
      FUN_101052098(&uStack_e0);
    }
  }
  return;
}



/* Entry: 10105df1c; end: 10105dfaf;  */

void FUN_10105df1c(undefined8 param_1)

{
  if (lRam0000000112d57018 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61fa00);
  return;
}



/* Entry: 10105dfb0; end: 10105e053;  */

undefined8 FUN_10105dfb0(undefined8 param_1)

{
  FUN_101059adc();
  return param_1;
}



/* Entry: 10105e054; end: 10105e08f;  */

bool FUN_10105e054(long *param_1,long *param_2)

{
  if ((*param_1 != *param_2 || param_1[1] != param_2[1]) || param_1[2] != param_2[2]) {
    return false;
  }
  return (double)param_1[3] == (double)param_2[3];
}



/* Entry: 10105e090; end: 10105e0bb;  */

long FUN_10105e090(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10105e0bc; end: 10105e117;  */

int FUN_10105e0bc(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10105e118; end: 10105e197;  */

uint FUN_10105e118(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_28 = param_2[0x11];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_10105e198(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 10105e198; end: 10105e35f;  */

bool FUN_10105e198(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[2];
      if ((uVar2 != param_2[2] || param_1[3] != uVar1) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
      {
        return false;
      }
    }
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 != 0) {
        return false;
      }
    }
    else {
      if (uVar1 == 0) {
        return false;
      }
      uVar2 = param_1[4];
      if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return false;
      }
    }
    uVar1 = param_1[6];
    if (((uVar1 == param_2[6]) && (param_1[7] == param_2[7])) ||
       (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
      uVar1 = param_2[9];
      if (param_1[9] == 0) {
        if (uVar1 != 0) {
          return false;
        }
      }
      else {
        if (uVar1 == 0) {
          return false;
        }
        uVar2 = param_1[8];
        if (((uVar2 != param_2[8]) || (param_1[9] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return false;
        }
      }
      uVar1 = param_1[10];
      FUN_101058a5c(uVar1,param_2[10]);
      if ((uVar1 & 1) != 0) {
        func_0x0001007bbbf8(0);
        uVar1 = param_1[0xb];
        func_0x000107c60118(uVar1,param_2[0xb]);
        if (((((uVar1 & 1) != 0) && ((((byte)param_1[0xc] ^ (byte)param_2[0xc]) & 1) == 0)) &&
            (((*(byte *)((long)param_1 + 0x61) ^ *(byte *)((long)param_2 + 0x61)) & 1) == 0)) &&
           (param_1[0xd] == param_2[0xd])) {
          if (param_1[0xe] != param_2[0xe]) {
            return false;
          }
          if (param_1[0xf] == param_2[0xf]) {
            if ((double)param_1[0x10] == (double)param_2[0x10]) {
              return (double)param_1[0x11] == (double)param_2[0x11];
            }
            return false;
          }
          return false;
        }
      }
    }
  }
  return false;
}



/* Entry: 10105e360; end: 10105e3db;  */

long FUN_10105e360(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10105e3dc; end: 10105e497;  */

undefined8 * FUN_10105e3dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar1 = param_2[10];
  uVar6 = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xb] = uVar6;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar7 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar7;
  uVar7 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar7;
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar6);
  return param_1;
}



/* Entry: 10105e498; end: 10105e5cb;  */

undefined8 * FUN_10105e498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  return param_1;
}



/* Entry: 10105e5cc; end: 10105e5f7;  */

void FUN_10105e5cc(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Entry: 10105e5f8; end: 10105e6b3;  */

undefined8 * FUN_10105e5f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  func_0x000107c6142c(param_1[9]);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61170(uVar2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0x61) = *(undefined1 *)((long)param_2 + 0x61);
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xf] = param_2[0xf];
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  return param_1;
}



/* Entry: 10105e6b4; end: 10105e76f;  */

int FUN_10105e6b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10105e770; end: 10105e7c7;  */

uint FUN_10105e770(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined1)param_1[5];
  uStack_5f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_67 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined1)param_2[5];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  FUN_10105e7c8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10105e7c8; end: 10105e953;  */

byte FUN_10105e7c8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    FUN_101058784(uVar1,param_2[4]);
    if ((uVar1 & 1) != 0) {
      uVar6 = param_1[6];
      uVar5 = param_1[5];
      uVar4 = param_2[6];
      uVar1 = param_2[5];
      uStack_70 = uVar1;
      uStack_68 = uVar4;
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      if (uVar6 >> 0x3c < 0xf) {
        if (uVar4 >> 0x3c < 0xf) {
          func_0x00010105aabc(&uStack_60,auStack_80);
          func_0x00010105aabc(&uStack_70,auStack_80);
          uVar2 = uVar5;
          FUN_100e25fcc(uVar5,uVar6,uVar1,uVar4);
          func_0x0001000b44c0(uVar1,uVar4);
          func_0x0001000b44c0(uVar5,uVar6);
          if ((uVar2 & 1) != 0) goto LAB_10105e940;
          goto LAB_10105e8d0;
        }
      }
      else if (0xe < uVar4 >> 0x3c) {
        func_0x00010105aabc(&uStack_60,auStack_80);
        func_0x00010105aabc(&uStack_70,auStack_80);
        func_0x0001000b44c0(uVar5,uVar6);
LAB_10105e940:
        bVar3 = (byte)param_1[7] ^ (byte)param_2[7] ^ 1;
        goto LAB_10105e8d4;
      }
      func_0x00010105aabc(&uStack_60,auStack_80);
      func_0x00010105aabc(&uStack_70,auStack_80);
      func_0x0001000b44c0(uVar5,uVar6);
      func_0x0001000b44c0(uVar1,uVar4);
    }
  }
LAB_10105e8d0:
  bVar3 = 0;
LAB_10105e8d4:
  return bVar3 & 1;
}



/* Entry: 10105e954; end: 10105e9d3;  */

long FUN_10105e954(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10105e9d4; end: 10105ea6b;  */

undefined8 * FUN_10105e9d4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  uVar1 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[5] = uVar2;
    param_1[6] = uVar1;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 10105ea6c; end: 10105eb6b;  */

undefined8 * FUN_10105ea6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[6];
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[5];
      func_0x00010006c00c(uVar4,uVar3);
      uVar2 = param_1[5];
      uVar1 = param_1[6];
      param_1[5] = uVar4;
      param_1[6] = uVar3;
      func_0x00010006c090(uVar2,uVar1);
      goto LAB_10105eb50;
    }
    func_0x0001006e5814(param_1 + 5);
  }
  else if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    goto LAB_10105eb50;
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
LAB_10105eb50:
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 10105eb6c; end: 10105ec0b;  */

undefined8 * FUN_10105eb6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_10105ebf4;
    }
    func_0x0001006e5814(param_1 + 5);
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
LAB_10105ebf4:
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 10105ec0c; end: 10105ecb3;  */

int FUN_10105ec0c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10105ecb4; end: 10105ed57;  */

void FUN_10105ecb4(long param_1)

{
  undefined8 uVar1;
  
  func_0x000100673624();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 9;
  *(undefined8 *)(param_1 + 0x10) = 4;
  FUN_101061e78(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = 0;
  func_0x000107c60110();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c60108(0x3fe570a3d70a3d71);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000107c60108(0x3fea8f5c28f5c28f);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = 1;
  func_0x000107c60110();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  lRam0000000112d57228 = param_1;
  return;
}



/* Entry: 10105ed58; end: 10105ef27;  */

void FUN_10105ed58(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar5 = 0;
  func_0x000100ef8bfc();
  *(undefined8 *)(lVar1 + 0x38) = uVar5;
  *(undefined **)(lVar1 + 0x20) = puVar3;
  puVar3 = puVar2;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar1 + 0x58) = uVar5;
  *(undefined **)(lVar1 + 0x40) = puVar3;
  puVar3 = puVar2;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3fe199999999999a);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar1 + 0x78) = uVar5;
  *(undefined **)(lVar1 + 0x60) = puVar3;
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3feae147ae147ae1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined8 *)(lVar1 + 0x98) = uVar5;
  *(undefined **)(lVar1 + 0x80) = puVar2;
  lRam0000000112d57218 = lVar1;
  return;
}



/* Entry: 10105ef28; end: 10105ef4f; +[_TtC19SpotlightManagementP33_4BCFC2E51C123AEF7BB474109F075DBD12GradientView layerClass] */

void FUN_10105ef28(void)

{
  FUN_101061e78(0,0x112d57230,&PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10105ef50; end: 10105efbf; -[_TtC19SpotlightManagementP33_4BCFC2E51C123AEF7BB474109F075DBD12GradientView initWithFrame:] */

void FUN_10105ef50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x00010105f078();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10105efc0; end: 10105f043; -[_TtC19SpotlightManagementP33_4BCFC2E51C123AEF7BB474109F075DBD12GradientView initWithCoder:] */

undefined1 * FUN_10105efc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = 0;
  func_0x00010105f078();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10105f044; end: 10105f097;  */

void FUN_10105f044(void)

{
  func_0x00010105f078();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10105f098; end: 10105f617;  */

undefined * FUN_10105f098(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x000107c453e4();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef21df0);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar3;
    func_0x000107c45154(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c52b68(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e10(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 10105f618; end: 10105f7d7;  */

long FUN_10105f618(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x00010105f078();
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a378();
  func_0x000107c5a050(lVar1);
  func_0x000107c550d8(lVar1);
  func_0x000107c61170(lVar1);
  lVar2 = lVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  lVar4 = lVar2;
  func_0x000107c6148c(lVar2,puVar3);
  lVar6 = lVar2;
  if (lVar4 != 0) {
    if (lRam0000000112d57220 != -1) {
      func_0x000107c61568(0x112d57220,FUN_10105ecb4);
    }
    lVar6 = lRam0000000112d57228;
    uVar5 = 0;
    FUN_101061e78(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5fc48(lVar6,uVar5);
    func_0x000107c56084(lVar4);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar6);
  lVar6 = lVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c61168(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  lVar2 = lVar6;
  func_0x000107c6148c(lVar6,puVar3);
  lVar4 = lVar6;
  if (lVar2 != 0) {
    if (lRam0000000112d57210 != -1) {
      func_0x000107c61568(0x112d57210,FUN_10105ed58);
    }
    lVar4 = lRam0000000112d57218;
    func_0x000107c5fc48(lRam0000000112d57218,PTR___sypN_11034f1a8 + 8);
    func_0x000107c535a0(lVar2);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(lVar4);
  return lVar1;
}



/* Entry: 10105f7d8; end: 10105f903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105f7d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1d0 [96];
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined1 auStack_108 [24];
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
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_108,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_112d571c8);
    uStack_e8 = puVar1[1];
    uStack_f0 = *puVar1;
    uStack_d8 = puVar1[3];
    uStack_e0 = puVar1[2];
    uStack_a8 = puVar1[9];
    uStack_b0 = puVar1[8];
    uStack_98 = puVar1[0xb];
    uStack_a0 = puVar1[10];
    uStack_c8 = puVar1[5];
    uStack_d0 = puVar1[4];
    uStack_b8 = puVar1[7];
    uStack_c0 = puVar1[6];
    uStack_168 = puVar1[1];
    uStack_170 = *puVar1;
    uStack_158 = puVar1[3];
    uStack_160 = puVar1[2];
    uStack_128 = puVar1[9];
    uStack_130 = puVar1[8];
    uStack_118 = puVar1[0xb];
    uStack_120 = puVar1[10];
    uStack_148 = puVar1[5];
    uStack_150 = puVar1[4];
    uStack_138 = puVar1[7];
    uStack_140 = puVar1[6];
    uVar2 = param_1[4];
    uVar4 = param_1[7];
    uVar3 = param_1[6];
    puVar1[5] = param_1[5];
    puVar1[4] = uVar2;
    puVar1[7] = uVar4;
    puVar1[6] = uVar3;
    uVar2 = param_1[8];
    uVar4 = param_1[0xb];
    uVar3 = param_1[10];
    puVar1[9] = param_1[9];
    puVar1[8] = uVar2;
    puVar1[0xb] = uVar4;
    puVar1[10] = uVar3;
    uVar2 = *param_1;
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    FUN_101061b74(&uStack_90,auStack_1d0);
    FUN_101061b74(&uStack_90,auStack_1d0);
    func_0x000101061bb0(&uStack_f0,auStack_1d0);
    func_0x000101061c34(&uStack_170,0x112d56ec8,&UNK_10d91da40);
    FUN_10105f904(&uStack_f0);
    func_0x000101061c34(&uStack_f0,0x112d56ec8,&UNK_10d91da40);
    func_0x000101061c00(&uStack_90);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10105f904; end: 1010600bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10105f904(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_410;
  long lStack_408;
  long lStack_400;
  ulong uStack_3f8;
  uint uStack_3ec;
  long lStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  undefined1 auStack_3b0 [96];
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_168;
  undefined2 uStack_164;
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
  
  lVar3 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&uStack_410 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112d571c8);
  uStack_208 = param_1[5];
  uStack_210 = param_1[4];
  uStack_1f8 = param_1[7];
  uStack_200 = param_1[6];
  lStack_1e8 = param_1[9];
  uStack_1f0 = param_1[8];
  lStack_1d8 = param_1[0xb];
  lStack_1e0 = param_1[10];
  lStack_228 = param_1[1];
  uStack_230 = *param_1;
  uStack_218 = param_1[3];
  uStack_220 = param_1[2];
  uStack_1b8 = puVar12[3];
  uStack_1c0 = puVar12[2];
  uStack_a8 = puVar12[5];
  uStack_b0 = puVar12[4];
  uStack_1a8 = puVar12[5];
  uStack_1b0 = puVar12[4];
  uStack_98 = puVar12[7];
  uStack_a0 = puVar12[6];
  uStack_198 = puVar12[7];
  uStack_1a0 = puVar12[6];
  uStack_88 = puVar12[9];
  uStack_90 = puVar12[8];
  uStack_188 = puVar12[9];
  uStack_190 = puVar12[8];
  uStack_78 = puVar12[0xb];
  uStack_80 = puVar12[10];
  uStack_c8 = puVar12[1];
  uStack_d0 = *puVar12;
  uStack_b8 = puVar12[3];
  uStack_c0 = puVar12[2];
  lStack_1c8 = puVar12[1];
  uStack_1d0 = *puVar12;
  uStack_178 = puVar12[0xb];
  uStack_180 = puVar12[10];
  if (lStack_228 == 0) {
    if (lStack_1c8 == 0) {
      uStack_2c8 = param_1[5];
      uStack_2d0 = param_1[4];
      uStack_2b8 = param_1[7];
      uStack_2c0 = param_1[6];
      lStack_2a8 = param_1[9];
      uStack_2b0 = param_1[8];
      lStack_298 = param_1[0xb];
      lStack_2a0 = param_1[10];
      lStack_2e8 = param_1[1];
      uStack_2f0 = *param_1;
      uStack_2d8 = param_1[3];
      uStack_2e0 = param_1[2];
      func_0x000101061bb0(param_1,&uStack_130);
      func_0x000101061bb0(&uStack_d0,&uStack_130);
      puVar12 = &uStack_2f0;
      goto LAB_101060060;
    }
LAB_10105fa70:
    uStack_2f0 = uStack_230;
    lStack_2e8 = lStack_228;
    uStack_2e0 = uStack_220;
    uStack_2d8 = uStack_218;
    uStack_2d0 = uStack_210;
    uStack_2c8 = uStack_208;
    uStack_2c0 = uStack_200;
    uStack_2b8 = uStack_1f8;
    uStack_2b0 = uStack_1f0;
    lStack_2a8 = lStack_1e8;
    lStack_2a0 = lStack_1e0;
    lStack_298 = lStack_1d8;
    uStack_290 = uStack_1d0;
    lStack_288 = lStack_1c8;
    uStack_280 = uStack_1c0;
    uStack_278 = uStack_1b8;
    uStack_270 = uStack_1b0;
    uStack_268 = uStack_1a8;
    uStack_260 = uStack_1a0;
    uStack_258 = uStack_198;
    uStack_250 = uStack_190;
    uStack_248 = uStack_188;
    uStack_240 = uStack_180;
    uStack_238 = uStack_178;
    func_0x000101061bb0(param_1,&uStack_130);
    func_0x000101061bb0(&uStack_d0,&uStack_130);
    func_0x000101061c34(&uStack_2f0,0x112d57200,&UNK_10d91df08);
  }
  else {
    if (lStack_1c8 == 0) goto LAB_10105fa70;
    uStack_328 = puVar12[5];
    uStack_330 = puVar12[4];
    uStack_318 = puVar12[7];
    uStack_320 = puVar12[6];
    lStack_308 = puVar12[9];
    uStack_310 = puVar12[8];
    lStack_2f8 = puVar12[0xb];
    lStack_300 = puVar12[10];
    lStack_348 = puVar12[1];
    uStack_350 = *puVar12;
    uStack_338 = puVar12[3];
    uStack_340 = puVar12[2];
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_128 = param_1[1];
    uStack_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_2f0 = uStack_350;
    lStack_2e8 = lStack_348;
    uStack_2e0 = uStack_340;
    uStack_2d8 = uStack_338;
    uStack_2d0 = uStack_330;
    uStack_2c8 = uStack_328;
    uStack_2c0 = uStack_320;
    uStack_2b8 = uStack_318;
    uStack_2b0 = uStack_310;
    lStack_2a8 = lStack_308;
    lStack_2a0 = lStack_300;
    lStack_298 = lStack_2f8;
    func_0x000101061bb0(param_1,auStack_3b0);
    func_0x000101061bb0(&uStack_d0,auStack_3b0);
    puVar4 = &uStack_130;
    FUN_1010584bc(puVar4,&uStack_2f0);
    func_0x000101061c34(&uStack_350,0x112d56ec8,&UNK_10d91da40);
    func_0x000101061c34(&uStack_230,0x112d56ec8,&UNK_10d91da40);
    if (((ulong)puVar4 & 1) != 0) {
      return;
    }
  }
  lVar16 = puVar12[9];
  uVar5 = puVar12[8];
  lStack_3e8 = puVar12[0xb];
  lStack_400 = puVar12[10];
  uStack_208 = puVar12[5];
  uStack_210 = puVar12[4];
  uStack_1f8 = puVar12[7];
  uStack_3f8 = puVar12[6];
  lStack_228 = puVar12[1];
  uStack_230 = *puVar12;
  uStack_218 = puVar12[3];
  uStack_220 = puVar12[2];
  uStack_200 = uStack_3f8;
  uStack_1f0 = uVar5;
  lStack_1e8 = lVar16;
  lStack_1e0 = lStack_400;
  lStack_1d8 = lStack_3e8;
  if (lStack_228 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d571a8) = 1;
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d57188));
    *(undefined1 *)(unaff_x20 + _DAT_112d571b0) = 1;
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d57178));
    func_0x000107c55258(*(undefined8 *)(unaff_x20 + _DAT_112d571d0));
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d571a0));
    return;
  }
  bVar2 = (byte)uStack_1f8;
  uStack_1f8._1_1_ = (byte)((ulong)uStack_1f8 >> 8);
  uStack_3ec = (uint)uStack_1f8._1_1_;
  uStack_158 = puVar12[1];
  uStack_160 = *puVar12;
  uStack_148 = puVar12[3];
  uStack_150 = puVar12[2];
  uStack_138 = puVar12[5];
  uStack_140 = puVar12[4];
  uStack_168 = *(undefined4 *)((long)puVar12 + 0x3a);
  uStack_164 = *(undefined2 *)((long)puVar12 + 0x3e);
  uStack_410 = uVar5;
  lStack_408 = lVar14;
  if (lVar16 == 0) {
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d57180);
    uStack_328 = puVar12[5];
    uStack_330 = puVar12[4];
    uStack_318 = puVar12[7];
    uStack_320 = puVar12[6];
    lStack_308 = puVar12[9];
    uStack_310 = puVar12[8];
    lStack_2f8 = puVar12[0xb];
    lStack_300 = puVar12[10];
    lStack_348 = puVar12[1];
    uStack_350 = *puVar12;
    uStack_338 = puVar12[3];
    uStack_340 = puVar12[2];
    func_0x000101061b74(&uStack_350,auStack_3b0);
    uVar5 = 0x30;
    func_0x000107c5fadc(0x30,0xe100000000000000);
    func_0x000107c59c6c(uVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c550d8(uVar15);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d57170);
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d57180);
    func_0x000101061bb0(&uStack_230,&uStack_350);
    func_0x000107c61434(lVar16);
    func_0x000107c5fadc(uVar5,lVar16);
    func_0x000107c6142c(lVar16);
    func_0x000107c59c6c(uVar15);
    func_0x000107c61170(uVar5);
    func_0x000107c550d8(uVar15);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d57170);
  }
  func_0x000107c550d8(uVar5);
  *(byte *)(unaff_x20 + _DAT_112d571a8) = (bVar2 ^ 0xff) & 1;
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d57188));
  *(byte *)(unaff_x20 + _DAT_112d571b0) = ((byte)uStack_3ec ^ 0xff) & 1;
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d57178));
  if (param_1[1] == 0) {
LAB_10105fd40:
    lVar14 = *(long *)(unaff_x20 + _DAT_112d571b8);
    if (lVar14 != 0) {
      FUN_101061e78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      lVar1 = lStack_408;
      (**(code **)(lStack_408 + 0x68))
                (lVar13,*(undefined4 *)
                         PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar3)
      ;
      func_0x000107c615f0(lVar14);
      lVar8 = lVar13;
      func_0x000107c5fff0(lVar13);
      (**(code **)(lVar1 + 8))(lVar13,lVar3);
      puVar9 = &UNK_11037b270;
      func_0x000107c613fc(&UNK_11037b270,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar10 = &UNK_11037b298;
      func_0x000107c613fc(&UNK_11037b298,0x78,7);
      *(undefined8 *)(puVar10 + 0x20) = uStack_158;
      *(undefined8 *)(puVar10 + 0x18) = uStack_160;
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(undefined8 *)(puVar10 + 0x30) = uStack_148;
      *(undefined8 *)(puVar10 + 0x28) = uStack_150;
      *(undefined8 *)(puVar10 + 0x40) = uStack_138;
      *(undefined8 *)(puVar10 + 0x38) = uStack_140;
      *(ulong *)(puVar10 + 0x48) = uStack_3f8;
      puVar10[0x50] = bVar2;
      puVar10[0x51] = (char)uStack_3ec;
      *(undefined4 *)(puVar10 + 0x52) = uStack_168;
      *(undefined2 *)(puVar10 + 0x56) = uStack_164;
      *(undefined8 *)(puVar10 + 0x58) = uStack_410;
      *(long *)(puVar10 + 0x60) = lVar16;
      *(long *)(puVar10 + 0x68) = lStack_400;
      *(long *)(puVar10 + 0x70) = lStack_3e8;
      pcStack_3c0 = FUN_101061c74;
      puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3d8 = 0x42000000;
      pcStack_3d0 = FUN_1010605ac;
      puStack_3c8 = &UNK_11037b2b0;
      ppuVar11 = &puStack_3e0;
      puStack_3b8 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar9 = puStack_3b8;
      uStack_328 = uStack_208;
      uStack_330 = uStack_210;
      uStack_318 = uStack_1f8;
      uStack_320 = uStack_200;
      lStack_308 = lStack_1e8;
      uStack_310 = uStack_1f0;
      lStack_2f8 = lStack_1d8;
      lStack_300 = lStack_1e0;
      lStack_348 = lStack_228;
      uStack_350 = uStack_230;
      uStack_338 = uStack_218;
      uStack_340 = uStack_220;
      func_0x000101061b74(&uStack_350,auStack_3b0);
      func_0x000107c61574(puVar9);
      func_0x000107c4f790(lVar14);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar8);
    }
  }
  else {
    uVar5 = param_1[6];
    FUN_101061e78(0,0x112d57208,&PTR_PTR_1126c3398);
    uVar6 = uStack_3f8;
    func_0x000107c61174();
    func_0x000107c61174(uVar5);
    uVar7 = uVar6;
    func_0x000107c60118(uVar6,uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    if ((uVar7 & 1) == 0) goto LAB_10105fd40;
  }
  if (lStack_3e8 == 1) {
LAB_10105ffc0:
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d57190);
    func_0x000107c550d8(uVar5);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d57198);
    func_0x000107c550d8(uVar15);
    func_0x000107c55258(uVar5);
    func_0x000107c5ba54(uVar15);
  }
  else {
    uVar6 = lStack_400 + 7;
    if (uVar6 < 10) {
      if ((1L << (uVar6 & 0x3f) & 0xaaU) != 0) goto LAB_10105ffc0;
      if ((1L << (uVar6 & 0x3f) & 0x45U) != 0) {
        uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d57190);
        func_0x000107c550d8(uVar15);
        func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d57198));
        uVar5 = 0xd000000000000014;
        func_0x000107c5fadc(0xd000000000000014,0x800000010ef21d60);
        puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c450cc();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        func_0x000107c55258(uVar15);
        func_0x000101061c34(&uStack_230,0x112d56ec8,&UNK_10d91da40);
        func_0x000107c61170(puVar9);
        return;
      }
      if ((1L << (uVar6 & 0x3f) & 0x300U) != 0) {
        func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d57190));
        func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d57198));
      }
    }
  }
  puVar12 = &uStack_230;
LAB_101060060:
  func_0x000101061c34(puVar12,0x112d56ec8,&UNK_10d91da40);
  return;
}



/* Entry: 1010600c0; end: 10106016f;  */

void FUN_1010600c0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_a8 [24];
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
  
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c61428(param_4 + 0x10,auStack_a8,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      uStack_68 = param_5[5];
      uStack_70 = param_5[4];
      uStack_58 = param_5[7];
      uStack_60 = param_5[6];
      uStack_48 = param_5[9];
      uStack_50 = param_5[8];
      uStack_38 = param_5[0xb];
      uStack_40 = param_5[10];
      uStack_88 = param_5[1];
      uStack_90 = *param_5;
      uStack_78 = param_5[3];
      uStack_80 = param_5[2];
      func_0x00010006c00c(param_1,param_2);
      FUN_101060170(param_1,param_2,&uStack_90);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c61170(param_4);
    }
  }
  return;
}



/* Entry: 101060170; end: 1010605ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101060170(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_390 [8];
  long lStack_388;
  long lStack_380;
  long lStack_378;
  undefined1 auStack_370 [96];
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
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
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
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
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar11 = auStack_390 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112d571c8);
  puStack_1c8 = (undefined *)puVar3[5];
  uStack_1d0 = puVar3[4];
  uStack_1b8 = puVar3[7];
  uStack_1c0 = puVar3[6];
  uStack_1a8 = puVar3[9];
  uStack_1b0 = puVar3[8];
  uStack_198 = puVar3[0xb];
  uStack_1a0 = puVar3[10];
  lStack_1e8 = puVar3[1];
  puStack_1f0 = (undefined *)*puVar3;
  puStack_1d8 = (undefined *)puVar3[3];
  puStack_1e0 = (undefined *)puVar3[2];
  uStack_208 = param_3[9];
  uStack_210 = param_3[8];
  uStack_1f8 = param_3[0xb];
  uStack_200 = param_3[10];
  uStack_228 = param_3[5];
  uStack_230 = param_3[4];
  uStack_218 = param_3[7];
  uStack_220 = param_3[6];
  lStack_248 = param_3[1];
  uStack_250 = *param_3;
  uStack_238 = param_3[3];
  uStack_240 = param_3[2];
  lStack_388 = extraout_x12;
  lStack_380 = lVar13;
  lStack_378 = lVar2;
  uStack_190 = uStack_250;
  lStack_188 = lStack_248;
  uStack_180 = uStack_240;
  uStack_178 = uStack_238;
  uStack_170 = uStack_230;
  uStack_168 = uStack_228;
  uStack_160 = uStack_220;
  uStack_158 = uStack_218;
  uStack_150 = uStack_210;
  uStack_148 = uStack_208;
  uStack_140 = uStack_200;
  uStack_138 = uStack_1f8;
  puStack_d0 = puStack_1f0;
  lStack_c8 = lStack_1e8;
  uStack_c0 = puStack_1e0;
  uStack_b8 = puStack_1d8;
  uStack_b0 = uStack_1d0;
  uStack_a8 = puStack_1c8;
  uStack_a0 = uStack_1c0;
  uStack_98 = uStack_1b8;
  uStack_90 = uStack_1b0;
  uStack_88 = uStack_1a8;
  uStack_80 = uStack_1a0;
  uStack_78 = uStack_198;
  if (lStack_1e8 == 0) {
    if (lStack_248 != 0) goto LAB_10106030c;
    uStack_288 = puVar3[5];
    uStack_290 = puVar3[4];
    uStack_278 = puVar3[7];
    uStack_280 = puVar3[6];
    uStack_268 = puVar3[9];
    uStack_270 = puVar3[8];
    uStack_258 = puVar3[0xb];
    uStack_260 = puVar3[10];
    lStack_2a8 = puVar3[1];
    puStack_2b0 = (undefined *)*puVar3;
    uStack_298 = puVar3[3];
    uStack_2a0 = puVar3[2];
    func_0x000101061bb0(&puStack_d0,&uStack_130);
    func_0x000101061bb0(param_3,&uStack_130);
    func_0x000101061c34(&puStack_2b0,0x112d56ec8,&UNK_10d91da40);
  }
  else {
    if (lStack_248 == 0) {
LAB_10106030c:
      puStack_2b0 = puStack_1f0;
      lStack_2a8 = lStack_1e8;
      uStack_2a0 = puStack_1e0;
      uStack_298 = puStack_1d8;
      uStack_290 = uStack_1d0;
      uStack_288 = puStack_1c8;
      uStack_280 = uStack_1c0;
      uStack_278 = uStack_1b8;
      uStack_270 = uStack_1b0;
      uStack_268 = uStack_1a8;
      uStack_260 = uStack_1a0;
      uStack_258 = uStack_198;
      func_0x000101061bb0(&puStack_d0,&uStack_130);
      func_0x000101061bb0(param_3,&uStack_130);
      func_0x000101061c34(&puStack_2b0,0x112d57200,&UNK_10d91df08);
      return;
    }
    uStack_2e8 = param_3[5];
    uStack_2f0 = param_3[4];
    uStack_2d8 = param_3[7];
    uStack_2e0 = param_3[6];
    uStack_2c8 = param_3[9];
    uStack_2d0 = param_3[8];
    uStack_2b8 = param_3[0xb];
    uStack_2c0 = param_3[10];
    uStack_308 = param_3[1];
    puStack_310 = (undefined *)*param_3;
    uStack_2f8 = param_3[3];
    uStack_300 = param_3[2];
    uStack_108 = puVar3[5];
    uStack_110 = puVar3[4];
    uStack_f8 = puVar3[7];
    uStack_100 = puVar3[6];
    uStack_e8 = puVar3[9];
    uStack_f0 = puVar3[8];
    uStack_d8 = puVar3[0xb];
    uStack_e0 = puVar3[10];
    uStack_128 = puVar3[1];
    uStack_130 = *puVar3;
    uStack_118 = puVar3[3];
    uStack_120 = puVar3[2];
    puStack_2b0 = puStack_310;
    lStack_2a8 = uStack_308;
    uStack_2a0 = uStack_300;
    uStack_298 = uStack_2f8;
    uStack_290 = uStack_2f0;
    uStack_288 = uStack_2e8;
    uStack_280 = uStack_2e0;
    uStack_278 = uStack_2d8;
    uStack_270 = uStack_2d0;
    uStack_268 = uStack_2c8;
    uStack_260 = uStack_2c0;
    uStack_258 = uStack_2b8;
    func_0x000101061bb0(&puStack_d0,auStack_370);
    func_0x000101061bb0(param_3,auStack_370);
    puVar3 = &uStack_130;
    FUN_1010584bc(puVar3,&puStack_2b0);
    func_0x000101061c34(&puStack_310,0x112d56ec8,&UNK_10d91da40);
    func_0x000101061c34(&puStack_1f0,0x112d56ec8,&UNK_10d91da40);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c51770();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112d571a0));
  }
  else {
    uVar5 = 0;
    FUN_101061e78(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar6 = &UNK_11037b270;
    func_0x000107c613fc(&UNK_11037b270,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_11037b2e8;
    func_0x000107c613fc(&UNK_11037b2e8,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined **)(puVar7 + 0x18) = puVar4;
    uStack_1d0 = 0x101061c9c;
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_1e8 = 0x42000000;
    puStack_1e0 = &UNK_1000f6b44;
    puStack_1d8 = &UNK_11037b300;
    ppuVar8 = &puStack_1f0;
    puStack_1c8 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_1c8;
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c5f808(lVar12);
    puStack_1f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar9 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar10 = uVar9;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar11,&puStack_1f0,uVar9,uVar10,lVar1,puVar6);
    func_0x000107c5ffe8(0,lVar12,puVar11,ppuVar8);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    (**(code **)(lStack_380 + 8))(puVar11,lVar1);
    (**(code **)(lStack_388 + 8))(lVar12,lStack_378);
  }
  return;
}



/* Entry: 1010605ac; end: 10106063b;  */

void FUN_1010605ac(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar4 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)(param_2,lVar4,param_3);
  func_0x0001000b44c0(param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10106063c; end: 10106078f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106063c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c55258(*(undefined8 *)(param_1 + _DAT_112d571d0));
    func_0x000107c550d8(*(undefined8 *)(param_1 + _DAT_112d571a0));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101060790; end: 1010616b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101060790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long unaff_x20;
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = _DAT_112d57170;
  FUN_10105f098();
  *(long *)(unaff_x20 + lVar2) = lVar9;
  lVar2 = _DAT_112d57178;
  func_0x00010105f19c();
  *(long *)(unaff_x20 + lVar2) = lVar9;
  lVar2 = _DAT_112d57180;
  func_0x00010105f2b8();
  *(long *)(unaff_x20 + lVar2) = lVar9;
  lVar2 = _DAT_112d57188;
  func_0x00010105f424();
  *(long *)(unaff_x20 + lVar2) = lVar9;
  lVar2 = _DAT_112d57190;
  func_0x00010105f548();
  *(long *)(unaff_x20 + lVar2) = lVar9;
  lVar2 = _DAT_112d57198;
  puVar10 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c550d8(puVar10);
  puVar11 = puVar10;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar10;
  lVar2 = _DAT_112d571a0;
  FUN_10105f618();
  *(undefined **)(unaff_x20 + lVar2) = puVar11;
  *(undefined1 *)(unaff_x20 + _DAT_112d571a8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d571b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d571b8) = 0;
  lVar2 = _DAT_112d571c0;
  uVar12 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d571c8);
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = _DAT_112d571d0;
  func_0x0001010606bc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar12;
  puVar13 = &stack0xffffffffffffff70;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar13,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar14 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  lVar8 = _DAT_112d571d0;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  lVar7 = _DAT_112d571a0;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  lVar3 = _DAT_112d57180;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  lVar2 = _DAT_112d57170;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  lVar4 = _DAT_112d57188;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  lVar5 = _DAT_112d57190;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  lVar6 = _DAT_112d57198;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  lVar9 = _DAT_112d57178;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar14);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar11 = puVar10;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar11 + 0x18) = 0x3b;
  *(undefined8 *)(puVar11 + 0x10) = 0x1d;
  uVar15 = *(undefined8 *)(puVar13 + lVar8);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  puVar16 = puVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar16);
  *(undefined8 *)(puVar11 + 0x20) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar8);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x28) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar8);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x30) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar8);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x38) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar7);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x40) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar7);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  puVar16 = puVar14;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar16);
  *(undefined8 *)(puVar11 + 0x48) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar7);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  puVar16 = puVar14;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar16);
  *(undefined8 *)(puVar11 + 0x50) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar7);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x58) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40284(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x60) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40284(0xc014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x68) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar2);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40290(0x4022000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar11 + 0x70) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar2);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40290(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar11 + 0x78) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar3);
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(puVar13 + lVar2);
  func_0x000107c3f764(uVar17);
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40284(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  *(undefined8 *)(puVar11 + 0x80) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar3);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(puVar13 + lVar2);
  func_0x000107c5ce8c(uVar17);
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40284(0x4014000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  *(undefined8 *)(puVar11 + 0x88) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar3);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40284(0xc028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x90) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar9);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40284(0xc000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x98) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar9);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40284(0x4000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0xa0) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar9);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40290(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar11 + 0xa8) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar9);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40290(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar11 + 0xb0) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar4);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40284(0xc000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0xb8) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar4);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40284(0x4000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0xc0) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar4);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40290(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar11 + 200) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar4);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x000107c40290(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  *(undefined8 *)(puVar11 + 0xd0) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar5);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  puVar16 = puVar14;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar16);
  *(undefined8 *)(puVar11 + 0xd8) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar5);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0xe0) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar5);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510(puVar13);
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0xe8) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar5);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0xf0) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar6);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0xf8) = uVar12;
  uVar15 = *(undefined8 *)(puVar13 + lVar6);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar16 = puVar13;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar14 = puVar16;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar12 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar14);
  *(undefined8 *)(puVar11 + 0x100) = uVar12;
  uVar12 = 0;
  FUN_101061e78(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar18 = puVar11;
  func_0x000107c5fc48(puVar11,uVar12);
  func_0x000107c61574(puVar11);
  func_0x000107c3d048(puVar10);
  func_0x000107c61170(puVar18);
  puVar11 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(puVar13);
  func_0x000107c3d6fc(puVar13);
  puVar10 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c56704(0x3fe0000000000000);
  func_0x000107c3d6fc(puVar13);
  func_0x000107c50474(puVar11);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  return puVar13;
}



/* Entry: 1010616b8; end: 1010616d7; -[_TtC19SpotlightManagement27SpotlightManagementGridCell initWithFrame:] */

void FUN_1010616b8(void)

{
  FUN_101060790();
  return;
}



/* Entry: 1010616d8; end: 1010616ff; -[_TtC19SpotlightManagement27SpotlightManagementGridCell initWithCoder:] */

void FUN_1010616d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101061ca4();
  return;
}



/* Entry: 101061700; end: 1010617af; -[_TtC19SpotlightManagement27SpotlightManagementGridCell didTapOnCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101061700(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_130 [96];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
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
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d571c8);
  uStack_68 = puVar1[5];
  uStack_70 = puVar1[4];
  uStack_58 = puVar1[7];
  uStack_60 = puVar1[6];
  uStack_48 = puVar1[9];
  uStack_50 = puVar1[8];
  uStack_38 = puVar1[0xb];
  uStack_40 = puVar1[10];
  lVar2 = puVar1[1];
  uStack_d0 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  if (lVar2 != 0) {
    uStack_98 = 0x20;
    lStack_c8 = lVar2;
    uStack_90 = uStack_d0;
    lStack_88 = lVar2;
    func_0x000107c61174();
    func_0x000101061bb0(&uStack_90,auStack_130);
    func_0x000107c61434(lVar2);
    FUN_10104d498(&uStack_d0);
    func_0x000107c6142c(lVar2);
    func_0x000107c61170(param_1);
    func_0x000101061c34(&uStack_90,0x112d56ec8,&UNK_10d91da40);
  }
  return;
}



/* Entry: 1010617b0; end: 1010618fb; -[_TtC19SpotlightManagement27SpotlightManagementGridCell handleLongPressWithGesture:] */

/* WARNING: Possible PIC construction at 0x000101061888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010618d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010618b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010618dc) */
/* WARNING: Removing unreachable block (ram,0x00010106188c) */
/* WARNING: Removing unreachable block (ram,0x0001010618e4) */
/* WARNING: Removing unreachable block (ram,0x0001010618b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010617b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_140 [96];
  undefined8 uStack_e0;
  long lStack_d8;
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
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_48;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar3 = param_3;
  func_0x000107c5bcc0();
  if (lVar3 == 1) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112d571c8);
    lVar3 = puVar1[1];
    uStack_e0 = *puVar1;
    uVar2 = puVar1[3];
    uStack_d0 = puVar1[2];
    uStack_98 = puVar1[9];
    uStack_a0 = puVar1[8];
    uStack_88 = puVar1[0xb];
    uStack_90 = puVar1[10];
    uVar4 = puVar1[5];
    uStack_c0 = puVar1[4];
    uStack_a8 = puVar1[7];
    uStack_b0 = puVar1[6];
    lStack_d8 = lVar3;
    uStack_c8 = uVar2;
    uStack_b8 = uVar4;
    if (lVar3 != 0) {
      uStack_48 = 0x30;
      uStack_80 = uStack_e0;
      lStack_78 = lVar3;
      uStack_70 = uStack_d0;
      uStack_68 = uVar2;
      uStack_60 = uStack_c0;
      uStack_58 = uVar4;
      func_0x000101061bb0(&uStack_e0,auStack_140);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(lVar3);
      func_0x000107c61434(uVar2);
      FUN_10104d498(&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010618fc; end: 101061a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010618fc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_170 [96];
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xfffffffffffffef0,PTR_s_prepareForReuse_112620008);
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d571c0);
  *(undefined8 *)(unaff_x20 + _DAT_112d571c0) = uVar2;
  func_0x000107c61574(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d571c8);
  uStack_d8 = puVar1[5];
  uStack_e0 = puVar1[4];
  uStack_c8 = puVar1[7];
  uStack_d0 = puVar1[6];
  uStack_b8 = puVar1[9];
  uStack_c0 = puVar1[8];
  uStack_a8 = puVar1[0xb];
  uStack_b0 = puVar1[10];
  uStack_f8 = puVar1[1];
  uStack_100 = *puVar1;
  uStack_e8 = puVar1[3];
  uStack_f0 = puVar1[2];
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  uStack_a0 = uStack_100;
  uStack_98 = uStack_f8;
  uStack_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = uStack_d0;
  uStack_68 = uStack_c8;
  uStack_60 = uStack_c0;
  uStack_58 = uStack_b8;
  uStack_50 = uStack_b0;
  uStack_48 = uStack_a8;
  func_0x000101061bb0(&uStack_100,auStack_170);
  func_0x000101061c34(&uStack_a0,0x112d56ec8,&UNK_10d91da40);
  FUN_10105f904(&uStack_100);
  func_0x000101061c34(&uStack_100,0x112d56ec8,&UNK_10d91da40);
  return;
}



/* Entry: 101061a08; end: 101061a2f; -[_TtC19SpotlightManagement27SpotlightManagementGridCell prepareForReuse] */

void FUN_101061a08(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010618fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101061a30; end: 101061a63;  */

void FUN_101061a30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101061a64; end: 101061b53; -[_TtC19SpotlightManagement27SpotlightManagementGridCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101061a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101061aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101061ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101061ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101061ac8) */
/* WARNING: Removing unreachable block (ram,0x000101061aa8) */
/* WARNING: Removing unreachable block (ram,0x000101061a88) */
/* WARNING: Removing unreachable block (ram,0x000101061ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101061a64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d57170));
  return;
}



/* Entry: 101061b54; end: 101061b73;  */

void FUN_101061b54(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab140);
  return;
}



/* Entry: 101061b74; end: 101061c73;  */

undefined8 FUN_101061b74(undefined8 param_1,undefined8 param_2)

{
  FUN_1010581b8(param_2,param_1);
  return param_2;
}



/* Entry: 101061c74; end: 101061ca3;  */

void FUN_101061c74(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_a8 [24];
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
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c61428(lVar1 + 0x10,auStack_a8,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
      uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
      uStack_58 = *(undefined8 *)(unaff_x20 + 0x50);
      uStack_60 = *(undefined8 *)(unaff_x20 + 0x48);
      uStack_48 = *(undefined8 *)(unaff_x20 + 0x60);
      uStack_50 = *(undefined8 *)(unaff_x20 + 0x58);
      uStack_38 = *(undefined8 *)(unaff_x20 + 0x70);
      uStack_40 = *(undefined8 *)(unaff_x20 + 0x68);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x18);
      uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_80 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x00010006c00c(param_1,param_2);
      FUN_101060170(param_1,param_2,&uStack_90);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 101061ca4; end: 101061e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101061ca4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar2 = _DAT_112d57170;
  FUN_10105f098();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112d57178;
  func_0x00010105f19c();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112d57180;
  func_0x00010105f2b8();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112d57188;
  func_0x00010105f424();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112d57190;
  func_0x00010105f548();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112d57198;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c550d8(puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d571a0;
  FUN_10105f618();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112d571a8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d571b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d571b8) = 0;
  lVar2 = _DAT_112d571c0;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d571c8);
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = _DAT_112d571d0;
  func_0x0001010606bc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SpotlightManagement/SpotlightManagementGridCell.swift",0x35,2,0x14c,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101061e1c);
  (*pcVar3)();
}



/* Entry: 101061e78; end: 101061eb7;  */

void FUN_101061e78(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101061eb8; end: 101061ebf;  */

void FUN_101061eb8(long param_1,long param_2)

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



/* Entry: 101061ec0; end: 10106207b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101061ec0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d57238;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d57238);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000101061f20();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10106207c; end: 101062167;  */

undefined * FUN_10106207c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5a050();
  func_0x000104e421d4();
  func_0x000107c61180();
  func_0x000107c59c6c(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4179c(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c550d8(puVar1,param_2,1);
  func_0x000107c61170(puVar1);
  func_0x000107c5381c(0x447a0000,puVar1,param_2,0);
  func_0x000107c5381c(0x447a0000,puVar1,param_2,1);
  return puVar1;
}



/* Entry: 101062168; end: 1010622c7;  */

undefined1  [16] FUN_101062168(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x000107c453e4();
  func_0x000107c58cd0();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x000107c469ac(0,0,0,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar2);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar2);
  func_0x000107c61174(puVar2);
  func_0x000107c5928c();
  func_0x000107c59284(puVar2);
  func_0x000107c53824(0,0,0x4020000000000000,0,puVar2);
  func_0x000107c526d4(puVar2);
  func_0x000107c526d0(puVar2);
  func_0x000107c58cd8(puVar2);
  func_0x000107c61170(puVar2);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef21e50);
  func_0x000107c520f4(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 1010622c8; end: 101062393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010622c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112d57250;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d57250);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d57248);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar4 = lVar3;
    FUN_101061ec0();
    lVar2 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c40280(lVar3,param_2,lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar4;
    func_0x000107c61174(lVar4);
    func_0x000107c61170(uVar5);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar4;
}



/* Entry: 101062394; end: 1010628bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101062394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff70;
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d57238) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57240) = 0;
  plVar1 = (long *)(unaff_x20 + _DAT_112d57248);
  FUN_101062168();
  *plVar1 = lVar3;
  plVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d57250) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d57258) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff70,
                      PTR_s_initWithFrame__1125e2948);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5af88(puVar5);
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar5);
  FUN_101061ec0();
  func_0x000107c3d89c(puVar4);
  func_0x000107c61170(puVar5);
  lVar2 = _DAT_112d57248;
  puVar6 = puVar4;
  func_0x000107c3d89c(puVar4);
  func_0x00010106201c();
  func_0x000107c3d89c(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c5a050(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 0x13;
  *(undefined8 *)(puVar7 + 0x10) = 9;
  lVar3 = _DAT_112d57238;
  uVar8 = *(undefined8 *)(puVar4 + _DAT_112d57238);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c515ac(puVar4);
  func_0x000107c61180();
  puVar9 = puVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar10 = uVar8;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  *(undefined8 *)(puVar7 + 0x20) = uVar10;
  uVar8 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c515ac(puVar4);
  func_0x000107c61180();
  puVar9 = puVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar10 = uVar8;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  *(undefined8 *)(puVar7 + 0x28) = uVar10;
  uVar8 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c5cbe4(puVar4);
  func_0x000107c61180();
  uVar10 = uVar8;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x30) = uVar10;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c515ac(puVar4);
  func_0x000107c61180();
  puVar9 = puVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar10 = uVar8;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  *(undefined8 *)(puVar7 + 0x38) = uVar10;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c515ac();
  func_0x000107c61180();
  puVar9 = puVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  uVar10 = uVar8;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170();
  *(undefined8 *)(puVar7 + 0x40) = uVar10;
  FUN_1010622c8();
  *(undefined1 **)(puVar7 + 0x48) = puVar9;
  uVar8 = *(undefined8 *)(puVar4 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  uVar10 = uVar8;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x50) = uVar10;
  puVar6 = puVar4;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar3 = _DAT_112d57240;
  uVar10 = *(undefined8 *)(puVar4 + _DAT_112d57240);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar9 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  *(undefined1 **)(puVar7 + 0x58) = puVar9;
  puVar9 = puVar4;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar10 = *(undefined8 *)(puVar4 + lVar3);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar6 = puVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  *(undefined1 **)(puVar7 + 0x60) = puVar6;
  uVar10 = 0;
  func_0x000100847984();
  puVar11 = puVar7;
  func_0x000107c5fc48(puVar7,uVar10);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar11);
  return puVar4;
}



/* Entry: 1010628bc; end: 1010628db; -[_TtC19SpotlightManagement27SpotlightManagementGridView initWithFrame:] */

void FUN_1010628bc(void)

{
  FUN_101062394();
  return;
}



/* Entry: 1010628dc; end: 101062903; -[_TtC19SpotlightManagement27SpotlightManagementGridView initWithCoder:] */

void FUN_1010628dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1010629bc();
  return;
}



/* Entry: 101062904; end: 101062937;  */

void FUN_101062904(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101062938; end: 10106299b; -[_TtC19SpotlightManagement27SpotlightManagementGridView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101062954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101062978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101062958) */
/* WARNING: Removing unreachable block (ram,0x00010106297c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101062938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d57238));
  return;
}



/* Entry: 10106299c; end: 1010629bb;  */

void FUN_10106299c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ab258);
  return;
}



/* Entry: 1010629bc; end: 101062a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010629bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d57238) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57240) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d57248);
  FUN_101062168();
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d57250) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d57258) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SpotlightManagement/SpotlightManagementGridView.swift",0x35,2,0x6f,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101062a4c);
  (*pcVar2)();
}



/* Entry: 101062a4c; end: 101062be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101062a4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_60 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar2 + -8);
  lVar1 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_101062be8();
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x0001020e9c30(lVar6,&uStack_60);
  func_0x000107c61170(lVar1);
  lVar1 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101065314(lVar6,0x112d54580,&UNK_10d91b480);
    uVar3 = 0;
  }
  else {
    lVar1 = lVar5;
    (**(code **)(lVar7 + 0x20))(lVar5,lVar6,lVar2);
    func_0x000101062d7c();
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112d57248);
    func_0x000107c61174(uVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c5efd4();
    uVar3 = uVar4;
    func_0x000107c3f730(uVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar1);
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
  }
  return uVar3;
}



/* Entry: 101062be8; end: 101062df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101062be8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d572a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d572a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000101062c4c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 101062df4; end: 101063033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101062df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
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
  long lStack_b8;
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
  
  uVar1 = 0;
  FUN_101061b54();
  uVar6 = 0x112d57328;
  uStack_c0 = uVar1;
  func_0x0001000285a8(0x112d57328,&UNK_10d91df80);
  puVar2 = &uStack_c0;
  func_0x000107c5fb20(puVar2,uVar6);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000107c5efd4();
  func_0x000107c417e0();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  uStack_c0 = param_3;
  lStack_b8 = param_4;
  (**(code **)(**(long **)(unaff_x20 + _DAT_112d57298) + 0xa8))(&uStack_120,&uStack_c0);
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  lStack_b8 = lStack_118;
  uStack_c0 = uStack_120;
  uStack_a8 = uStack_108;
  uStack_b0 = lStack_110;
  if (lStack_118 != 0) {
    lVar3 = param_1;
    func_0x000107c61480(param_1,uVar1);
    if (lVar3 == 0) {
      func_0x000101065314(&uStack_c0,0x112d56ec8,&UNK_10d91da40);
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d57288);
      uVar1 = *(undefined8 *)(lVar3 + _DAT_112d571b8);
      *(undefined8 *)(lVar3 + _DAT_112d571b8) = uVar6;
      lVar4 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c615f0(uVar6);
      func_0x000107c615e8(uVar1);
      lVar5 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(undefined8 *)(lVar5 + 0x20) = uStack_120;
      *(long *)(lVar5 + 0x28) = lStack_118;
      lStack_110 = lVar3;
      func_0x000107c61434(lStack_118);
      uVar6 = 0x112d56d60;
      func_0x0001000285a8(0x112d56d60,&UNK_10d91d7c0);
      uVar1 = uVar6;
      FUN_101065264();
      func_0x000102101068(lVar5,FUN_10106525c,&uStack_120,uVar6,uVar1);
      func_0x000101065314(&uStack_c0,0x112d56ec8,&UNK_10d91da40);
      func_0x000107c61170(lVar4);
      func_0x000107c61588(lVar5);
      func_0x000107c61408((undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x10),
                          PTR___sSSN_11034da80);
    }
  }
  return param_1;
}



/* Entry: 101063034; end: 1010632a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101063034(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = _DAT_112d57290;
  func_0x000107c30a40();
  func_0x000107c61180();
  *(long *)(unaff_x20 + lVar2) = lVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d572a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d572a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d572b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d572c0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d572c8);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = _DAT_112d572d0;
  uVar3 = 0x112d56ea8;
  func_0x0001000285a8(0x112d56ea8,&UNK_10d91dd10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d572d8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d572e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d57288) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d57298) = param_2;
  func_0x0001020ebfc4(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(param_2);
  lVar4 = 0;
  func_0x0001020ebc40();
  *(long *)(unaff_x20 + _DAT_112d572b0) = lVar4;
  lVar2 = _DAT_112e58668;
  func_0x000107c61428(lVar4 + _DAT_112e58668,auStack_68,1,0);
  *(undefined8 *)(lVar4 + lVar2) = 0x3ff199999999999a;
  puVar5 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5676c();
  func_0x000107c30a48(5);
  func_0x000107c5677c(puVar5);
  func_0x000107c61174();
  func_0x000107c53dec();
  func_0x000107c3d740(param_1);
  lVar2 = _DAT_112d57290;
  uVar3 = *(undefined8 *)(puVar5 + _DAT_112d57290);
  func_0x000107c615f0(uVar3);
  func_0x000107c53224();
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c54b74(0x3ff0000000000000,*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c5a048(puVar5);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 1010632a4; end: 1010633db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010632a4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112d57290;
  func_0x000107c30a40();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d572a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d572a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d572b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d572c0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d572c8);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = _DAT_112d572d0;
  uVar4 = 0x112d56ea8;
  func_0x0001000285a8(0x112d56ea8,&UNK_10d91dd10);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  lVar2 = _DAT_112d572d8;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d572e0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SpotlightManagement/SpotlightManagementGridViewController.swift",0x3f,2,0x62,
                      0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010633dc);
  (*pcVar3)();
}



/* Entry: 1010633dc; end: 1010633ef; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController init] */

void FUN_1010633dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1010632a4();
  func_0x000107c61174(param_3);
  FUN_101064e30();
  return;
}



/* Entry: 1010633f0; end: 101063417; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController initWithCoder:] */

void FUN_1010633f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101064e30();
  return;
}



/* Entry: 101063418; end: 1010635d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101063418(void)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d572d8);
  *(undefined8 *)(unaff_x20 + _DAT_112d572d8) = uVar1;
  func_0x000107c61574(uVar5);
  lVar8 = unaff_x20;
  func_0x000107c4a714();
  if ((int)lVar8 != 0) {
    lVar8 = unaff_x20 + _DAT_112d572c8;
    func_0x000107c61428(lVar8,auStack_68,0,0);
    lVar6 = *(long *)(lVar8 + 0x18);
    if (lVar6 != 0) {
      func_0x0001000a8868(lVar8,lVar6);
      lVar8 = *(long *)(lVar6 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
      (**(code **)(lVar8 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      uVar5 = 0;
      FUN_10105df1c(0);
      FUN_101055c90();
      (**(code **)(lVar8 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6);
      uVar1 = 0x112d57338;
      func_0x0001000285a8(0x112d57338,&UNK_10d91df88);
      pcVar2 = FUN_1010641dc;
      func_0x0001000bfde0(FUN_1010641dc,0,uVar1);
      func_0x000107c61574(uVar5);
      plVar7 = *(long **)(unaff_x20 + _DAT_112d57298);
      pcVar3 = pcVar2;
      (**(code **)(*plVar7 + 0x138))(pcVar2);
      FUN_101062be8();
      pcVar4 = pcVar3;
      (**(code **)(*plVar7 + 0x130))();
      func_0x0001020ec458();
      func_0x000107c61574(pcVar2);
      func_0x000107c61170(pcVar3);
      func_0x000107c61574(pcVar4);
    }
  }
  return;
}



/* Entry: 1010635d8; end: 10106369b; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_1010635d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  puVar3 = puVar2;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c30a30(param_1);
  func_0x000107c517f4(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c5a9c4(puVar2);
  func_0x000107c61180();
  func_0x000107c517ec();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10106369c; end: 10106369f; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController preferredStatusBarStyle] */

undefined8 FUN_10106369c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 1010636a0; end: 10106379b;  */

/* WARNING: Possible PIC construction at 0x0001010636cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010636d0) */

void FUN_1010636a0(undefined8 param_1)

{
  func_0x000101062d7c();
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10106379c; end: 1010637c3; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController loadView] */

void FUN_10106379c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010636a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010637c4; end: 10106388f;  */

void FUN_1010637c4(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  puVar2 = puVar1;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c30a30();
  func_0x000107c517f4(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a9c4(puVar1);
  func_0x000107c61180();
  func_0x000107c517ec();
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101063890; end: 1010638bf; -[_TtC19SpotlightManagement37SpotlightManagementGridViewController viewWillAppear:] */

void FUN_101063890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1010637c4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010638c0; end: 101063f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010638c0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c614f0();
  plVar9 = (long *)&stack0xffffffffffffff90;
  func_0x000107c61154(plVar9,PTR_s_viewDidLoad_112684cd8);
  func_0x0001020ebb74();
  puVar4 = &UNK_11037b3f0;
  puVar1 = puVar4;
  func_0x000107c613fc(&UNK_11037b3f0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uVar2 = 0x1010652bc;
  puVar6 = puVar1;
  (**(code **)(*plVar9 + 0x60))(0x1010652bc);
  func_0x000107c61574(plVar9);
  func_0x000107c61574(puVar1);
  func_0x000107c614f0(uVar2);
  lStack_d0 = _DAT_112d572d8;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d572d8);
  pcVar14 = *(code **)(puVar6 + 0x10);
  func_0x000107c6157c(uVar13);
  (*pcVar14)();
  func_0x000107c615e8(uVar2);
  func_0x000107c61574(uVar13);
  func_0x000101062d7c();
  uVar2 = uVar13;
  FUN_101061ec0();
  func_0x000107c61170(uVar13);
  uVar13 = uVar2;
  func_0x000107c40f48(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c53fcc(uVar13);
  func_0x000107c61170(uVar13);
  lVar11 = _DAT_112d572e0;
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d572e0) + _DAT_112d57248);
  uVar2 = 0;
  FUN_101061b54();
  func_0x000107c614e8();
  uStack_c8 = uVar2;
  func_0x000107c61174(uVar13);
  uVar2 = 0x112d57328;
  func_0x0001000285a8(0x112d57328,&UNK_10d91df80);
  puVar3 = &uStack_c8;
  func_0x000107c5fb20(puVar3,uVar2);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c4fbd8(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar3);
  func_0x000101062be8();
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + lVar11) + _DAT_112d57248);
  func_0x000107c613fc(&UNK_11037b3f0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x0001020e8354();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar4);
  lVar8 = unaff_x20 + _DAT_112d572c8;
  func_0x000107c61428(lVar8,auStack_88,0,0);
  lVar12 = *(long *)(lVar8 + 0x18);
  if (lVar12 != 0) {
    func_0x0001000a8868(lVar8,lVar12);
    lVar15 = *(long *)(lVar12 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
    lVar7 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar15 + 0x10))(lVar7);
    plVar5 = (long *)0x0;
    FUN_10105df1c();
    plVar9 = plVar5;
    FUN_101055c90();
    (**(code **)(lVar15 + 8))(lVar7,lVar12);
    puVar4 = &UNK_11037b3f0;
    func_0x000107c613fc(&UNK_11037b3f0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar2 = 0x10106535c;
    puVar1 = puVar4;
    (**(code **)(*plVar9 + 0x60))(0x10106535c);
    func_0x000107c61574(plVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(uVar2);
    uVar13 = *(undefined8 *)(unaff_x20 + lStack_d0);
    pcVar14 = *(code **)(puVar1 + 0x10);
    func_0x000107c6157c(uVar13);
    (*pcVar14)();
    func_0x000107c615e8(uVar2);
    func_0x000107c61574(uVar13);
    lVar12 = *(long *)(lVar8 + 0x18);
    if (lVar12 != 0) {
      func_0x0001000a8868(lVar8,lVar12);
      lVar15 = *(long *)(lVar12 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
      lVar7 = (long)&lStack_d0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar15 + 0x10))(lVar7);
      (*(code *)(undefined *)0x101055d04)(plVar5,&PTR_DAT_11037aaf0);
      (**(code **)(lVar15 + 8))(lVar7,lVar12);
      puVar4 = &UNK_11037b3f0;
      func_0x000107c613fc(&UNK_11037b3f0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      pcVar14 = FUN_101065354;
      puVar1 = puVar4;
      (**(code **)(*plVar5 + 0x60))(FUN_101065354);
      func_0x000107c61574(plVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c614f0(pcVar14);
      uVar2 = *(undefined8 *)(unaff_x20 + lStack_d0);
      pcVar10 = *(code **)(puVar1 + 0x10);
      func_0x000107c6157c(uVar2);
      (*pcVar10)();
      func_0x000107c615e8(pcVar14);
      func_0x000107c61574(uVar2);
    }
  }
  func_0x000107c53fcc(*(undefined8 *)(*(long *)(unaff_x20 + lVar11) + _DAT_112d57248));
  uStack_c8 = 1;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xa0;
  func_0x0001002a64a8(&uStack_c8);
  FUN_1010652c4(lVar8,&uStack_c8);
  lVar11 = lStack_b0;
  func_0x000101065314(&uStack_c8,0x112d56fc8,&UNK_10d91dae0);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar8 + 0x18), lVar11 != 0)) {
    func_0x0001000a8868(lVar8,lVar11);
    lVar12 = *(long *)(lVar11 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
    lVar8 = (long)&lStack_d0 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar12 + 0x10))(lVar8);
    uVar13 = 0;
    FUN_10105df1c(0);
    FUN_101055c90();
    (**(code **)(lVar12 + 8))(lVar8,lVar11);
    uVar2 = 0x112d57338;
    func_0x0001000285a8(0x112d57338,&UNK_10d91df88);
    pcVar14 = FUN_1010641dc;
    func_0x0001000bfde0(FUN_1010641dc,0,uVar2);
    func_0x000107c61574(uVar13);
    plVar9 = *(long **)(unaff_x20 + _DAT_112d57298);
    (**(code **)(*plVar9 + 0x138))(pcVar14);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d572a0);
    pcVar10 = *(code **)(*plVar9 + 0x130);
    func_0x000107c61174(uVar13);
    uVar2 = uVar13;
    (*pcVar10)();
    func_0x0001020ec458();
    func_0x000107c61574(pcVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 101063f18; end: 101063fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101063f18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar3 = param_1[1];
  uVar2 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d572d0);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_40 = 0x70;
    uStack_78 = uVar2;
    uStack_70 = uVar3;
    uStack_68 = uVar4;
    uStack_60 = uVar5;
    func_0x0001002a64a8(&uStack_78);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101063fa8; end: 10106403b;  */

undefined8 FUN_101063fa8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    FUN_101062df4(param_1,param_2,uVar1,uVar2);
    func_0x000107c61170(param_4);
  }
  return param_1;
}


